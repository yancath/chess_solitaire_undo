/*
 * Code for class EV_PIXMAP_IMP_STATE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1281_13269(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1281_13272(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1281_13273(EIF_REFERENCE);
extern void F1281_13274(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1281_13275(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1281_13276(EIF_REFERENCE);
extern void F1281_13277(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1281_13280(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1281_13281(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1281_13282(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1281_13283(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1281_13284(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1281_13285(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1281_13286(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE F1281_13287_body(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1281_13287(EIF_REFERENCE);
extern void EIF_Minit1281(void);

#ifdef __cplusplus
}
#endif

#include "load_pixmap.h"
#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_PIXMAP_IMP_STATE}.save_to_named_path */
void F1281_13269 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "save_to_named_path";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_POINTER loc11 = (EIF_POINTER) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ui4_5x = {{0}, SK_INT32};
#define ui4_5 ui4_5x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(15);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,loc9);
	RTLR(5,Current);
	RTLR(6,tr1);
	RTLR(7,loc3);
	RTLR(8,loc4);
	RTLR(9,ur1);
	RTLR(10,ur2);
	RTLR(11,loc5);
	RTLR(12,loc10);
	RTLR(13,loc6);
	RTLR(14,ur3);
	RTLIU(15);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_POINTER, &loc11);
	
	RTEAA(l_feature_name, 1280, Current, 11, 2, 19510);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1280, Current, 19510);
	RTCC(arg1, 1280, l_feature_name, 1, eif_new_type(1209, 0x01), 0x01);
	RTCC(arg2, 1280, l_feature_name, 2, eif_new_type(185, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_format_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_filename_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(1, 0xF80004BA, 0, 0); /* loc1 */
	loc1 = RTCCL(arg1);
	loc1 = RTRV(eif_new_type(1210, 0x00), loc1);
	RTHOOK(4);
	RTDBGAL(2, 0xF80004BB, 0, 0); /* loc2 */
	loc2 = RTCCL(arg1);
	loc2 = RTRV(eif_new_type(1211, 0x00), loc2);
	RTHOOK(5);
	RTDBGAL(9, 0xF8000532, 0, 0); /* loc9 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10961, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc9 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(7);
		RTDBGAL(3, 0xF8000592, 0, 0); /* loc3 */
		tr1 = RTLN(eif_new_type(1426, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(12670, Dtype(tr1)))(tr1);
		RTNHOOK(7,1);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(8);
		RTDBGAL(4, 0xF800059E, 0, 0); /* loc4 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10951, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc4 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(9);
		ur1 = RTCCL(loc4);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12523, "select_bitmap", loc3))(loc3, ur1x);
		RTHOOK(10);
		ur1 = RTCCL(loc4);
		ur2 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(12577, "save_bitmap_into", loc3))(loc3, ur1x, ur2x);
		RTHOOK(11);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12529, "unselect_bitmap", loc3))(loc3);
		RTHOOK(12);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11659, "delete", loc3))(loc3);
		RTHOOK(13);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11656, "decrement_reference", loc4))(loc4);
	} else {
		RTHOOK(14);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTHOOK(15);
			RTDBGAL(5, 0xF8000534, 0, 0); /* loc5 */
			tr1 = RTLN(eif_new_type(1332, 0x01).id);
			ur1 = RTCCL(arg2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(11789, Dtype(tr1)))(tr1, ur1x);
			RTNHOOK(15,1);
			loc5 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(16);
			RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
			ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVA(10409, "scale_height", loc2));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
				RTHOOK(17);
				ti4_1 = *(EIF_INTEGER_32 *)(loc9 + RTVA(11760, "height", loc9));
			} else {
				RTHOOK(18);
				ti4_2 = *(EIF_INTEGER_32 *)(loc2 + RTVA(10409, "scale_height", loc2));
				ti4_1 = ti4_2;
			}
			loc8 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(19);
			RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
			ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVA(10408, "scale_width", loc2));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
				RTHOOK(20);
				ti4_1 = *(EIF_INTEGER_32 *)(loc9 + RTVA(11761, "width", loc9));
			} else {
				RTHOOK(21);
				ti4_2 = *(EIF_INTEGER_32 *)(loc2 + RTVA(10408, "scale_width", loc2));
				ti4_1 = ti4_2;
			}
			loc7 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(22);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1619, 123))(Current)).it_b);
			if (tb1) {
				RTHOOK(23);
				RTDBGAL(10, 0xF80000AB, 0, 0); /* loc10 */
				tr1 = RTLN(eif_new_type(171, 0x01).id);
				ur1 = RTCCL(loc9);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3277, Dtype(tr1)))(tr1, ur1x);
				RTNHOOK(23,1);
				loc10 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(24);
				RTDBGAL(11, 0x40000000, 1, 0); /* loc11 */
				tp1 = *(EIF_POINTER *)(loc10 + RTVA(3282, "item", loc10));
				loc11 = (EIF_POINTER) tp1;
			} else {
				RTHOOK(25);
				RTDBGAL(6, 0xF8000000, 0, 0); /* loc6 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2658, "to_c", loc9))(loc9)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc6 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(26);
				RTDBGAL(11, 0x40000000, 1, 0); /* loc11 */
				loc11 = (EIF_POINTER) loc6;
			}
			RTHOOK(27);
			up1 = loc11;
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2826, "item", loc5))(loc5)).it_p);
			up2 = tp1;
			ti4_1 = *(EIF_INTEGER_32 *)(loc9 + RTVA(11761, "width", loc9));
			ui4_1 = ti4_1;
			ti4_2 = *(EIF_INTEGER_32 *)(loc9 + RTVA(11760, "height", loc9));
			ui4_2 = ti4_2;
			ui4_3 = loc7;
			ui4_4 = loc8;
			ti4_3 = *(EIF_INTEGER_32 *)(loc2 + RTVA(10410, "color_mode", loc2));
			ui4_5 = ti4_3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(10974, dtype))(Current, up1x, up2x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x);
		}
	}
	RTHOOK(28);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	ur3 = RTCCL(loc9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(10959, dtype))(Current, ur1x, ur2x, ur3x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(29);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(15);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef arg2
#undef arg1
}

/* {EV_PIXMAP_IMP_STATE}.copy_events_from_other */
void F1281_13272 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "copy_events_from_other";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(20);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLR(6,loc4);
	RTLR(7,loc5);
	RTLR(8,loc6);
	RTLR(9,loc7);
	RTLR(10,loc8);
	RTLR(11,loc9);
	RTLR(12,loc10);
	RTLR(13,loc11);
	RTLR(14,loc12);
	RTLR(15,loc13);
	RTLR(16,loc14);
	RTLR(17,loc15);
	RTLR(18,loc16);
	RTLR(19,loc17);
	RTLIU(20);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_REF, &loc12);
	RTLU(SK_REF, &loc13);
	RTLU(SK_REF, &loc14);
	RTLU(SK_REF, &loc15);
	RTLU(SK_REF, &loc16);
	RTLU(SK_REF, &loc17);
	
	RTEAA(l_feature_name, 1280, Current, 17, 1, 19511);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1280, Current, 19511);
	RTCC(arg1, 1280, l_feature_name, 1, eif_new_type(1280, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9945, "expose_actions_internal", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		RTDBGAA(Current, dtype, 9945, 0xF8000541, 0); /* expose_actions_internal */
		tr1 = RTCCL(loc1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(9945, dtype)) = (EIF_REFERENCE) tr1;
	}
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10942, "focus_in_actions_internal", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = RTCCL(tr1);
	if (EIF_TEST(loc2)) {
		RTHOOK(4);
		RTDBGAA(Current, dtype, 10942, 0xF8000549, 0); /* focus_in_actions_internal */
		tr1 = RTCCL(loc2);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(10942, dtype)) = (EIF_REFERENCE) tr1;
	}
	RTHOOK(5);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10944, "focus_out_actions_internal", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = RTCCL(tr1);
	if (EIF_TEST(loc3)) {
		RTHOOK(6);
		RTDBGAA(Current, dtype, 10944, 0xF8000549, 0); /* focus_out_actions_internal */
		tr1 = RTCCL(loc3);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(10944, dtype)) = (EIF_REFERENCE) tr1;
	}
	RTHOOK(7);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10936, "key_press_actions_internal", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc4 = RTCCL(tr1);
	if (EIF_TEST(loc4)) {
		RTHOOK(8);
		RTDBGAA(Current, dtype, 10936, 0xF8000542, 0); /* key_press_actions_internal */
		tr1 = RTCCL(loc4);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(10936, dtype)) = (EIF_REFERENCE) tr1;
	}
	RTHOOK(9);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10938, "key_press_string_actions_internal", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc5 = RTCCL(tr1);
	if (EIF_TEST(loc5)) {
		RTHOOK(10);
		RTDBGAA(Current, dtype, 10938, 0xF8000544, 0); /* key_press_string_actions_internal */
		tr1 = RTCCL(loc5);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(10938, dtype)) = (EIF_REFERENCE) tr1;
	}
	RTHOOK(11);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10940, "key_release_actions_internal", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc6 = RTCCL(tr1);
	if (EIF_TEST(loc6)) {
		RTHOOK(12);
		RTDBGAA(Current, dtype, 10940, 0xF8000542, 0); /* key_release_actions_internal */
		tr1 = RTCCL(loc6);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(10940, dtype)) = (EIF_REFERENCE) tr1;
	}
	RTHOOK(13);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10924, "pointer_button_press_actions_internal", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc7 = RTCCL(tr1);
	if (EIF_TEST(loc7)) {
		RTHOOK(14);
		RTDBGAA(Current, dtype, 10924, 0xF800054A, 0); /* pointer_button_press_actions_internal */
		tr1 = RTCCL(loc7);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(10924, dtype)) = (EIF_REFERENCE) tr1;
	}
	RTHOOK(15);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10928, "pointer_button_release_actions_internal", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc8 = RTCCL(tr1);
	if (EIF_TEST(loc8)) {
		RTHOOK(16);
		RTDBGAA(Current, dtype, 10928, 0xF800054A, 0); /* pointer_button_release_actions_internal */
		tr1 = RTCCL(loc8);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(10928, dtype)) = (EIF_REFERENCE) tr1;
	}
	RTHOOK(17);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10926, "pointer_double_press_actions_internal", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc9 = RTCCL(tr1);
	if (EIF_TEST(loc9)) {
		RTHOOK(18);
		RTDBGAA(Current, dtype, 10926, 0xF800054A, 0); /* pointer_double_press_actions_internal */
		tr1 = RTCCL(loc9);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(10926, dtype)) = (EIF_REFERENCE) tr1;
	}
	RTHOOK(19);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10930, "pointer_enter_actions_internal", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc10 = RTCCL(tr1);
	if (EIF_TEST(loc10)) {
		RTHOOK(20);
		RTDBGAA(Current, dtype, 10930, 0xF8000549, 0); /* pointer_enter_actions_internal */
		tr1 = RTCCL(loc10);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(10930, dtype)) = (EIF_REFERENCE) tr1;
	}
	RTHOOK(21);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10934, "pointer_leave_actions_internal", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc11 = RTCCL(tr1);
	if (EIF_TEST(loc11)) {
		RTHOOK(22);
		RTDBGAA(Current, dtype, 10934, 0xF8000549, 0); /* pointer_leave_actions_internal */
		tr1 = RTCCL(loc11);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(10934, dtype)) = (EIF_REFERENCE) tr1;
	}
	RTHOOK(23);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10922, "pointer_motion_actions_internal", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc12 = RTCCL(tr1);
	if (EIF_TEST(loc12)) {
		RTHOOK(24);
		RTDBGAA(Current, dtype, 10922, 0xF8000546, 0); /* pointer_motion_actions_internal */
		tr1 = RTCCL(loc12);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(10922, dtype)) = (EIF_REFERENCE) tr1;
	}
	RTHOOK(25);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10947, "resize_actions_internal", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc13 = RTCCL(tr1);
	if (EIF_TEST(loc13)) {
		RTHOOK(26);
		RTDBGAA(Current, dtype, 10947, 0xF8000541, 0); /* resize_actions_internal */
		tr1 = RTCCL(loc13);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(10947, dtype)) = (EIF_REFERENCE) tr1;
	}
	RTHOOK(27);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10439, "conforming_pick_actions_internal", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc14 = RTCCL(tr1);
	if (EIF_TEST(loc14)) {
		RTHOOK(28);
		RTDBGAA(Current, dtype, 10439, 0xF8000549, 0); /* conforming_pick_actions_internal */
		tr1 = RTCCL(loc14);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(10439, dtype)) = (EIF_REFERENCE) tr1;
	}
	RTHOOK(29);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10441, "drop_actions_internal", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc15 = RTCCL(tr1);
	if (EIF_TEST(loc15)) {
		RTHOOK(30);
		RTDBGAA(Current, dtype, 10441, 0xF8000537, 0); /* drop_actions_internal */
		tr1 = RTCCL(loc15);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(10441, dtype)) = (EIF_REFERENCE) tr1;
	}
	RTHOOK(31);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10435, "pick_actions_internal", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc16 = RTCCL(tr1);
	if (EIF_TEST(loc16)) {
		RTHOOK(32);
		RTDBGAA(Current, dtype, 10435, 0xF8000547, 0); /* pick_actions_internal */
		tr1 = RTCCL(loc16);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(10435, dtype)) = (EIF_REFERENCE) tr1;
	}
	RTHOOK(33);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10437, "pick_ended_actions_internal", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc17 = RTCCL(tr1);
	if (EIF_TEST(loc17)) {
		RTHOOK(34);
		RTDBGAA(Current, dtype, 10437, 0xF8000540, 0); /* pick_ended_actions_internal */
		tr1 = RTCCL(loc17);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(10437, dtype)) = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(35);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(20);
	RTEE;
#undef up1
#undef arg1
}

/* {EV_PIXMAP_IMP_STATE}.raw_image_data */
EIF_TYPED_VALUE F1281_13273 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "raw_image_data";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_POINTER loc8 = (EIF_POINTER) 0;
	EIF_POINTER loc9 = (EIF_POINTER) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc13 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,loc2);
	RTLR(4,loc11);
	RTLR(5,ur1);
	RTLR(6,loc1);
	RTLR(7,loc10);
	RTLR(8,loc14);
	RTLR(9,loc6);
	RTLIU(10);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_UINT32, &loc7);
	RTLU(SK_POINTER, &loc8);
	RTLU(SK_POINTER, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_INT32, &loc12);
	RTLU(SK_INT32, &loc13);
	RTLU(SK_REF, &loc14);
	
	RTEAA(l_feature_name, 1280, Current, 14, 0, 19512);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1280, Current, 19512);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000532, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1330, 0x01).id);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10966, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10967, dtype))(Current)).it_i4);
	ui4_2 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(11758, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF8000592, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(1426, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(12670, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(11, 0xF800059E, 0, 0); /* loc11 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10951, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc11 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	ur1 = RTCCL(loc11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12523, "select_bitmap", loc2))(loc2, ur1x);
	RTHOOK(5);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10955, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(6);
		RTDBGAL(1, 0xF8000592, 0, 0); /* loc1 */
		tr1 = RTLN(eif_new_type(1426, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(12670, Dtype(tr1)))(tr1);
		RTNHOOK(6,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(7);
		RTDBGAL(10, 0xF800059E, 0, 0); /* loc10 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10952, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc10 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(8);
		if ((EIF_BOOLEAN)(loc10 != NULL)) {
			RTHOOK(9);
			ur1 = RTCCL(loc10);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12523, "select_bitmap", loc1))(loc1, ur1x);
			RTHOOK(10);
			RTDBGAL(8, 0x40000000, 1, 0); /* loc8 */
			tp1 = *(EIF_POINTER *)(loc1 + RTVA(12361, "item", loc1));
			loc8 = (EIF_POINTER) tp1;
		}
	}
	RTHOOK(11);
	RTDBGAL(14, 0xF800065B, 0, 0); /* loc14 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10975, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc14 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(12);
	RTCT0("l_interface /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc14 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(13);
	ur1 = RTCCL(loc14);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11775, "set_originating_pixmap", Result))(Result, ur1x);
	RTHOOK(14);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10966, dtype))(Current)).it_i4);
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 4L));
	RTHOOK(15);
	RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10967, dtype))(Current)).it_i4);
	loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 * ti4_1);
	RTHOOK(16);
	RTDBGAL(6, 0xF80001D9, 0, 0); /* loc6 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2156, "area", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc6 = (EIF_REFERENCE) tr1;
	RTHOOK(17);
	RTDBGAL(9, 0x40000000, 1, 0); /* loc9 */
	tp1 = *(EIF_POINTER *)(loc2 + RTVA(12361, "item", loc2));
	loc9 = (EIF_POINTER) tp1;
	for (;;) {
		RTHOOK(18);
		if ((EIF_BOOLEAN)(loc4 == loc5)) break;
		RTHOOK(19);
		RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
		loc12 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 % loc3) / ((EIF_INTEGER_32) 4L));
		RTHOOK(20);
		RTDBGAL(13, 0x10000000, 1, 0); /* loc13 */
		loc13 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 / loc3);
		RTHOOK(21);
		RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
		up1 = loc9;
		ui4_1 = loc12;
		ui4_2 = loc13;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(10973, dtype))(Current, up1x, ui4_1x, ui4_2x)).it_n4);
		loc7 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(22);
		uu4_1 = loc7;
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10970, dtype))(Current, uu4_1x)).it_n1);
		uu1_1 = tu1_1;
		ui4_1 = loc4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2572, "put", loc6))(loc6, uu1_1x, ui4_1x);
		RTHOOK(23);
		uu4_1 = loc7;
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10971, dtype))(Current, uu4_1x)).it_n1);
		uu1_1 = tu1_1;
		ui4_1 = (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2572, "put", loc6))(loc6, uu1_1x, ui4_1x);
		RTHOOK(24);
		uu4_1 = loc7;
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10972, dtype))(Current, uu4_1x)).it_n1);
		uu1_1 = tu1_1;
		ui4_1 = (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 2L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2572, "put", loc6))(loc6, uu1_1x, ui4_1x);
		RTHOOK(25);
		if ((EIF_BOOLEAN)(loc10 != NULL)) {
			RTHOOK(26);
			RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
			up1 = loc8;
			ui4_1 = loc12;
			ui4_2 = loc13;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(10973, dtype))(Current, up1x, ui4_1x, ui4_2x)).it_n4);
			loc7 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(27);
			uu4_1 = loc7;
			tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10970, dtype))(Current, uu4_1x)).it_n1);
			if ((EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L))) {
				RTHOOK(28);
				ti4_1 = ((EIF_INTEGER_32) 0L);
			} else {
				RTHOOK(29);
				ti4_1 = ((EIF_INTEGER_32) 255L);
			}
			uu1_1 = (EIF_NATURAL_8) ti4_1;
			ui4_1 = (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 3L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2572, "put", loc6))(loc6, uu1_1x, ui4_1x);
		} else {
			RTHOOK(30);
			uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
			ui4_1 = (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 3L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2572, "put", loc6))(loc6, uu1_1x, ui4_1x);
		}
		RTHOOK(31);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		loc4 += ((EIF_INTEGER_32) 4L);
	}
	RTHOOK(32);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(33);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12529, "unselect_bitmap", loc1))(loc1);
		RTHOOK(34);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11659, "delete", loc1))(loc1);
		RTHOOK(35);
		if ((EIF_BOOLEAN)(loc10 != NULL)) {
			RTHOOK(36);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11656, "decrement_reference", loc10))(loc10);
		}
	}
	RTHOOK(37);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12529, "unselect_bitmap", loc2))(loc2);
	RTHOOK(38);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11659, "delete", loc2))(loc2);
	RTHOOK(39);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11656, "decrement_reference", loc11))(loc11);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(40);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(16);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef uu4_1
#undef uu1_1
}

/* {EV_PIXMAP_IMP_STATE}.gdi_compact */
void F1281_13274 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "gdi_compact";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1280, Current, 0, 0, 19513);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1280, Current, 19513);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_PIXMAP_IMP_STATE}.build_icon */
EIF_TYPED_VALUE F1281_13275 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "build_icon";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,Result);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1280, Current, 0, 0, 19514);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1280, Current, 19514);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80005A3, 0,0); /* Result */
	tr1 = RTLNTY2(eif_new_type(1443, 0x01), 0x01);
	ub1 = (EIF_BOOLEAN) 1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10968, dtype))(Current, ub1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3884, "attempted", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTHOOK(2);
	RTCT0("attached Result", EX_CHECK);
	if ((EIF_BOOLEAN)(Result != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ub1
}

/* {EV_PIXMAP_IMP_STATE}.build_cursor */
EIF_TYPED_VALUE F1281_13276 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "build_cursor";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,Result);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1280, Current, 0, 0, 19515);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1280, Current, 19515);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000715, 0,0); /* Result */
	tr1 = RTLNTY2(eif_new_type(1813, 0x01), 0x01);
	ub1 = (EIF_BOOLEAN) 0;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10968, dtype))(Current, ub1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3884, "attempted", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTHOOK(2);
	RTCT0("attached Result", EX_CHECK);
	if ((EIF_BOOLEAN)(Result != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ub1
}

/* {EV_PIXMAP_IMP_STATE}.init_from_pixel_buffer */
void F1281_13277 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "init_from_pixel_buffer";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1280, Current, 2, 1, 19516);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1280, Current, 19516);
	RTCC(arg1, 1280, l_feature_name, 1, eif_new_type(1575, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(2, 0xF800065B, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10975, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTCT0("l_interface /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(3);
	RTDBGAL(1, 0xF800068C, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14848, "implementation", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	loc1 = RTRV(eif_new_type(1676, 0x00), loc1);
	RTHOOK(4);
	RTCT0("l_pixel_buffer /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(5);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15818, "draw_to_drawable", loc1))(loc1, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {EV_PIXMAP_IMP_STATE}.build_graphical_resource */
EIF_TYPED_VALUE F1281_13280 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "build_graphical_resource";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_b
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ui4_5x = {{0}, SK_INT32};
#define ui4_5 ui4_5x.it_i4
	EIF_TYPED_VALUE ui4_6x = {{0}, SK_INT32};
#define ui4_6 ui4_6x.it_i4
	EIF_TYPED_VALUE ui4_7x = {{0}, SK_INT32};
#define ui4_7 ui4_7x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(13);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc5);
	RTLR(3,Current);
	RTLR(4,loc6);
	RTLR(5,ur1);
	RTLR(6,loc2);
	RTLR(7,loc3);
	RTLR(8,loc4);
	RTLR(9,loc7);
	RTLR(10,loc8);
	RTLR(11,loc9);
	RTLR(12,Result);
	RTLIU(13);
	RTLU (SK_REF, &Result);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	
	RTEAA(l_feature_name, 1280, Current, 9, 1, 19517);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1280, Current, 19517);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF80005F0, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1520, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(13040, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12366, "set_unshared", loc1))(loc1);
	RTHOOK(3);
	ub1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14220, "set_is_icon", loc1))(loc1, ub1x);
	RTHOOK(4);
	RTDBGAL(5, 0xF800059E, 0, 0); /* loc5 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10951, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(6, 0xF800059E, 0, 0); /* loc6 */
	tr1 = RTLN(eif_new_type(1438, 0x01).id);
	ur1 = RTCCL(loc5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12789, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(5,1);
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11655, "enable_reference_tracking", loc6))(loc6);
	RTHOOK(7);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11656, "decrement_reference", loc5))(loc5);
	RTHOOK(8);
	RTDBGAL(2, 0xF8000592, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(1426, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(12670, Dtype(tr1)))(tr1);
	RTNHOOK(8,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(9);
	RTDBGAL(3, 0xF800059E, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(1438, 0x01).id);
	ur1 = RTCCL(loc2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10966, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10967, dtype))(Current)).it_i4);
	ui4_2 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(12787, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x);
	RTNHOOK(9,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(10);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11655, "enable_reference_tracking", loc3))(loc3);
	RTHOOK(11);
	ur1 = RTCCL(loc3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12523, "select_bitmap", loc2))(loc2, ur1x);
	RTHOOK(12);
	RTDBGAL(4, 0xF8000476, 0, 0); /* loc4 */
	tr1 = RTLN(eif_new_type(1142, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(12,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(13);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10955, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(14);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ui4_2 = ((EIF_INTEGER_32) 0L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10966, dtype))(Current)).it_i4);
		ui4_3 = ti4_1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10967, dtype))(Current)).it_i4);
		ui4_4 = ti4_2;
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9243, "whiteness", loc4))(loc4)).it_i4);
		ui4_5 = ti4_3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(12575, "pat_blt", loc2))(loc2, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x);
		RTHOOK(15);
		RTDBGAL(7, 0xF800059E, 0, 0); /* loc7 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10952, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc7 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(16);
		RTCT0("tmp_mask_bitmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc7 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(17);
		RTDBGAL(8, 0xF8000592, 0, 0); /* loc8 */
		tr1 = RTLN(eif_new_type(1426, 0x01).id);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12671, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(17,1);
		loc8 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(18);
		ur1 = RTCCL(loc7);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12523, "select_bitmap", loc8))(loc8, ur1x);
		RTHOOK(19);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ui4_2 = ((EIF_INTEGER_32) 0L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10966, dtype))(Current)).it_i4);
		ui4_3 = ti4_1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10967, dtype))(Current)).it_i4);
		ui4_4 = ti4_2;
		ur1 = RTCCL(loc8);
		ui4_5 = ((EIF_INTEGER_32) 0L);
		ui4_6 = ((EIF_INTEGER_32) 0L);
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9232, "srcinvert", loc4))(loc4)).it_i4);
		ui4_7 = ti4_3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(12569, "bit_blt", loc2))(loc2, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ur1x, ui4_5x, ui4_6x, ui4_7x);
		RTHOOK(20);
		RTDBGAL(9, 0xF8000592, 0, 0); /* loc9 */
		tr1 = RTLN(eif_new_type(1426, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(12670, Dtype(tr1)))(tr1);
		RTNHOOK(20,1);
		loc9 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(21);
		ur1 = RTCCL(loc6);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12523, "select_bitmap", loc9))(loc9, ur1x);
		RTHOOK(22);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ui4_2 = ((EIF_INTEGER_32) 0L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10966, dtype))(Current)).it_i4);
		ui4_3 = ti4_1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10967, dtype))(Current)).it_i4);
		ui4_4 = ti4_2;
		ur1 = RTCCL(loc2);
		ui4_5 = ((EIF_INTEGER_32) 0L);
		ui4_6 = ((EIF_INTEGER_32) 0L);
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9244, "maskpaint", loc4))(loc4)).it_i4);
		ui4_7 = ti4_3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(12569, "bit_blt", loc9))(loc9, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ur1x, ui4_5x, ui4_6x, ui4_7x);
		RTHOOK(23);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12529, "unselect_bitmap", loc9))(loc9);
		RTHOOK(24);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11659, "delete", loc9))(loc9);
		RTHOOK(25);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12529, "unselect_bitmap", loc8))(loc8);
		RTHOOK(26);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11659, "delete", loc8))(loc8);
	} else {
		RTHOOK(27);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ui4_2 = ((EIF_INTEGER_32) 0L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10966, dtype))(Current)).it_i4);
		ui4_3 = ti4_1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10967, dtype))(Current)).it_i4);
		ui4_4 = ti4_2;
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9242, "blackness", loc4))(loc4)).it_i4);
		ui4_5 = ti4_3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(12575, "pat_blt", loc2))(loc2, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x);
	}
	RTHOOK(28);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12529, "unselect_bitmap", loc2))(loc2);
	RTHOOK(29);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11659, "delete", loc2))(loc2);
	RTHOOK(30);
	ur1 = RTCCL(loc6);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14219, "set_color_bitmap", loc1))(loc1, ur1x);
	RTHOOK(31);
	ur1 = RTCCL(loc3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14218, "set_mask_bitmap", loc1))(loc1, ur1x);
	RTHOOK(32);
	if (arg1) {
		RTHOOK(33);
		RTDBGAL(0, 0xF80005A2, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(1443, 0x01).id);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12862, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(33,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(34);
		RTDBGAL(0, 0xF80005A2, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(1813, 0x01).id);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12862, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(34,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(35);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11656, "decrement_reference", loc3))(loc3);
	RTHOOK(36);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14227, "delete", loc1))(loc1);
	RTHOOK(37);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11656, "decrement_reference", loc6))(loc6);
	RTHOOK(38);
	if ((EIF_BOOLEAN)(loc7 != NULL)) {
		RTHOOK(39);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11656, "decrement_reference", loc7))(loc7);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(40);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef ui4_6
#undef ui4_7
#undef ub1
#undef arg1
}

/* {EV_PIXMAP_IMP_STATE}.update_for_pick_and_drop */
void F1281_13281 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "update_for_pick_and_drop";
	RTEX;
#define arg1 arg1x.it_b
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1280, Current, 0, 1, 19518);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1280, Current, 19518);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {EV_PIXMAP_IMP_STATE}.get_rvalue */
EIF_TYPED_VALUE F1281_13282 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_rvalue";
	RTEX;
#define arg1 arg1x.it_n4
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT8, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1280, Current, 0, 1, 19519);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1280, Current, 19519);
	RTIV(Current, RTAL);
	Result = (EIF_NATURAL_8) GetRValue(((DWORD) arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT8; r.it_n1 = Result; return r; }
#undef arg1
}

/* {EV_PIXMAP_IMP_STATE}.get_gvalue */
EIF_TYPED_VALUE F1281_13283 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_gvalue";
	RTEX;
#define arg1 arg1x.it_n4
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT8, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1280, Current, 0, 1, 19520);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1280, Current, 19520);
	RTIV(Current, RTAL);
	Result = (EIF_NATURAL_8) GetGValue(((DWORD) arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT8; r.it_n1 = Result; return r; }
#undef arg1
}

/* {EV_PIXMAP_IMP_STATE}.get_bvalue */
EIF_TYPED_VALUE F1281_13284 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_bvalue";
	RTEX;
#define arg1 arg1x.it_n4
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT8, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1280, Current, 0, 1, 19521);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1280, Current, 19521);
	RTIV(Current, RTAL);
	Result = (EIF_NATURAL_8) GetBValue(((DWORD) arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT8; r.it_n1 = Result; return r; }
#undef arg1
}

/* {EV_PIXMAP_IMP_STATE}.cwin_get_pixel */
EIF_TYPED_VALUE F1281_13285 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "cwin_get_pixel";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1280, Current, 0, 3, 19522);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1280, Current, 19522);
	RTIV(Current, RTAL);
	Result = (EIF_NATURAL_32) GetPixel(((HDC) arg1), ((int) arg2), ((int) arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_PIXMAP_IMP_STATE}.c_ev_save_png */
void F1281_13286 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x)
{
	GTCX
	char *l_feature_name = "c_ev_save_png";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
#define arg6 arg6x.it_i4
#define arg7 arg7x.it_i4
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_i4 = * (EIF_INTEGER_32 *) arg7x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_i4 = * (EIF_INTEGER_32 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU(SK_INT32,&arg6);
	RTLU(SK_INT32,&arg7);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1280, Current, 0, 7, 19523);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1280, Current, 19523);
	RTIV(Current, RTAL);c_ev_save_png((char*) arg1, (EIF_FILENAME) arg2, (int) arg3, (int) arg4, (int) arg5, (int) arg6, (int) arg7);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(9);
	RTEE;
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_PIXMAP_IMP_STATE}.interface */
static EIF_TYPED_VALUE F1281_13287_body (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "interface";
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1280, Current, 0, 0, 19524);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1280, Current, 19524);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
}

EIF_TYPED_VALUE F1281_13287 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(10975,Dtype(Current)));
	if (!r.it_r) {
		if (RTAT(RTWCT(10975, Dtype(Current), Dftype(Current)))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			RTLIU(1);
			r.it_r = (F1281_13287_body (Current)).it_r;
			*(EIF_REFERENCE *)(Current + RTWA(10975,Dtype(Current))) = r.it_r;
			RTAR(Current, r.it_r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit1281 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
