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
static const char *ng0 = "/home/co-eda/Desktop/Verilog/P7/P7_L0_2022/DATA_EXTEND.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {16, 0};
static int ng4[] = {2, 0};
static int ng5[] = {24, 0};
static int ng6[] = {3, 0};



static void NetDecl_28_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 3000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 1);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 3928);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1U;
    t18 = t17;
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 0U);
    t25 = (t0 + 3816);
    *((int *)t25) = 1;

LAB1:    return;
}

static void NetDecl_29_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 3248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 3992);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 3U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 1U);
    t16 = (t0 + 3832);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Always_31_2(char *t0)
{
    char t9[8];
    char t29[8];
    char t30[8];
    char t40[8];
    char t44[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t10;
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
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t41;
    char *t42;
    char *t43;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    int t53;

LAB0:    t1 = (t0 + 3496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 3848);
    *((int *)t2) = 1;
    t3 = (t0 + 3528);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(33, ng0);
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB15;

LAB9:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t3);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB19;

LAB16:    if (t19 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t9) = 1;

LAB19:    t23 = (t9 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t29, 0, 8);
    t2 = (t29 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 0);
    *((unsigned int *)t29) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t14 & 65535U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 65535U);
    t7 = ((char*)((ng3)));
    t8 = (t0 + 1208U);
    t22 = *((char **)t8);
    memset(t40, 0, 8);
    t8 = (t40 + 4);
    t23 = (t22 + 4);
    t16 = *((unsigned int *)t22);
    t17 = (t16 >> 15);
    t18 = (t17 & 1);
    *((unsigned int *)t40) = t18;
    t19 = *((unsigned int *)t23);
    t20 = (t19 >> 15);
    t21 = (t20 & 1);
    *((unsigned int *)t8) = t21;
    xsi_vlog_mul_concat(t30, 16, 1, t7, 1U, t40, 1);
    xsi_vlogtype_concat(t9, 32, 32, 2U, t30, 16, t29, 16);
    t31 = (t0 + 2088);
    xsi_vlogvar_assign_value(t31, t9, 0, 0, 32);

LAB22:    goto LAB15;

LAB11:    xsi_set_current_line(36, ng0);

LAB23:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);

LAB24:    t3 = ((char*)((ng1)));
    t53 = xsi_vlog_unsigned_case_compare(t4, 2, t3, 32);
    if (t53 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 32);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 32);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 32);
    if (t6 == 1)
        goto LAB31;

LAB32:
LAB33:    goto LAB15;

LAB18:    t22 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB19;

LAB20:    xsi_set_current_line(34, ng0);
    t31 = (t0 + 1208U);
    t32 = *((char **)t31);
    memset(t30, 0, 8);
    t31 = (t30 + 4);
    t33 = (t32 + 4);
    t34 = *((unsigned int *)t32);
    t35 = (t34 >> 16);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 16);
    *((unsigned int *)t31) = t37;
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 65535U);
    t39 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t39 & 65535U);
    t41 = ((char*)((ng3)));
    t42 = (t0 + 1208U);
    t43 = *((char **)t42);
    memset(t44, 0, 8);
    t42 = (t44 + 4);
    t45 = (t43 + 4);
    t46 = *((unsigned int *)t43);
    t47 = (t46 >> 31);
    t48 = (t47 & 1);
    *((unsigned int *)t44) = t48;
    t49 = *((unsigned int *)t45);
    t50 = (t49 >> 31);
    t51 = (t50 & 1);
    *((unsigned int *)t42) = t51;
    xsi_vlog_mul_concat(t40, 16, 1, t41, 1U, t44, 1);
    xsi_vlogtype_concat(t29, 32, 32, 2U, t40, 16, t30, 16);
    t52 = (t0 + 2088);
    xsi_vlogvar_assign_value(t52, t29, 0, 0, 32);
    goto LAB22;

LAB25:    xsi_set_current_line(38, ng0);
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    memset(t29, 0, 8);
    t7 = (t29 + 4);
    t22 = (t8 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (t10 >> 0);
    *((unsigned int *)t29) = t11;
    t12 = *((unsigned int *)t22);
    t13 = (t12 >> 0);
    *((unsigned int *)t7) = t13;
    t14 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t14 & 255U);
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 255U);
    t23 = ((char*)((ng5)));
    t31 = (t0 + 1208U);
    t32 = *((char **)t31);
    memset(t40, 0, 8);
    t31 = (t40 + 4);
    t33 = (t32 + 4);
    t16 = *((unsigned int *)t32);
    t17 = (t16 >> 7);
    t18 = (t17 & 1);
    *((unsigned int *)t40) = t18;
    t19 = *((unsigned int *)t33);
    t20 = (t19 >> 7);
    t21 = (t20 & 1);
    *((unsigned int *)t31) = t21;
    xsi_vlog_mul_concat(t30, 24, 1, t23, 1U, t40, 1);
    xsi_vlogtype_concat(t9, 32, 32, 2U, t30, 24, t29, 8);
    t41 = (t0 + 2088);
    xsi_vlogvar_assign_value(t41, t9, 0, 0, 32);
    goto LAB33;

LAB27:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t29, 0, 8);
    t3 = (t29 + 4);
    t8 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 8);
    *((unsigned int *)t29) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 8);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t14 & 255U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 255U);
    t22 = ((char*)((ng5)));
    t23 = (t0 + 1208U);
    t31 = *((char **)t23);
    memset(t40, 0, 8);
    t23 = (t40 + 4);
    t32 = (t31 + 4);
    t16 = *((unsigned int *)t31);
    t17 = (t16 >> 15);
    t18 = (t17 & 1);
    *((unsigned int *)t40) = t18;
    t19 = *((unsigned int *)t32);
    t20 = (t19 >> 15);
    t21 = (t20 & 1);
    *((unsigned int *)t23) = t21;
    xsi_vlog_mul_concat(t30, 24, 1, t22, 1U, t40, 1);
    xsi_vlogtype_concat(t9, 32, 32, 2U, t30, 24, t29, 8);
    t33 = (t0 + 2088);
    xsi_vlogvar_assign_value(t33, t9, 0, 0, 32);
    goto LAB33;

LAB29:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t29, 0, 8);
    t3 = (t29 + 4);
    t8 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 16);
    *((unsigned int *)t29) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 16);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t14 & 255U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 255U);
    t22 = ((char*)((ng5)));
    t23 = (t0 + 1208U);
    t31 = *((char **)t23);
    memset(t40, 0, 8);
    t23 = (t40 + 4);
    t32 = (t31 + 4);
    t16 = *((unsigned int *)t31);
    t17 = (t16 >> 23);
    t18 = (t17 & 1);
    *((unsigned int *)t40) = t18;
    t19 = *((unsigned int *)t32);
    t20 = (t19 >> 23);
    t21 = (t20 & 1);
    *((unsigned int *)t23) = t21;
    xsi_vlog_mul_concat(t30, 24, 1, t22, 1U, t40, 1);
    xsi_vlogtype_concat(t9, 32, 32, 2U, t30, 24, t29, 8);
    t33 = (t0 + 2088);
    xsi_vlogvar_assign_value(t33, t9, 0, 0, 32);
    goto LAB33;

LAB31:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t29, 0, 8);
    t3 = (t29 + 4);
    t8 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 24);
    *((unsigned int *)t29) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 24);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t14 & 255U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 255U);
    t22 = ((char*)((ng5)));
    t23 = (t0 + 1208U);
    t31 = *((char **)t23);
    memset(t40, 0, 8);
    t23 = (t40 + 4);
    t32 = (t31 + 4);
    t16 = *((unsigned int *)t31);
    t17 = (t16 >> 31);
    t18 = (t17 & 1);
    *((unsigned int *)t40) = t18;
    t19 = *((unsigned int *)t32);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t23) = t21;
    xsi_vlog_mul_concat(t30, 24, 1, t22, 1U, t40, 1);
    xsi_vlogtype_concat(t9, 32, 32, 2U, t30, 24, t29, 8);
    t33 = (t0 + 2088);
    xsi_vlogvar_assign_value(t33, t9, 0, 0, 32);
    goto LAB33;

}


extern void work_m_18284912660454629381_1365239273_init()
{
	static char *pe[] = {(void *)NetDecl_28_0,(void *)NetDecl_29_1,(void *)Always_31_2};
	xsi_register_didat("work_m_18284912660454629381_1365239273", "isim/mips_txt_int_isim_beh.exe.sim/work/m_18284912660454629381_1365239273.didat");
	xsi_register_executes(pe);
}
