/*
 * Code for class KL_WINDOWS_FILE_SYSTEM_BACKSLASH_ONLY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1833_21061(EIF_REFERENCE);
extern void EIF_Minit1833(void);

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

/* {KL_WINDOWS_FILE_SYSTEM_BACKSLASH_ONLY}.secondary_directory_separator */
RTOID (F1833_21061)
EIF_TYPED_VALUE F1833_21061 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "secondary_directory_separator";
	RTEX;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_CHARACTER_8)
	RTOTDB(EIF_CHARACTER_8, F1833_21061);
	dtype = Dtype(Current);

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_CHAR8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1832, Current, 0, 0, 27098);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1832, Current, 27098);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0x08000000, 1,0); /* Result */
	Result = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\\';
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
#undef Result
}

void EIF_Minit1833 (void)
{
	GTCX
	RTOTS (21061,F1833_21061)
}


#ifdef __cplusplus
}
#endif
