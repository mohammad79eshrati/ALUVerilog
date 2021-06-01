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
static const char *ng0 = "D:/verilog/LogicCalculation_floatingPoint/Floating_Point.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {5, 0};
static int ng5[] = {1, 0};
static int ng6[] = {127, 0};
static int ng7[] = {22, 0};
static int ng8[] = {23, 0};
static int ng9[] = {10, 0};
static int ng10[] = {31, 0};
static int ng11[] = {2, 0};



static void Initial_41_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(41, ng0);

LAB2:    xsi_set_current_line(43, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(45, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_50_1(char *t0)
{
    char t6[8];
    char t28[8];
    char t34[8];
    char t48[8];
    char t49[8];
    char t72[8];
    char t79[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
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
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    int t59;
    int t60;
    unsigned int t61;
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
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    unsigned int t87;
    int t88;

LAB0:    t1 = (t0 + 4376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 4696);
    *((int *)t2) = 1;
    t3 = (t0 + 4408);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(50, ng0);

LAB5:    xsi_set_current_line(52, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 2888);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t4);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t2);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t2);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB9;

LAB6:    if (t16 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB12:    xsi_set_current_line(62, ng0);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB13:    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t19 = (t6 + 4);
    t7 = *((unsigned int *)t19);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t19 = (t0 + 3048);
    xsi_vlogvar_assign_value(t19, t6, 0, 0, 8);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t5, 32);
    t19 = (t0 + 2248);
    xsi_vlogvar_assign_value(t19, t6, 0, 0, 32);
    xsi_set_current_line(84, ng0);

LAB25:    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_signed_greatereq(t6, 32, t4, 32, t5, 32);
    memset(t28, 0, 8);
    t19 = (t6 + 4);
    t7 = *((unsigned int *)t19);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t19) != 0)
        goto LAB28;

LAB29:    t26 = (t28 + 4);
    t12 = *((unsigned int *)t28);
    t13 = *((unsigned int *)t26);
    t14 = (t12 || t13);
    if (t14 > 0)
        goto LAB30;

LAB31:    memcpy(t49, t28, 8);

LAB32:    t45 = (t49 + 4);
    t67 = *((unsigned int *)t45);
    t68 = (~(t67));
    t69 = *((unsigned int *)t49);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);
    xsi_set_current_line(99, ng0);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB45:    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_unary_minus(t6, 32, t5, 32);
    memset(t28, 0, 8);
    xsi_vlog_signed_greater(t28, 32, t4, 32, t6, 32);
    t19 = (t28 + 4);
    t7 = *((unsigned int *)t19);
    t8 = (~(t7));
    t9 = *((unsigned int *)t28);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3048);
    t19 = (t5 + 56U);
    t20 = *((char **)t19);
    t26 = (t0 + 2888);
    t27 = (t26 + 56U);
    t29 = *((char **)t27);
    xsi_vlogtype_concat(t6, 32, 32, 3U, t29, 1, t20, 8, t4, 23);
    t30 = (t0 + 1928);
    xsi_vlogvar_assign_value(t30, t6, 0, 0, 32);
    xsi_set_current_line(120, ng0);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB70:    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t19 = (t6 + 4);
    t7 = *((unsigned int *)t19);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB71;

LAB72:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng11)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_mod(t6, 32, t4, 32, t5, 32);
    t19 = ((char*)((ng2)));
    memset(t28, 0, 8);
    t20 = (t6 + 4);
    t26 = (t19 + 4);
    t7 = *((unsigned int *)t6);
    t8 = *((unsigned int *)t19);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t20);
    t11 = *((unsigned int *)t26);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t20);
    t15 = *((unsigned int *)t26);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB83;

LAB80:    if (t16 != 0)
        goto LAB82;

LAB81:    *((unsigned int *)t28) = 1;

LAB83:    t29 = (t28 + 4);
    t21 = *((unsigned int *)t29);
    t22 = (~(t21));
    t23 = *((unsigned int *)t28);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB84;

LAB85:    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB86:    goto LAB2;

LAB8:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(56, ng0);
    t26 = ((char*)((ng3)));
    t27 = (t0 + 1768);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 1);
    goto LAB12;

LAB14:    xsi_set_current_line(62, ng0);

LAB16:    xsi_set_current_line(63, ng0);
    t20 = (t0 + 1048U);
    t26 = *((char **)t20);
    t20 = (t0 + 1008U);
    t27 = (t20 + 72U);
    t29 = *((char **)t27);
    t30 = (t0 + 2088);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    xsi_vlog_generic_get_index_select_value(t28, 1, t26, t29, 2, t32, 32, 1);
    t33 = ((char*)((ng3)));
    memset(t34, 0, 8);
    t35 = (t28 + 4);
    t36 = (t33 + 4);
    t12 = *((unsigned int *)t28);
    t13 = *((unsigned int *)t33);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t35);
    t16 = *((unsigned int *)t36);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t21 = *((unsigned int *)t35);
    t22 = *((unsigned int *)t36);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t18 & t24);
    if (t25 != 0)
        goto LAB20;

LAB17:    if (t23 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t34) = 1;

LAB20:    t38 = (t34 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t34);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB21;

LAB22:
LAB23:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t19 = (t0 + 2088);
    xsi_vlogvar_assign_value(t19, t6, 0, 0, 32);
    goto LAB13;

LAB19:    t37 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(63, ng0);

LAB24:    xsi_set_current_line(64, ng0);
    t44 = (t0 + 2088);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = (t0 + 2408);
    xsi_vlogvar_assign_value(t47, t46, 0, 0, 32);
    goto LAB23;

LAB26:    *((unsigned int *)t28) = 1;
    goto LAB29;

LAB28:    t20 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB29;

LAB30:    t27 = (t0 + 2088);
    t29 = (t27 + 56U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng8)));
    memset(t34, 0, 8);
    xsi_vlog_signed_less(t34, 32, t30, 32, t31, 32);
    memset(t48, 0, 8);
    t32 = (t34 + 4);
    t15 = *((unsigned int *)t32);
    t16 = (~(t15));
    t17 = *((unsigned int *)t34);
    t18 = (t17 & t16);
    t21 = (t18 & 1U);
    if (t21 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t32) != 0)
        goto LAB35;

LAB36:    t22 = *((unsigned int *)t28);
    t23 = *((unsigned int *)t48);
    t24 = (t22 & t23);
    *((unsigned int *)t49) = t24;
    t35 = (t28 + 4);
    t36 = (t48 + 4);
    t37 = (t49 + 4);
    t25 = *((unsigned int *)t35);
    t39 = *((unsigned int *)t36);
    t40 = (t25 | t39);
    *((unsigned int *)t37) = t40;
    t41 = *((unsigned int *)t37);
    t42 = (t41 != 0);
    if (t42 == 1)
        goto LAB37;

LAB38:
LAB39:    goto LAB32;

LAB33:    *((unsigned int *)t48) = 1;
    goto LAB36;

LAB35:    t33 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB36;

LAB37:    t43 = *((unsigned int *)t49);
    t50 = *((unsigned int *)t37);
    *((unsigned int *)t49) = (t43 | t50);
    t38 = (t28 + 4);
    t44 = (t48 + 4);
    t51 = *((unsigned int *)t28);
    t52 = (~(t51));
    t53 = *((unsigned int *)t38);
    t54 = (~(t53));
    t55 = *((unsigned int *)t48);
    t56 = (~(t55));
    t57 = *((unsigned int *)t44);
    t58 = (~(t57));
    t59 = (t52 & t54);
    t60 = (t56 & t58);
    t61 = (~(t59));
    t62 = (~(t60));
    t63 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t63 & t61);
    t64 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t64 & t62);
    t65 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t65 & t61);
    t66 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t66 & t62);
    goto LAB39;

LAB40:    xsi_set_current_line(85, ng0);

LAB42:    xsi_set_current_line(87, ng0);
    t46 = (t0 + 1048U);
    t47 = *((char **)t46);
    t46 = (t0 + 1008U);
    t73 = (t46 + 72U);
    t74 = *((char **)t73);
    t75 = (t0 + 2248);
    t76 = (t75 + 56U);
    t77 = *((char **)t76);
    xsi_vlog_generic_get_index_select_value(t72, 1, t47, t74, 2, t77, 32, 1);
    t78 = (t0 + 3208);
    t80 = (t0 + 3208);
    t81 = (t80 + 72U);
    t82 = *((char **)t81);
    t83 = (t0 + 2088);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    xsi_vlog_generic_convert_bit_index(t79, t82, 2, t85, 32, 1);
    t86 = (t79 + 4);
    t87 = *((unsigned int *)t86);
    t88 = (!(t87));
    if (t88 == 1)
        goto LAB43;

LAB44:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t5, 32);
    t19 = (t0 + 2088);
    xsi_vlogvar_assign_value(t19, t6, 0, 0, 32);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t5, 32);
    t19 = (t0 + 2248);
    xsi_vlogvar_assign_value(t19, t6, 0, 0, 32);
    goto LAB25;

LAB43:    xsi_vlogvar_assign_value(t78, t72, 0, *((unsigned int *)t79), 1);
    goto LAB44;

LAB46:    xsi_set_current_line(99, ng0);

LAB48:    xsi_set_current_line(103, ng0);
    t20 = (t0 + 2568);
    t26 = (t20 + 56U);
    t27 = *((char **)t26);
    t29 = ((char*)((ng9)));
    memset(t34, 0, 8);
    t30 = (t27 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB50;

LAB49:    t31 = (t29 + 4);
    if (*((unsigned int *)t31) != 0)
        goto LAB50;

LAB53:    if (*((unsigned int *)t27) < *((unsigned int *)t29))
        goto LAB52;

LAB51:    *((unsigned int *)t34) = 1;

LAB52:    t33 = (t34 + 4);
    t12 = *((unsigned int *)t33);
    t13 = (~(t12));
    t14 = *((unsigned int *)t34);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t6, 0, 8);
    t19 = (t4 + 4);
    if (*((unsigned int *)t19) != 0)
        goto LAB61;

LAB60:    t20 = (t5 + 4);
    if (*((unsigned int *)t20) != 0)
        goto LAB61;

LAB64:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB62;

LAB63:    t27 = (t6 + 4);
    t7 = *((unsigned int *)t27);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB65;

LAB66:
LAB67:
LAB56:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t5, 32);
    t19 = (t0 + 2248);
    xsi_vlogvar_assign_value(t19, t6, 0, 0, 32);
    goto LAB45;

LAB50:    t32 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB52;

LAB54:    xsi_set_current_line(103, ng0);

LAB57:    xsi_set_current_line(104, ng0);
    t35 = (t0 + 2568);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng9)));
    memset(t48, 0, 8);
    xsi_vlog_unsigned_mod(t48, 32, t37, 5, t38, 32);
    t44 = (t0 + 2568);
    xsi_vlogvar_assign_value(t44, t48, 0, 0, 5);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3208);
    t4 = (t0 + 3208);
    t5 = (t4 + 72U);
    t19 = *((char **)t5);
    t20 = (t0 + 2248);
    t26 = (t20 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_generic_convert_bit_index(t6, t19, 2, t27, 32, 1);
    t29 = (t6 + 4);
    t7 = *((unsigned int *)t29);
    t59 = (!(t7));
    if (t59 == 1)
        goto LAB58;

LAB59:    goto LAB56;

LAB58:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t6), 1);
    goto LAB59;

LAB61:    t26 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB63;

LAB62:    *((unsigned int *)t6) = 1;
    goto LAB63;

LAB65:    xsi_set_current_line(111, ng0);
    t29 = ((char*)((ng2)));
    t30 = (t0 + 3208);
    t31 = (t0 + 3208);
    t32 = (t31 + 72U);
    t33 = *((char **)t32);
    t35 = (t0 + 2248);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    xsi_vlog_generic_convert_bit_index(t28, t33, 2, t37, 32, 1);
    t38 = (t28 + 4);
    t12 = *((unsigned int *)t38);
    t59 = (!(t12));
    if (t59 == 1)
        goto LAB68;

LAB69:    goto LAB67;

LAB68:    xsi_vlogvar_assign_value(t30, t29, 0, *((unsigned int *)t28), 1);
    goto LAB69;

LAB71:    xsi_set_current_line(121, ng0);
    t20 = (t0 + 1928);
    t26 = (t20 + 56U);
    t27 = *((char **)t26);
    t29 = (t0 + 1928);
    t30 = (t29 + 72U);
    t31 = *((char **)t30);
    t32 = (t0 + 2088);
    t33 = (t32 + 56U);
    t35 = *((char **)t33);
    xsi_vlog_generic_get_index_select_value(t28, 1, t27, t31, 2, t35, 32, 1);
    t36 = ((char*)((ng3)));
    memset(t34, 0, 8);
    t37 = (t28 + 4);
    t38 = (t36 + 4);
    t12 = *((unsigned int *)t28);
    t13 = *((unsigned int *)t36);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t37);
    t16 = *((unsigned int *)t38);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t21 = *((unsigned int *)t37);
    t22 = *((unsigned int *)t38);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t18 & t24);
    if (t25 != 0)
        goto LAB76;

LAB73:    if (t23 != 0)
        goto LAB75;

LAB74:    *((unsigned int *)t34) = 1;

LAB76:    t45 = (t34 + 4);
    t39 = *((unsigned int *)t45);
    t40 = (~(t39));
    t41 = *((unsigned int *)t34);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB77;

LAB78:
LAB79:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t19 = (t0 + 2088);
    xsi_vlogvar_assign_value(t19, t6, 0, 0, 32);
    goto LAB70;

LAB75:    t44 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB76;

LAB77:    xsi_set_current_line(122, ng0);
    t46 = (t0 + 2248);
    t47 = (t46 + 56U);
    t73 = *((char **)t47);
    t74 = ((char*)((ng5)));
    memset(t48, 0, 8);
    xsi_vlog_signed_add(t48, 32, t73, 32, t74, 32);
    t75 = (t0 + 2248);
    xsi_vlogvar_assign_value(t75, t48, 0, 0, 32);
    goto LAB79;

LAB82:    t27 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB83;

LAB84:    xsi_set_current_line(126, ng0);
    t30 = ((char*)((ng3)));
    t31 = (t0 + 1608);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    goto LAB86;

}


extern void work_m_00000000000395677045_3837358851_init()
{
	static char *pe[] = {(void *)Initial_41_0,(void *)Always_50_1};
	xsi_register_didat("work_m_00000000000395677045_3837358851", "isim/test23_isim_beh.exe.sim/work/m_00000000000395677045_3837358851.didat");
	xsi_register_executes(pe);
}
