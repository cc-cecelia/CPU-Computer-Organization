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
static const char *ng0 = "/home/co-eda/Desktop/Verilog/P7/P7_L0_2022/E_ExcDetect.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {12, 0};



static void Always_33_0(char *t0)
{
    char t14[16];
    char t15[8];
    char t17[16];
    char t21[8];
    char t29[16];
    char t32[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    unsigned int t16;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;

LAB0:    t1 = (t0 + 3480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 3800);
    *((int *)t2) = 1;
    t3 = (t0 + 3512);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(38, ng0);

LAB10:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);

LAB11:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 32);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 32);
    if (t13 == 1)
        goto LAB14;

LAB15:
LAB17:
LAB16:    xsi_set_current_line(64, ng0);

LAB39:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);

LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(34, ng0);

LAB9:    xsi_set_current_line(35, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(40, ng0);

LAB19:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 1368U);
    t11 = *((char **)t4);
    memset(t15, 0, 8);
    t4 = (t15 + 4);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 31);
    t8 = (t7 & 1);
    *((unsigned int *)t15) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 31);
    t16 = (t10 & 1);
    *((unsigned int *)t4) = t16;
    xsi_vlogtype_concat(t14, 33, 33, 2U, t15, 1, t5, 32);
    t18 = (t0 + 1528U);
    t19 = *((char **)t18);
    t18 = (t0 + 1528U);
    t20 = *((char **)t18);
    memset(t21, 0, 8);
    t18 = (t21 + 4);
    t22 = (t20 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 31);
    t25 = (t24 & 1);
    *((unsigned int *)t21) = t25;
    t26 = *((unsigned int *)t22);
    t27 = (t26 >> 31);
    t28 = (t27 & 1);
    *((unsigned int *)t18) = t28;
    xsi_vlogtype_concat(t17, 33, 33, 2U, t21, 1, t19, 32);
    xsi_vlog_unsigned_add(t29, 33, t14, 33, t17, 33);
    t30 = (t0 + 2568);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 33);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2568);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    t11 = (t15 + 4);
    t12 = (t5 + 8);
    t18 = (t5 + 12);
    t6 = *((unsigned int *)t12);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t15) = t8;
    t9 = *((unsigned int *)t18);
    t10 = (t9 >> 0);
    t16 = (t10 & 1);
    *((unsigned int *)t11) = t16;
    t19 = (t0 + 2568);
    t20 = (t19 + 56U);
    t22 = *((char **)t20);
    memset(t21, 0, 8);
    t30 = (t21 + 4);
    t31 = (t22 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (t23 >> 31);
    t25 = (t24 & 1);
    *((unsigned int *)t21) = t25;
    t26 = *((unsigned int *)t31);
    t27 = (t26 >> 31);
    t28 = (t27 & 1);
    *((unsigned int *)t30) = t28;
    memset(t32, 0, 8);
    t33 = (t15 + 4);
    t34 = (t21 + 4);
    t35 = *((unsigned int *)t15);
    t36 = *((unsigned int *)t21);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t33);
    t39 = *((unsigned int *)t34);
    t40 = (t38 ^ t39);
    t41 = (t37 | t40);
    t42 = *((unsigned int *)t33);
    t43 = *((unsigned int *)t34);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB21;

LAB20:    if (t44 != 0)
        goto LAB22;

LAB23:    t48 = (t32 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t32);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(47, ng0);

LAB28:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);

LAB26:    goto LAB18;

LAB14:    xsi_set_current_line(52, ng0);

LAB29:    xsi_set_current_line(53, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 1368U);
    t11 = *((char **)t4);
    memset(t15, 0, 8);
    t4 = (t15 + 4);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 31);
    t8 = (t7 & 1);
    *((unsigned int *)t15) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 31);
    t16 = (t10 & 1);
    *((unsigned int *)t4) = t16;
    xsi_vlogtype_concat(t14, 33, 33, 2U, t15, 1, t5, 32);
    t18 = (t0 + 1528U);
    t19 = *((char **)t18);
    t18 = (t0 + 1528U);
    t20 = *((char **)t18);
    memset(t21, 0, 8);
    t18 = (t21 + 4);
    t22 = (t20 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 31);
    t25 = (t24 & 1);
    *((unsigned int *)t21) = t25;
    t26 = *((unsigned int *)t22);
    t27 = (t26 >> 31);
    t28 = (t27 & 1);
    *((unsigned int *)t18) = t28;
    xsi_vlogtype_concat(t17, 33, 33, 2U, t21, 1, t19, 32);
    xsi_vlog_unsigned_minus(t29, 33, t14, 33, t17, 33);
    t30 = (t0 + 2568);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 33);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2568);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    t11 = (t15 + 4);
    t12 = (t5 + 8);
    t18 = (t5 + 12);
    t6 = *((unsigned int *)t12);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t15) = t8;
    t9 = *((unsigned int *)t18);
    t10 = (t9 >> 0);
    t16 = (t10 & 1);
    *((unsigned int *)t11) = t16;
    t19 = (t0 + 2568);
    t20 = (t19 + 56U);
    t22 = *((char **)t20);
    memset(t21, 0, 8);
    t30 = (t21 + 4);
    t31 = (t22 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (t23 >> 31);
    t25 = (t24 & 1);
    *((unsigned int *)t21) = t25;
    t26 = *((unsigned int *)t31);
    t27 = (t26 >> 31);
    t28 = (t27 & 1);
    *((unsigned int *)t30) = t28;
    memset(t32, 0, 8);
    t33 = (t15 + 4);
    t34 = (t21 + 4);
    t35 = *((unsigned int *)t15);
    t36 = *((unsigned int *)t21);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t33);
    t39 = *((unsigned int *)t34);
    t40 = (t38 ^ t39);
    t41 = (t37 | t40);
    t42 = *((unsigned int *)t33);
    t43 = *((unsigned int *)t34);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB31;

LAB30:    if (t44 != 0)
        goto LAB32;

LAB33:    t48 = (t32 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t32);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(59, ng0);

LAB38:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);

LAB36:    goto LAB18;

LAB21:    *((unsigned int *)t32) = 1;
    goto LAB23;

LAB22:    t47 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(42, ng0);

LAB27:    xsi_set_current_line(43, ng0);
    t54 = ((char*)((ng1)));
    t55 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t55, t54, 0, 0, 1, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 5, 0LL);
    goto LAB26;

LAB31:    *((unsigned int *)t32) = 1;
    goto LAB33;

LAB32:    t47 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(54, ng0);

LAB37:    xsi_set_current_line(55, ng0);
    t54 = ((char*)((ng2)));
    t55 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t55, t54, 0, 0, 1, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 5, 0LL);
    goto LAB36;

}


extern void work_m_10672478423500385150_3945625151_init()
{
	static char *pe[] = {(void *)Always_33_0};
	xsi_register_didat("work_m_10672478423500385150_3945625151", "isim/TB_mips_isim_beh.exe.sim/work/m_10672478423500385150_3945625151.didat");
	xsi_register_executes(pe);
}
