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
static const char *ng0 = "D:/LuanVan/Xlinx/Noc_prj/Noc_prj/round_robin.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {4, 0};
static unsigned int ng6[] = {5U, 0U};
static int ng7[] = {5, 0};
static unsigned int ng8[] = {0U, 0U};
static unsigned int ng9[] = {1U, 0U};
static unsigned int ng10[] = {2U, 0U};
static unsigned int ng11[] = {3U, 0U};
static unsigned int ng12[] = {4U, 0U};



static void Always_33_0(char *t0)
{
    char t6[8];
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    unsigned int t19;
    int t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    int t24;
    int t25;

LAB0:    t1 = (t0 + 4080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 4648);
    *((int *)t2) = 1;
    t3 = (t0 + 4112);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 1320U);
    t5 = *((char **)t4);
    t4 = (t0 + 3000);
    t8 = (t0 + 3000);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 3000);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t7 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = (t0 + 3000);
    t4 = (t0 + 3000);
    t5 = (t4 + 72U);
    t8 = *((char **)t5);
    t9 = (t0 + 3000);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t6 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (!(t16));
    t14 = (t7 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    t2 = (t0 + 3000);
    t4 = (t0 + 3000);
    t5 = (t4 + 72U);
    t8 = *((char **)t5);
    t9 = (t0 + 3000);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t6 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (!(t16));
    t14 = (t7 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1800U);
    t3 = *((char **)t2);
    t2 = (t0 + 3000);
    t4 = (t0 + 3000);
    t5 = (t4 + 72U);
    t8 = *((char **)t5);
    t9 = (t0 + 3000);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t6 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (!(t16));
    t14 = (t7 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1960U);
    t3 = *((char **)t2);
    t2 = (t0 + 3000);
    t4 = (t0 + 3000);
    t5 = (t4 + 72U);
    t8 = *((char **)t5);
    t9 = (t0 + 3000);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t6 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (!(t16));
    t14 = (t7 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB14;

LAB15:    goto LAB2;

LAB6:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, *((unsigned int *)t7), t25, 0LL);
    goto LAB7;

LAB8:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t7), t25, 0LL);
    goto LAB9;

LAB10:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t7), t25, 0LL);
    goto LAB11;

LAB12:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t7), t25, 0LL);
    goto LAB13;

LAB14:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t7), t25, 0LL);
    goto LAB15;

}

static void Always_42_1(char *t0)
{
    char t13[8];
    char t19[8];
    char t31[8];
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
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    unsigned int t33;
    unsigned int t34;
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
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    int t56;
    char *t57;
    char *t58;

LAB0:    t1 = (t0 + 4328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 4664);
    *((int *)t2) = 1;
    t3 = (t0 + 4360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 2280U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(50, ng0);

LAB10:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB12;

LAB11:    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB12;

LAB15:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB13;

LAB14:    t15 = (t13 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB16;

LAB17:
LAB18:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t33 = (t9 ^ t10);
    t34 = (t8 | t33);
    t35 = *((unsigned int *)t11);
    t36 = *((unsigned int *)t12);
    t37 = (t35 | t36);
    t38 = (~(t37));
    t39 = (t34 & t38);
    if (t39 != 0)
        goto LAB43;

LAB40:    if (t37 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t13) = 1;

LAB43:    t15 = (t13 + 4);
    t40 = *((unsigned int *)t15);
    t41 = (~(t40));
    t42 = *((unsigned int *)t13);
    t43 = (t42 & t41);
    t44 = (t43 != 0);
    if (t44 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 3, t5, 32);
    t11 = (t0 + 3160);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 3);

LAB46:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(45, ng0);

LAB9:    xsi_set_current_line(46, ng0);
    t11 = ((char*)((ng6)));
    t12 = (t0 + 2840);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 3);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB8;

LAB12:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB14;

LAB13:    *((unsigned int *)t13) = 1;
    goto LAB14;

LAB16:    xsi_set_current_line(52, ng0);

LAB19:    xsi_set_current_line(53, ng0);
    t16 = (t0 + 3000);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t20 = (t0 + 3000);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 3000);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 3160);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    xsi_vlog_generic_get_array_select_value(t19, 3, t18, t22, t25, 2, 1, t28, 3, 2);
    t29 = (t0 + 2440U);
    t30 = *((char **)t29);
    memset(t31, 0, 8);
    t29 = (t19 + 4);
    t32 = (t30 + 4);
    t33 = *((unsigned int *)t19);
    t34 = *((unsigned int *)t30);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t29);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t29);
    t41 = *((unsigned int *)t32);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB23;

LAB20:    if (t42 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t31) = 1;

LAB23:    t46 = (t31 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t31);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB26:    goto LAB18;

LAB22:    t45 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(54, ng0);

LAB27:    xsi_set_current_line(55, ng0);
    t52 = (t0 + 3160);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);

LAB28:    t55 = ((char*)((ng1)));
    t56 = xsi_vlog_unsigned_case_compare(t54, 3, t55, 32);
    if (t56 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng2)));
    t56 = xsi_vlog_unsigned_case_compare(t54, 3, t2, 32);
    if (t56 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng3)));
    t56 = xsi_vlog_unsigned_case_compare(t54, 3, t2, 32);
    if (t56 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng4)));
    t56 = xsi_vlog_unsigned_case_compare(t54, 3, t2, 32);
    if (t56 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng5)));
    t56 = xsi_vlog_unsigned_case_compare(t54, 3, t2, 32);
    if (t56 == 1)
        goto LAB37;

LAB38:
LAB39:    goto LAB26;

LAB29:    xsi_set_current_line(56, ng0);
    t57 = ((char*)((ng8)));
    t58 = (t0 + 2840);
    xsi_vlogvar_assign_value(t58, t57, 0, 0, 3);
    goto LAB39;

LAB31:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 2840);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB39;

LAB33:    xsi_set_current_line(58, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 2840);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB39;

LAB35:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 2840);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB39;

LAB37:    xsi_set_current_line(60, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 2840);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB39;

LAB42:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB43;

LAB44:    xsi_set_current_line(69, ng0);
    t16 = ((char*)((ng1)));
    t17 = (t0 + 3160);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 3);
    goto LAB46;

}


extern void work_m_00000000000002413279_3989176905_init()
{
	static char *pe[] = {(void *)Always_33_0,(void *)Always_42_1};
	xsi_register_didat("work_m_00000000000002413279_3989176905", "isim/round_robin_tb_isim_beh.exe.sim/work/m_00000000000002413279_3989176905.didat");
	xsi_register_executes(pe);
}
