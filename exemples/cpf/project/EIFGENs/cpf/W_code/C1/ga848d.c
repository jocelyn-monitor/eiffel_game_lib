/*
 * Class GAME_RANDOM_CONTROLLER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_848 [] = {0,218,847,0xFFFF};
static EIF_TYPE_INDEX gen_type1_848 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_848 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_848 [] = {0,0,0xFFFF};


static struct desc_info desc_848[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 201, NULL},
	{1, (BODY_INDEX)-1, 218, gen_type0_848},
	{2, (BODY_INDEX)-1, 172, NULL},
	{3, (BODY_INDEX)-1, 172, NULL},
	{4, (BODY_INDEX)-1, 172, NULL},
	{5, (BODY_INDEX)-1, 172, NULL},
	{6, (BODY_INDEX)-1, 172, NULL},
	{7, (BODY_INDEX)-1, 172, NULL},
	{8, (BODY_INDEX)-1, 172, NULL},
	{9, (BODY_INDEX)-1, 172, NULL},
	{10, (BODY_INDEX)-1, 847, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_848},
	{14, (BODY_INDEX)-1, 0, gen_type2_848},
	{15, (BODY_INDEX)-1, 847, NULL},
	{16, (BODY_INDEX)-1, 847, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_848},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 11, NULL},
	{21, (BODY_INDEX)-1, 201, NULL},
	{22, (BODY_INDEX)-1, 201, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 12, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 847, NULL},
	{29, (BODY_INDEX)-1, 196, NULL},
	{30, (BODY_INDEX)-1, 847, NULL},
	{12787, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12788, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12789, (BODY_INDEX)-1, 187, NULL},
	{12790, (BODY_INDEX)-1, 187, NULL},
	{12791, (BODY_INDEX)-1, 160, NULL},
	{12792, (BODY_INDEX)-1, 160, NULL},
	{12793, 0, 127, NULL},
};

extern void Init848(void);
void Init848(void)
{
	IDSC(desc_848, 0, 847);
	IDSC(desc_848 + 1, 1, 847);
	IDSC(desc_848 + 32, 340, 847);
}


#ifdef __cplusplus
}
#endif
