/*
 * Code for class WEL_SCREEN_DC
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1433_15302(EIF_REFERENCE);
extern void F1433_15303(EIF_REFERENCE);
extern void F1433_15304(EIF_REFERENCE);
extern void F1433_15305(EIF_REFERENCE);
extern void EIF_Minit1433(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_SCREEN_DC}.get */
void F1433_15302 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "get";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	
	RTEAA(l_feature_name, 1432, Current, 1, 0, 21916);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1432, Current, 21916);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = *(EIF_POINTER *)(Current + RTWA(12361, dtype));
	if ((EIF_BOOLEAN)(tp1 == loc1)) {
		RTHOOK(2);
		RTDBGAA(Current, dtype, 12361, 0x40000000, 1); /* item */
		up1 = loc1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12698, dtype))(Current, up1x)).it_p);
		*(EIF_POINTER *)(Current + RTWA(12361, dtype)) = (EIF_POINTER) tp1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
}

/* {WEL_SCREEN_DC}.release */
void F1433_15303 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "release";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	
	RTEAA(l_feature_name, 1432, Current, 1, 0, 21917);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1432, Current, 21917);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = *(EIF_POINTER *)(Current + RTWA(12361, dtype));
	if ((EIF_BOOLEAN)(tp1 != loc1)) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(12530, dtype))(Current);
		RTHOOK(3);
		up1 = loc1;
		tp1 = *(EIF_POINTER *)(Current + RTWA(12361, dtype));
		up2 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12699, dtype))(Current, up1x, up2x);
		RTHOOK(4);
		RTDBGAA(Current, dtype, 12361, 0x40000000, 1); /* item */
		*(EIF_POINTER *)(Current + RTWA(12361, dtype)) = (EIF_POINTER) loc1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
}

/* {WEL_SCREEN_DC}.quick_release */
void F1433_15304 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "quick_release";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	
	RTEAA(l_feature_name, 1432, Current, 1, 0, 21918);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1432, Current, 21918);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11652, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("no_selected_pen", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12465, dtype))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("no_selected_brush", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12466, dtype))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("no_selected_bitmap", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12470, dtype))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(5);
		RTCT("no_selected_font", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12469, dtype))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(6);
	tp1 = *(EIF_POINTER *)(Current + RTWA(12361, dtype));
	if ((EIF_BOOLEAN)(tp1 != loc1)) {
		RTHOOK(7);
		up1 = loc1;
		tp1 = *(EIF_POINTER *)(Current + RTWA(12361, dtype));
		up2 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12699, dtype))(Current, up1x, up2x);
		RTHOOK(8);
		RTDBGAA(Current, dtype, 12361, 0x40000000, 1); /* item */
		*(EIF_POINTER *)(Current + RTWA(12361, dtype)) = (EIF_POINTER) loc1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("not_exists", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11652, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
}

/* {WEL_SCREEN_DC}.destroy_item */
void F1433_15305 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "destroy_item";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	
	RTEAA(l_feature_name, 1432, Current, 1, 0, 21919);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1432, Current, 21919);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12363, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11652, dtype))(Current)).it_b);
		RTTE(tb1, label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current + RTWA(12361, dtype));
	if ((EIF_BOOLEAN)(tp1 != loc1)) {
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(12530, dtype))(Current);
		RTHOOK(5);
		up1 = loc1;
		tp1 = *(EIF_POINTER *)(Current + RTWA(12361, dtype));
		up2 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12699, dtype))(Current, up1x, up2x);
		RTHOOK(6);
		RTDBGAA(Current, dtype, 12361, 0x40000000, 1); /* item */
		*(EIF_POINTER *)(Current + RTWA(12361, dtype)) = (EIF_POINTER) loc1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("destroyed", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11652, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
}

void EIF_Minit1433 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
