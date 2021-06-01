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
static const char *ng0 = "D:/verilog/ALU/LogicCalculation_floatingPoint/One_Bit_count.v";
static int ng1[] = {0, 0};
static int ng2[] = {5, 0};
static int ng3[] = {1, 0};
static int ng4[] = {4, 0};
static unsigned int ng5[] = {1U, 0U};
static int ng6[] = {2, 0};
static unsigned int ng7[] = {0U, 0U};
static int ng8[] = {28, 0};



static void Always_34_0(char *t0)
{
    char t6[8];
    char t21[8];
    char t27[8];
    char t30[8];
    char t36[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t37;
    unsigned int t38;
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
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 3648);
    *((int *)t2) = 1;
    t3 = (t0 + 3360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(38, ng0);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB6:    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB8;

LAB7:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB8;

LAB11:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB9;

LAB10:    t10 = (t6 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(43, ng0);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB14:    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB16;

LAB15:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB17;

LAB18:    t10 = (t6 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_mod(t6, 32, t4, 5, t5, 32);
    t7 = ((char*)((ng7)));
    memset(t21, 0, 8);
    t8 = (t6 + 4);
    t9 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t9);
    t38 = (t14 ^ t15);
    t39 = (t13 | t38);
    t40 = *((unsigned int *)t8);
    t41 = *((unsigned int *)t9);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB32;

LAB29:    if (t42 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t21) = 1;

LAB32:    t16 = (t21 + 4);
    t45 = *((unsigned int *)t16);
    t46 = (~(t45));
    t47 = *((unsigned int *)t21);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB35:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    t7 = (t0 + 2088);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t27, 0, 8);
    t10 = (t27 + 4);
    t16 = (t9 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (t11 >> 3);
    t13 = (t12 & 1);
    *((unsigned int *)t27) = t13;
    t14 = *((unsigned int *)t16);
    t15 = (t14 >> 3);
    t38 = (t15 & 1);
    *((unsigned int *)t10) = t38;
    xsi_vlog_mul_concat(t21, 28, 1, t5, 1U, t27, 1);
    xsi_vlogtype_concat(t6, 32, 32, 2U, t21, 28, t4, 4);
    t17 = (t0 + 1768);
    xsi_vlogvar_assign_value(t17, t6, 0, 0, 32);
    goto LAB2;

LAB8:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB10;

LAB9:    *((unsigned int *)t6) = 1;
    goto LAB10;

LAB12:    xsi_set_current_line(40, ng0);
    t16 = (t0 + 2088);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 1208U);
    t20 = *((char **)t19);
    t19 = (t0 + 1168U);
    t22 = (t19 + 72U);
    t23 = *((char **)t22);
    t24 = (t0 + 2408);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    xsi_vlog_generic_get_index_select_value(t21, 4, t20, t23, 2, t26, 5, 2);
    memset(t27, 0, 8);
    xsi_vlog_unsigned_add(t27, 4, t18, 4, t21, 4);
    t28 = (t0 + 1368U);
    t29 = *((char **)t28);
    t28 = (t0 + 1328U);
    t31 = (t28 + 72U);
    t32 = *((char **)t31);
    t33 = (t0 + 2408);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    xsi_vlog_generic_get_index_select_value(t30, 4, t29, t32, 2, t35, 5, 2);
    memset(t36, 0, 8);
    xsi_vlog_unsigned_add(t36, 4, t27, 4, t30, 4);
    t37 = (t0 + 2088);
    xsi_vlogvar_assign_value(t37, t36, 0, 0, 4);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 5, t5, 32);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 5);
    goto LAB6;

LAB16:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB18;

LAB17:    *((unsigned int *)t6) = 1;
    goto LAB18;

LAB20:    xsi_set_current_line(45, ng0);
    t16 = (t0 + 2088);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 2088);
    t20 = (t19 + 72U);
    t22 = *((char **)t20);
    t23 = (t0 + 2408);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_get_index_select_value(t21, 1, t18, t22, 2, t25, 5, 2);
    t26 = ((char*)((ng5)));
    memset(t27, 0, 8);
    t28 = (t21 + 4);
    t29 = (t26 + 4);
    t38 = *((unsigned int *)t21);
    t39 = *((unsigned int *)t26);
    t40 = (t38 ^ t39);
    t41 = *((unsigned int *)t28);
    t42 = *((unsigned int *)t29);
    t43 = (t41 ^ t42);
    t44 = (t40 | t43);
    t45 = *((unsigned int *)t28);
    t46 = *((unsigned int *)t29);
    t47 = (t45 | t46);
    t48 = (~(t47));
    t49 = (t44 & t48);
    if (t49 != 0)
        goto LAB25;

LAB22:    if (t47 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t27) = 1;

LAB25:    t32 = (t27 + 4);
    t50 = *((unsigned int *)t32);
    t51 = (~(t50));
    t52 = *((unsigned int *)t27);
    t53 = (t52 & t51);
    t54 = (t53 != 0);
    if (t54 > 0)
        goto LAB26;

LAB27:
LAB28:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 5, t5, 32);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 5);
    goto LAB14;

LAB24:    t31 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(46, ng0);
    t33 = (t0 + 2248);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t37 = ((char*)((ng3)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 32, t35, 5, t37, 32);
    t55 = (t0 + 2248);
    xsi_vlogvar_assign_value(t55, t30, 0, 0, 5);
    goto LAB28;

LAB31:    t10 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(50, ng0);
    t17 = ((char*)((ng5)));
    t18 = (t0 + 1928);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 1);
    goto LAB35;

}


extern void work_m_00000000001773818224_3974762813_init()
{
	static char *pe[] = {(void *)Always_34_0};
	xsi_register_didat("work_m_00000000001773818224_3974762813", "isim/ALUTest_isim_beh.exe.sim/work/m_00000000001773818224_3974762813.didat");
	xsi_register_executes(pe);
}
