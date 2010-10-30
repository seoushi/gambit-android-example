#ifdef ___LINKER_INFO
; File: "fib.c", produced by Gambit-C v4.6.0
(
406000
" fib"
(" fib")
(
)
(
)
(
" fib"
"fib"
)
(
"c-fib"
)
(
"+"
"-"
"="
)
 #f
)
#else
#define ___VERSION 406000
#define ___MODULE_NAME " fib"
#define ___LINKER_ID ____20_fib
#define ___MH_PROC ___H__20_fib
#define ___SCRIPT_LINE 0
#define ___GLO_COUNT 6
#define ___SUP_COUNT 3
#define ___LBL_COUNT 35
#include "gambit.h"

___NEED_GLO(___G__20_fib)
___NEED_GLO(___G__2b_)
___NEED_GLO(___G__2d_)
___NEED_GLO(___G__3d_)
___NEED_GLO(___G_c_2d_fib)
___NEED_GLO(___G_fib)

___BEGIN_GLO
___DEF_GLO(0," fib")
___DEF_GLO(1,"c-fib")
___DEF_GLO(2,"fib")
___DEF_GLO(3,"+")
___DEF_GLO(4,"-")
___DEF_GLO(5,"=")
___END_GLO

#define ___C_LBL_fib 33

 int fib ___P((___S32 ___arg1),(___arg1)
___S32 ___arg1;)
{
#define ___NARGS 1
___BEGIN_SFUN(___MLBL(___C_LBL_fib),int ___result)
___BEGIN_SFUN_ARG(1,___ARG1)
___BEGIN_SFUN_S32_TO_SCMOBJ(___arg1,___ARG1,1)
___BEGIN_SFUN_BODY
___SFUN_ARG(1,___ARG1)
___SFUN_CALL
___BEGIN_SFUN_SCMOBJ_TO_INT(___SFUN_RESULT,___result)
___SFUN_SET_RESULT
___END_SFUN_SCMOBJ_TO_INT(___SFUN_RESULT,___result)
___END_SFUN_BODY
___END_SFUN_S32_TO_SCMOBJ(___arg1,___ARG1,1)
___END_SFUN_ARG(1)
___SFUN_ERROR
___BEGIN_SFUN_SCMOBJ_TO_INT(___SFUN_RESULT,___result)
___SFUN_SET_RESULT
___END_SFUN_SCMOBJ_TO_INT(___SFUN_RESULT,___result)
___END_SFUN
return ___result;
#undef ___NARGS
}


#undef ___MD_ALL
#define ___MD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4 ___D_F64(___F64V1) ___D_F64( \
___F64V2) ___D_F64(___F64V3)
#undef ___MR_ALL
#define ___MR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___MW_ALL
#define ___MW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_M_COD
___BEGIN_M_HLBL
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0__20_fib)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_fib)
___DEF_M_HLBL(___L1_fib)
___DEF_M_HLBL(___L2_fib)
___DEF_M_HLBL(___L3_fib)
___DEF_M_HLBL(___L4_fib)
___DEF_M_HLBL(___L5_fib)
___DEF_M_HLBL(___L6_fib)
___DEF_M_HLBL(___L7_fib)
___DEF_M_HLBL(___L8_fib)
___DEF_M_HLBL(___L9_fib)
___DEF_M_HLBL(___L10_fib)
___DEF_M_HLBL(___L11_fib)
___DEF_M_HLBL(___L12_fib)
___DEF_M_HLBL(___L13_fib)
___DEF_M_HLBL(___L14_fib)
___DEF_M_HLBL(___L15_fib)
___DEF_M_HLBL(___L16_fib)
___DEF_M_HLBL(___L17_fib)
___DEF_M_HLBL(___L18_fib)
___DEF_M_HLBL(___L19_fib)
___DEF_M_HLBL(___L20_fib)
___DEF_M_HLBL(___L21_fib)
___DEF_M_HLBL(___L22_fib)
___DEF_M_HLBL(___L23_fib)
___DEF_M_HLBL(___L24_fib)
___DEF_M_HLBL(___L25_fib)
___DEF_M_HLBL(___L26_fib)
___DEF_M_HLBL(___L27_fib)
___DEF_M_HLBL(___L28_fib)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_c_2d_fib)
___DEF_M_HLBL(___L1_c_2d_fib)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H__20_fib
#undef ___PH_LBL0
#define ___PH_LBL0 1
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0__20_fib)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0__20_fib)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L__20_fib)
   ___SET_GLO(2,___G_fib,___PRC(3))
   ___SET_GLO(1,___G_c_2d_fib,___PRC(33))
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_fib
#undef ___PH_LBL0
#define ___PH_LBL0 3
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4 ___D_F64(___F64V1) ___D_F64( \
___F64V2) ___D_F64(___F64V3)
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_fib)
___DEF_P_HLBL(___L1_fib)
___DEF_P_HLBL(___L2_fib)
___DEF_P_HLBL(___L3_fib)
___DEF_P_HLBL(___L4_fib)
___DEF_P_HLBL(___L5_fib)
___DEF_P_HLBL(___L6_fib)
___DEF_P_HLBL(___L7_fib)
___DEF_P_HLBL(___L8_fib)
___DEF_P_HLBL(___L9_fib)
___DEF_P_HLBL(___L10_fib)
___DEF_P_HLBL(___L11_fib)
___DEF_P_HLBL(___L12_fib)
___DEF_P_HLBL(___L13_fib)
___DEF_P_HLBL(___L14_fib)
___DEF_P_HLBL(___L15_fib)
___DEF_P_HLBL(___L16_fib)
___DEF_P_HLBL(___L17_fib)
___DEF_P_HLBL(___L18_fib)
___DEF_P_HLBL(___L19_fib)
___DEF_P_HLBL(___L20_fib)
___DEF_P_HLBL(___L21_fib)
___DEF_P_HLBL(___L22_fib)
___DEF_P_HLBL(___L23_fib)
___DEF_P_HLBL(___L24_fib)
___DEF_P_HLBL(___L25_fib)
___DEF_P_HLBL(___L26_fib)
___DEF_P_HLBL(___L27_fib)
___DEF_P_HLBL(___L28_fib)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_fib)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_fib)
   ___SET_R3(___FIX(1L))
   ___SET_R2(___FIX(0L))
   ___POLL(1)
___DEF_SLBL(1,___L1_fib)
   ___GOTO(___L32_fib)
___DEF_SLBL(2,___L2_fib)
   ___SET_R3(___STK(-5))
   ___SET_R0(___STK(-7))
   ___ADJFP(-6)
___DEF_GLBL(___L29_fib)
   ___SET_STK(-1,___R1)
   ___IF(___NOT(___EQP(___GLO(3,___G__2b_),___PRM(3,___G__2b_))))
   ___GOTO(___L69_fib)
   ___END_IF
   ___IF(___NOT(___FIXNUMP(___R3)))
   ___GOTO(___L30_fib)
   ___END_IF
   ___IF(___FIXNUMP(___STK(0)))
   ___GOTO(___L68_fib)
   ___END_IF
___DEF_GLBL(___L30_fib)
   ___IF(___NOT(___FLONUMP(___R3)))
   ___GOTO(___L69_fib)
   ___END_IF
   ___IF(___NOT(___FLONUMP(___STK(0))))
   ___GOTO(___L69_fib)
   ___END_IF
   ___SET_F64(___F64V1,___F64UNBOX(___STK(0)))
   ___SET_F64(___F64V2,___F64UNBOX(___R3))
   ___SET_F64(___F64V3,___F64ADD(___F64V1,___F64V2))
   ___SET_R1(___F64BOX(___F64V3))
   ___CHECK_HEAP(3,4096)
___DEF_SLBL(3,___L3_fib)
___DEF_GLBL(___L31_fib)
   ___SET_STK(0,___R3)
   ___SET_R3(___R1)
   ___SET_R2(___STK(0))
   ___SET_R1(___STK(-1))
   ___ADJFP(-2)
   ___POLL(4)
___DEF_SLBL(4,___L4_fib)
___DEF_GLBL(___L32_fib)
   ___IF(___NOT(___EQP(___GLO(5,___G__3d_),___PRM(5,___G__3d_))))
   ___GOTO(___L67_fib)
   ___END_IF
   ___IF(___NOT(___FIXNUMP(___R1)))
   ___GOTO(___L67_fib)
   ___END_IF
   ___IF(___NOT(___FIXEQ(___R1,___FIX(0L))))
   ___GOTO(___L34_fib)
   ___END_IF
___DEF_GLBL(___L33_fib)
   ___SET_R1(___R2)
   ___POLL(5)
___DEF_SLBL(5,___L5_fib)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L34_fib)
   ___IF(___EQP(___GLO(4,___G__2d_),___PRM(4,___G__2d_)))
   ___GOTO(___L35_fib)
   ___END_IF
   ___GOTO(___L36_fib)
___DEF_SLBL(6,___L6_fib)
   ___IF(___NOT(___FALSEP(___R1)))
   ___GOTO(___L66_fib)
   ___END_IF
   ___SET_R3(___STK(-4))
   ___SET_R2(___STK(-5))
   ___SET_R1(___STK(-6))
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
   ___IF(___NOT(___EQP(___GLO(4,___G__2d_),___PRM(4,___G__2d_))))
   ___GOTO(___L36_fib)
   ___END_IF
___DEF_GLBL(___L35_fib)
   ___IF(___NOT(___FIXNUMP(___R1)))
   ___GOTO(___L36_fib)
   ___END_IF
   ___SET_R4(___FIXSUBP(___R1,___FIX(1L)))
   ___IF(___NOT(___FALSEP(___R4)))
   ___GOTO(___L38_fib)
   ___END_IF
___DEF_GLBL(___L36_fib)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R3)
   ___SET_R2(___FIX(1L))
   ___SET_R0(___LBL(8))
   ___ADJFP(8)
   ___POLL(7)
___DEF_SLBL(7,___L7_fib)
___DEF_GLBL(___L37_fib)
   ___JUMPGLOSAFE(___SET_NARGS(2),4,___G__2d_)
___DEF_SLBL(8,___L8_fib)
   ___SET_R4(___R1)
   ___SET_R3(___STK(-5))
   ___SET_R2(___STK(-6))
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
___DEF_GLBL(___L38_fib)
   ___SET_STK(1,___R3)
   ___ADJFP(1)
   ___IF(___NOT(___EQP(___GLO(3,___G__2b_),___PRM(3,___G__2b_))))
   ___GOTO(___L40_fib)
   ___END_IF
   ___IF(___NOT(___FIXNUMP(___R3)))
   ___GOTO(___L39_fib)
   ___END_IF
   ___IF(___NOT(___FIXNUMP(___R2)))
   ___GOTO(___L39_fib)
   ___END_IF
   ___SET_R1(___FIXADDP(___R2,___R3))
   ___IF(___FALSEP(___R1))
   ___GOTO(___L40_fib)
   ___END_IF
   ___GOTO(___L64_fib)
___DEF_GLBL(___L39_fib)
   ___IF(___NOT(___FLONUMP(___R3)))
   ___GOTO(___L40_fib)
   ___END_IF
   ___IF(___FLONUMP(___R2))
   ___GOTO(___L41_fib)
   ___END_IF
___DEF_GLBL(___L40_fib)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R4)
   ___SET_STK(3,___R2)
   ___SET_R2(___R3)
   ___SET_R1(___STK(3))
   ___SET_R0(___LBL(10))
   ___ADJFP(7)
   ___POLL(9)
___DEF_SLBL(9,___L9_fib)
   ___JUMPGLOSAFE(___SET_NARGS(2),3,___G__2b_)
___DEF_SLBL(10,___L10_fib)
   ___SET_R4(___STK(-5))
   ___SET_R0(___STK(-6))
   ___ADJFP(-7)
   ___IF(___EQP(___GLO(5,___G__3d_),___PRM(5,___G__3d_)))
   ___GOTO(___L42_fib)
   ___END_IF
   ___GOTO(___L65_fib)
___DEF_GLBL(___L41_fib)
   ___SET_F64(___F64V1,___F64UNBOX(___R2))
   ___SET_F64(___F64V2,___F64UNBOX(___R3))
   ___SET_F64(___F64V3,___F64ADD(___F64V1,___F64V2))
   ___SET_R1(___F64BOX(___F64V3))
   ___CHECK_HEAP(11,4096)
___DEF_SLBL(11,___L11_fib)
   ___IF(___NOT(___EQP(___GLO(5,___G__3d_),___PRM(5,___G__3d_))))
   ___GOTO(___L65_fib)
   ___END_IF
___DEF_GLBL(___L42_fib)
   ___IF(___NOT(___FIXNUMP(___R4)))
   ___GOTO(___L65_fib)
   ___END_IF
   ___IF(___NOT(___FIXEQ(___R4,___FIX(0L))))
   ___GOTO(___L44_fib)
   ___END_IF
___DEF_GLBL(___L43_fib)
   ___SET_R1(___STK(0))
   ___POLL(12)
___DEF_SLBL(12,___L12_fib)
   ___ADJFP(-1)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L44_fib)
   ___IF(___EQP(___GLO(4,___G__2d_),___PRM(4,___G__2d_)))
   ___GOTO(___L45_fib)
   ___END_IF
   ___GOTO(___L46_fib)
___DEF_SLBL(13,___L13_fib)
   ___IF(___NOT(___FALSEP(___R1)))
   ___GOTO(___L63_fib)
   ___END_IF
   ___SET_R4(___STK(-4))
   ___SET_R1(___STK(-5))
   ___SET_R0(___STK(-6))
   ___ADJFP(-7)
   ___IF(___NOT(___EQP(___GLO(4,___G__2d_),___PRM(4,___G__2d_))))
   ___GOTO(___L46_fib)
   ___END_IF
___DEF_GLBL(___L45_fib)
   ___IF(___NOT(___FIXNUMP(___R4)))
   ___GOTO(___L46_fib)
   ___END_IF
   ___SET_R2(___FIXSUBP(___R4,___FIX(1L)))
   ___IF(___NOT(___FALSEP(___R2)))
   ___GOTO(___L47_fib)
   ___END_IF
___DEF_GLBL(___L46_fib)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R1(___R4)
   ___SET_R2(___FIX(1L))
   ___SET_R0(___LBL(15))
   ___ADJFP(7)
   ___POLL(14)
___DEF_SLBL(14,___L14_fib)
   ___JUMPGLOSAFE(___SET_NARGS(2),4,___G__2d_)
___DEF_SLBL(15,___L15_fib)
   ___SET_R2(___R1)
   ___SET_R1(___STK(-5))
   ___SET_R0(___STK(-6))
   ___ADJFP(-7)
___DEF_GLBL(___L47_fib)
   ___SET_STK(1,___R1)
   ___ADJFP(1)
   ___IF(___NOT(___EQP(___GLO(3,___G__2b_),___PRM(3,___G__2b_))))
   ___GOTO(___L48_fib)
   ___END_IF
   ___IF(___NOT(___FIXNUMP(___R1)))
   ___GOTO(___L49_fib)
   ___END_IF
   ___IF(___NOT(___FIXNUMP(___STK(-1))))
   ___GOTO(___L49_fib)
   ___END_IF
   ___SET_R3(___FIXADDP(___STK(-1),___R1))
   ___IF(___NOT(___FALSEP(___R3)))
   ___GOTO(___L60_fib)
   ___END_IF
___DEF_GLBL(___L48_fib)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R2)
   ___SET_R2(___R1)
   ___SET_R1(___STK(-1))
   ___SET_R0(___LBL(24))
   ___ADJFP(6)
   ___POLL(16)
___DEF_SLBL(16,___L16_fib)
   ___GOTO(___L51_fib)
___DEF_GLBL(___L49_fib)
   ___IF(___NOT(___FLONUMP(___R1)))
   ___GOTO(___L50_fib)
   ___END_IF
   ___IF(___FLONUMP(___STK(-1)))
   ___GOTO(___L52_fib)
   ___END_IF
___DEF_GLBL(___L50_fib)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R2)
   ___SET_R2(___R1)
   ___SET_R1(___STK(-1))
   ___SET_R0(___LBL(19))
   ___ADJFP(6)
   ___POLL(17)
___DEF_SLBL(17,___L17_fib)
___DEF_GLBL(___L51_fib)
   ___JUMPGLOSAFE(___SET_NARGS(2),3,___G__2b_)
___DEF_GLBL(___L52_fib)
   ___SET_F64(___F64V1,___F64UNBOX(___STK(-1)))
   ___SET_F64(___F64V2,___F64UNBOX(___R1))
   ___SET_F64(___F64V3,___F64ADD(___F64V1,___F64V2))
   ___SET_R1(___F64BOX(___F64V3))
   ___CHECK_HEAP(18,4096)
___DEF_SLBL(18,___L18_fib)
   ___GOTO(___L53_fib)
___DEF_SLBL(19,___L19_fib)
   ___SET_R2(___STK(-4))
   ___SET_R0(___STK(-5))
   ___ADJFP(-6)
___DEF_GLBL(___L53_fib)
   ___SET_R3(___R1)
   ___IF(___NOT(___EQP(___GLO(5,___G__3d_),___PRM(5,___G__3d_))))
   ___GOTO(___L61_fib)
   ___END_IF
___DEF_GLBL(___L54_fib)
   ___IF(___NOT(___FIXNUMP(___R2)))
   ___GOTO(___L61_fib)
   ___END_IF
   ___IF(___NOT(___FIXEQ(___R2,___FIX(0L))))
   ___GOTO(___L56_fib)
   ___END_IF
___DEF_GLBL(___L55_fib)
   ___SET_R1(___STK(0))
   ___POLL(20)
___DEF_SLBL(20,___L20_fib)
   ___ADJFP(-2)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L56_fib)
   ___IF(___EQP(___GLO(4,___G__2d_),___PRM(4,___G__2d_)))
   ___GOTO(___L57_fib)
   ___END_IF
   ___GOTO(___L58_fib)
___DEF_SLBL(21,___L21_fib)
   ___IF(___NOT(___FALSEP(___R1)))
   ___GOTO(___L59_fib)
   ___END_IF
   ___SET_R3(___STK(-4))
   ___SET_R2(___STK(-5))
   ___SET_R0(___STK(-7))
   ___ADJFP(-6)
   ___IF(___NOT(___EQP(___GLO(4,___G__2d_),___PRM(4,___G__2d_))))
   ___GOTO(___L58_fib)
   ___END_IF
___DEF_GLBL(___L57_fib)
   ___IF(___NOT(___FIXNUMP(___R2)))
   ___GOTO(___L58_fib)
   ___END_IF
   ___SET_R1(___FIXSUBP(___R2,___FIX(1L)))
   ___IF(___NOT(___FALSEP(___R1)))
   ___GOTO(___L29_fib)
   ___END_IF
___DEF_GLBL(___L58_fib)
   ___SET_STK(-1,___R0)
   ___SET_STK(1,___R3)
   ___SET_R1(___R2)
   ___SET_R2(___FIX(1L))
   ___SET_R0(___LBL(2))
   ___ADJFP(6)
   ___POLL(22)
___DEF_SLBL(22,___L22_fib)
   ___GOTO(___L37_fib)
___DEF_GLBL(___L59_fib)
   ___SET_R0(___STK(-7))
   ___ADJFP(-6)
   ___GOTO(___L55_fib)
___DEF_GLBL(___L60_fib)
   ___IF(___EQP(___GLO(5,___G__3d_),___PRM(5,___G__3d_)))
   ___GOTO(___L54_fib)
   ___END_IF
___DEF_GLBL(___L61_fib)
   ___SET_STK(-1,___R0)
   ___SET_STK(1,___R2)
   ___SET_STK(2,___R3)
   ___SET_R1(___R2)
   ___SET_R2(___FIX(0L))
   ___SET_R0(___LBL(21))
   ___ADJFP(6)
   ___POLL(23)
___DEF_SLBL(23,___L23_fib)
___DEF_GLBL(___L62_fib)
   ___JUMPGLOSAFE(___SET_NARGS(2),5,___G__3d_)
___DEF_SLBL(24,___L24_fib)
   ___SET_R3(___R1)
   ___SET_R2(___STK(-4))
   ___SET_R0(___STK(-5))
   ___ADJFP(-6)
   ___IF(___EQP(___GLO(5,___G__3d_),___PRM(5,___G__3d_)))
   ___GOTO(___L54_fib)
   ___END_IF
   ___GOTO(___L61_fib)
___DEF_GLBL(___L63_fib)
   ___SET_R0(___STK(-6))
   ___ADJFP(-7)
   ___GOTO(___L43_fib)
___DEF_GLBL(___L64_fib)
   ___IF(___EQP(___GLO(5,___G__3d_),___PRM(5,___G__3d_)))
   ___GOTO(___L42_fib)
   ___END_IF
___DEF_GLBL(___L65_fib)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R4)
   ___SET_R1(___R4)
   ___SET_R2(___FIX(0L))
   ___SET_R0(___LBL(13))
   ___ADJFP(7)
   ___POLL(25)
___DEF_SLBL(25,___L25_fib)
   ___JUMPGLOSAFE(___SET_NARGS(2),5,___G__3d_)
___DEF_GLBL(___L66_fib)
   ___SET_R2(___STK(-5))
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
   ___GOTO(___L33_fib)
___DEF_GLBL(___L67_fib)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_R2(___FIX(0L))
   ___SET_R0(___LBL(6))
   ___ADJFP(8)
   ___POLL(26)
___DEF_SLBL(26,___L26_fib)
   ___GOTO(___L62_fib)
___DEF_GLBL(___L68_fib)
   ___SET_R1(___FIXADDP(___STK(0),___R3))
   ___IF(___NOT(___FALSEP(___R1)))
   ___GOTO(___L31_fib)
   ___END_IF
___DEF_GLBL(___L69_fib)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R3)
   ___SET_R2(___R3)
   ___SET_R1(___STK(0))
   ___SET_R0(___LBL(28))
   ___ADJFP(6)
   ___POLL(27)
___DEF_SLBL(27,___L27_fib)
   ___JUMPGLOSAFE(___SET_NARGS(2),3,___G__2b_)
___DEF_SLBL(28,___L28_fib)
   ___SET_R3(___STK(-4))
   ___SET_R0(___STK(-5))
   ___ADJFP(-6)
   ___GOTO(___L31_fib)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_c_2d_fib
#undef ___PH_LBL0
#define ___PH_LBL0 33
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R4 ___D_F64(___F64V1) ___D_F64(___F64V2) ___D_F64(___F64V3)
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_c_2d_fib)
___DEF_P_HLBL(___L1_c_2d_fib)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_c_2d_fib)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_c_2d_fib)
   ___POLL(1)
___DEF_SLBL(1,___L1_c_2d_fib)
   ___JUMPGLOSAFE(___SET_NARGS(1),2,___G_fib)
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H__20_fib," fib",___REF_FAL,1,0)
,___DEF_LBL_PROC(___H__20_fib,0,0)
,___DEF_LBL_INTRO(___H_fib,0,___REF_FAL,29,0)
,___DEF_LBL_PROC(___H_fib,1,0)
,___DEF_LBL_RET(___H_fib,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_fib,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_fib,___IFD(___RETI,2,4,0x3f1L))
,___DEF_LBL_RET(___H_fib,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_fib,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_fib,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_fib,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_fib,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_fib,___IFD(___RETI,8,1,0x3f07L))
,___DEF_LBL_RET(___H_fib,___IFD(___RETN,5,1,0x7L))
,___DEF_LBL_RET(___H_fib,___IFD(___RETI,1,4,0x3f1L))
,___DEF_LBL_RET(___H_fib,___IFD(___RETI,1,4,0x3f0L))
,___DEF_LBL_RET(___H_fib,___IFD(___RETN,5,1,0xfL))
,___DEF_LBL_RET(___H_fib,___IFD(___RETI,8,1,0x3f07L))
,___DEF_LBL_RET(___H_fib,___IFD(___RETN,5,1,0x7L))
,___DEF_LBL_RET(___H_fib,___IFD(___RETI,8,2,0x3f0eL))
,___DEF_LBL_RET(___H_fib,___IFD(___RETI,8,2,0x3f0eL))
,___DEF_LBL_RET(___H_fib,___IFD(___RETI,2,4,0x3f2L))
,___DEF_LBL_RET(___H_fib,___IFD(___RETN,5,2,0xeL))
,___DEF_LBL_RET(___H_fib,___IFD(___RETI,2,4,0x3f0L))
,___DEF_LBL_RET(___H_fib,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_fib,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_fib,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_fib,___IFD(___RETN,5,2,0xeL))
,___DEF_LBL_RET(___H_fib,___IFD(___RETI,8,1,0x3f0fL))
,___DEF_LBL_RET(___H_fib,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_fib,___IFD(___RETI,8,2,0x3f0dL))
,___DEF_LBL_RET(___H_fib,___IFD(___RETN,5,2,0xdL))
,___DEF_LBL_INTRO(___H_c_2d_fib,0,___REF_FAL,2,fib)
,___DEF_LBL_PROC(___H_c_2d_fib,1,0)
,___DEF_LBL_RET(___H_c_2d_fib,___IFD(___RETI,0,0,0x3fL))
___END_LBL

___BEGIN_MOD1
___DEF_PRM(0,___G__20_fib,1)
___END_MOD1

___BEGIN_MOD2
___END_MOD2

#endif
