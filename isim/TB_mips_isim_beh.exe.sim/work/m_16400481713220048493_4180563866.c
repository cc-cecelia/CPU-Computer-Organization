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
static const char *ng0 = "/home/co-eda/Desktop/Verilog/P7/P7_L0_2022/IF_ExcDetect.v";
static unsigned int ng1[] = {12288U, 0U};
static unsigned int ng2[] = {28668U, 0U};
static int ng3[] = {0, 0};
static int ng4[] = {1, 0};
static int ng5[] = {4, 0};



static void Always_26_0(char *t0)
{
    char t7[8];
    char t10[8];
    char t25[8];
    char t29[8];
    char t37[8];
    char t65[8];
    char t78[8];
    char t89[8];
    char t105[8];
    char t113[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    char *t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    char *t147;
    char *t148;

LAB0:    t1 = (t0 + 2520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 2840);
    *((int *)t2) = 1;
    t3 = (t0 + 2552);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB7;

LAB6:    t8 = (t6 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t4) > *((unsigned int *)t6))
        goto LAB8;

LAB9:    memset(t10, 0, 8);
    t11 = (t7 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t7);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t11) != 0)
        goto LAB13;

LAB14:    t18 = (t10 + 4);
    t19 = *((unsigned int *)t10);
    t20 = (!(t19));
    t21 = *((unsigned int *)t18);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB15;

LAB16:    memcpy(t37, t10, 8);

LAB17:    memset(t65, 0, 8);
    t66 = (t37 + 4);
    t67 = *((unsigned int *)t66);
    t68 = (~(t67));
    t69 = *((unsigned int *)t37);
    t70 = (t69 & t68);
    t71 = (t70 & 1U);
    if (t71 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t66) != 0)
        goto LAB32;

LAB33:    t73 = (t65 + 4);
    t74 = *((unsigned int *)t65);
    t75 = (!(t74));
    t76 = *((unsigned int *)t73);
    t77 = (t75 || t76);
    if (t77 > 0)
        goto LAB34;

LAB35:    memcpy(t113, t65, 8);

LAB36:    t141 = (t113 + 4);
    t142 = *((unsigned int *)t141);
    t143 = (~(t142));
    t144 = *((unsigned int *)t113);
    t145 = (t144 & t143);
    t146 = (t145 != 0);
    if (t146 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(31, ng0);

LAB52:    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB50:    goto LAB2;

LAB7:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t7) = 1;
    goto LAB9;

LAB11:    *((unsigned int *)t10) = 1;
    goto LAB14;

LAB13:    t17 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB14;

LAB15:    t23 = (t0 + 1048U);
    t24 = *((char **)t23);
    t23 = ((char*)((ng2)));
    memset(t25, 0, 8);
    t26 = (t24 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB19;

LAB18:    t27 = (t23 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB19;

LAB22:    if (*((unsigned int *)t24) > *((unsigned int *)t23))
        goto LAB20;

LAB21:    memset(t29, 0, 8);
    t30 = (t25 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (~(t31));
    t33 = *((unsigned int *)t25);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t30) != 0)
        goto LAB25;

LAB26:    t38 = *((unsigned int *)t10);
    t39 = *((unsigned int *)t29);
    t40 = (t38 | t39);
    *((unsigned int *)t37) = t40;
    t41 = (t10 + 4);
    t42 = (t29 + 4);
    t43 = (t37 + 4);
    t44 = *((unsigned int *)t41);
    t45 = *((unsigned int *)t42);
    t46 = (t44 | t45);
    *((unsigned int *)t43) = t46;
    t47 = *((unsigned int *)t43);
    t48 = (t47 != 0);
    if (t48 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB17;

LAB19:    t28 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB21;

LAB20:    *((unsigned int *)t25) = 1;
    goto LAB21;

LAB23:    *((unsigned int *)t29) = 1;
    goto LAB26;

LAB25:    t36 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB26;

LAB27:    t49 = *((unsigned int *)t37);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t37) = (t49 | t50);
    t51 = (t10 + 4);
    t52 = (t29 + 4);
    t53 = *((unsigned int *)t51);
    t54 = (~(t53));
    t55 = *((unsigned int *)t10);
    t56 = (t55 & t54);
    t57 = *((unsigned int *)t52);
    t58 = (~(t57));
    t59 = *((unsigned int *)t29);
    t60 = (t59 & t58);
    t61 = (~(t56));
    t62 = (~(t60));
    t63 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t63 & t61);
    t64 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t64 & t62);
    goto LAB29;

LAB30:    *((unsigned int *)t65) = 1;
    goto LAB33;

LAB32:    t72 = (t65 + 4);
    *((unsigned int *)t65) = 1;
    *((unsigned int *)t72) = 1;
    goto LAB33;

LAB34:    t79 = (t0 + 1048U);
    t80 = *((char **)t79);
    memset(t78, 0, 8);
    t79 = (t78 + 4);
    t81 = (t80 + 4);
    t82 = *((unsigned int *)t80);
    t83 = (t82 >> 0);
    *((unsigned int *)t78) = t83;
    t84 = *((unsigned int *)t81);
    t85 = (t84 >> 0);
    *((unsigned int *)t79) = t85;
    t86 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t86 & 3U);
    t87 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t87 & 3U);
    t88 = ((char*)((ng3)));
    memset(t89, 0, 8);
    t90 = (t78 + 4);
    t91 = (t88 + 4);
    t92 = *((unsigned int *)t78);
    t93 = *((unsigned int *)t88);
    t94 = (t92 ^ t93);
    t95 = *((unsigned int *)t90);
    t96 = *((unsigned int *)t91);
    t97 = (t95 ^ t96);
    t98 = (t94 | t97);
    t99 = *((unsigned int *)t90);
    t100 = *((unsigned int *)t91);
    t101 = (t99 | t100);
    t102 = (~(t101));
    t103 = (t98 & t102);
    if (t103 != 0)
        goto LAB38;

LAB37:    if (t101 != 0)
        goto LAB39;

LAB40:    memset(t105, 0, 8);
    t106 = (t89 + 4);
    t107 = *((unsigned int *)t106);
    t108 = (~(t107));
    t109 = *((unsigned int *)t89);
    t110 = (t109 & t108);
    t111 = (t110 & 1U);
    if (t111 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t106) != 0)
        goto LAB43;

LAB44:    t114 = *((unsigned int *)t65);
    t115 = *((unsigned int *)t105);
    t116 = (t114 | t115);
    *((unsigned int *)t113) = t116;
    t117 = (t65 + 4);
    t118 = (t105 + 4);
    t119 = (t113 + 4);
    t120 = *((unsigned int *)t117);
    t121 = *((unsigned int *)t118);
    t122 = (t120 | t121);
    *((unsigned int *)t119) = t122;
    t123 = *((unsigned int *)t119);
    t124 = (t123 != 0);
    if (t124 == 1)
        goto LAB45;

LAB46:
LAB47:    goto LAB36;

LAB38:    *((unsigned int *)t89) = 1;
    goto LAB40;

LAB39:    t104 = (t89 + 4);
    *((unsigned int *)t89) = 1;
    *((unsigned int *)t104) = 1;
    goto LAB40;

LAB41:    *((unsigned int *)t105) = 1;
    goto LAB44;

LAB43:    t112 = (t105 + 4);
    *((unsigned int *)t105) = 1;
    *((unsigned int *)t112) = 1;
    goto LAB44;

LAB45:    t125 = *((unsigned int *)t113);
    t126 = *((unsigned int *)t119);
    *((unsigned int *)t113) = (t125 | t126);
    t127 = (t65 + 4);
    t128 = (t105 + 4);
    t129 = *((unsigned int *)t127);
    t130 = (~(t129));
    t131 = *((unsigned int *)t65);
    t132 = (t131 & t130);
    t133 = *((unsigned int *)t128);
    t134 = (~(t133));
    t135 = *((unsigned int *)t105);
    t136 = (t135 & t134);
    t137 = (~(t132));
    t138 = (~(t136));
    t139 = *((unsigned int *)t119);
    *((unsigned int *)t119) = (t139 & t137);
    t140 = *((unsigned int *)t119);
    *((unsigned int *)t119) = (t140 & t138);
    goto LAB47;

LAB48:    xsi_set_current_line(27, ng0);

LAB51:    xsi_set_current_line(28, ng0);
    t147 = ((char*)((ng4)));
    t148 = (t0 + 1448);
    xsi_vlogvar_assign_value(t148, t147, 0, 0, 1);
    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB50;

}


extern void work_m_16400481713220048493_4180563866_init()
{
	static char *pe[] = {(void *)Always_26_0};
	xsi_register_didat("work_m_16400481713220048493_4180563866", "isim/TB_mips_isim_beh.exe.sim/work/m_16400481713220048493_4180563866.didat");
	xsi_register_executes(pe);
}
