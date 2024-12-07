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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/co-eda/Desktop/Verilog/P7/P7_L0_2022/MULTDIV.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0, 0, 0};
static int ng3[] = {0, 0};
static int ng4[] = {5, 0};
static int ng5[] = {2, 0};
static int ng6[] = {10, 0};
static int ng7[] = {3, 0};
static int ng8[] = {4, 0};
static int ng9[] = {31, 0};
static int ng10[] = {1, 0, 0, 0};
static unsigned int ng11[] = {0U, 0U};



static int sp_opposite(char *t1, char *t2)
{
    char t3[8];
    char t18[8];
    int t0;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t19;

LAB0:    t0 = 1;
    xsi_set_current_line(141, ng0);

LAB2:    xsi_set_current_line(146, ng0);
    t4 = (t1 + 4120);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t3 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    *((unsigned int *)t3) = t10;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB4;

LAB3:    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 4294967295U);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 4294967295U);
    t17 = ((char*)((ng1)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 32, t3, 32, t17, 32);
    t19 = (t1 + 3960);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 32);
    t0 = 0;

LAB1:    return t0;
LAB4:    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t8);
    *((unsigned int *)t3) = (t11 | t12);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t13 | t14);
    goto LAB3;

}

static void Initial_35_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(35, ng0);

LAB2:    xsi_set_current_line(36, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3000);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 64, 0LL);
    xsi_set_current_line(37, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(39, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(40, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(41, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 3160);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 4, 0LL);

LAB1:    return;
}

static void Always_43_1(char *t0)
{
    char t8[8];
    char t35[8];
    char t36[8];
    char t47[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
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
    int t32;
    char *t33;
    char *t34;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    char *t48;

LAB0:    t1 = (t0 + 5280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 5848);
    *((int *)t2) = 1;
    t3 = (t0 + 5312);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 3160);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(70, ng0);

LAB35:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1800U);
    t3 = *((char **)t2);

LAB36:    t2 = ((char*)((ng3)));
    t32 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 32);
    if (t32 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng5)));
    t32 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 32);
    if (t32 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng1)));
    t32 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 32);
    if (t32 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng7)));
    t32 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 32);
    if (t32 == 1)
        goto LAB43;

LAB44:
LAB46:
LAB45:    xsi_set_current_line(88, ng0);

LAB52:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 3160);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t7 = (t5 + 4);
    t9 = (t6 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t9);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB56;

LAB53:    if (t20 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t8) = 1;

LAB56:    t23 = (t8 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB57;

LAB58:    xsi_set_current_line(95, ng0);

LAB61:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 3160);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng3)));
    memset(t36, 0, 8);
    t7 = (t5 + 4);
    t9 = (t6 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t9);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB65;

LAB62:    if (t20 != 0)
        goto LAB64;

LAB63:    *((unsigned int *)t36) = 1;

LAB65:    memset(t35, 0, 8);
    t23 = (t36 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (~(t25));
    t27 = *((unsigned int *)t36);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t23) != 0)
        goto LAB68;

LAB69:    t30 = (t35 + 4);
    t37 = *((unsigned int *)t35);
    t38 = *((unsigned int *)t30);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB70;

LAB71:    t40 = *((unsigned int *)t35);
    t41 = (~(t40));
    t42 = *((unsigned int *)t30);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t30) > 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t35) > 0)
        goto LAB76;

LAB77:    memcpy(t8, t47, 8);

LAB78:    t48 = (t0 + 3160);
    xsi_vlogvar_wait_assign_value(t48, t8, 0, 0, 4, 0LL);

LAB59:
LAB47:
LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(44, ng0);

LAB13:    xsi_set_current_line(45, ng0);
    t30 = (t0 + 1800U);
    t31 = *((char **)t30);

LAB14:    t30 = ((char*)((ng3)));
    t32 = xsi_vlog_unsigned_case_compare(t31, 4, t30, 32);
    if (t32 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng5)));
    t32 = xsi_vlog_unsigned_case_compare(t31, 4, t2, 32);
    if (t32 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng1)));
    t32 = xsi_vlog_unsigned_case_compare(t31, 4, t2, 32);
    if (t32 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng7)));
    t32 = xsi_vlog_unsigned_case_compare(t31, 4, t2, 32);
    if (t32 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng8)));
    t32 = xsi_vlog_unsigned_case_compare(t31, 4, t2, 32);
    if (t32 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng4)));
    t32 = xsi_vlog_unsigned_case_compare(t31, 4, t2, 32);
    if (t32 == 1)
        goto LAB25;

LAB26:
LAB28:
LAB27:    xsi_set_current_line(64, ng0);

LAB34:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3160);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB29:    goto LAB12;

LAB15:    xsi_set_current_line(46, ng0);

LAB30:    xsi_set_current_line(47, ng0);
    t33 = ((char*)((ng1)));
    t34 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t34, t33, 0, 0, 1, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3160);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB29;

LAB17:    xsi_set_current_line(50, ng0);

LAB31:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3160);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB29;

LAB19:    xsi_set_current_line(54, ng0);

LAB32:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3160);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB29;

LAB21:    xsi_set_current_line(58, ng0);

LAB33:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3160);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB29;

LAB23:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 1960U);
    t4 = *((char **)t3);
    t3 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 32, 0LL);
    goto LAB29;

LAB25:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 1960U);
    t4 = *((char **)t3);
    t3 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 32, 0LL);
    goto LAB29;

LAB37:    xsi_set_current_line(72, ng0);

LAB48:    xsi_set_current_line(73, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 3160);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    goto LAB47;

LAB39:    xsi_set_current_line(76, ng0);

LAB49:    xsi_set_current_line(77, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 3160);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    goto LAB47;

LAB41:    xsi_set_current_line(80, ng0);

LAB50:    xsi_set_current_line(81, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 3160);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    goto LAB47;

LAB43:    xsi_set_current_line(84, ng0);

LAB51:    xsi_set_current_line(85, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 3160);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    goto LAB47;

LAB55:    t10 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB56;

LAB57:    xsi_set_current_line(89, ng0);

LAB60:    xsi_set_current_line(90, ng0);
    t24 = ((char*)((ng3)));
    t30 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t30, t24, 0, 0, 1, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3160);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 3320);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 3480);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 32, 0LL);
    goto LAB59;

LAB64:    t10 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB65;

LAB66:    *((unsigned int *)t35) = 1;
    goto LAB69;

LAB68:    t24 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB69;

LAB70:    t33 = ((char*)((ng3)));
    goto LAB71;

LAB72:    t34 = (t0 + 3160);
    t44 = (t34 + 56U);
    t45 = *((char **)t44);
    t46 = ((char*)((ng1)));
    memset(t47, 0, 8);
    xsi_vlog_unsigned_minus(t47, 32, t45, 4, t46, 32);
    goto LAB73;

LAB74:    xsi_vlog_unsigned_bit_combine(t8, 32, t33, 32, t47, 32);
    goto LAB78;

LAB76:    memcpy(t8, t33, 8);
    goto LAB78;

}

static void Always_102_2(char *t0)
{
    char t7[8];
    char t8[8];
    char t11[8];
    char t16[8];
    char t60[8];
    char t70[16];
    char t83[16];
    char t84[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
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
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    int t56;
    char *t57;
    char *t58;
    char *t59;
    char *t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;

LAB0:    t1 = (t0 + 5528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 5864);
    *((int *)t2) = 1;
    t3 = (t0 + 5560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(102, ng0);

LAB5:    xsi_set_current_line(103, ng0);
    t4 = (t0 + 1800U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(131, ng0);

LAB79:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t9 = (t0 + 3320);
    xsi_vlogvar_assign_value(t9, t4, 0, 0, 32);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 3480);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t9 = (t0 + 3480);
    xsi_vlogvar_assign_value(t9, t4, 0, 0, 32);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(104, ng0);

LAB18:    xsi_set_current_line(105, ng0);
    t9 = (t0 + 1960U);
    t10 = *((char **)t9);
    t9 = (t0 + 1920U);
    t12 = (t9 + 72U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng9)));
    xsi_vlog_generic_get_index_select_value(t11, 32, t10, t13, 2, t14, 32, 1);
    t15 = ((char*)((ng1)));
    memset(t16, 0, 8);
    t17 = (t11 + 4);
    t18 = (t15 + 4);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t17);
    t23 = *((unsigned int *)t18);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t26 = *((unsigned int *)t17);
    t27 = *((unsigned int *)t18);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB22;

LAB19:    if (t28 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t16) = 1;

LAB22:    memset(t8, 0, 8);
    t32 = (t16 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t16);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t32) != 0)
        goto LAB25;

LAB26:    t39 = (t8 + 4);
    t40 = *((unsigned int *)t8);
    t41 = *((unsigned int *)t39);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB27;

LAB28:    t64 = *((unsigned int *)t8);
    t65 = (~(t64));
    t66 = *((unsigned int *)t39);
    t67 = (t65 || t66);
    if (t67 > 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t39) > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t8) > 0)
        goto LAB33;

LAB34:    memcpy(t7, t69, 8);

LAB35:    t68 = (t0 + 3640);
    xsi_vlogvar_assign_value(t68, t7, 0, 0, 32);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 2080U);
    t4 = (t2 + 72U);
    t9 = *((char **)t4);
    t10 = ((char*)((ng9)));
    xsi_vlog_generic_get_index_select_value(t11, 32, t3, t9, 2, t10, 32, 1);
    t12 = ((char*)((ng1)));
    memset(t16, 0, 8);
    t13 = (t11 + 4);
    t14 = (t12 + 4);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t13);
    t23 = *((unsigned int *)t14);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t26 = *((unsigned int *)t13);
    t27 = *((unsigned int *)t14);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB42;

LAB39:    if (t28 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t16) = 1;

LAB42:    memset(t8, 0, 8);
    t17 = (t16 + 4);
    t33 = *((unsigned int *)t17);
    t34 = (~(t33));
    t35 = *((unsigned int *)t16);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t17) != 0)
        goto LAB45;

LAB46:    t31 = (t8 + 4);
    t40 = *((unsigned int *)t8);
    t41 = *((unsigned int *)t31);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB47;

LAB48:    t64 = *((unsigned int *)t8);
    t65 = (~(t64));
    t66 = *((unsigned int *)t31);
    t67 = (t65 || t66);
    if (t67 > 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t31) > 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t8) > 0)
        goto LAB53;

LAB54:    memcpy(t7, t62, 8);

LAB55:    t61 = (t0 + 3800);
    xsi_vlogvar_assign_value(t61, t7, 0, 0, 32);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 3640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t9 = (t0 + 3800);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    xsi_vlog_unsigned_multiply(t70, 64, t4, 32, t12, 32);
    t13 = (t0 + 3000);
    xsi_vlogvar_assign_value(t13, t70, 0, 0, 64);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 1960U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t4 = (t3 + 4);
    t19 = *((unsigned int *)t3);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t8) = t21;
    t22 = *((unsigned int *)t4);
    t23 = (t22 >> 31);
    t24 = (t23 & 1);
    *((unsigned int *)t2) = t24;
    t9 = (t0 + 2120U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    t9 = (t11 + 4);
    t12 = (t10 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (t25 >> 31);
    t27 = (t26 & 1);
    *((unsigned int *)t11) = t27;
    t28 = *((unsigned int *)t12);
    t29 = (t28 >> 31);
    t30 = (t29 & 1);
    *((unsigned int *)t9) = t30;
    memset(t16, 0, 8);
    t13 = (t8 + 4);
    t14 = (t11 + 4);
    t33 = *((unsigned int *)t8);
    t34 = *((unsigned int *)t11);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t13);
    t37 = *((unsigned int *)t14);
    t40 = (t36 ^ t37);
    t41 = (t35 | t40);
    t42 = *((unsigned int *)t13);
    t64 = *((unsigned int *)t14);
    t65 = (t42 | t64);
    t66 = (~(t65));
    t67 = (t41 & t66);
    if (t67 != 0)
        goto LAB62;

LAB59:    if (t65 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t16) = 1;

LAB62:    memset(t7, 0, 8);
    t17 = (t16 + 4);
    t71 = *((unsigned int *)t17);
    t72 = (~(t71));
    t73 = *((unsigned int *)t16);
    t74 = (t73 & t72);
    t75 = (t74 & 1U);
    if (t75 != 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t17) != 0)
        goto LAB65;

LAB66:    t31 = (t7 + 4);
    t76 = *((unsigned int *)t7);
    t77 = *((unsigned int *)t31);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB67;

LAB68:    t79 = *((unsigned int *)t7);
    t80 = (~(t79));
    t81 = *((unsigned int *)t31);
    t82 = (t80 || t81);
    if (t82 > 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t31) > 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t7) > 0)
        goto LAB73;

LAB74:    memcpy(t70, t84, 16);

LAB75:    t47 = (t0 + 3000);
    xsi_vlogvar_assign_value(t47, t70, 0, 0, 64);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 3000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t9 = (t7 + 4);
    t10 = (t4 + 8);
    t12 = (t4 + 12);
    t19 = *((unsigned int *)t10);
    t20 = (t19 >> 0);
    *((unsigned int *)t7) = t20;
    t21 = *((unsigned int *)t12);
    t22 = (t21 >> 0);
    *((unsigned int *)t9) = t22;
    t23 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t23 & 4294967295U);
    t24 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t24 & 4294967295U);
    t13 = (t0 + 3320);
    xsi_vlogvar_assign_value(t13, t7, 0, 0, 32);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 3000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t9 = (t7 + 4);
    t10 = (t4 + 4);
    t19 = *((unsigned int *)t4);
    t20 = (t19 >> 0);
    *((unsigned int *)t7) = t20;
    t21 = *((unsigned int *)t10);
    t22 = (t21 >> 0);
    *((unsigned int *)t9) = t22;
    t23 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t23 & 4294967295U);
    t24 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t24 & 4294967295U);
    t12 = (t0 + 3480);
    xsi_vlogvar_assign_value(t12, t7, 0, 0, 32);
    goto LAB17;

LAB9:    xsi_set_current_line(112, ng0);

LAB76:    xsi_set_current_line(113, ng0);
    t3 = (t0 + 1960U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng11)));
    xsi_vlogtype_concat(t70, 64, 33, 2U, t3, 1, t4, 32);
    t9 = (t0 + 2120U);
    t10 = *((char **)t9);
    t9 = ((char*)((ng11)));
    xsi_vlogtype_concat(t83, 64, 33, 2U, t9, 1, t10, 32);
    xsi_vlog_unsigned_multiply(t84, 64, t70, 64, t83, 64);
    t12 = (t0 + 3000);
    xsi_vlogvar_assign_value(t12, t84, 0, 0, 64);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 3000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t9 = (t7 + 4);
    t10 = (t4 + 8);
    t12 = (t4 + 12);
    t19 = *((unsigned int *)t10);
    t20 = (t19 >> 0);
    *((unsigned int *)t7) = t20;
    t21 = *((unsigned int *)t12);
    t22 = (t21 >> 0);
    *((unsigned int *)t9) = t22;
    t23 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t23 & 4294967295U);
    t24 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t24 & 4294967295U);
    t13 = (t0 + 3320);
    xsi_vlogvar_assign_value(t13, t7, 0, 0, 32);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 3000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t9 = (t7 + 4);
    t10 = (t4 + 4);
    t19 = *((unsigned int *)t4);
    t20 = (t19 >> 0);
    *((unsigned int *)t7) = t20;
    t21 = *((unsigned int *)t10);
    t22 = (t21 >> 0);
    *((unsigned int *)t9) = t22;
    t23 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t23 & 4294967295U);
    t24 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t24 & 4294967295U);
    t12 = (t0 + 3480);
    xsi_vlogvar_assign_value(t12, t7, 0, 0, 32);
    goto LAB17;

LAB11:    xsi_set_current_line(117, ng0);

LAB77:    xsi_set_current_line(124, ng0);
    t3 = (t0 + 1960U);
    t4 = *((char **)t3);
    t3 = (t0 + 2120U);
    t9 = *((char **)t3);
    memset(t11, 0, 8);
    xsi_vlog_signed_mod(t11, 32, t4, 32, t9, 32);
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t11, 0, 0, 32);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 1960U);
    t3 = *((char **)t2);
    t2 = (t0 + 2120U);
    t4 = *((char **)t2);
    memset(t11, 0, 8);
    xsi_vlog_signed_divide(t11, 32, t3, 32, t4, 32);
    t2 = (t0 + 3480);
    xsi_vlogvar_assign_value(t2, t11, 0, 0, 32);
    goto LAB17;

LAB13:    xsi_set_current_line(127, ng0);

LAB78:    xsi_set_current_line(128, ng0);
    t3 = (t0 + 1960U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng11)));
    xsi_vlogtype_concat(t70, 33, 33, 2U, t3, 1, t4, 32);
    t9 = (t0 + 2120U);
    t10 = *((char **)t9);
    t9 = ((char*)((ng11)));
    xsi_vlogtype_concat(t83, 33, 33, 2U, t9, 1, t10, 32);
    xsi_vlog_unsigned_mod(t84, 33, t70, 33, t83, 33);
    t12 = (t0 + 3320);
    xsi_vlogvar_assign_value(t12, t84, 0, 0, 32);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 1960U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng11)));
    xsi_vlogtype_concat(t70, 33, 33, 2U, t2, 1, t3, 32);
    t4 = (t0 + 2120U);
    t9 = *((char **)t4);
    t4 = ((char*)((ng11)));
    xsi_vlogtype_concat(t83, 33, 33, 2U, t4, 1, t9, 32);
    xsi_vlog_unsigned_divide(t84, 33, t70, 33, t83, 33);
    t10 = (t0 + 3480);
    xsi_vlogvar_assign_value(t10, t84, 0, 0, 32);
    goto LAB17;

LAB21:    t31 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB22;

LAB23:    *((unsigned int *)t8) = 1;
    goto LAB26;

LAB25:    t38 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB26;

LAB27:    t43 = (t0 + 1960U);
    t44 = *((char **)t43);
    t43 = (t0 + 5336);
    t45 = (t0 + 848);
    t46 = xsi_create_subprogram_invocation(t43, 0, t0, t45, 0, 0);
    t47 = (t0 + 4120);
    xsi_vlogvar_assign_value(t47, t44, 0, 0, 32);

LAB36:    t48 = (t0 + 5432);
    t49 = *((char **)t48);
    t50 = (t49 + 80U);
    t51 = *((char **)t50);
    t52 = (t51 + 272U);
    t53 = *((char **)t52);
    t54 = (t53 + 0U);
    t55 = *((char **)t54);
    t56 = ((int  (*)(char *, char *))t55)(t0, t49);
    if (t56 != 0)
        goto LAB38;

LAB37:    t49 = (t0 + 5432);
    t57 = *((char **)t49);
    t49 = (t0 + 3960);
    t58 = (t49 + 56U);
    t59 = *((char **)t58);
    memcpy(t60, t59, 8);
    t61 = (t0 + 848);
    t62 = (t0 + 5336);
    t63 = 0;
    xsi_delete_subprogram_invocation(t61, t57, t0, t62, t63);
    goto LAB28;

LAB29:    t68 = (t0 + 1960U);
    t69 = *((char **)t68);
    goto LAB30;

LAB31:    xsi_vlog_unsigned_bit_combine(t7, 32, t60, 32, t69, 32);
    goto LAB35;

LAB33:    memcpy(t7, t60, 8);
    goto LAB35;

LAB38:    t48 = (t0 + 5528U);
    *((char **)t48) = &&LAB36;
    goto LAB1;

LAB41:    t15 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB42;

LAB43:    *((unsigned int *)t8) = 1;
    goto LAB46;

LAB45:    t18 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB46;

LAB47:    t32 = (t0 + 2120U);
    t38 = *((char **)t32);
    t32 = (t0 + 5336);
    t39 = (t0 + 848);
    t43 = xsi_create_subprogram_invocation(t32, 0, t0, t39, 0, 0);
    t44 = (t0 + 4120);
    xsi_vlogvar_assign_value(t44, t38, 0, 0, 32);

LAB56:    t45 = (t0 + 5432);
    t46 = *((char **)t45);
    t47 = (t46 + 80U);
    t48 = *((char **)t47);
    t49 = (t48 + 272U);
    t50 = *((char **)t49);
    t51 = (t50 + 0U);
    t52 = *((char **)t51);
    t6 = ((int  (*)(char *, char *))t52)(t0, t46);
    if (t6 != 0)
        goto LAB58;

LAB57:    t46 = (t0 + 5432);
    t53 = *((char **)t46);
    t46 = (t0 + 3960);
    t54 = (t46 + 56U);
    t55 = *((char **)t54);
    memcpy(t60, t55, 8);
    t57 = (t0 + 848);
    t58 = (t0 + 5336);
    t59 = 0;
    xsi_delete_subprogram_invocation(t57, t53, t0, t58, t59);
    goto LAB48;

LAB49:    t61 = (t0 + 2120U);
    t62 = *((char **)t61);
    goto LAB50;

LAB51:    xsi_vlog_unsigned_bit_combine(t7, 32, t60, 32, t62, 32);
    goto LAB55;

LAB53:    memcpy(t7, t60, 8);
    goto LAB55;

LAB58:    t45 = (t0 + 5528U);
    *((char **)t45) = &&LAB56;
    goto LAB1;

LAB61:    t15 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB62;

LAB63:    *((unsigned int *)t7) = 1;
    goto LAB66;

LAB65:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB66;

LAB67:    t32 = (t0 + 3000);
    t38 = (t32 + 56U);
    t39 = *((char **)t38);
    goto LAB68;

LAB69:    t43 = (t0 + 3000);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    xsi_vlogtype_unsigned_bit_neg(t83, 64, t45, 64);
    t46 = ((char*)((ng10)));
    xsi_vlog_unsigned_add(t84, 64, t83, 64, t46, 32);
    goto LAB70;

LAB71:    xsi_vlog_unsigned_bit_combine(t70, 64, t39, 64, t84, 64);
    goto LAB75;

LAB73:    memcpy(t70, t39, 16);
    goto LAB75;

}


extern void work_m_11261758990520958031_2977217375_init()
{
	static char *pe[] = {(void *)Initial_35_0,(void *)Always_43_1,(void *)Always_102_2};
	static char *se[] = {(void *)sp_opposite};
	xsi_register_didat("work_m_11261758990520958031_2977217375", "isim/TB_mips_noneInt_isim_beh.exe.sim/work/m_11261758990520958031_2977217375.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
