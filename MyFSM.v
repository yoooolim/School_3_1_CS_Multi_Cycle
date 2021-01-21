`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Park yoolim
// 
// Create Date:    14:41:17 04/11/2019 
// Design Name: 	MyFSM.v
// Module Name:    MyFSM 
// Project Name: 	 MyFSM
// Target Devices: TopFSM , MultiCycleCPU
// Tool versions: Quartus
// Description: MultiCycleCPU about andi, slti, lwai, bge instruction
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module MyFSM(i_clk, i_rst_n, i_op, i_funct, i_zero, PCWriteCond, PCWrite, IorD, MemRead, MemWrite, MemtoReg, IRWrite, PCSource, 
           ALUOp, ALUSrcB, ALUSrcA, RegWrite, RegDst, cur_state, nxt_state);
	
	input [5:0] i_op, i_funct;
	input i_clk, i_rst_n, i_zero;
	output reg IorD, MemtoReg, IRWrite, MemRead, MemWrite, PCWrite, PCWriteCond, RegWrite;
	output reg[1:0]  PCSource, ALUSrcA, ALUSrcB, RegDst;
	output reg[2:0] ALUOp;
	output [7:0] cur_state, nxt_state;
	reg [7:0] state, next;
	
	/////PARAMETER STATE/////
	parameter Fetch = 0;
	parameter Decode = 1;
	parameter UnDefined = 255;
	
	parameter Branch2 = 13;
	
	parameter I_type_EXEC = 14;
	parameter I_type_WB = 15;
	parameter I_type_DIV4_EXEC = 26;
	
	parameter Memory_Adr = 16;
	parameter Memory_Read =17;
	parameter Memory_WB =18;
	parameter Rt_WB = 19;
	
	parameter Memory_Adr2 = 20;
	parameter Memory_Read2 = 21;
	parameter Memory_WB2 = 22;
	
	parameter JUMP2 = 23;
	
	parameter R_type_EXEC = 24;
	parameter R_type_WB = 25;
	
	parameter Return_Addr = 27;
	parameter ReAdd_Addr = 28;
	parameter Store_Addr = 29;
	parameter Jump = 30; 
	
	//////PARAMETER COMMAND/////
	parameter BGE = 6'b0000001;
	parameter ANDI = 6'b001100;
	parameter LWAI = 6'b100100;
	parameter SLTI = 6'b001010;
	parameter JAL = 6'b000011;
	parameter DIV4 = 6'b011011;
	parameter SLLV_F = 6'b000100;
	parameter XOR_F = 6'b100110;
	parameter BLTZ = 6'b000001;
	parameter LW = 6'b100011;
	parameter RT = 6'b000000;
	
	///////STATE ASSIGN////////
	assign cur_state = state;
	assign nxt_state = next;
	
	always@(posedge i_clk or negedge i_rst_n)begin //sequencial logic
		if(!i_rst_n)
			state <= Fetch;
		else 
			state <= next;
	end
	
	always@(state, i_op, i_zero)begin  // state & output logic
		next <= 4'bx;  
		case(state)
			UnDefined : begin
			    next <= UnDefined;
			end
				 
			Fetch: begin IorD <= 0; 
							 ALUSrcA <= 0;
							 ALUSrcB <= 2'b01;
							 ALUOp <= 2'b00;
							 PCSource <= 0;
							 IRWrite <= 1;
							 PCWrite <= 1;
							 MemRead <= 1;
							 MemWrite <= 0;
							 PCWriteCond <=0;
							 RegWrite <=0;
							 next <= Decode;
			end
			
			Decode: begin ALUSrcA <= 0;
							  ALUSrcB <= 2'b11;
							  ALUOp <= 2'b00;
							  MemRead <= 0;
							  IRWrite <= 0;
							  PCWrite <= 0;
							  case(i_op)
							  BGE : next <= Branch2; 		//bge
							  ANDI : next <= I_type_EXEC; //andi
							  LWAI : next <= Memory_Adr; 	//lwai
							  SLTI : next <= I_type_EXEC; //slti
							  JAL : next <= Return_Addr;	//jal
							  LW : next <= Memory_Adr2;	//lw
							  DIV4 : next <= I_type_EXEC;	//div4
							  RT : next <= R_type_EXEC;	//sllv, xor
							  BLTZ : next <= Branch2;		//bltz
							  default next <= UnDefined;	//undefined
							  endcase
			end
			
			//BEG instruction
			Branch2: begin 
					ALUSrcA <= 2'b01; // $rs
					ALUSrcB <= 2'b00; // $rt
					ALUOp <= 3'b100; ///slti
					if(i_zero == 1)begin
						PCSource <= 2'b01;
						PCWriteCond <= 1;
					end
					next <= Fetch;
			end
			
			//ANDI or SLTI instruction
			I_type_EXEC: begin	
					ALUSrcA <= 2'b01; //read data1
					ALUSrcB <= 2'b10; //imm 16
					
					if(i_op == ANDI) begin
						ALUOp <= 3'b011; //andi
						next <= I_type_WB;
					end
					
					if(i_op == SLTI) begin
						ALUOp <= 3'b100; //slti
						next <= I_type_WB;
					end
					
					if(i_op == DIV4) begin
						ALUOp <= 3'b111;	//div2
						next <= I_type_DIV4_EXEC;
					end
			end
			
			//I-type instruction "DIV4" ( <<1 ) 1 more 
			I_type_DIV4_EXEC: begin
					ALUSrcA <= 2'b01; //read data1
					ALUSrcB <= 2'b10; //imm 16
					ALUOp <= 3'b111;	//div2
					next <= I_type_WB;
					end					
			
			//I-type instruction wirte back state
			I_type_WB: begin
					RegDst <= 2'b00; //rt
					RegWrite <= 1'b1; //register write enable
					MemtoReg <= 1'b0;
					next <= Fetch;
			end
			
			//LWAI instruction
			Memory_Adr: begin
					ALUSrcA <= 2'b01; //rs
					ALUSrcB <= 2'b00; //rt
					ALUOp <= 3'b000; //add
					next <= Memory_Read;
			end
			
			Memory_Read: begin
					IorD <= 1;
					MemRead <= 1; //memory read
					next <= Memory_WB;
			end
			
			Memory_WB: begin
				RegDst <= 2'b01; //rd
				MemtoReg <= 1;
				RegWrite <= 1; //register write enable
				MemRead <= 0;
				ALUSrcA <= 2'b11; //+4
				next <= Rt_WB;
			end
			
			Rt_WB: begin
				RegDst <= 2'b00; //rt
				MemtoReg <= 0;
				RegWrite <= 1; //register write enable
				MemRead <= 0;
				next <= Fetch;
			end
			//LW instruction
			Memory_Adr2: begin
					ALUSrcA <= 2'b01; //rs
					ALUSrcB <= 2'b10; //immediate
					ALUOp <= 3'b000; //add
					next <= Memory_Read2;
			end
			
			Memory_Read2: begin
					IorD <= 1;
					MemRead <= 1; //memory read
					next <= Memory_WB2;
			end
			
			Memory_WB2: begin
				RegDst <= 2'b00; //rt
				MemtoReg <= 1;	
				RegWrite <= 1; //register write enable
				MemRead <= 0;
				ALUSrcA <= 2'b11; //+4
				next <= Fetch;
			end
			
			//JAL instruction
			Return_Addr: begin
					PCWrite<=1; // PCwrite
					ALUSrcA <= 0; // PC sel
					ALUSrcB <= 2'b01; // +4 sel
					ALUOp <= 3'b001; // SUB
					next <= ReAdd_Addr; // readd PC->PC+4 state
					end
					
				//readd PC->PC+4 state
			ReAdd_Addr: begin
					ALUSrcA <= 0; // PC sel
					ALUSrcB <= 2'b01; // +4 sel
					ALUOp <= 3'b000; // ADD
					next <= Store_Addr; // next is store PC+4
					end
					
				// storing PC+4 to return address state
			Store_Addr: begin
					MemtoReg<=1'b0; // ALUout sel
					RegDst<=2'b10; // return address sel
					RegWrite<=1'b1; // write in RF
					PCSource<=2'b10; // Jump address sel
					next <= Jump; // jump state
					end
					
				// jump state
			Jump: begin
					RegWrite<=1'b0; // off write enable
					PCWrite<=1'b1; // Jump PC address set
					PCSource<=2'b10;	// Jump address sel
					next <= Fetch;
					end
			
			//R-type instruction EXEC state
			R_type_EXEC: 	begin
					ALUSrcA <= 2'b01; //read data1
					ALUSrcB <= 2'b00; //Rt
					if(i_funct == SLLV_F) begin
						ALUOp <= 3'b101;
					end
					
					if(i_funct == XOR_F) begin
						ALUOp <= 3'b110;
					end
			end
								
			//R-type instruction wirte back state
			R_type_WB: begin
					RegDst <= 2'b01; //rd
					RegWrite <= 1'b1; //register write enable
					MemtoReg <= 1'b0;
					next <= Fetch;
			end
			
			default: next <= state;
		endcase
	end
endmodule
