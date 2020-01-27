/*
 * Class WEL_SCF_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_1080 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_1_1080 [] = {0xFF01,245,1079,0xFFFF};
static const EIF_TYPE_INDEX egt_2_1080 [] = {0xFF01,1079,0xFFFF};
static const EIF_TYPE_INDEX egt_3_1080 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_1080 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_1080 [] = {0xFF01,1079,0xFFFF};
static const EIF_TYPE_INDEX egt_6_1080 [] = {0xFF01,1079,0xFFFF};
static const EIF_TYPE_INDEX egt_7_1080 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_1080 [] = {0xFF01,14,0xFFFF};
static const EIF_TYPE_INDEX egt_9_1080 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_10_1080 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_11_1080 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_12_1080 [] = {0xFF01,1079,0xFFFF};


static const struct desc_info desc_1080[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_1080), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_1080), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_1080), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_1080), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_1080), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_1080), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_1080), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_1080), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_1080), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_1080), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_1080), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_1080), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x086F /*1079*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01C7 /*227*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_1080), 30, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 16822, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 16823, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 16824, 0xFFFFFFFF},
};
void Init1080(void)
{
	IDSC(desc_1080, 0, 1079);
	IDSC(desc_1080 + 1, 1, 1079);
	IDSC(desc_1080 + 32, 1218, 1079);
}


#ifdef __cplusplus
}
#endif
