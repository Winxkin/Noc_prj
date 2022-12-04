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
static const char *ng0 = "D:/LuanVan/Xlinx/Noc_prj/Noc_prj/crossbar.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static int ng6[] = {0, 0};



static void Always_37_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 5040);
    *((int *)t2) = 1;
    t3 = (t0 + 4752);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 2120U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB19:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2280U);
    t3 = *((char **)t2);

LAB20:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB29;

LAB30:
LAB32:
LAB31:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 3320);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);

LAB33:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2600U);
    t4 = *((char **)t2);

LAB34:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t6 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t6 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t6 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t6 == 1)
        goto LAB43;

LAB44:
LAB46:
LAB45:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng6)));
    t7 = (t0 + 3640);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 8);

LAB47:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2760U);
    t7 = *((char **)t2);

LAB48:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 3, t2, 3);
    if (t6 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 3, t2, 3);
    if (t6 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 3, t2, 3);
    if (t6 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 3, t2, 3);
    if (t6 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 3, t2, 3);
    if (t6 == 1)
        goto LAB57;

LAB58:
LAB60:
LAB59:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng6)));
    t8 = (t0 + 3800);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 8);

LAB61:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2440U);
    t8 = *((char **)t2);

LAB62:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 3, t2, 3);
    if (t6 == 1)
        goto LAB63;

LAB64:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 3, t2, 3);
    if (t6 == 1)
        goto LAB65;

LAB66:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 3, t2, 3);
    if (t6 == 1)
        goto LAB67;

LAB68:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 3, t2, 3);
    if (t6 == 1)
        goto LAB69;

LAB70:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 3, t2, 3);
    if (t6 == 1)
        goto LAB71;

LAB72:
LAB74:
LAB73:    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng6)));
    t9 = (t0 + 3480);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 8);

LAB75:    goto LAB2;

LAB7:    xsi_set_current_line(41, ng0);
    t7 = (t0 + 1320U);
    t8 = *((char **)t7);
    t7 = (t0 + 3160);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 8);
    goto LAB19;

LAB9:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = (t0 + 3160);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 8);
    goto LAB19;

LAB11:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 1640U);
    t4 = *((char **)t3);
    t3 = (t0 + 3160);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 8);
    goto LAB19;

LAB13:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 1960U);
    t4 = *((char **)t3);
    t3 = (t0 + 3160);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 8);
    goto LAB19;

LAB15:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 1800U);
    t4 = *((char **)t3);
    t3 = (t0 + 3160);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 8);
    goto LAB19;

LAB21:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 1320U);
    t7 = *((char **)t4);
    t4 = (t0 + 3320);
    xsi_vlogvar_assign_value(t4, t7, 0, 0, 8);
    goto LAB33;

LAB23:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 1480U);
    t7 = *((char **)t4);
    t4 = (t0 + 3320);
    xsi_vlogvar_assign_value(t4, t7, 0, 0, 8);
    goto LAB33;

LAB25:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 1640U);
    t7 = *((char **)t4);
    t4 = (t0 + 3320);
    xsi_vlogvar_assign_value(t4, t7, 0, 0, 8);
    goto LAB33;

LAB27:    xsi_set_current_line(53, ng0);
    t4 = (t0 + 1960U);
    t7 = *((char **)t4);
    t4 = (t0 + 3320);
    xsi_vlogvar_assign_value(t4, t7, 0, 0, 8);
    goto LAB33;

LAB29:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 1800U);
    t7 = *((char **)t4);
    t4 = (t0 + 3320);
    xsi_vlogvar_assign_value(t4, t7, 0, 0, 8);
    goto LAB33;

LAB35:    xsi_set_current_line(59, ng0);
    t7 = (t0 + 1320U);
    t8 = *((char **)t7);
    t7 = (t0 + 3640);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 8);
    goto LAB47;

LAB37:    xsi_set_current_line(60, ng0);
    t7 = (t0 + 1480U);
    t8 = *((char **)t7);
    t7 = (t0 + 3640);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 8);
    goto LAB47;

LAB39:    xsi_set_current_line(61, ng0);
    t7 = (t0 + 1640U);
    t8 = *((char **)t7);
    t7 = (t0 + 3640);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 8);
    goto LAB47;

LAB41:    xsi_set_current_line(62, ng0);
    t7 = (t0 + 1960U);
    t8 = *((char **)t7);
    t7 = (t0 + 3640);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 8);
    goto LAB47;

LAB43:    xsi_set_current_line(63, ng0);
    t7 = (t0 + 1800U);
    t8 = *((char **)t7);
    t7 = (t0 + 3640);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 8);
    goto LAB47;

LAB49:    xsi_set_current_line(68, ng0);
    t8 = (t0 + 1320U);
    t9 = *((char **)t8);
    t8 = (t0 + 3800);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 8);
    goto LAB61;

LAB51:    xsi_set_current_line(69, ng0);
    t8 = (t0 + 1480U);
    t9 = *((char **)t8);
    t8 = (t0 + 3800);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 8);
    goto LAB61;

LAB53:    xsi_set_current_line(70, ng0);
    t8 = (t0 + 1640U);
    t9 = *((char **)t8);
    t8 = (t0 + 3800);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 8);
    goto LAB61;

LAB55:    xsi_set_current_line(71, ng0);
    t8 = (t0 + 1960U);
    t9 = *((char **)t8);
    t8 = (t0 + 3800);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 8);
    goto LAB61;

LAB57:    xsi_set_current_line(72, ng0);
    t8 = (t0 + 1800U);
    t9 = *((char **)t8);
    t8 = (t0 + 3800);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 8);
    goto LAB61;

LAB63:    xsi_set_current_line(77, ng0);
    t9 = (t0 + 1320U);
    t10 = *((char **)t9);
    t9 = (t0 + 3480);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 8);
    goto LAB75;

LAB65:    xsi_set_current_line(78, ng0);
    t9 = (t0 + 1480U);
    t10 = *((char **)t9);
    t9 = (t0 + 3480);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 8);
    goto LAB75;

LAB67:    xsi_set_current_line(79, ng0);
    t9 = (t0 + 1640U);
    t10 = *((char **)t9);
    t9 = (t0 + 3480);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 8);
    goto LAB75;

LAB69:    xsi_set_current_line(80, ng0);
    t9 = (t0 + 1960U);
    t10 = *((char **)t9);
    t9 = (t0 + 3480);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 8);
    goto LAB75;

LAB71:    xsi_set_current_line(81, ng0);
    t9 = (t0 + 1800U);
    t10 = *((char **)t9);
    t9 = (t0 + 3480);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 8);
    goto LAB75;

}


extern void work_m_00000000001444589929_1100087477_init()
{
	static char *pe[] = {(void *)Always_37_0};
	xsi_register_didat("work_m_00000000001444589929_1100087477", "isim/swith_tb_isim_beh.exe.sim/work/m_00000000001444589929_1100087477.didat");
	xsi_register_executes(pe);
}
