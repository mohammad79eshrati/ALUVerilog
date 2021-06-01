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
static const char *ng0 = "D:/verilog/ALU/LogicCalculation_floatingPoint/Bigger_Number.v";
static int ng1[] = {0, 0};
static int ng2[] = {5, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {1, 0};
static int ng5[] = {2, 0};
static unsigned int ng6[] = {0U, 0U};
static int ng7[] = {27, 0};



static void Always_35_0(char *t0)
{
    char t4[8];
    char t5[8];
    char t9[8];
    char t53[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
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

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 3648);
    *((int *)t2) = 1;
    t3 = (t0 + 3360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t6 = (t0 + 1208U);
    t7 = *((char **)t6);
    t6 = (t0 + 1368U);
    t8 = *((char **)t6);
    memset(t9, 0, 8);
    t6 = (t7 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB7;

LAB6:    t10 = (t8 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t7) > *((unsigned int *)t8))
        goto LAB8;

LAB9:    memset(t5, 0, 8);
    t12 = (t9 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t9);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t12) != 0)
        goto LAB13;

LAB14:    t19 = (t5 + 4);
    t20 = *((unsigned int *)t5);
    t21 = *((unsigned int *)t19);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB15;

LAB16:    t25 = *((unsigned int *)t5);
    t26 = (~(t25));
    t27 = *((unsigned int *)t19);
    t28 = (t26 || t27);
    if (t28 > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t19) > 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t5) > 0)
        goto LAB21;

LAB22:    memcpy(t4, t29, 8);

LAB23:    t23 = (t0 + 2088);
    xsi_vlogvar_assign_value(t23, t4, 0, 0, 5);
    xsi_set_current_line(39, ng0);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB24:    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t8 = (t6 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB26;

LAB25:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB26;

LAB29:    if (*((unsigned int *)t6) < *((unsigned int *)t7))
        goto LAB27;

LAB28:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_mod(t4, 32, t6, 6, t7, 32);
    t8 = ((char*)((ng6)));
    memset(t5, 0, 8);
    t10 = (t4 + 4);
    t11 = (t8 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t10);
    t17 = *((unsigned int *)t11);
    t20 = (t16 ^ t17);
    t21 = (t15 | t20);
    t22 = *((unsigned int *)t10);
    t25 = *((unsigned int *)t11);
    t26 = (t22 | t25);
    t27 = (~(t26));
    t28 = (t21 & t27);
    if (t28 != 0)
        goto LAB43;

LAB40:    if (t26 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t5) = 1;

LAB43:    t18 = (t5 + 4);
    t37 = *((unsigned int *)t18);
    t38 = (~(t37));
    t39 = *((unsigned int *)t5);
    t40 = (t39 & t38);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB46:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng7)));
    t8 = (t0 + 2088);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memset(t9, 0, 8);
    t12 = (t9 + 4);
    t18 = (t11 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (t13 >> 4);
    t15 = (t14 & 1);
    *((unsigned int *)t9) = t15;
    t16 = *((unsigned int *)t18);
    t17 = (t16 >> 4);
    t20 = (t17 & 1);
    *((unsigned int *)t12) = t20;
    xsi_vlog_mul_concat(t5, 27, 1, t7, 1U, t9, 1);
    xsi_vlogtype_concat(t4, 32, 32, 2U, t5, 27, t6, 5);
    t19 = (t0 + 1768);
    xsi_vlogvar_assign_value(t19, t4, 0, 0, 32);
    goto LAB2;

LAB7:    t11 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB11:    *((unsigned int *)t5) = 1;
    goto LAB14;

LAB13:    t18 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB14;

LAB15:    t23 = (t0 + 1208U);
    t24 = *((char **)t23);
    goto LAB16;

LAB17:    t23 = (t0 + 1368U);
    t29 = *((char **)t23);
    goto LAB18;

LAB19:    xsi_vlog_unsigned_bit_combine(t4, 5, t24, 5, t29, 5);
    goto LAB23;

LAB21:    memcpy(t4, t24, 8);
    goto LAB23;

LAB26:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB28;

LAB27:    *((unsigned int *)t4) = 1;
    goto LAB28;

LAB30:    xsi_set_current_line(40, ng0);

LAB32:    xsi_set_current_line(41, ng0);
    t18 = (t0 + 2088);
    t19 = (t18 + 56U);
    t23 = *((char **)t19);
    t24 = (t0 + 2088);
    t29 = (t24 + 72U);
    t30 = *((char **)t29);
    t31 = (t0 + 2408);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    xsi_vlog_generic_get_index_select_value(t5, 1, t23, t30, 2, t33, 5, 2);
    t34 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t35 = (t5 + 4);
    t36 = (t34 + 4);
    t20 = *((unsigned int *)t5);
    t21 = *((unsigned int *)t34);
    t22 = (t20 ^ t21);
    t25 = *((unsigned int *)t35);
    t26 = *((unsigned int *)t36);
    t27 = (t25 ^ t26);
    t28 = (t22 | t27);
    t37 = *((unsigned int *)t35);
    t38 = *((unsigned int *)t36);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t28 & t40);
    if (t41 != 0)
        goto LAB36;

LAB33:    if (t39 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t9) = 1;

LAB36:    t43 = (t9 + 4);
    t44 = *((unsigned int *)t43);
    t45 = (~(t44));
    t46 = *((unsigned int *)t9);
    t47 = (t46 & t45);
    t48 = (t47 != 0);
    if (t48 > 0)
        goto LAB37;

LAB38:
LAB39:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t6, 5, t7, 32);
    t8 = (t0 + 2408);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 5);
    goto LAB24;

LAB35:    t42 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(42, ng0);
    t49 = (t0 + 2248);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    t52 = ((char*)((ng4)));
    memset(t53, 0, 8);
    xsi_vlog_unsigned_add(t53, 32, t51, 6, t52, 32);
    t54 = (t0 + 2248);
    xsi_vlogvar_assign_value(t54, t53, 0, 0, 6);
    goto LAB39;

LAB42:    t12 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB43;

LAB44:    xsi_set_current_line(47, ng0);
    t19 = ((char*)((ng3)));
    t23 = (t0 + 1928);
    xsi_vlogvar_assign_value(t23, t19, 0, 0, 1);
    goto LAB46;

}


extern void work_m_00000000001773818224_1748041260_init()
{
	static char *pe[] = {(void *)Always_35_0};
	xsi_register_didat("work_m_00000000001773818224_1748041260", "isim/ALUTest_isim_beh.exe.sim/work/m_00000000001773818224_1748041260.didat");
	xsi_register_executes(pe);
}
