/*
 * Code for class WEL_TMPF_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1101_10652(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1101_10653(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1101_10654(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1101_10655(EIF_REFERENCE);
extern void EIF_Minit1101(void);

#ifdef __cplusplus
}
#endif

#include "wel.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_TMPF_CONSTANTS}.tmpf_fixed_pitch */
EIF_TYPED_VALUE F1101_10652 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tmpf_fixed_pitch";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1100, Current, 0, 0, 16998);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1100, Current, 16998);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TMPF_FIXED_PITCH;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_TMPF_CONSTANTS}.tmpf_vector */
EIF_TYPED_VALUE F1101_10653 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tmpf_vector";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1100, Current, 0, 0, 16999);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1100, Current, 16999);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TMPF_VECTOR;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_TMPF_CONSTANTS}.tmpf_device */
EIF_TYPED_VALUE F1101_10654 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tmpf_device";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1100, Current, 0, 0, 17000);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1100, Current, 17000);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TMPF_DEVICE;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_TMPF_CONSTANTS}.tmpf_truetype */
EIF_TYPED_VALUE F1101_10655 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tmpf_truetype";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1100, Current, 0, 0, 17001);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1100, Current, 17001);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TMPF_TRUETYPE;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

void EIF_Minit1101 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
