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
static const char *ng0 = "/home/co-eda/Desktop/Verilog/P7/P7_L0_2022/DATA_BYTE.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {15U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {3U, 0U};
static int ng5[] = {15, 0};
static unsigned int ng6[] = {12U, 0U};
static int ng7[] = {31, 0};
static int ng8[] = {16, 0};
static int ng9[] = {2, 0};
static unsigned int ng10[] = {1U, 0U};
static int ng11[] = {7, 0};
static unsigned int ng12[] = {2U, 0U};
static int ng13[] = {8, 0};
static unsigned int ng14[] = {4U, 0U};
static int ng15[] = {23, 0};
static int ng16[] = {3, 0};
static unsigned int ng17[] = {8U, 0U};
static int ng18[] = {24, 0};



static void Always_30_0(char *t0)
{
    char t7[8];
    char t12[8];
    char t36[8];
    char t37[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;

LAB0:    t1 = (t0 + 3000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 3320);
    *((int *)t2) = 1;
    t3 = (t0 + 3032);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);

LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(33, ng0);

LAB16:    xsi_set_current_line(34, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 32);
    goto LAB15;

LAB9:    xsi_set_current_line(37, ng0);

LAB17:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t0 + 1488U);
    t8 = (t4 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t7, 32, t5, t9, 2, t10, 32, 1);
    t11 = ((char*)((ng1)));
    memset(t12, 0, 8);
    t13 = (t7 + 4);
    t14 = (t11 + 4);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t13);
    t23 = *((unsigned int *)t14);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB21;

LAB18:    if (t24 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t12) = 1;

LAB21:    t28 = (t12 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t12);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(42, ng0);

LAB28:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t5 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 0);
    *((unsigned int *)t7) = t16;
    t17 = *((unsigned int *)t5);
    t18 = (t17 >> 0);
    *((unsigned int *)t2) = t18;
    t19 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t19 & 65535U);
    t20 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t20 & 65535U);
    t8 = (t0 + 2088);
    t9 = (t0 + 2088);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t13 = ((char*)((ng7)));
    t14 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t12, t36, t37, ((int*)(t11)), 2, t13, 32, 1, t14, 32, 1);
    t27 = (t12 + 4);
    t21 = *((unsigned int *)t27);
    t6 = (!(t21));
    t28 = (t36 + 4);
    t22 = *((unsigned int *)t28);
    t38 = (!(t22));
    t39 = (t6 && t38);
    t34 = (t37 + 4);
    t23 = *((unsigned int *)t34);
    t40 = (!(t23));
    t41 = (t39 && t40);
    if (t41 == 1)
        goto LAB29;

LAB30:
LAB24:    goto LAB15;

LAB11:    xsi_set_current_line(47, ng0);

LAB31:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);

LAB32:    t4 = ((char*)((ng1)));
    t38 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 32);
    if (t38 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB39;

LAB40:
LAB41:    goto LAB15;

LAB20:    t27 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(38, ng0);

LAB25:    xsi_set_current_line(39, ng0);
    t34 = ((char*)((ng4)));
    t35 = (t0 + 1928);
    xsi_vlogvar_assign_value(t35, t34, 0, 0, 4);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t5 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 0);
    *((unsigned int *)t7) = t16;
    t17 = *((unsigned int *)t5);
    t18 = (t17 >> 0);
    *((unsigned int *)t2) = t18;
    t19 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t19 & 65535U);
    t20 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t20 & 65535U);
    t8 = (t0 + 2088);
    t9 = (t0 + 2088);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t13 = ((char*)((ng5)));
    t14 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t12, t36, t37, ((int*)(t11)), 2, t13, 32, 1, t14, 32, 1);
    t27 = (t12 + 4);
    t21 = *((unsigned int *)t27);
    t6 = (!(t21));
    t28 = (t36 + 4);
    t22 = *((unsigned int *)t28);
    t38 = (!(t22));
    t39 = (t6 && t38);
    t34 = (t37 + 4);
    t23 = *((unsigned int *)t34);
    t40 = (!(t23));
    t41 = (t39 && t40);
    if (t41 == 1)
        goto LAB26;

LAB27:    goto LAB24;

LAB26:    t24 = *((unsigned int *)t37);
    t42 = (t24 + 0);
    t25 = *((unsigned int *)t12);
    t26 = *((unsigned int *)t36);
    t43 = (t25 - t26);
    t44 = (t43 + 1);
    xsi_vlogvar_assign_value(t8, t7, t42, *((unsigned int *)t36), t44);
    goto LAB27;

LAB29:    t24 = *((unsigned int *)t37);
    t42 = (t24 + 0);
    t25 = *((unsigned int *)t12);
    t26 = *((unsigned int *)t36);
    t43 = (t25 - t26);
    t44 = (t43 + 1);
    xsi_vlogvar_assign_value(t8, t7, t42, *((unsigned int *)t36), t44);
    goto LAB30;

LAB33:    xsi_set_current_line(49, ng0);

LAB42:    xsi_set_current_line(50, ng0);
    t8 = ((char*)((ng10)));
    t9 = (t0 + 1928);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 4);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t8 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 0);
    *((unsigned int *)t7) = t16;
    t17 = *((unsigned int *)t8);
    t18 = (t17 >> 0);
    *((unsigned int *)t2) = t18;
    t19 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t19 & 255U);
    t20 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t20 & 255U);
    t9 = (t0 + 2088);
    t10 = (t0 + 2088);
    t11 = (t10 + 72U);
    t13 = *((char **)t11);
    t14 = ((char*)((ng11)));
    t27 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t12, t36, t37, ((int*)(t13)), 2, t14, 32, 1, t27, 32, 1);
    t28 = (t12 + 4);
    t21 = *((unsigned int *)t28);
    t6 = (!(t21));
    t34 = (t36 + 4);
    t22 = *((unsigned int *)t34);
    t38 = (!(t22));
    t39 = (t6 && t38);
    t35 = (t37 + 4);
    t23 = *((unsigned int *)t35);
    t40 = (!(t23));
    t41 = (t39 && t40);
    if (t41 == 1)
        goto LAB43;

LAB44:    goto LAB41;

LAB35:    xsi_set_current_line(53, ng0);

LAB45:    xsi_set_current_line(54, ng0);
    t4 = ((char*)((ng12)));
    t8 = (t0 + 1928);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 4);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t8 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 0);
    *((unsigned int *)t7) = t16;
    t17 = *((unsigned int *)t8);
    t18 = (t17 >> 0);
    *((unsigned int *)t2) = t18;
    t19 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t19 & 255U);
    t20 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t20 & 255U);
    t9 = (t0 + 2088);
    t10 = (t0 + 2088);
    t11 = (t10 + 72U);
    t13 = *((char **)t11);
    t14 = ((char*)((ng5)));
    t27 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t12, t36, t37, ((int*)(t13)), 2, t14, 32, 1, t27, 32, 1);
    t28 = (t12 + 4);
    t21 = *((unsigned int *)t28);
    t6 = (!(t21));
    t34 = (t36 + 4);
    t22 = *((unsigned int *)t34);
    t38 = (!(t22));
    t39 = (t6 && t38);
    t35 = (t37 + 4);
    t23 = *((unsigned int *)t35);
    t40 = (!(t23));
    t41 = (t39 && t40);
    if (t41 == 1)
        goto LAB46;

LAB47:    goto LAB41;

LAB37:    xsi_set_current_line(57, ng0);

LAB48:    xsi_set_current_line(58, ng0);
    t4 = ((char*)((ng14)));
    t8 = (t0 + 1928);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 4);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t8 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 0);
    *((unsigned int *)t7) = t16;
    t17 = *((unsigned int *)t8);
    t18 = (t17 >> 0);
    *((unsigned int *)t2) = t18;
    t19 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t19 & 255U);
    t20 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t20 & 255U);
    t9 = (t0 + 2088);
    t10 = (t0 + 2088);
    t11 = (t10 + 72U);
    t13 = *((char **)t11);
    t14 = ((char*)((ng15)));
    t27 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t12, t36, t37, ((int*)(t13)), 2, t14, 32, 1, t27, 32, 1);
    t28 = (t12 + 4);
    t21 = *((unsigned int *)t28);
    t6 = (!(t21));
    t34 = (t36 + 4);
    t22 = *((unsigned int *)t34);
    t38 = (!(t22));
    t39 = (t6 && t38);
    t35 = (t37 + 4);
    t23 = *((unsigned int *)t35);
    t40 = (!(t23));
    t41 = (t39 && t40);
    if (t41 == 1)
        goto LAB49;

LAB50:    goto LAB41;

LAB39:    xsi_set_current_line(61, ng0);

LAB51:    xsi_set_current_line(62, ng0);
    t4 = ((char*)((ng17)));
    t8 = (t0 + 1928);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 4);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t8 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 0);
    *((unsigned int *)t7) = t16;
    t17 = *((unsigned int *)t8);
    t18 = (t17 >> 0);
    *((unsigned int *)t2) = t18;
    t19 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t19 & 255U);
    t20 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t20 & 255U);
    t9 = (t0 + 2088);
    t10 = (t0 + 2088);
    t11 = (t10 + 72U);
    t13 = *((char **)t11);
    t14 = ((char*)((ng7)));
    t27 = ((char*)((ng18)));
    xsi_vlog_convert_partindices(t12, t36, t37, ((int*)(t13)), 2, t14, 32, 1, t27, 32, 1);
    t28 = (t12 + 4);
    t21 = *((unsigned int *)t28);
    t6 = (!(t21));
    t34 = (t36 + 4);
    t22 = *((unsigned int *)t34);
    t38 = (!(t22));
    t39 = (t6 && t38);
    t35 = (t37 + 4);
    t23 = *((unsigned int *)t35);
    t40 = (!(t23));
    t41 = (t39 && t40);
    if (t41 == 1)
        goto LAB52;

LAB53:    goto LAB41;

LAB43:    t24 = *((unsigned int *)t37);
    t42 = (t24 + 0);
    t25 = *((unsigned int *)t12);
    t26 = *((unsigned int *)t36);
    t43 = (t25 - t26);
    t44 = (t43 + 1);
    xsi_vlogvar_assign_value(t9, t7, t42, *((unsigned int *)t36), t44);
    goto LAB44;

LAB46:    t24 = *((unsigned int *)t37);
    t42 = (t24 + 0);
    t25 = *((unsigned int *)t12);
    t26 = *((unsigned int *)t36);
    t43 = (t25 - t26);
    t44 = (t43 + 1);
    xsi_vlogvar_assign_value(t9, t7, t42, *((unsigned int *)t36), t44);
    goto LAB47;

LAB49:    t24 = *((unsigned int *)t37);
    t42 = (t24 + 0);
    t25 = *((unsigned int *)t12);
    t26 = *((unsigned int *)t36);
    t43 = (t25 - t26);
    t44 = (t43 + 1);
    xsi_vlogvar_assign_value(t9, t7, t42, *((unsigned int *)t36), t44);
    goto LAB50;

LAB52:    t24 = *((unsigned int *)t37);
    t42 = (t24 + 0);
    t25 = *((unsigned int *)t12);
    t26 = *((unsigned int *)t36);
    t43 = (t25 - t26);
    t44 = (t43 + 1);
    xsi_vlogvar_assign_value(t9, t7, t42, *((unsigned int *)t36), t44);
    goto LAB53;

}


extern void work_m_18061863311398541145_3911631506_init()
{
	static char *pe[] = {(void *)Always_30_0};
	xsi_register_didat("work_m_18061863311398541145_3911631506", "isim/TB_mips_isim_beh.exe.sim/work/m_18061863311398541145_3911631506.didat");
	xsi_register_executes(pe);
}
