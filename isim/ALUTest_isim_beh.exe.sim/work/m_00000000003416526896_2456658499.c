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
static const char *ng0 = "D:/verilog/ALU/LogicCalculation_floatingPoint/XOR.v";
static int ng1[] = {0, 0};
static int ng2[] = {5, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {1, 0};
static int ng5[] = {2, 0};
static unsigned int ng6[] = {0U, 0U};
static int ng7[] = {27, 0};



static void Always_34_0(char *t0)
{
    char t7[8];
    char t24[8];
    char t32[8];
    char t53[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
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

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 3648);
    *((int *)t2) = 1;
    t3 = (t0 + 3360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1368U);
    t6 = *((char **)t4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    *((unsigned int *)t7) = t10;
    t4 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB6;

LAB7:
LAB8:    t20 = (t0 + 2088);
    xsi_vlogvar_assign_value(t20, t7, 0, 0, 5);
    xsi_set_current_line(38, ng0);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB9:    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB11;

LAB10:    t11 = (t5 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB11;

LAB14:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB12;

LAB13:    t20 = (t7 + 4);
    t8 = *((unsigned int *)t20);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t13 = (t10 & t9);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_mod(t7, 32, t4, 6, t5, 32);
    t6 = ((char*)((ng6)));
    memset(t24, 0, 8);
    t11 = (t7 + 4);
    t12 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    t13 = *((unsigned int *)t11);
    t14 = *((unsigned int *)t12);
    t15 = (t13 ^ t14);
    t16 = (t10 | t15);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    t19 = (t17 | t18);
    t35 = (~(t19));
    t36 = (t16 & t35);
    if (t36 != 0)
        goto LAB27;

LAB24:    if (t19 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t24) = 1;

LAB27:    t21 = (t24 + 4);
    t37 = *((unsigned int *)t21);
    t38 = (~(t37));
    t39 = *((unsigned int *)t24);
    t40 = (t39 & t38);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB30:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    t6 = (t0 + 2088);
    t11 = (t6 + 56U);
    t12 = *((char **)t11);
    memset(t32, 0, 8);
    t20 = (t32 + 4);
    t21 = (t12 + 4);
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 4);
    t10 = (t9 & 1);
    *((unsigned int *)t32) = t10;
    t13 = *((unsigned int *)t21);
    t14 = (t13 >> 4);
    t15 = (t14 & 1);
    *((unsigned int *)t20) = t15;
    xsi_vlog_mul_concat(t24, 27, 1, t5, 1U, t32, 1);
    xsi_vlogtype_concat(t7, 32, 32, 2U, t24, 27, t4, 5);
    t22 = (t0 + 1928);
    xsi_vlogvar_assign_value(t22, t7, 0, 0, 32);
    goto LAB2;

LAB6:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t7) = (t18 | t19);
    goto LAB8;

LAB11:    t12 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB13;

LAB12:    *((unsigned int *)t7) = 1;
    goto LAB13;

LAB15:    xsi_set_current_line(40, ng0);
    t21 = (t0 + 2088);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t25 = (t0 + 2088);
    t26 = (t25 + 72U);
    t27 = *((char **)t26);
    t28 = (t0 + 2408);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_generic_get_index_select_value(t24, 1, t23, t27, 2, t30, 5, 2);
    t31 = ((char*)((ng3)));
    memset(t32, 0, 8);
    t33 = (t24 + 4);
    t34 = (t31 + 4);
    t15 = *((unsigned int *)t24);
    t16 = *((unsigned int *)t31);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t33);
    t19 = *((unsigned int *)t34);
    t35 = (t18 ^ t19);
    t36 = (t17 | t35);
    t37 = *((unsigned int *)t33);
    t38 = *((unsigned int *)t34);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t36 & t40);
    if (t41 != 0)
        goto LAB20;

LAB17:    if (t39 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t32) = 1;

LAB20:    t43 = (t32 + 4);
    t44 = *((unsigned int *)t43);
    t45 = (~(t44));
    t46 = *((unsigned int *)t32);
    t47 = (t46 & t45);
    t48 = (t47 != 0);
    if (t48 > 0)
        goto LAB21;

LAB22:
LAB23:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t4, 5, t5, 32);
    t6 = (t0 + 2408);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 5);
    goto LAB9;

LAB19:    t42 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(41, ng0);
    t49 = (t0 + 2248);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    t52 = ((char*)((ng4)));
    memset(t53, 0, 8);
    xsi_vlog_unsigned_add(t53, 32, t51, 6, t52, 32);
    t54 = (t0 + 2248);
    xsi_vlogvar_assign_value(t54, t53, 0, 0, 6);
    goto LAB23;

LAB26:    t20 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB27;

LAB28:    xsi_set_current_line(45, ng0);
    t22 = ((char*)((ng3)));
    t23 = (t0 + 1768);
    xsi_vlogvar_assign_value(t23, t22, 0, 0, 1);
    goto LAB30;

}


extern void work_m_00000000003416526896_2456658499_init()
{
	static char *pe[] = {(void *)Always_34_0};
	xsi_register_didat("work_m_00000000003416526896_2456658499", "isim/ALUTest_isim_beh.exe.sim/work/m_00000000003416526896_2456658499.didat");
	xsi_register_executes(pe);
}
