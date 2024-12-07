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
static const char *ng0 = "/home/co-eda/Desktop/Verilog/P7/P7_L0_2022/alu.v";
static int ng1[] = {0, 0};
static int ng2[] = {32, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {2, 0};
static int ng6[] = {3, 0};
static int ng7[] = {16, 0};
static int ng8[] = {4, 0};
static int ng9[] = {5, 0};
static unsigned int ng10[] = {0U, 0U};
static int ng11[] = {6, 0};



static int sp_opposite(char *t1, char *t2)
{
    char t7[8];
    char t14[8];
    char t18[8];
    char t33[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    int t42;

LAB0:    t0 = 1;
    xsi_set_current_line(53, ng0);

LAB2:    xsi_set_current_line(54, ng0);
    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t1 + 2840);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB3:    t3 = (t1 + 2840);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t5, 32, t6, 32);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB4;

LAB5:    xsi_set_current_line(57, ng0);
    t3 = (t1 + 2520);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng4)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t5, 32, t6, 32);
    t8 = (t1 + 2520);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(54, ng0);

LAB6:    xsi_set_current_line(55, ng0);
    t15 = (t1 + 2680);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t19 = (t1 + 2680);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t1 + 2840);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_get_index_select_value(t18, 1, t17, t21, 2, t24, 32, 1);
    memset(t14, 0, 8);
    t25 = (t18 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t18);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t25) == 0)
        goto LAB7;

LAB9:    t31 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t31) = 1;

LAB10:    t32 = (t1 + 2520);
    t34 = (t1 + 2520);
    t35 = (t34 + 72U);
    t36 = *((char **)t35);
    t37 = (t1 + 2840);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    xsi_vlog_generic_convert_bit_index(t33, t36, 2, t39, 32, 1);
    t40 = (t33 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (!(t41));
    if (t42 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(54, ng0);
    t3 = (t1 + 2840);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng3)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t5, 32, t6, 32);
    t8 = (t1 + 2840);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB3;

LAB7:    *((unsigned int *)t14) = 1;
    goto LAB10;

LAB11:    xsi_vlogvar_assign_value(t32, t14, 0, *((unsigned int *)t33), 1);
    goto LAB12;

}

static void Always_29_0(char *t0)
{
    char t10[8];
    char t40[8];
    char t41[8];
    char t42[8];
    char t43[8];
    char t50[8];
    char t59[8];
    char t75[8];
    char t83[8];
    char t113[8];
    char t128[8];
    char t138[8];
    char t146[8];
    char t162[8];
    char t174[8];
    char t184[8];
    char t194[8];
    char t198[8];
    char t206[8];
    char t238[8];
    char t246[8];
    char t292[16];
    char t293[16];
    char t294[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
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
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    char *t127;
    char *t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    char *t137;
    char *t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t147;
    char *t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    char *t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    char *t169;
    char *t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    char *t175;
    char *t176;
    char *t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    char *t185;
    char *t186;
    char *t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    char *t195;
    char *t196;
    char *t197;
    char *t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    char *t205;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    char *t210;
    char *t211;
    char *t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    char *t220;
    char *t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    int t230;
    int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    char *t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    unsigned int t244;
    char *t245;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    char *t250;
    char *t251;
    char *t252;
    unsigned int t253;
    unsigned int t254;
    unsigned int t255;
    unsigned int t256;
    unsigned int t257;
    unsigned int t258;
    unsigned int t259;
    char *t260;
    char *t261;
    unsigned int t262;
    unsigned int t263;
    unsigned int t264;
    int t265;
    unsigned int t266;
    unsigned int t267;
    unsigned int t268;
    int t269;
    unsigned int t270;
    unsigned int t271;
    unsigned int t272;
    unsigned int t273;
    char *t274;
    unsigned int t275;
    unsigned int t276;
    unsigned int t277;
    unsigned int t278;
    unsigned int t279;
    char *t280;
    char *t281;
    unsigned int t282;
    unsigned int t283;
    unsigned int t284;
    char *t285;
    unsigned int t286;
    unsigned int t287;
    unsigned int t288;
    unsigned int t289;
    char *t290;
    char *t291;

LAB0:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 4072);
    *((int *)t2) = 1;
    t3 = (t0 + 3784);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 1800U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t6 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(32, ng0);
    t7 = (t0 + 1480U);
    t8 = *((char **)t7);
    t7 = (t0 + 1640U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t8, 32, t9, 32);
    t7 = (t0 + 2200);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 32);
    goto LAB21;

LAB9:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = (t0 + 1640U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB21;

LAB11:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = (t0 + 1640U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB22;

LAB23:
LAB24:    t35 = (t0 + 2200);
    xsi_vlogvar_assign_value(t35, t10, 0, 0, 32);
    goto LAB21;

LAB13:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 1640U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng7)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_lshift(t10, 32, t4, 32, t3, 32);
    t7 = (t0 + 2200);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 32);
    goto LAB21;

LAB15:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = (t0 + 1640U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB25;

LAB26:
LAB27:    t35 = (t0 + 2200);
    xsi_vlogvar_assign_value(t35, t10, 0, 0, 32);
    goto LAB21;

LAB17:    xsi_set_current_line(41, ng0);

LAB28:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    memset(t41, 0, 8);
    t3 = (t41 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t41) = t13;
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t3) = t16;
    t8 = ((char*)((ng4)));
    memset(t42, 0, 8);
    t9 = (t41 + 4);
    t21 = (t8 + 4);
    t17 = *((unsigned int *)t41);
    t18 = *((unsigned int *)t8);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t21);
    t24 = (t20 ^ t23);
    t25 = (t19 | t24);
    t27 = *((unsigned int *)t9);
    t28 = *((unsigned int *)t21);
    t29 = (t27 | t28);
    t31 = (~(t29));
    t32 = (t25 & t31);
    if (t32 != 0)
        goto LAB32;

LAB29:    if (t29 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t42) = 1;

LAB32:    memset(t43, 0, 8);
    t35 = (t42 + 4);
    t33 = *((unsigned int *)t35);
    t34 = (~(t33));
    t36 = *((unsigned int *)t42);
    t37 = (t36 & t34);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t35) != 0)
        goto LAB35;

LAB36:    t45 = (t43 + 4);
    t39 = *((unsigned int *)t43);
    t46 = *((unsigned int *)t45);
    t47 = (t39 || t46);
    if (t47 > 0)
        goto LAB37;

LAB38:    memcpy(t83, t43, 8);

LAB39:    memset(t113, 0, 8);
    t114 = (t83 + 4);
    t115 = *((unsigned int *)t114);
    t116 = (~(t115));
    t117 = *((unsigned int *)t83);
    t118 = (t117 & t116);
    t119 = (t118 & 1U);
    if (t119 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t114) != 0)
        goto LAB53;

LAB54:    t121 = (t113 + 4);
    t122 = *((unsigned int *)t113);
    t123 = (!(t122));
    t124 = *((unsigned int *)t121);
    t125 = (t123 || t124);
    if (t125 > 0)
        goto LAB55;

LAB56:    memcpy(t246, t113, 8);

LAB57:    memset(t40, 0, 8);
    t274 = (t246 + 4);
    t275 = *((unsigned int *)t274);
    t276 = (~(t275));
    t277 = *((unsigned int *)t246);
    t278 = (t277 & t276);
    t279 = (t278 & 1U);
    if (t279 != 0)
        goto LAB88;

LAB89:    if (*((unsigned int *)t274) != 0)
        goto LAB90;

LAB91:    t281 = (t40 + 4);
    t282 = *((unsigned int *)t40);
    t283 = *((unsigned int *)t281);
    t284 = (t282 || t283);
    if (t284 > 0)
        goto LAB92;

LAB93:    t286 = *((unsigned int *)t40);
    t287 = (~(t286));
    t288 = *((unsigned int *)t281);
    t289 = (t287 || t288);
    if (t289 > 0)
        goto LAB94;

LAB95:    if (*((unsigned int *)t281) > 0)
        goto LAB96;

LAB97:    if (*((unsigned int *)t40) > 0)
        goto LAB98;

LAB99:    memcpy(t10, t290, 8);

LAB100:    t291 = (t0 + 2200);
    xsi_vlogvar_assign_value(t291, t10, 0, 0, 32);
    goto LAB21;

LAB19:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng10)));
    xsi_vlogtype_concat(t292, 33, 33, 2U, t3, 1, t4, 32);
    t7 = (t0 + 1640U);
    t8 = *((char **)t7);
    t7 = ((char*)((ng10)));
    xsi_vlogtype_concat(t293, 33, 33, 2U, t7, 1, t8, 32);
    xsi_vlog_unsigned_less(t294, 33, t292, 33, t293, 33);
    memset(t40, 0, 8);
    t9 = (t294 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (~(t11));
    t13 = *((unsigned int *)t294);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB101;

LAB102:    if (*((unsigned int *)t9) != 0)
        goto LAB103;

LAB104:    t22 = (t40 + 4);
    t16 = *((unsigned int *)t40);
    t17 = *((unsigned int *)t22);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB105;

LAB106:    t19 = *((unsigned int *)t40);
    t20 = (~(t19));
    t23 = *((unsigned int *)t22);
    t24 = (t20 || t23);
    if (t24 > 0)
        goto LAB107;

LAB108:    if (*((unsigned int *)t22) > 0)
        goto LAB109;

LAB110:    if (*((unsigned int *)t40) > 0)
        goto LAB111;

LAB112:    memcpy(t10, t44, 8);

LAB113:    t45 = (t0 + 2200);
    xsi_vlogvar_assign_value(t45, t10, 0, 0, 32);
    goto LAB21;

LAB22:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = *((unsigned int *)t22);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t30 = (t29 & t28);
    t31 = (~(t26));
    t32 = (~(t30));
    t33 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t33 & t31);
    t34 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t34 & t32);
    goto LAB24;

LAB25:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t4);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t27 = (~(t25));
    t28 = *((unsigned int *)t7);
    t29 = (~(t28));
    t31 = *((unsigned int *)t22);
    t32 = (~(t31));
    t26 = (t24 & t27);
    t30 = (t29 & t32);
    t33 = (~(t26));
    t34 = (~(t30));
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t33);
    t37 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t37 & t34);
    t38 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t38 & t33);
    t39 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t39 & t34);
    goto LAB27;

LAB31:    t22 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB32;

LAB33:    *((unsigned int *)t43) = 1;
    goto LAB36;

LAB35:    t44 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB36;

LAB37:    t48 = (t0 + 1640U);
    t49 = *((char **)t48);
    memset(t50, 0, 8);
    t48 = (t50 + 4);
    t51 = (t49 + 4);
    t52 = *((unsigned int *)t49);
    t53 = (t52 >> 31);
    t54 = (t53 & 1);
    *((unsigned int *)t50) = t54;
    t55 = *((unsigned int *)t51);
    t56 = (t55 >> 31);
    t57 = (t56 & 1);
    *((unsigned int *)t48) = t57;
    t58 = ((char*)((ng10)));
    memset(t59, 0, 8);
    t60 = (t50 + 4);
    t61 = (t58 + 4);
    t62 = *((unsigned int *)t50);
    t63 = *((unsigned int *)t58);
    t64 = (t62 ^ t63);
    t65 = *((unsigned int *)t60);
    t66 = *((unsigned int *)t61);
    t67 = (t65 ^ t66);
    t68 = (t64 | t67);
    t69 = *((unsigned int *)t60);
    t70 = *((unsigned int *)t61);
    t71 = (t69 | t70);
    t72 = (~(t71));
    t73 = (t68 & t72);
    if (t73 != 0)
        goto LAB43;

LAB40:    if (t71 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t59) = 1;

LAB43:    memset(t75, 0, 8);
    t76 = (t59 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t59);
    t80 = (t79 & t78);
    t81 = (t80 & 1U);
    if (t81 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t76) != 0)
        goto LAB46;

LAB47:    t84 = *((unsigned int *)t43);
    t85 = *((unsigned int *)t75);
    t86 = (t84 & t85);
    *((unsigned int *)t83) = t86;
    t87 = (t43 + 4);
    t88 = (t75 + 4);
    t89 = (t83 + 4);
    t90 = *((unsigned int *)t87);
    t91 = *((unsigned int *)t88);
    t92 = (t90 | t91);
    *((unsigned int *)t89) = t92;
    t93 = *((unsigned int *)t89);
    t94 = (t93 != 0);
    if (t94 == 1)
        goto LAB48;

LAB49:
LAB50:    goto LAB39;

LAB42:    t74 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t74) = 1;
    goto LAB43;

LAB44:    *((unsigned int *)t75) = 1;
    goto LAB47;

LAB46:    t82 = (t75 + 4);
    *((unsigned int *)t75) = 1;
    *((unsigned int *)t82) = 1;
    goto LAB47;

LAB48:    t95 = *((unsigned int *)t83);
    t96 = *((unsigned int *)t89);
    *((unsigned int *)t83) = (t95 | t96);
    t97 = (t43 + 4);
    t98 = (t75 + 4);
    t99 = *((unsigned int *)t43);
    t100 = (~(t99));
    t101 = *((unsigned int *)t97);
    t102 = (~(t101));
    t103 = *((unsigned int *)t75);
    t104 = (~(t103));
    t105 = *((unsigned int *)t98);
    t106 = (~(t105));
    t26 = (t100 & t102);
    t30 = (t104 & t106);
    t107 = (~(t26));
    t108 = (~(t30));
    t109 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t109 & t107);
    t110 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t110 & t108);
    t111 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t111 & t107);
    t112 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t112 & t108);
    goto LAB50;

LAB51:    *((unsigned int *)t113) = 1;
    goto LAB54;

LAB53:    t120 = (t113 + 4);
    *((unsigned int *)t113) = 1;
    *((unsigned int *)t120) = 1;
    goto LAB54;

LAB55:    t126 = (t0 + 1480U);
    t127 = *((char **)t126);
    memset(t128, 0, 8);
    t126 = (t128 + 4);
    t129 = (t127 + 4);
    t130 = *((unsigned int *)t127);
    t131 = (t130 >> 31);
    t132 = (t131 & 1);
    *((unsigned int *)t128) = t132;
    t133 = *((unsigned int *)t129);
    t134 = (t133 >> 31);
    t135 = (t134 & 1);
    *((unsigned int *)t126) = t135;
    t136 = (t0 + 1640U);
    t137 = *((char **)t136);
    memset(t138, 0, 8);
    t136 = (t138 + 4);
    t139 = (t137 + 4);
    t140 = *((unsigned int *)t137);
    t141 = (t140 >> 31);
    t142 = (t141 & 1);
    *((unsigned int *)t138) = t142;
    t143 = *((unsigned int *)t139);
    t144 = (t143 >> 31);
    t145 = (t144 & 1);
    *((unsigned int *)t136) = t145;
    memset(t146, 0, 8);
    t147 = (t128 + 4);
    t148 = (t138 + 4);
    t149 = *((unsigned int *)t128);
    t150 = *((unsigned int *)t138);
    t151 = (t149 ^ t150);
    t152 = *((unsigned int *)t147);
    t153 = *((unsigned int *)t148);
    t154 = (t152 ^ t153);
    t155 = (t151 | t154);
    t156 = *((unsigned int *)t147);
    t157 = *((unsigned int *)t148);
    t158 = (t156 | t157);
    t159 = (~(t158));
    t160 = (t155 & t159);
    if (t160 != 0)
        goto LAB61;

LAB58:    if (t158 != 0)
        goto LAB60;

LAB59:    *((unsigned int *)t146) = 1;

LAB61:    memset(t162, 0, 8);
    t163 = (t146 + 4);
    t164 = *((unsigned int *)t163);
    t165 = (~(t164));
    t166 = *((unsigned int *)t146);
    t167 = (t166 & t165);
    t168 = (t167 & 1U);
    if (t168 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t163) != 0)
        goto LAB64;

LAB65:    t170 = (t162 + 4);
    t171 = *((unsigned int *)t162);
    t172 = *((unsigned int *)t170);
    t173 = (t171 || t172);
    if (t173 > 0)
        goto LAB66;

LAB67:    memcpy(t206, t162, 8);

LAB68:    memset(t238, 0, 8);
    t239 = (t206 + 4);
    t240 = *((unsigned int *)t239);
    t241 = (~(t240));
    t242 = *((unsigned int *)t206);
    t243 = (t242 & t241);
    t244 = (t243 & 1U);
    if (t244 != 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t239) != 0)
        goto LAB83;

LAB84:    t247 = *((unsigned int *)t113);
    t248 = *((unsigned int *)t238);
    t249 = (t247 | t248);
    *((unsigned int *)t246) = t249;
    t250 = (t113 + 4);
    t251 = (t238 + 4);
    t252 = (t246 + 4);
    t253 = *((unsigned int *)t250);
    t254 = *((unsigned int *)t251);
    t255 = (t253 | t254);
    *((unsigned int *)t252) = t255;
    t256 = *((unsigned int *)t252);
    t257 = (t256 != 0);
    if (t257 == 1)
        goto LAB85;

LAB86:
LAB87:    goto LAB57;

LAB60:    t161 = (t146 + 4);
    *((unsigned int *)t146) = 1;
    *((unsigned int *)t161) = 1;
    goto LAB61;

LAB62:    *((unsigned int *)t162) = 1;
    goto LAB65;

LAB64:    t169 = (t162 + 4);
    *((unsigned int *)t162) = 1;
    *((unsigned int *)t169) = 1;
    goto LAB65;

LAB66:    t175 = (t0 + 1480U);
    t176 = *((char **)t175);
    memset(t174, 0, 8);
    t175 = (t174 + 4);
    t177 = (t176 + 4);
    t178 = *((unsigned int *)t176);
    t179 = (t178 >> 0);
    *((unsigned int *)t174) = t179;
    t180 = *((unsigned int *)t177);
    t181 = (t180 >> 0);
    *((unsigned int *)t175) = t181;
    t182 = *((unsigned int *)t174);
    *((unsigned int *)t174) = (t182 & 2147483647U);
    t183 = *((unsigned int *)t175);
    *((unsigned int *)t175) = (t183 & 2147483647U);
    t185 = (t0 + 1640U);
    t186 = *((char **)t185);
    memset(t184, 0, 8);
    t185 = (t184 + 4);
    t187 = (t186 + 4);
    t188 = *((unsigned int *)t186);
    t189 = (t188 >> 0);
    *((unsigned int *)t184) = t189;
    t190 = *((unsigned int *)t187);
    t191 = (t190 >> 0);
    *((unsigned int *)t185) = t191;
    t192 = *((unsigned int *)t184);
    *((unsigned int *)t184) = (t192 & 2147483647U);
    t193 = *((unsigned int *)t185);
    *((unsigned int *)t185) = (t193 & 2147483647U);
    memset(t194, 0, 8);
    t195 = (t174 + 4);
    if (*((unsigned int *)t195) != 0)
        goto LAB70;

LAB69:    t196 = (t184 + 4);
    if (*((unsigned int *)t196) != 0)
        goto LAB70;

LAB73:    if (*((unsigned int *)t174) < *((unsigned int *)t184))
        goto LAB71;

LAB72:    memset(t198, 0, 8);
    t199 = (t194 + 4);
    t200 = *((unsigned int *)t199);
    t201 = (~(t200));
    t202 = *((unsigned int *)t194);
    t203 = (t202 & t201);
    t204 = (t203 & 1U);
    if (t204 != 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t199) != 0)
        goto LAB76;

LAB77:    t207 = *((unsigned int *)t162);
    t208 = *((unsigned int *)t198);
    t209 = (t207 & t208);
    *((unsigned int *)t206) = t209;
    t210 = (t162 + 4);
    t211 = (t198 + 4);
    t212 = (t206 + 4);
    t213 = *((unsigned int *)t210);
    t214 = *((unsigned int *)t211);
    t215 = (t213 | t214);
    *((unsigned int *)t212) = t215;
    t216 = *((unsigned int *)t212);
    t217 = (t216 != 0);
    if (t217 == 1)
        goto LAB78;

LAB79:
LAB80:    goto LAB68;

LAB70:    t197 = (t194 + 4);
    *((unsigned int *)t194) = 1;
    *((unsigned int *)t197) = 1;
    goto LAB72;

LAB71:    *((unsigned int *)t194) = 1;
    goto LAB72;

LAB74:    *((unsigned int *)t198) = 1;
    goto LAB77;

LAB76:    t205 = (t198 + 4);
    *((unsigned int *)t198) = 1;
    *((unsigned int *)t205) = 1;
    goto LAB77;

LAB78:    t218 = *((unsigned int *)t206);
    t219 = *((unsigned int *)t212);
    *((unsigned int *)t206) = (t218 | t219);
    t220 = (t162 + 4);
    t221 = (t198 + 4);
    t222 = *((unsigned int *)t162);
    t223 = (~(t222));
    t224 = *((unsigned int *)t220);
    t225 = (~(t224));
    t226 = *((unsigned int *)t198);
    t227 = (~(t226));
    t228 = *((unsigned int *)t221);
    t229 = (~(t228));
    t230 = (t223 & t225);
    t231 = (t227 & t229);
    t232 = (~(t230));
    t233 = (~(t231));
    t234 = *((unsigned int *)t212);
    *((unsigned int *)t212) = (t234 & t232);
    t235 = *((unsigned int *)t212);
    *((unsigned int *)t212) = (t235 & t233);
    t236 = *((unsigned int *)t206);
    *((unsigned int *)t206) = (t236 & t232);
    t237 = *((unsigned int *)t206);
    *((unsigned int *)t206) = (t237 & t233);
    goto LAB80;

LAB81:    *((unsigned int *)t238) = 1;
    goto LAB84;

LAB83:    t245 = (t238 + 4);
    *((unsigned int *)t238) = 1;
    *((unsigned int *)t245) = 1;
    goto LAB84;

LAB85:    t258 = *((unsigned int *)t246);
    t259 = *((unsigned int *)t252);
    *((unsigned int *)t246) = (t258 | t259);
    t260 = (t113 + 4);
    t261 = (t238 + 4);
    t262 = *((unsigned int *)t260);
    t263 = (~(t262));
    t264 = *((unsigned int *)t113);
    t265 = (t264 & t263);
    t266 = *((unsigned int *)t261);
    t267 = (~(t266));
    t268 = *((unsigned int *)t238);
    t269 = (t268 & t267);
    t270 = (~(t265));
    t271 = (~(t269));
    t272 = *((unsigned int *)t252);
    *((unsigned int *)t252) = (t272 & t270);
    t273 = *((unsigned int *)t252);
    *((unsigned int *)t252) = (t273 & t271);
    goto LAB87;

LAB88:    *((unsigned int *)t40) = 1;
    goto LAB91;

LAB90:    t280 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t280) = 1;
    goto LAB91;

LAB92:    t285 = ((char*)((ng4)));
    goto LAB93;

LAB94:    t290 = ((char*)((ng10)));
    goto LAB95;

LAB96:    xsi_vlog_unsigned_bit_combine(t10, 32, t285, 32, t290, 32);
    goto LAB100;

LAB98:    memcpy(t10, t285, 8);
    goto LAB100;

LAB101:    *((unsigned int *)t40) = 1;
    goto LAB104;

LAB103:    t21 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB104;

LAB105:    t35 = ((char*)((ng3)));
    goto LAB106;

LAB107:    t44 = ((char*)((ng1)));
    goto LAB108;

LAB109:    xsi_vlog_unsigned_bit_combine(t10, 32, t35, 32, t44, 32);
    goto LAB113;

LAB111:    memcpy(t10, t35, 8);
    goto LAB113;

}


extern void work_m_10916788152229379217_0886308060_init()
{
	static char *pe[] = {(void *)Always_29_0};
	static char *se[] = {(void *)sp_opposite};
	xsi_register_didat("work_m_10916788152229379217_0886308060", "isim/TB_mips_noneInt_isim_beh.exe.sim/work/m_10916788152229379217_0886308060.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
