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
static const char *ng0 = "D:/verilog/ALU/LogicCalculation_floatingPoint/Add.v";
static int ng1[] = {0, 0};
static int ng2[] = {6, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {1, 0};
static int ng5[] = {2, 0};
static unsigned int ng6[] = {0U, 0U};
static int ng7[] = {26, 0};



static void Always_36_0(char *t0)
{
    char t7[8];
    char t19[8];
    char t27[8];
    char t53[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
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
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t54;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 3648);
    *((int *)t2) = 1;
    t3 = (t0 + 3360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1368U);
    t6 = *((char **)t4);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 6, t5, 5, t6, 5);
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t7, 0, 0, 6);
    xsi_set_current_line(41, ng0);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB6:    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB8;

LAB7:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB8;

LAB11:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB9;

LAB10:    t10 = (t7 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t7);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_mod(t7, 32, t4, 5, t5, 32);
    t6 = ((char*)((ng6)));
    memset(t19, 0, 8);
    t8 = (t7 + 4);
    t9 = (t6 + 4);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t9);
    t30 = (t14 ^ t15);
    t31 = (t13 | t30);
    t32 = *((unsigned int *)t8);
    t33 = *((unsigned int *)t9);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t36 = (t31 & t35);
    if (t36 != 0)
        goto LAB24;

LAB21:    if (t34 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t19) = 1;

LAB24:    t16 = (t19 + 4);
    t37 = *((unsigned int *)t16);
    t38 = (~(t37));
    t39 = *((unsigned int *)t19);
    t40 = (t39 & t38);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB27:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    t6 = (t0 + 2088);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memset(t27, 0, 8);
    t10 = (t27 + 4);
    t16 = (t9 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (t11 >> 5);
    t13 = (t12 & 1);
    *((unsigned int *)t27) = t13;
    t14 = *((unsigned int *)t16);
    t15 = (t14 >> 5);
    t30 = (t15 & 1);
    *((unsigned int *)t10) = t30;
    xsi_vlog_mul_concat(t19, 26, 1, t5, 1U, t27, 1);
    xsi_vlogtype_concat(t7, 32, 32, 2U, t19, 26, t4, 6);
    t17 = (t0 + 1768);
    xsi_vlogvar_assign_value(t17, t7, 0, 0, 32);
    goto LAB2;

LAB8:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB10;

LAB9:    *((unsigned int *)t7) = 1;
    goto LAB10;

LAB12:    xsi_set_current_line(42, ng0);
    t16 = (t0 + 2088);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t20 = (t0 + 2088);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 2408);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_get_index_select_value(t19, 1, t18, t22, 2, t25, 5, 2);
    t26 = ((char*)((ng3)));
    memset(t27, 0, 8);
    t28 = (t19 + 4);
    t29 = (t26 + 4);
    t30 = *((unsigned int *)t19);
    t31 = *((unsigned int *)t26);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t28);
    t34 = *((unsigned int *)t29);
    t35 = (t33 ^ t34);
    t36 = (t32 | t35);
    t37 = *((unsigned int *)t28);
    t38 = *((unsigned int *)t29);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t36 & t40);
    if (t41 != 0)
        goto LAB17;

LAB14:    if (t39 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t27) = 1;

LAB17:    t43 = (t27 + 4);
    t44 = *((unsigned int *)t43);
    t45 = (~(t44));
    t46 = *((unsigned int *)t27);
    t47 = (t46 & t45);
    t48 = (t47 != 0);
    if (t48 > 0)
        goto LAB18;

LAB19:
LAB20:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t4, 5, t5, 32);
    t6 = (t0 + 2408);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 5);
    goto LAB6;

LAB16:    t42 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(43, ng0);
    t49 = (t0 + 2248);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    t52 = ((char*)((ng4)));
    memset(t53, 0, 8);
    xsi_vlog_unsigned_add(t53, 32, t51, 5, t52, 32);
    t54 = (t0 + 2248);
    xsi_vlogvar_assign_value(t54, t53, 0, 0, 5);
    goto LAB20;

LAB23:    t10 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(47, ng0);
    t17 = ((char*)((ng3)));
    t18 = (t0 + 1928);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 1);
    goto LAB27;

}


extern void work_m_00000000001773818224_0944788044_init()
{
	static char *pe[] = {(void *)Always_36_0};
	xsi_register_didat("work_m_00000000001773818224_0944788044", "isim/ALUTest_isim_beh.exe.sim/work/m_00000000001773818224_0944788044.didat");
	xsi_register_executes(pe);
}
