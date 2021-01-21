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
static const char *ng0 = "C:/Xilinx/Project2/MainFSM.v";
static unsigned int ng1[] = {15U, 15U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {3U, 0U};
static int ng7[] = {2, 0};
static int ng8[] = {4, 0};
static int ng9[] = {8, 0};
static int ng10[] = {35, 0};
static int ng11[] = {43, 0};
static unsigned int ng12[] = {2U, 0U};



static void Cont_27_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 7200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 6120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8392);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 7);
    t18 = (t0 + 8264);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_28_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 7448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 6280);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8456);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 7);
    t18 = (t0 + 8280);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_30_2(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 7696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 8296);
    *((int *)t2) = 1;
    t3 = (t0 + 7728);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t5 = (t0 + 3160U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 6280);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 6120);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 0LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(32, ng0);
    t19 = (t0 + 472);
    t20 = *((char **)t19);
    t19 = (t0 + 6120);
    xsi_vlogvar_wait_assign_value(t19, t20, 0, 0, 8, 0LL);
    goto LAB12;

}

static void Always_37_3(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 7944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 8312);
    *((int *)t2) = 1;
    t3 = (t0 + 7976);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 6280);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 6120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = (t0 + 472);
    t6 = *((char **)t5);
    t7 = xsi_vlog_unsigned_case_compare(t4, 8, t6, 32);
    if (t7 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 8, t3, 32);
    if (t7 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 744);
    t5 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 8, t5, 32);
    if (t7 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 880);
    t5 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 8, t5, 32);
    if (t7 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 1016);
    t5 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 8, t5, 32);
    if (t7 == 1)
        goto LAB15;

LAB16:    t2 = (t0 + 1152);
    t5 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 8, t5, 32);
    if (t7 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 1424);
    t5 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 8, t5, 32);
    if (t7 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 1560);
    t5 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 8, t5, 32);
    if (t7 == 1)
        goto LAB21;

LAB22:    t2 = (t0 + 1288);
    t5 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 8, t5, 32);
    if (t7 == 1)
        goto LAB23;

LAB24:    t2 = (t0 + 1696);
    t5 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 8, t5, 32);
    if (t7 == 1)
        goto LAB25;

LAB26:    t2 = (t0 + 1832);
    t5 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 8, t5, 32);
    if (t7 == 1)
        goto LAB27;

LAB28:    t2 = (t0 + 1968);
    t5 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 8, t5, 32);
    if (t7 == 1)
        goto LAB29;

LAB30:
LAB32:
LAB31:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 6120);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 6280);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 8, 0LL);

LAB33:    goto LAB2;

LAB7:    xsi_set_current_line(41, ng0);

LAB34:    xsi_set_current_line(41, ng0);
    t5 = ((char*)((ng2)));
    t8 = (t0 + 5000);
    xsi_vlogvar_wait_assign_value(t8, t5, 0, 0, 2, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5640);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5960);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t2 = (t0 + 6280);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    goto LAB33;

LAB9:    xsi_set_current_line(54, ng0);

LAB35:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 5480);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5640);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5960);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2680U);
    t3 = *((char **)t2);

LAB36:    t2 = ((char*)((ng2)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 32);
    if (t7 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng7)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 32);
    if (t7 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng8)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 32);
    if (t7 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng9)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 32);
    if (t7 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng10)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 32);
    if (t7 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng11)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 32);
    if (t7 == 1)
        goto LAB47;

LAB48:
LAB50:
LAB49:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1968);
    t5 = *((char **)t2);
    t2 = (t0 + 6280);
    xsi_vlogvar_wait_assign_value(t2, t5, 0, 0, 8, 0LL);

LAB51:    goto LAB33;

LAB11:    xsi_set_current_line(77, ng0);

LAB60:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng5)));
    t6 = (t0 + 5480);
    xsi_vlogvar_wait_assign_value(t6, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng12)));
    t5 = (t0 + 5640);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng4)));
    t5 = (t0 + 5960);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2680U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng10)));
    memset(t9, 0, 8);
    t6 = (t5 + 4);
    t8 = (t2 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t8);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB64;

LAB61:    if (t20 != 0)
        goto LAB63;

LAB62:    *((unsigned int *)t9) = 1;

LAB64:    t23 = (t9 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB65;

LAB66:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2680U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng11)));
    memset(t9, 0, 8);
    t6 = (t5 + 4);
    t8 = (t2 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t8);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB71;

LAB68:    if (t20 != 0)
        goto LAB70;

LAB69:    *((unsigned int *)t9) = 1;

LAB71:    t23 = (t9 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB72;

LAB73:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2680U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t9, 0, 8);
    t6 = (t5 + 4);
    t8 = (t2 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t8);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB78;

LAB75:    if (t20 != 0)
        goto LAB77;

LAB76:    *((unsigned int *)t9) = 1;

LAB78:    t23 = (t9 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB79;

LAB80:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1424);
    t5 = *((char **)t2);
    t2 = (t0 + 6280);
    xsi_vlogvar_wait_assign_value(t2, t5, 0, 0, 8, 0LL);

LAB81:
LAB74:
LAB67:    goto LAB33;

LAB13:    xsi_set_current_line(86, ng0);

LAB82:    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng5)));
    t6 = (t0 + 5000);
    xsi_vlogvar_wait_assign_value(t6, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 4200);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1016);
    t5 = *((char **)t2);
    t2 = (t0 + 6280);
    xsi_vlogvar_wait_assign_value(t2, t5, 0, 0, 8, 0LL);
    goto LAB33;

LAB15:    xsi_set_current_line(91, ng0);

LAB83:    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng4)));
    t6 = (t0 + 5800);
    xsi_vlogvar_wait_assign_value(t6, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 5160);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 4200);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 472);
    t5 = *((char **)t2);
    t2 = (t0 + 6280);
    xsi_vlogvar_wait_assign_value(t2, t5, 0, 0, 8, 0LL);
    goto LAB33;

LAB17:    xsi_set_current_line(98, ng0);

LAB84:    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng5)));
    t6 = (t0 + 5000);
    xsi_vlogvar_wait_assign_value(t6, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 4360);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 472);
    t5 = *((char **)t2);
    t2 = (t0 + 6280);
    xsi_vlogvar_wait_assign_value(t2, t5, 0, 0, 8, 0LL);
    goto LAB33;

LAB19:    xsi_set_current_line(103, ng0);

LAB85:    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng5)));
    t6 = (t0 + 5480);
    xsi_vlogvar_wait_assign_value(t6, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 5640);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng7)));
    t5 = (t0 + 5960);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 1560);
    t5 = *((char **)t2);
    t2 = (t0 + 6280);
    xsi_vlogvar_wait_assign_value(t2, t5, 0, 0, 8, 0LL);
    goto LAB33;

LAB21:    xsi_set_current_line(109, ng0);

LAB86:    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng3)));
    t6 = (t0 + 5800);
    xsi_vlogvar_wait_assign_value(t6, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 5160);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 472);
    t5 = *((char **)t2);
    t2 = (t0 + 6280);
    xsi_vlogvar_wait_assign_value(t2, t5, 0, 0, 8, 0LL);
    goto LAB33;

LAB23:    xsi_set_current_line(115, ng0);

LAB87:    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng4)));
    t6 = (t0 + 5800);
    xsi_vlogvar_wait_assign_value(t6, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 5160);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 472);
    t5 = *((char **)t2);
    t2 = (t0 + 6280);
    xsi_vlogvar_wait_assign_value(t2, t5, 0, 0, 8, 0LL);
    goto LAB33;

LAB25:    xsi_set_current_line(121, ng0);

LAB88:    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng5)));
    t6 = (t0 + 5480);
    xsi_vlogvar_wait_assign_value(t6, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 5640);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 5960);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 5320);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 472);
    t5 = *((char **)t2);
    t2 = (t0 + 6280);
    xsi_vlogvar_wait_assign_value(t2, t5, 0, 0, 8, 0LL);
    goto LAB33;

LAB27:    xsi_set_current_line(129, ng0);

LAB89:    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng7)));
    t6 = (t0 + 5320);
    xsi_vlogvar_wait_assign_value(t6, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 4520);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 472);
    t5 = *((char **)t2);
    t2 = (t0 + 6280);
    xsi_vlogvar_wait_assign_value(t2, t5, 0, 0, 8, 0LL);
    goto LAB33;

LAB29:    xsi_set_current_line(135, ng0);

LAB90:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 1968);
    t6 = *((char **)t2);
    t2 = (t0 + 6280);
    xsi_vlogvar_wait_assign_value(t2, t6, 0, 0, 8, 0LL);
    goto LAB33;

LAB37:    xsi_set_current_line(61, ng0);

LAB52:    xsi_set_current_line(62, ng0);
    t5 = (t0 + 2840U);
    t6 = *((char **)t5);
    t5 = ((char*)((ng4)));
    memset(t9, 0, 8);
    t8 = (t6 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB56;

LAB53:    if (t20 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t9) = 1;

LAB56:    t24 = (t9 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB57;

LAB58:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1968);
    t5 = *((char **)t2);
    t2 = (t0 + 6280);
    xsi_vlogvar_wait_assign_value(t2, t5, 0, 0, 8, 0LL);

LAB59:    goto LAB51;

LAB39:    xsi_set_current_line(67, ng0);
    t5 = (t0 + 1832);
    t6 = *((char **)t5);
    t5 = (t0 + 6280);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, 0, 8, 0LL);
    goto LAB51;

LAB41:    xsi_set_current_line(68, ng0);
    t5 = (t0 + 1696);
    t6 = *((char **)t5);
    t5 = (t0 + 6280);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, 0, 8, 0LL);
    goto LAB51;

LAB43:    xsi_set_current_line(69, ng0);
    t5 = (t0 + 744);
    t6 = *((char **)t5);
    t5 = (t0 + 6280);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, 0, 8, 0LL);
    goto LAB51;

LAB45:    xsi_set_current_line(71, ng0);
    t5 = (t0 + 744);
    t6 = *((char **)t5);
    t5 = (t0 + 6280);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, 0, 8, 0LL);
    goto LAB51;

LAB47:    xsi_set_current_line(72, ng0);
    t5 = (t0 + 744);
    t6 = *((char **)t5);
    t5 = (t0 + 6280);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, 0, 8, 0LL);
    goto LAB51;

LAB55:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB56;

LAB57:    xsi_set_current_line(63, ng0);
    t30 = (t0 + 472);
    t31 = *((char **)t30);
    t30 = (t0 + 6280);
    xsi_vlogvar_wait_assign_value(t30, t31, 0, 0, 8, 0LL);
    goto LAB59;

LAB63:    t10 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB64;

LAB65:    xsi_set_current_line(81, ng0);
    t24 = (t0 + 880);
    t30 = *((char **)t24);
    t24 = (t0 + 6280);
    xsi_vlogvar_wait_assign_value(t24, t30, 0, 0, 8, 0LL);
    goto LAB67;

LAB70:    t10 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB71;

LAB72:    xsi_set_current_line(82, ng0);
    t24 = (t0 + 1152);
    t30 = *((char **)t24);
    t24 = (t0 + 6280);
    xsi_vlogvar_wait_assign_value(t24, t30, 0, 0, 8, 0LL);
    goto LAB74;

LAB77:    t10 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB78;

LAB79:    xsi_set_current_line(83, ng0);
    t24 = (t0 + 1288);
    t30 = *((char **)t24);
    t24 = (t0 + 6280);
    xsi_vlogvar_wait_assign_value(t24, t30, 0, 0, 8, 0LL);
    goto LAB81;

}


extern void work_m_00000000000387519389_2179244300_init()
{
	static char *pe[] = {(void *)Cont_27_0,(void *)Cont_28_1,(void *)Always_30_2,(void *)Always_37_3};
	xsi_register_didat("work_m_00000000000387519389_2179244300", "isim/tb_top_isim_beh.exe.sim/work/m_00000000000387519389_2179244300.didat");
	xsi_register_executes(pe);
}
