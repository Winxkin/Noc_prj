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
static const char *ng0 = "D:/LuanVan/Xlinx/Noc_prj/Noc_prj/input_controler.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {7U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {2U, 0U};
static int ng8[] = {1, 0};



static void Always_39_0(char *t0)
{
    char t13[8];
    char t19[8];
    char t22[8];
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;

LAB0:    t1 = (t0 + 4992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 5560);
    *((int *)t2) = 1;
    t3 = (t0 + 5024);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 2552U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(49, ng0);

LAB10:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2072U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB14;

LAB12:    if (*((unsigned int *)t2) == 0)
        goto LAB11;

LAB13:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;

LAB14:    t5 = (t13 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(78, ng0);

LAB68:    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3272);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB17:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(42, ng0);

LAB9:    xsi_set_current_line(43, ng0);
    t11 = (t0 + 1592U);
    t12 = *((char **)t11);
    t11 = (t0 + 3432);
    xsi_vlogvar_assign_value(t11, t12, 0, 0, 2);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1752U);
    t3 = *((char **)t2);
    t2 = (t0 + 3592);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3272);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB8;

LAB11:    *((unsigned int *)t13) = 1;
    goto LAB14;

LAB15:    xsi_set_current_line(51, ng0);

LAB18:    xsi_set_current_line(52, ng0);
    t11 = (t0 + 1912U);
    t12 = *((char **)t11);
    t11 = (t0 + 3752);
    xsi_vlogvar_assign_value(t11, t12, 0, 0, 8);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3752);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t19, 0, 8);
    t5 = (t19 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t19) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 0);
    t14 = (t10 & 1);
    *((unsigned int *)t5) = t14;
    t12 = (t0 + 3752);
    t20 = (t12 + 56U);
    t21 = *((char **)t20);
    memset(t22, 0, 8);
    t23 = (t22 + 4);
    t24 = (t21 + 4);
    t15 = *((unsigned int *)t21);
    t16 = (t15 >> 1);
    t17 = (t16 & 1);
    *((unsigned int *)t22) = t17;
    t18 = *((unsigned int *)t24);
    t25 = (t18 >> 1);
    t26 = (t25 & 1);
    *((unsigned int *)t23) = t26;
    xsi_vlogtype_concat(t13, 2, 2, 2U, t22, 1, t19, 1);
    t27 = (t0 + 3912);
    xsi_vlogvar_assign_value(t27, t13, 0, 0, 2);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3752);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t19, 0, 8);
    t5 = (t19 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 2);
    t8 = (t7 & 1);
    *((unsigned int *)t19) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 2);
    t14 = (t10 & 1);
    *((unsigned int *)t5) = t14;
    t12 = (t0 + 3752);
    t20 = (t12 + 56U);
    t21 = *((char **)t20);
    memset(t22, 0, 8);
    t23 = (t22 + 4);
    t24 = (t21 + 4);
    t15 = *((unsigned int *)t21);
    t16 = (t15 >> 3);
    t17 = (t16 & 1);
    *((unsigned int *)t22) = t17;
    t18 = *((unsigned int *)t24);
    t25 = (t18 >> 3);
    t26 = (t25 & 1);
    *((unsigned int *)t23) = t26;
    xsi_vlogtype_concat(t13, 2, 2, 2U, t22, 1, t19, 1);
    t27 = (t0 + 4072);
    xsi_vlogvar_assign_value(t27, t13, 0, 0, 2);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3752);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3112);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3432);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t20 = (t4 + 4);
    t21 = (t12 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t12);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t20);
    t10 = *((unsigned int *)t21);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t20);
    t17 = *((unsigned int *)t21);
    t18 = (t16 | t17);
    t25 = (~(t18));
    t26 = (t15 & t25);
    if (t26 != 0)
        goto LAB22;

LAB19:    if (t18 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t13) = 1;

LAB22:    t24 = (t13 + 4);
    t28 = *((unsigned int *)t24);
    t29 = (~(t28));
    t30 = *((unsigned int *)t13);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(70, ng0);

LAB51:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3432);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t20 = (t4 + 4);
    if (*((unsigned int *)t20) != 0)
        goto LAB53;

LAB52:    t21 = (t12 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB53;

LAB56:    if (*((unsigned int *)t4) > *((unsigned int *)t12))
        goto LAB54;

LAB55:    t24 = (t13 + 4);
    t6 = *((unsigned int *)t24);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB57;

LAB58:
LAB59:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3432);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t20 = (t4 + 4);
    if (*((unsigned int *)t20) != 0)
        goto LAB61;

LAB60:    t21 = (t12 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB61;

LAB64:    if (*((unsigned int *)t4) < *((unsigned int *)t12))
        goto LAB62;

LAB63:    t24 = (t13 + 4);
    t6 = *((unsigned int *)t24);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB65;

LAB66:
LAB67:
LAB25:    goto LAB17;

LAB21:    t23 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(58, ng0);

LAB26:    xsi_set_current_line(59, ng0);
    t27 = (t0 + 4072);
    t33 = (t27 + 56U);
    t34 = *((char **)t33);
    t35 = (t0 + 3592);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memset(t19, 0, 8);
    t38 = (t34 + 4);
    t39 = (t37 + 4);
    t40 = *((unsigned int *)t34);
    t41 = *((unsigned int *)t37);
    t42 = (t40 ^ t41);
    t43 = *((unsigned int *)t38);
    t44 = *((unsigned int *)t39);
    t45 = (t43 ^ t44);
    t46 = (t42 | t45);
    t47 = *((unsigned int *)t38);
    t48 = *((unsigned int *)t39);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB30;

LAB27:    if (t49 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t19) = 1;

LAB30:    t53 = (t19 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t19);
    t57 = (t56 & t55);
    t58 = (t57 != 0);
    if (t58 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(62, ng0);

LAB34:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 4072);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3592);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t20 = (t4 + 4);
    if (*((unsigned int *)t20) != 0)
        goto LAB36;

LAB35:    t21 = (t12 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB36;

LAB39:    if (*((unsigned int *)t4) > *((unsigned int *)t12))
        goto LAB37;

LAB38:    t24 = (t13 + 4);
    t6 = *((unsigned int *)t24);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB40;

LAB41:
LAB42:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 4072);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3592);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t20 = (t4 + 4);
    if (*((unsigned int *)t20) != 0)
        goto LAB44;

LAB43:    t21 = (t12 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB44;

LAB47:    if (*((unsigned int *)t4) < *((unsigned int *)t12))
        goto LAB45;

LAB46:    t24 = (t13 + 4);
    t6 = *((unsigned int *)t24);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB48;

LAB49:
LAB50:
LAB33:    goto LAB25;

LAB29:    t52 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(60, ng0);
    t59 = ((char*)((ng3)));
    t60 = (t0 + 3272);
    xsi_vlogvar_assign_value(t60, t59, 0, 0, 3);
    goto LAB33;

LAB36:    t23 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB38;

LAB37:    *((unsigned int *)t13) = 1;
    goto LAB38;

LAB40:    xsi_set_current_line(64, ng0);
    t27 = ((char*)((ng4)));
    t33 = (t0 + 3272);
    xsi_vlogvar_assign_value(t33, t27, 0, 0, 3);
    goto LAB42;

LAB44:    t23 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB46;

LAB45:    *((unsigned int *)t13) = 1;
    goto LAB46;

LAB48:    xsi_set_current_line(66, ng0);
    t27 = ((char*)((ng5)));
    t33 = (t0 + 3272);
    xsi_vlogvar_assign_value(t33, t27, 0, 0, 3);
    goto LAB50;

LAB53:    t23 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB55;

LAB54:    *((unsigned int *)t13) = 1;
    goto LAB55;

LAB57:    xsi_set_current_line(72, ng0);
    t27 = ((char*)((ng6)));
    t33 = (t0 + 3272);
    xsi_vlogvar_assign_value(t33, t27, 0, 0, 3);
    goto LAB59;

LAB61:    t23 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB63;

LAB62:    *((unsigned int *)t13) = 1;
    goto LAB63;

LAB65:    xsi_set_current_line(74, ng0);
    t27 = ((char*)((ng7)));
    t33 = (t0 + 3272);
    xsi_vlogvar_assign_value(t33, t27, 0, 0, 3);
    goto LAB67;

}

static void Cont_85_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t22[8];
    char t36[8];
    char t52[8];
    char t60[8];
    char t92[8];
    char t106[8];
    char t122[8];
    char t130[8];
    char *t1;
    char *t2;
    char *t5;
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
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    char *t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t129;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    char *t135;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    char *t144;
    char *t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    int t154;
    int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    char *t168;
    char *t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    char *t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    char *t178;
    char *t179;
    char *t180;
    char *t181;
    char *t182;
    char *t183;
    unsigned int t184;
    unsigned int t185;
    char *t186;
    unsigned int t187;
    unsigned int t188;
    char *t189;
    unsigned int t190;
    unsigned int t191;
    char *t192;

LAB0:    t1 = (t0 + 5240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2552U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t22, 0, 8);
    t23 = (t6 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t23) != 0)
        goto LAB10;

LAB11:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB12;

LAB13:    memcpy(t60, t22, 8);

LAB14:    memset(t92, 0, 8);
    t93 = (t60 + 4);
    t94 = *((unsigned int *)t93);
    t95 = (~(t94));
    t96 = *((unsigned int *)t60);
    t97 = (t96 & t95);
    t98 = (t97 & 1U);
    if (t98 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t93) != 0)
        goto LAB28;

LAB29:    t100 = (t92 + 4);
    t101 = *((unsigned int *)t92);
    t102 = *((unsigned int *)t100);
    t103 = (t101 || t102);
    if (t103 > 0)
        goto LAB30;

LAB31:    memcpy(t130, t92, 8);

LAB32:    memset(t4, 0, 8);
    t162 = (t130 + 4);
    t163 = *((unsigned int *)t162);
    t164 = (~(t163));
    t165 = *((unsigned int *)t130);
    t166 = (t165 & t164);
    t167 = (t166 & 1U);
    if (t167 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t162) != 0)
        goto LAB46;

LAB47:    t169 = (t4 + 4);
    t170 = *((unsigned int *)t4);
    t171 = *((unsigned int *)t169);
    t172 = (t170 || t171);
    if (t172 > 0)
        goto LAB48;

LAB49:    t174 = *((unsigned int *)t4);
    t175 = (~(t174));
    t176 = *((unsigned int *)t169);
    t177 = (t175 || t176);
    if (t177 > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t169) > 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t4) > 0)
        goto LAB54;

LAB55:    memcpy(t3, t178, 8);

LAB56:    t179 = (t0 + 5656);
    t180 = (t179 + 56U);
    t181 = *((char **)t180);
    t182 = (t181 + 56U);
    t183 = *((char **)t182);
    memset(t183, 0, 8);
    t184 = 1U;
    t185 = t184;
    t186 = (t3 + 4);
    t187 = *((unsigned int *)t3);
    t184 = (t184 & t187);
    t188 = *((unsigned int *)t186);
    t185 = (t185 & t188);
    t189 = (t183 + 4);
    t190 = *((unsigned int *)t183);
    *((unsigned int *)t183) = (t190 | t184);
    t191 = *((unsigned int *)t189);
    *((unsigned int *)t189) = (t191 | t185);
    xsi_driver_vfirst_trans(t179, 0, 0);
    t192 = (t0 + 5576);
    *((int *)t192) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t22) = 1;
    goto LAB11;

LAB10:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB11;

LAB12:    t34 = (t0 + 2072U);
    t35 = *((char **)t34);
    t34 = ((char*)((ng1)));
    memset(t36, 0, 8);
    t37 = (t35 + 4);
    t38 = (t34 + 4);
    t39 = *((unsigned int *)t35);
    t40 = *((unsigned int *)t34);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t37);
    t47 = *((unsigned int *)t38);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB18;

LAB15:    if (t48 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t36) = 1;

LAB18:    memset(t52, 0, 8);
    t53 = (t36 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t53) != 0)
        goto LAB21;

LAB22:    t61 = *((unsigned int *)t22);
    t62 = *((unsigned int *)t52);
    t63 = (t61 & t62);
    *((unsigned int *)t60) = t63;
    t64 = (t22 + 4);
    t65 = (t52 + 4);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t64);
    t68 = *((unsigned int *)t65);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB17:    t51 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t52) = 1;
    goto LAB22;

LAB21:    t59 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB22;

LAB23:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t60) = (t72 | t73);
    t74 = (t22 + 4);
    t75 = (t52 + 4);
    t76 = *((unsigned int *)t22);
    t77 = (~(t76));
    t78 = *((unsigned int *)t74);
    t79 = (~(t78));
    t80 = *((unsigned int *)t52);
    t81 = (~(t80));
    t82 = *((unsigned int *)t75);
    t83 = (~(t82));
    t84 = (t77 & t79);
    t85 = (t81 & t83);
    t86 = (~(t84));
    t87 = (~(t85));
    t88 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t88 & t86);
    t89 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t89 & t87);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t86);
    t91 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t91 & t87);
    goto LAB25;

LAB26:    *((unsigned int *)t92) = 1;
    goto LAB29;

LAB28:    t99 = (t92 + 4);
    *((unsigned int *)t92) = 1;
    *((unsigned int *)t99) = 1;
    goto LAB29;

LAB30:    t104 = (t0 + 2232U);
    t105 = *((char **)t104);
    t104 = ((char*)((ng8)));
    memset(t106, 0, 8);
    t107 = (t105 + 4);
    t108 = (t104 + 4);
    t109 = *((unsigned int *)t105);
    t110 = *((unsigned int *)t104);
    t111 = (t109 ^ t110);
    t112 = *((unsigned int *)t107);
    t113 = *((unsigned int *)t108);
    t114 = (t112 ^ t113);
    t115 = (t111 | t114);
    t116 = *((unsigned int *)t107);
    t117 = *((unsigned int *)t108);
    t118 = (t116 | t117);
    t119 = (~(t118));
    t120 = (t115 & t119);
    if (t120 != 0)
        goto LAB36;

LAB33:    if (t118 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t106) = 1;

LAB36:    memset(t122, 0, 8);
    t123 = (t106 + 4);
    t124 = *((unsigned int *)t123);
    t125 = (~(t124));
    t126 = *((unsigned int *)t106);
    t127 = (t126 & t125);
    t128 = (t127 & 1U);
    if (t128 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t123) != 0)
        goto LAB39;

LAB40:    t131 = *((unsigned int *)t92);
    t132 = *((unsigned int *)t122);
    t133 = (t131 & t132);
    *((unsigned int *)t130) = t133;
    t134 = (t92 + 4);
    t135 = (t122 + 4);
    t136 = (t130 + 4);
    t137 = *((unsigned int *)t134);
    t138 = *((unsigned int *)t135);
    t139 = (t137 | t138);
    *((unsigned int *)t136) = t139;
    t140 = *((unsigned int *)t136);
    t141 = (t140 != 0);
    if (t141 == 1)
        goto LAB41;

LAB42:
LAB43:    goto LAB32;

LAB35:    t121 = (t106 + 4);
    *((unsigned int *)t106) = 1;
    *((unsigned int *)t121) = 1;
    goto LAB36;

LAB37:    *((unsigned int *)t122) = 1;
    goto LAB40;

LAB39:    t129 = (t122 + 4);
    *((unsigned int *)t122) = 1;
    *((unsigned int *)t129) = 1;
    goto LAB40;

LAB41:    t142 = *((unsigned int *)t130);
    t143 = *((unsigned int *)t136);
    *((unsigned int *)t130) = (t142 | t143);
    t144 = (t92 + 4);
    t145 = (t122 + 4);
    t146 = *((unsigned int *)t92);
    t147 = (~(t146));
    t148 = *((unsigned int *)t144);
    t149 = (~(t148));
    t150 = *((unsigned int *)t122);
    t151 = (~(t150));
    t152 = *((unsigned int *)t145);
    t153 = (~(t152));
    t154 = (t147 & t149);
    t155 = (t151 & t153);
    t156 = (~(t154));
    t157 = (~(t155));
    t158 = *((unsigned int *)t136);
    *((unsigned int *)t136) = (t158 & t156);
    t159 = *((unsigned int *)t136);
    *((unsigned int *)t136) = (t159 & t157);
    t160 = *((unsigned int *)t130);
    *((unsigned int *)t130) = (t160 & t156);
    t161 = *((unsigned int *)t130);
    *((unsigned int *)t130) = (t161 & t157);
    goto LAB43;

LAB44:    *((unsigned int *)t4) = 1;
    goto LAB47;

LAB46:    t168 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t168) = 1;
    goto LAB47;

LAB48:    t173 = ((char*)((ng6)));
    goto LAB49;

LAB50:    t178 = ((char*)((ng3)));
    goto LAB51;

LAB52:    xsi_vlog_unsigned_bit_combine(t3, 1, t173, 1, t178, 1);
    goto LAB56;

LAB54:    memcpy(t3, t173, 8);
    goto LAB56;

}


extern void work_m_00000000001624885505_0125805369_init()
{
	static char *pe[] = {(void *)Always_39_0,(void *)Cont_85_1};
	xsi_register_didat("work_m_00000000001624885505_0125805369", "isim/input_controler_tb_isim_beh.exe.sim/work/m_00000000001624885505_0125805369.didat");
	xsi_register_executes(pe);
}
