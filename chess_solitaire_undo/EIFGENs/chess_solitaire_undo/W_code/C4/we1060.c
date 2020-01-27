/*
 * Code for class WEL_UDM_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1060_10189(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1060_10190(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1060_10191(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1060_10192(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1060_10193(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1060_10194(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1060_10195(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1060_10196(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1060_10197(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1060_10198(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1060_10199(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1060_10200(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1060_10201(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1060_10202(EIF_REFERENCE);
extern void EIF_Minit1060(void);

#ifdef __cplusplus
}
#endif

#include "cctrl.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_UDM_CONSTANTS}.udm_getaccel */
EIF_TYPED_VALUE F1060_10189 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_getaccel";
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
	
	RTEAA(l_feature_name, 1059, Current, 0, 0, 16540);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1059, Current, 16540);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_GETACCEL;
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

/* {WEL_UDM_CONSTANTS}.udm_getbase */
EIF_TYPED_VALUE F1060_10190 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_getbase";
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
	
	RTEAA(l_feature_name, 1059, Current, 0, 0, 16541);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1059, Current, 16541);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_GETBASE;
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

/* {WEL_UDM_CONSTANTS}.udm_getbuddy */
EIF_TYPED_VALUE F1060_10191 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_getbuddy";
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
	
	RTEAA(l_feature_name, 1059, Current, 0, 0, 16542);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1059, Current, 16542);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_GETBUDDY;
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

/* {WEL_UDM_CONSTANTS}.udm_getpos */
EIF_TYPED_VALUE F1060_10192 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_getpos";
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
	
	RTEAA(l_feature_name, 1059, Current, 0, 0, 16543);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1059, Current, 16543);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_GETPOS;
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

/* {WEL_UDM_CONSTANTS}.udm_getrange */
EIF_TYPED_VALUE F1060_10193 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_getrange";
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
	
	RTEAA(l_feature_name, 1059, Current, 0, 0, 16544);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1059, Current, 16544);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_GETRANGE;
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

/* {WEL_UDM_CONSTANTS}.udm_getrange32 */
EIF_TYPED_VALUE F1060_10194 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_getrange32";
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
	
	RTEAA(l_feature_name, 1059, Current, 0, 0, 16545);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1059, Current, 16545);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_GETRANGE32;
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

/* {WEL_UDM_CONSTANTS}.udm_setaccel */
EIF_TYPED_VALUE F1060_10195 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_setaccel";
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
	
	RTEAA(l_feature_name, 1059, Current, 0, 0, 16546);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1059, Current, 16546);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_SETACCEL;
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

/* {WEL_UDM_CONSTANTS}.udm_setbase */
EIF_TYPED_VALUE F1060_10196 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_setbase";
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
	
	RTEAA(l_feature_name, 1059, Current, 0, 0, 16547);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1059, Current, 16547);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_SETBASE;
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

/* {WEL_UDM_CONSTANTS}.udm_setbuddy */
EIF_TYPED_VALUE F1060_10197 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_setbuddy";
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
	
	RTEAA(l_feature_name, 1059, Current, 0, 0, 16548);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1059, Current, 16548);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_SETBUDDY;
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

/* {WEL_UDM_CONSTANTS}.udm_setpos */
EIF_TYPED_VALUE F1060_10198 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_setpos";
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
	
	RTEAA(l_feature_name, 1059, Current, 0, 0, 16549);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1059, Current, 16549);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_SETPOS;
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

/* {WEL_UDM_CONSTANTS}.udm_setrange */
EIF_TYPED_VALUE F1060_10199 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_setrange";
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
	
	RTEAA(l_feature_name, 1059, Current, 0, 0, 16536);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1059, Current, 16536);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_SETRANGE;
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

/* {WEL_UDM_CONSTANTS}.udm_setrange32 */
EIF_TYPED_VALUE F1060_10200 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1135L);
	return r;
}

/* {WEL_UDM_CONSTANTS}.udm_getpos32 */
EIF_TYPED_VALUE F1060_10201 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1138L);
	return r;
}

/* {WEL_UDM_CONSTANTS}.udm_setpos32 */
EIF_TYPED_VALUE F1060_10202 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1137L);
	return r;
}

void EIF_Minit1060 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
