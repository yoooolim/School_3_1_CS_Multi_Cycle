/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Xilinx/Project2/SEU.v";
static unsigned int ng1[] = {1U, 0U};
static int ng2[] = {15, 0};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {65535U, 0U};
static int ng5[] = {31, 0};
static int ng6[] = {16, 0};
static unsigned int ng7[] = {0U, 0U};



static void Always_12_0(char *t0)
{
    char t6[8];
    char t15[8];
    char t37[8];
    char t48[8];
    char t49[8];
    char t50[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    unsigned int t57;
    int t58;
    char *t59;
    unsigned int t60;
    int t61;
    int t62;
    char *t63;
    unsigned int t64;
    int t65;
    int t66;
    unsigned int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    int t71;
    int t72;

LAB0:    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12, ng0);
    t2 = (t0 + 2688);
    *((int *)t2) = 1;
    t3 = (t0 + 2400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12, ng0);

LAB5:    xsi_set_current_line(13, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 15);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 15);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t16 = (t6 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB9;

LAB6:    if (t27 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t15) = 1;

LAB9:    t31 = (t15 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(17, ng0);

LAB18:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 65535U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 65535U);
    t5 = (t0 + 1448);
    t7 = (t0 + 1448);
    t14 = (t7 + 72U);
    t16 = *((char **)t14);
    t17 = ((char*)((ng2)));
    t30 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t15, t37, t48, ((int*)(t16)), 2, t17, 32, 1, t30, 32, 1);
    t31 = (t15 + 4);
    t18 = *((unsigned int *)t31);
    t58 = (!(t18));
    t38 = (t37 + 4);
    t19 = *((unsigned int *)t38);
    t61 = (!(t19));
    t62 = (t58 && t61);
    t39 = (t48 + 4);
    t20 = *((unsigned int *)t39);
    t65 = (!(t20));
    t66 = (t62 && t65);
    if (t66 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(19, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1448);
    t4 = (t0 + 1448);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t14 = ((char*)((ng5)));
    t16 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t6, t15, t37, ((int*)(t7)), 2, t14, 32, 1, t16, 32, 1);
    t17 = (t6 + 4);
    t8 = *((unsigned int *)t17);
    t58 = (!(t8));
    t30 = (t15 + 4);
    t9 = *((unsigned int *)t30);
    t61 = (!(t9));
    t62 = (t58 && t61);
    t31 = (t37 + 4);
    t10 = *((unsigned int *)t31);
    t65 = (!(t10));
    t66 = (t62 && t65);
    if (t66 == 1)
        goto LAB21;

LAB22:
LAB12:    goto LAB2;

LAB8:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(13, ng0);

LAB13:    xsi_set_current_line(14, ng0);
    t38 = (t0 + 1048U);
    t39 = *((char **)t38);
    memset(t37, 0, 8);
    t38 = (t37 + 4);
    t40 = (t39 + 4);
    t41 = *((unsigned int *)t39);
    t42 = (t41 >> 0);
    *((unsigned int *)t37) = t42;
    t43 = *((unsigned int *)t40);
    t44 = (t43 >> 0);
    *((unsigned int *)t38) = t44;
    t45 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t45 & 65535U);
    t46 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t46 & 65535U);
    t47 = (t0 + 1448);
    t51 = (t0 + 1448);
    t52 = (t51 + 72U);
    t53 = *((char **)t52);
    t54 = ((char*)((ng2)));
    t55 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t48, t49, t50, ((int*)(t53)), 2, t54, 32, 1, t55, 32, 1);
    t56 = (t48 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (!(t57));
    t59 = (t49 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (!(t60));
    t62 = (t58 && t61);
    t63 = (t50 + 4);
    t64 = *((unsigned int *)t63);
    t65 = (!(t64));
    t66 = (t62 && t65);
    if (t66 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(15, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1448);
    t4 = (t0 + 1448);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t14 = ((char*)((ng5)));
    t16 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t6, t15, t37, ((int*)(t7)), 2, t14, 32, 1, t16, 32, 1);
    t17 = (t6 + 4);
    t8 = *((unsigned int *)t17);
    t58 = (!(t8));
    t30 = (t15 + 4);
    t9 = *((unsigned int *)t30);
    t61 = (!(t9));
    t62 = (t58 && t61);
    t31 = (t37 + 4);
    t10 = *((unsigned int *)t31);
    t65 = (!(t10));
    t66 = (t62 && t65);
    if (t66 == 1)
        goto LAB16;

LAB17:    goto LAB12;

LAB14:    t67 = *((unsigned int *)t50);
    t68 = (t67 + 0);
    t69 = *((unsigned int *)t48);
    t70 = *((unsigned int *)t49);
    t71 = (t69 - t70);
    t72 = (t71 + 1);
    xsi_vlogvar_wait_assign_value(t47, t37, t68, *((unsigned int *)t49), t72, 0LL);
    goto LAB15;

LAB16:    t11 = *((unsigned int *)t37);
    t68 = (t11 + 0);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t15);
    t71 = (t12 - t13);
    t72 = (t71 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t68, *((unsigned int *)t15), t72, 0LL);
    goto LAB17;

LAB19:    t21 = *((unsigned int *)t48);
    t68 = (t21 + 0);
    t22 = *((unsigned int *)t15);
    t23 = *((unsigned int *)t37);
    t71 = (t22 - t23);
    t72 = (t71 + 1);
    xsi_vlogvar_wait_assign_value(t5, t6, t68, *((unsigned int *)t37), t72, 0LL);
    goto LAB20;

LAB21:    t11 = *((unsigned int *)t37);
    t68 = (t11 + 0);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t15);
    t71 = (t12 - t13);
    t72 = (t71 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t68, *((unsigned int *)t15), t72, 0LL);
    goto LAB22;

}


extern void work_m_00000000003619802383_4206047371_init()
{
	static char *pe[] = {(void *)Always_12_0};
	xsi_register_didat("work_m_00000000003619802383_4206047371", "isim/tb_top_isim_beh.exe.sim/work/m_00000000003619802383_4206047371.didat");
	xsi_register_executes(pe);
}
