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
static const char *ng0 = "D:/verilog/ALU/LogicCalculation_floatingPoint/logic_calculation.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {8U, 0U};
static unsigned int ng6[] = {16U, 0U};
static unsigned int ng7[] = {32U, 0U};



static void Always_46_0(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
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
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t30;

LAB0:    t1 = (t0 + 5904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 6224);
    *((int *)t2) = 1;
    t3 = (t0 + 5936);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 2024U);
    t5 = *((char **)t4);
    t4 = (t0 + 2184U);
    t6 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t5 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t7) = 1;

LAB9:    t22 = (t7 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t7);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4824);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB12:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);

LAB13:    t2 = ((char*)((ng1)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t30 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng3)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t30 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t30 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng5)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t30 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng6)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t30 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t30 == 1)
        goto LAB24;

LAB25:
LAB26:    goto LAB2;

LAB8:    t21 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(48, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 4824);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    goto LAB12;

LAB14:    xsi_set_current_line(56, ng0);

LAB27:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 2504U);
    t5 = *((char **)t4);
    t4 = (t0 + 4984);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3464U);
    t4 = *((char **)t2);
    t2 = (t0 + 4664);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 1);
    goto LAB26;

LAB16:    xsi_set_current_line(64, ng0);

LAB28:    xsi_set_current_line(66, ng0);
    t4 = (t0 + 2664U);
    t5 = *((char **)t4);
    t4 = (t0 + 4984);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3624U);
    t4 = *((char **)t2);
    t2 = (t0 + 4664);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 1);
    goto LAB26;

LAB18:    xsi_set_current_line(72, ng0);

LAB29:    xsi_set_current_line(74, ng0);
    t4 = (t0 + 2824U);
    t5 = *((char **)t4);
    t4 = (t0 + 4984);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 3784U);
    t4 = *((char **)t2);
    t2 = (t0 + 4664);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 1);
    goto LAB26;

LAB20:    xsi_set_current_line(80, ng0);

LAB30:    xsi_set_current_line(82, ng0);
    t4 = (t0 + 2984U);
    t5 = *((char **)t4);
    t4 = (t0 + 4984);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3944U);
    t4 = *((char **)t2);
    t2 = (t0 + 4664);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 1);
    goto LAB26;

LAB22:    xsi_set_current_line(88, ng0);

LAB31:    xsi_set_current_line(90, ng0);
    t4 = (t0 + 3144U);
    t5 = *((char **)t4);
    t4 = (t0 + 4984);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 4104U);
    t4 = *((char **)t2);
    t2 = (t0 + 4664);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 1);
    goto LAB26;

LAB24:    xsi_set_current_line(96, ng0);

LAB32:    xsi_set_current_line(97, ng0);
    t4 = (t0 + 3304U);
    t5 = *((char **)t4);
    t4 = (t0 + 4984);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 4264U);
    t4 = *((char **)t2);
    t2 = (t0 + 4664);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 1);
    goto LAB26;

}


extern void work_m_00000000003435598472_1524831805_init()
{
	static char *pe[] = {(void *)Always_46_0};
	xsi_register_didat("work_m_00000000003435598472_1524831805", "isim/ALUTest_isim_beh.exe.sim/work/m_00000000003435598472_1524831805.didat");
	xsi_register_executes(pe);
}
