/*
 * Code for class GAME_GENERAL_EXTERNAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F842_7272(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F842_7273(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F842_7274(EIF_REFERENCE);
extern EIF_TYPED_VALUE F842_7275(EIF_REFERENCE);
extern EIF_TYPED_VALUE F842_7276(EIF_REFERENCE);
extern EIF_TYPED_VALUE F842_7277(EIF_REFERENCE);
extern void F842_7278(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F842_7279(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F842_7280(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F842_7281(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F842_7282(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F842_7283(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit842(void);

#ifdef __cplusplus
}
#endif

#include <game_more.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F842_7272
static EIF_POINTER inline_F842_7272 (EIF_INTEGER_32 arg1)
{
	return (EIF_POINTER) (malloc (arg1*sizeof(uint8_t)))
	;
}
#define INLINE_F842_7272
#endif
#ifndef INLINE_F842_7273
static void inline_F842_7273 (EIF_POINTER arg1)
{
	free((uint8_t *)arg1)
	;
}
#define INLINE_F842_7273
#endif
#ifndef INLINE_F842_7274
static EIF_INTEGER_32 inline_F842_7274 (void)
{
	return (EIF_INTEGER_32) (sizeof(short))
	;
}
#define INLINE_F842_7274
#endif
#ifndef INLINE_F842_7275
static EIF_INTEGER_32 inline_F842_7275 (void)
{
	return (EIF_INTEGER_32) (sizeof(char))
	;
}
#define INLINE_F842_7275
#endif
#ifndef INLINE_F842_7276
static EIF_INTEGER_32 inline_F842_7276 (void)
{
	return (EIF_INTEGER_32) (sizeof(int64_t))
	;
}
#define INLINE_F842_7276
#endif
#ifndef INLINE_F842_7277
static EIF_INTEGER_32 inline_F842_7277 (void)
{
	return (EIF_INTEGER_32) (sizeof(CustomPackageFileInfos))
	;
}
#define INLINE_F842_7277
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {GAME_GENERAL_EXTERNAL}.c_buffer_allocate */
EIF_TYPED_VALUE F842_7272 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "c_buffer_allocate";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 841, Current, 0, 1, 12492);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(841, Current, 12492);
	RTIV(Current, RTAL);
	Result = inline_F842_7272 ((EIF_INTEGER_32) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg1
}

/* {GAME_GENERAL_EXTERNAL}.c_buffer_free */
void F842_7273 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "c_buffer_free";
	RTEX;
#define arg1 arg1x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 841, Current, 0, 1, 12493);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(841, Current, 12493);
	RTIV(Current, RTAL);
	inline_F842_7273 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {GAME_GENERAL_EXTERNAL}.c_sizeof_short */
EIF_TYPED_VALUE F842_7274 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_sizeof_short";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 841, Current, 0, 0, 12494);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(841, Current, 12494);
	RTIV(Current, RTAL);
	Result = inline_F842_7274 ();
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

/* {GAME_GENERAL_EXTERNAL}.c_sizeof_char */
EIF_TYPED_VALUE F842_7275 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_sizeof_char";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 841, Current, 0, 0, 12495);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(841, Current, 12495);
	RTIV(Current, RTAL);
	Result = inline_F842_7275 ();
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

/* {GAME_GENERAL_EXTERNAL}.c_sizeof_int_64_t */
EIF_TYPED_VALUE F842_7276 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_sizeof_int_64_t";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 841, Current, 0, 0, 12496);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(841, Current, 12496);
	RTIV(Current, RTAL);
	Result = inline_F842_7276 ();
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

/* {GAME_GENERAL_EXTERNAL}.c_sizeof_custom_package_file_infos */
EIF_TYPED_VALUE F842_7277 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_sizeof_custom_package_file_infos";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 841, Current, 0, 0, 12497);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(841, Current, 12497);
	RTIV(Current, RTAL);
	Result = inline_F842_7277 ();
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

/* {GAME_GENERAL_EXTERNAL}.set_custom_package_infos_struct_file_ptr */
void F842_7278 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "set_custom_package_infos_struct_file_ptr";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 841, Current, 0, 2, 12498);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(841, Current, 12498);
	RTIV(Current, RTAL);(((CustomPackageFileInfos *)arg1)->filePtr = (FILE *)(arg2));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {GAME_GENERAL_EXTERNAL}.get_custom_package_infos_struct_file_ptr */
EIF_TYPED_VALUE F842_7279 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_custom_package_infos_struct_file_ptr";
	RTEX;
#define arg1 arg1x.it_p
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 841, Current, 0, 1, 12499);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(841, Current, 12499);
	RTIV(Current, RTAL);Result = (EIF_POINTER) (((CustomPackageFileInfos *)arg1)->filePtr);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg1
}

/* {GAME_GENERAL_EXTERNAL}.set_custom_package_infos_struct_start_offset */
void F842_7280 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "set_custom_package_infos_struct_start_offset";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i8
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i8 = * (EIF_INTEGER_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT64,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 841, Current, 0, 2, 12500);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(841, Current, 12500);
	RTIV(Current, RTAL);(((CustomPackageFileInfos *)arg1)->StartOffset = (int64_t)(arg2));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {GAME_GENERAL_EXTERNAL}.get_custom_package_infos_struct_start_offset */
EIF_TYPED_VALUE F842_7281 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_custom_package_infos_struct_start_offset";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT64, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 841, Current, 0, 1, 12501);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(841, Current, 12501);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_64) (((CustomPackageFileInfos *)arg1)->StartOffset);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT64; r.it_i8 = Result; return r; }
#undef arg1
}

/* {GAME_GENERAL_EXTERNAL}.set_custom_package_infos_struct_total_size */
void F842_7282 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "set_custom_package_infos_struct_total_size";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i8
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i8 = * (EIF_INTEGER_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT64,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 841, Current, 0, 2, 12502);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(841, Current, 12502);
	RTIV(Current, RTAL);(((CustomPackageFileInfos *)arg1)->TotalSize = (int64_t)(arg2));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {GAME_GENERAL_EXTERNAL}.get_custom_package_infos_struct_total_size */
EIF_TYPED_VALUE F842_7283 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_custom_package_infos_struct_total_size";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT64, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 841, Current, 0, 1, 12503);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(841, Current, 12503);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_64) (((CustomPackageFileInfos *)arg1)->TotalSize);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT64; r.it_i8 = Result; return r; }
#undef arg1
}

void EIF_Minit842 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
