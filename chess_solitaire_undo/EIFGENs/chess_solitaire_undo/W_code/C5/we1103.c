/*
 * Code for class WEL_DRAWING_ROUTINES_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1103_10662(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1103_10663(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1103_10664(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1103_10665(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1103_10666(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1103_10667(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1103_10668(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1103_10669(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1103_10670(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1103_10671(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1103_10672(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1103_10673(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1103_10674(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1103_10675(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1103_10676(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1103_10677(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1103_10678(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1103_10679(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1103_10680(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1103_10681(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1103_10682(EIF_REFERENCE);
extern void EIF_Minit1103(void);

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

/* {WEL_DRAWING_ROUTINES_CONSTANTS}.edge_bump */
EIF_TYPED_VALUE F1103_10662 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "edge_bump";
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
	
	RTEAA(l_feature_name, 1102, Current, 0, 0, 17027);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1102, Current, 17027);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) EDGE_BUMP;
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

/* {WEL_DRAWING_ROUTINES_CONSTANTS}.edge_etched */
EIF_TYPED_VALUE F1103_10663 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "edge_etched";
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
	
	RTEAA(l_feature_name, 1102, Current, 0, 0, 17028);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1102, Current, 17028);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) EDGE_ETCHED;
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

/* {WEL_DRAWING_ROUTINES_CONSTANTS}.edge_raised */
EIF_TYPED_VALUE F1103_10664 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "edge_raised";
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
	
	RTEAA(l_feature_name, 1102, Current, 0, 0, 17008);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1102, Current, 17008);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) EDGE_RAISED;
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

/* {WEL_DRAWING_ROUTINES_CONSTANTS}.edge_sunken */
EIF_TYPED_VALUE F1103_10665 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "edge_sunken";
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
	
	RTEAA(l_feature_name, 1102, Current, 0, 0, 17009);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1102, Current, 17009);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) EDGE_SUNKEN;
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

/* {WEL_DRAWING_ROUTINES_CONSTANTS}.bdr_raisedouter */
EIF_TYPED_VALUE F1103_10666 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	return r;
}

/* {WEL_DRAWING_ROUTINES_CONSTANTS}.bdr_sunkenouter */
EIF_TYPED_VALUE F1103_10667 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	return r;
}

/* {WEL_DRAWING_ROUTINES_CONSTANTS}.bdr_raisedinner */
EIF_TYPED_VALUE F1103_10668 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	return r;
}

/* {WEL_DRAWING_ROUTINES_CONSTANTS}.bdr_sunkeninner */
EIF_TYPED_VALUE F1103_10669 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	return r;
}

/* {WEL_DRAWING_ROUTINES_CONSTANTS}.bf_rect */
EIF_TYPED_VALUE F1103_10670 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "bf_rect";
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
	
	RTEAA(l_feature_name, 1102, Current, 0, 0, 17014);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1102, Current, 17014);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) BF_RECT;
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

/* {WEL_DRAWING_ROUTINES_CONSTANTS}.bf_adjust */
EIF_TYPED_VALUE F1103_10671 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "bf_adjust";
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
	
	RTEAA(l_feature_name, 1102, Current, 0, 0, 17015);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1102, Current, 17015);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) BF_ADJUST;
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

/* {WEL_DRAWING_ROUTINES_CONSTANTS}.bf_flat */
EIF_TYPED_VALUE F1103_10672 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "bf_flat";
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
	
	RTEAA(l_feature_name, 1102, Current, 0, 0, 17016);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1102, Current, 17016);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) BF_FLAT;
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

/* {WEL_DRAWING_ROUTINES_CONSTANTS}.bf_soft */
EIF_TYPED_VALUE F1103_10673 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "bf_soft";
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
	
	RTEAA(l_feature_name, 1102, Current, 0, 0, 17017);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1102, Current, 17017);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) BF_SOFT;
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

/* {WEL_DRAWING_ROUTINES_CONSTANTS}.dst_bitmap */
EIF_TYPED_VALUE F1103_10674 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "dst_bitmap";
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
	
	RTEAA(l_feature_name, 1102, Current, 0, 0, 17018);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1102, Current, 17018);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) DST_BITMAP;
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

/* {WEL_DRAWING_ROUTINES_CONSTANTS}.dst_complex */
EIF_TYPED_VALUE F1103_10675 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "dst_complex";
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
	
	RTEAA(l_feature_name, 1102, Current, 0, 0, 17019);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1102, Current, 17019);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) DST_COMPLEX;
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

/* {WEL_DRAWING_ROUTINES_CONSTANTS}.dst_icon */
EIF_TYPED_VALUE F1103_10676 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "dst_icon";
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
	
	RTEAA(l_feature_name, 1102, Current, 0, 0, 17020);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1102, Current, 17020);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) DST_ICON;
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

/* {WEL_DRAWING_ROUTINES_CONSTANTS}.dst_prefixtext */
EIF_TYPED_VALUE F1103_10677 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "dst_prefixtext";
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
	
	RTEAA(l_feature_name, 1102, Current, 0, 0, 17021);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1102, Current, 17021);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) DST_PREFIXTEXT;
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

/* {WEL_DRAWING_ROUTINES_CONSTANTS}.dst_text */
EIF_TYPED_VALUE F1103_10678 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "dst_text";
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
	
	RTEAA(l_feature_name, 1102, Current, 0, 0, 17022);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1102, Current, 17022);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) DST_TEXT;
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

/* {WEL_DRAWING_ROUTINES_CONSTANTS}.dss_normal */
EIF_TYPED_VALUE F1103_10679 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "dss_normal";
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
	
	RTEAA(l_feature_name, 1102, Current, 0, 0, 17023);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1102, Current, 17023);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) DSS_NORMAL;
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

/* {WEL_DRAWING_ROUTINES_CONSTANTS}.dss_union */
EIF_TYPED_VALUE F1103_10680 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "dss_union";
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
	
	RTEAA(l_feature_name, 1102, Current, 0, 0, 17024);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1102, Current, 17024);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) DSS_UNION;
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

/* {WEL_DRAWING_ROUTINES_CONSTANTS}.dss_disabled */
EIF_TYPED_VALUE F1103_10681 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "dss_disabled";
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
	
	RTEAA(l_feature_name, 1102, Current, 0, 0, 17025);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1102, Current, 17025);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) DSS_DISABLED;
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

/* {WEL_DRAWING_ROUTINES_CONSTANTS}.dss_mono */
EIF_TYPED_VALUE F1103_10682 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "dss_mono";
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
	
	RTEAA(l_feature_name, 1102, Current, 0, 0, 17026);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1102, Current, 17026);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) DSS_MONO;
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

void EIF_Minit1103 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
