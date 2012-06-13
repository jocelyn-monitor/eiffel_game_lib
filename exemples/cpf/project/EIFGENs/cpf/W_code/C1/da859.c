/*
 * Code for class DATE_TIME_CODE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F859_7732(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F859_7733(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F859_7734(EIF_REFERENCE);
extern EIF_TYPED_VALUE F859_7735(EIF_REFERENCE);
extern EIF_TYPED_VALUE F859_7736(EIF_REFERENCE);
extern EIF_TYPED_VALUE F859_7737(EIF_REFERENCE);
extern EIF_TYPED_VALUE F859_7738(EIF_REFERENCE);
extern EIF_TYPED_VALUE F859_7739(EIF_REFERENCE);
extern EIF_TYPED_VALUE F859_7740(EIF_REFERENCE);
extern EIF_TYPED_VALUE F859_7741(EIF_REFERENCE);
extern EIF_TYPED_VALUE F859_7742(EIF_REFERENCE);
extern void EIF_Minit859(void);

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

/* {DATE_TIME_CODE}.make */
void F859_7732 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {0, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {0, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 858, Current, 0, 1, 12915);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(858, Current, 12915);
	if (arg1) {
		RTCC(arg1, 858, l_feature_name, 1, 201);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("v_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("v_is_code", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(858, 32, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(858, 59, dtype))(Current, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("value_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(858, 60, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(1, 4, "is_equal", tr1))(tr1, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
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
#undef ur1
#undef arg1
}

/* {DATE_TIME_CODE}.set_value */
void F859_7733 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_value";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {0, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {0, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {0, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {0, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {0, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,tr2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 858, Current, 1, 1, 12916);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(858, Current, 12916);
	if (arg1) {
		RTCC(arg1, 858, l_feature_name, 1, 201);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("v_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("v_is_code", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(858, 32, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 858, 60, 0xF80000C9, 0); /* value */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVPF(1, 10, "twin", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(858, 60, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(858, 60, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(858, 33, dtype))(Current, ur1x)).it_b);
	if (tb1) {
		RTHOOK(5);
		RTDBGAA(Current, dtype, 858, 61, 0x10000000, 1); /* count_max */
		
		*(EIF_INTEGER_32 *)(Current + RTWA(858, 61, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		RTHOOK(6);
		RTDBGAA(Current, dtype, 858, 62, 0x10000000, 1); /* count_min */
		
		*(EIF_INTEGER_32 *)(Current + RTWA(858, 62, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(7);
		RTDBGAL(Current, 1, 0xF80000C9, 0, 0); /* loc1 */
		
		loc1 = RTMS_EX_H("day-numeric",11,781450083);
		RTHOOK(8);
		RTDBGAA(Current, dtype, 858, 64, 0x10000000, 1); /* value_max */
		
		*(EIF_INTEGER_32 *)(Current + RTWA(858, 64, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 31L);
		RTHOOK(9);
		RTDBGAA(Current, dtype, 858, 65, 0x10000000, 1); /* value_min */
		
		*(EIF_INTEGER_32 *)(Current + RTWA(858, 65, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(10);
		RTDBGAA(Current, dtype, 858, 67, 0x04000000, 1); /* is_text */
		
		*(EIF_BOOLEAN *)(Current + RTWA(858, 67, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		RTHOOK(11);
		RTDBGAA(Current, dtype, 858, 68, 0x04000000, 1); /* is_numeric */
		
		*(EIF_BOOLEAN *)(Current + RTWA(858, 68, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(12);
		RTDBGAA(Current, dtype, 858, 66, 0x10000000, 1); /* type */
		
		*(EIF_INTEGER_32 *)(Current + RTWA(858, 66, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		RTHOOK(13);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(858, 60, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(858, 34, dtype))(Current, ur1x)).it_b);
		if (tb1) {
			RTHOOK(14);
			RTDBGAA(Current, dtype, 858, 61, 0x10000000, 1); /* count_max */
			
			*(EIF_INTEGER_32 *)(Current + RTWA(858, 61, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			RTHOOK(15);
			RTDBGAA(Current, dtype, 858, 62, 0x10000000, 1); /* count_min */
			
			*(EIF_INTEGER_32 *)(Current + RTWA(858, 62, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			RTHOOK(16);
			RTDBGAL(Current, 1, 0xF80000C9, 0, 0); /* loc1 */
			
			loc1 = RTMS_EX_H("day-numeric-on-2-digits",23,1405532275);
			RTHOOK(17);
			RTDBGAA(Current, dtype, 858, 64, 0x10000000, 1); /* value_max */
			
			*(EIF_INTEGER_32 *)(Current + RTWA(858, 64, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 31L);
			RTHOOK(18);
			RTDBGAA(Current, dtype, 858, 65, 0x10000000, 1); /* value_min */
			
			*(EIF_INTEGER_32 *)(Current + RTWA(858, 65, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(19);
			RTDBGAA(Current, dtype, 858, 67, 0x04000000, 1); /* is_text */
			
			*(EIF_BOOLEAN *)(Current + RTWA(858, 67, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(20);
			RTDBGAA(Current, dtype, 858, 68, 0x04000000, 1); /* is_numeric */
			
			*(EIF_BOOLEAN *)(Current + RTWA(858, 68, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(21);
			RTDBGAA(Current, dtype, 858, 66, 0x10000000, 1); /* type */
			
			*(EIF_INTEGER_32 *)(Current + RTWA(858, 66, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		} else {
			RTHOOK(22);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(858, 60, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(858, 35, dtype))(Current, ur1x)).it_b);
			if (tb1) {
				RTHOOK(23);
				RTDBGAA(Current, dtype, 858, 61, 0x10000000, 1); /* count_max */
				
				*(EIF_INTEGER_32 *)(Current + RTWA(858, 61, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
				RTHOOK(24);
				RTDBGAA(Current, dtype, 858, 62, 0x10000000, 1); /* count_min */
				
				*(EIF_INTEGER_32 *)(Current + RTWA(858, 62, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
				RTHOOK(25);
				RTDBGAL(Current, 1, 0xF80000C9, 0, 0); /* loc1 */
				
				loc1 = RTMS_EX_H("day-text",8,1643751284);
				RTHOOK(26);
				RTDBGAA(Current, dtype, 858, 64, 0x10000000, 1); /* value_max */
				
				*(EIF_INTEGER_32 *)(Current + RTWA(858, 64, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
				RTHOOK(27);
				RTDBGAA(Current, dtype, 858, 65, 0x10000000, 1); /* value_min */
				
				*(EIF_INTEGER_32 *)(Current + RTWA(858, 65, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				RTHOOK(28);
				RTDBGAA(Current, dtype, 858, 67, 0x04000000, 1); /* is_text */
				
				*(EIF_BOOLEAN *)(Current + RTWA(858, 67, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				RTHOOK(29);
				RTDBGAA(Current, dtype, 858, 68, 0x04000000, 1); /* is_numeric */
				
				*(EIF_BOOLEAN *)(Current + RTWA(858, 68, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				RTHOOK(30);
				RTDBGAA(Current, dtype, 858, 66, 0x10000000, 1); /* type */
				
				*(EIF_INTEGER_32 *)(Current + RTWA(858, 66, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
			} else {
				RTHOOK(31);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(858, 60, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr1);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(858, 36, dtype))(Current, ur1x)).it_b);
				if (tb1) {
					RTHOOK(32);
					RTDBGAA(Current, dtype, 858, 61, 0x10000000, 1); /* count_max */
					
					*(EIF_INTEGER_32 *)(Current + RTWA(858, 61, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
					RTHOOK(33);
					RTDBGAA(Current, dtype, 858, 62, 0x10000000, 1); /* count_min */
					
					*(EIF_INTEGER_32 *)(Current + RTWA(858, 62, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
					RTHOOK(34);
					RTDBGAL(Current, 1, 0xF80000C9, 0, 0); /* loc1 */
					
					loc1 = RTMS_EX_H("year-on-4-digits",16,2124624499);
					RTHOOK(35);
					RTDBGAA(Current, dtype, 858, 67, 0x04000000, 1); /* is_text */
					
					*(EIF_BOOLEAN *)(Current + RTWA(858, 67, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					RTHOOK(36);
					RTDBGAA(Current, dtype, 858, 68, 0x04000000, 1); /* is_numeric */
					
					*(EIF_BOOLEAN *)(Current + RTWA(858, 68, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					RTHOOK(37);
					RTDBGAA(Current, dtype, 858, 66, 0x10000000, 1); /* type */
					
					*(EIF_INTEGER_32 *)(Current + RTWA(858, 66, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
					RTHOOK(38);
					RTDBGAA(Current, dtype, 858, 64, 0x10000000, 1); /* value_max */
					
					*(EIF_INTEGER_32 *)(Current + RTWA(858, 64, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
					RTHOOK(39);
					RTDBGAA(Current, dtype, 858, 65, 0x10000000, 1); /* value_min */
					
					*(EIF_INTEGER_32 *)(Current + RTWA(858, 65, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
				} else {
					RTHOOK(40);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(858, 60, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = RTCCL(tr1);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(858, 37, dtype))(Current, ur1x)).it_b);
					if (tb1) {
						RTHOOK(41);
						RTDBGAA(Current, dtype, 858, 61, 0x10000000, 1); /* count_max */
						
						*(EIF_INTEGER_32 *)(Current + RTWA(858, 61, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
						RTHOOK(42);
						RTDBGAA(Current, dtype, 858, 62, 0x10000000, 1); /* count_min */
						
						*(EIF_INTEGER_32 *)(Current + RTWA(858, 62, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
						RTHOOK(43);
						RTDBGAL(Current, 1, 0xF80000C9, 0, 0); /* loc1 */
						
						loc1 = RTMS_EX_H("year-on-2-digits",16,2124163699);
						RTHOOK(44);
						RTDBGAA(Current, dtype, 858, 67, 0x04000000, 1); /* is_text */
						
						*(EIF_BOOLEAN *)(Current + RTWA(858, 67, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						RTHOOK(45);
						RTDBGAA(Current, dtype, 858, 68, 0x04000000, 1); /* is_numeric */
						
						*(EIF_BOOLEAN *)(Current + RTWA(858, 68, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						RTHOOK(46);
						RTDBGAA(Current, dtype, 858, 66, 0x10000000, 1); /* type */
						
						*(EIF_INTEGER_32 *)(Current + RTWA(858, 66, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
						RTHOOK(47);
						RTDBGAA(Current, dtype, 858, 64, 0x10000000, 1); /* value_max */
						
						*(EIF_INTEGER_32 *)(Current + RTWA(858, 64, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
						RTHOOK(48);
						RTDBGAA(Current, dtype, 858, 65, 0x10000000, 1); /* value_min */
						
						*(EIF_INTEGER_32 *)(Current + RTWA(858, 65, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
					} else {
						RTHOOK(49);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(858, 60, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr1);
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(858, 38, dtype))(Current, ur1x)).it_b);
						if (tb1) {
							RTHOOK(50);
							RTDBGAA(Current, dtype, 858, 61, 0x10000000, 1); /* count_max */
							
							*(EIF_INTEGER_32 *)(Current + RTWA(858, 61, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
							RTHOOK(51);
							RTDBGAA(Current, dtype, 858, 62, 0x10000000, 1); /* count_min */
							
							*(EIF_INTEGER_32 *)(Current + RTWA(858, 62, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							RTHOOK(52);
							RTDBGAL(Current, 1, 0xF80000C9, 0, 0); /* loc1 */
							
							loc1 = RTMS_EX_H("month-numeric",13,457640547);
							RTHOOK(53);
							RTDBGAA(Current, dtype, 858, 64, 0x10000000, 1); /* value_max */
							
							*(EIF_INTEGER_32 *)(Current + RTWA(858, 64, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
							RTHOOK(54);
							RTDBGAA(Current, dtype, 858, 65, 0x10000000, 1); /* value_min */
							
							*(EIF_INTEGER_32 *)(Current + RTWA(858, 65, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							RTHOOK(55);
							RTDBGAA(Current, dtype, 858, 67, 0x04000000, 1); /* is_text */
							
							*(EIF_BOOLEAN *)(Current + RTWA(858, 67, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
							RTHOOK(56);
							RTDBGAA(Current, dtype, 858, 68, 0x04000000, 1); /* is_numeric */
							
							*(EIF_BOOLEAN *)(Current + RTWA(858, 68, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(57);
							RTDBGAA(Current, dtype, 858, 66, 0x10000000, 1); /* type */
							
							*(EIF_INTEGER_32 *)(Current + RTWA(858, 66, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
						} else {
							RTHOOK(58);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(858, 60, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							ur1 = RTCCL(tr1);
							tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(858, 39, dtype))(Current, ur1x)).it_b);
							if (tb1) {
								RTHOOK(59);
								RTDBGAA(Current, dtype, 858, 61, 0x10000000, 1); /* count_max */
								
								*(EIF_INTEGER_32 *)(Current + RTWA(858, 61, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
								RTHOOK(60);
								RTDBGAA(Current, dtype, 858, 62, 0x10000000, 1); /* count_min */
								
								*(EIF_INTEGER_32 *)(Current + RTWA(858, 62, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
								RTHOOK(61);
								RTDBGAL(Current, 1, 0xF80000C9, 0, 0); /* loc1 */
								
								loc1 = RTMS_EX_H("month-numeric-on-2-digits",25,275202163);
								RTHOOK(62);
								RTDBGAA(Current, dtype, 858, 64, 0x10000000, 1); /* value_max */
								
								*(EIF_INTEGER_32 *)(Current + RTWA(858, 64, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
								RTHOOK(63);
								RTDBGAA(Current, dtype, 858, 65, 0x10000000, 1); /* value_min */
								
								*(EIF_INTEGER_32 *)(Current + RTWA(858, 65, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
								RTHOOK(64);
								RTDBGAA(Current, dtype, 858, 67, 0x04000000, 1); /* is_text */
								
								*(EIF_BOOLEAN *)(Current + RTWA(858, 67, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
								RTHOOK(65);
								RTDBGAA(Current, dtype, 858, 68, 0x04000000, 1); /* is_numeric */
								
								*(EIF_BOOLEAN *)(Current + RTWA(858, 68, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
								RTHOOK(66);
								RTDBGAA(Current, dtype, 858, 66, 0x10000000, 1); /* type */
								
								*(EIF_INTEGER_32 *)(Current + RTWA(858, 66, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
							} else {
								RTHOOK(67);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(858, 60, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								ur1 = RTCCL(tr1);
								tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(858, 40, dtype))(Current, ur1x)).it_b);
								if (tb1) {
									RTHOOK(68);
									RTDBGAA(Current, dtype, 858, 61, 0x10000000, 1); /* count_max */
									
									*(EIF_INTEGER_32 *)(Current + RTWA(858, 61, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
									RTHOOK(69);
									RTDBGAA(Current, dtype, 858, 62, 0x10000000, 1); /* count_min */
									
									*(EIF_INTEGER_32 *)(Current + RTWA(858, 62, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
									RTHOOK(70);
									RTDBGAL(Current, 1, 0xF80000C9, 0, 0); /* loc1 */
									
									loc1 = RTMS_EX_H("month-text",10,1418209652);
									RTHOOK(71);
									RTDBGAA(Current, dtype, 858, 64, 0x10000000, 1); /* value_max */
									
									*(EIF_INTEGER_32 *)(Current + RTWA(858, 64, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
									RTHOOK(72);
									RTDBGAA(Current, dtype, 858, 65, 0x10000000, 1); /* value_min */
									
									*(EIF_INTEGER_32 *)(Current + RTWA(858, 65, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
									RTHOOK(73);
									RTDBGAA(Current, dtype, 858, 67, 0x04000000, 1); /* is_text */
									
									*(EIF_BOOLEAN *)(Current + RTWA(858, 67, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
									RTHOOK(74);
									RTDBGAA(Current, dtype, 858, 68, 0x04000000, 1); /* is_numeric */
									
									*(EIF_BOOLEAN *)(Current + RTWA(858, 68, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
									RTHOOK(75);
									RTDBGAA(Current, dtype, 858, 66, 0x10000000, 1); /* type */
									
									*(EIF_INTEGER_32 *)(Current + RTWA(858, 66, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
								} else {
									RTHOOK(76);
									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(858, 60, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									ur1 = RTCCL(tr1);
									tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(858, 41, dtype))(Current, ur1x)).it_b);
									if (tb1) {
										RTHOOK(77);
										RTDBGAA(Current, dtype, 858, 61, 0x10000000, 1); /* count_max */
										
										*(EIF_INTEGER_32 *)(Current + RTWA(858, 61, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
										RTHOOK(78);
										RTDBGAA(Current, dtype, 858, 62, 0x10000000, 1); /* count_min */
										
										*(EIF_INTEGER_32 *)(Current + RTWA(858, 62, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
										RTHOOK(79);
										RTDBGAL(Current, 1, 0xF80000C9, 0, 0); /* loc1 */
										
										loc1 = RTMS_EX_H("hour-numeric",12,1129144675);
										RTHOOK(80);
										RTDBGAA(Current, dtype, 858, 64, 0x10000000, 1); /* value_max */
										
										*(EIF_INTEGER_32 *)(Current + RTWA(858, 64, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
										RTHOOK(81);
										RTDBGAA(Current, dtype, 858, 65, 0x10000000, 1); /* value_min */
										
										*(EIF_INTEGER_32 *)(Current + RTWA(858, 65, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
										RTHOOK(82);
										RTDBGAA(Current, dtype, 858, 67, 0x04000000, 1); /* is_text */
										
										*(EIF_BOOLEAN *)(Current + RTWA(858, 67, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
										RTHOOK(83);
										RTDBGAA(Current, dtype, 858, 68, 0x04000000, 1); /* is_numeric */
										
										*(EIF_BOOLEAN *)(Current + RTWA(858, 68, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
										RTHOOK(84);
										RTDBGAA(Current, dtype, 858, 66, 0x10000000, 1); /* type */
										
										*(EIF_INTEGER_32 *)(Current + RTWA(858, 66, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
									} else {
										RTHOOK(85);
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(858, 60, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										ur1 = RTCCL(tr1);
										tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(858, 42, dtype))(Current, ur1x)).it_b);
										if (tb1) {
											RTHOOK(86);
											RTDBGAA(Current, dtype, 858, 61, 0x10000000, 1); /* count_max */
											
											*(EIF_INTEGER_32 *)(Current + RTWA(858, 61, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
											RTHOOK(87);
											RTDBGAA(Current, dtype, 858, 62, 0x10000000, 1); /* count_min */
											
											*(EIF_INTEGER_32 *)(Current + RTWA(858, 62, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
											RTHOOK(88);
											RTDBGAL(Current, 1, 0xF80000C9, 0, 0); /* loc1 */
											
											loc1 = RTMS_EX_H("hour-numeric-on-2-digits",24,638152307);
											RTHOOK(89);
											RTDBGAA(Current, dtype, 858, 64, 0x10000000, 1); /* value_max */
											
											*(EIF_INTEGER_32 *)(Current + RTWA(858, 64, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
											RTHOOK(90);
											RTDBGAA(Current, dtype, 858, 65, 0x10000000, 1); /* value_min */
											
											*(EIF_INTEGER_32 *)(Current + RTWA(858, 65, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
											RTHOOK(91);
											RTDBGAA(Current, dtype, 858, 67, 0x04000000, 1); /* is_text */
											
											*(EIF_BOOLEAN *)(Current + RTWA(858, 67, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
											RTHOOK(92);
											RTDBGAA(Current, dtype, 858, 68, 0x04000000, 1); /* is_numeric */
											
											*(EIF_BOOLEAN *)(Current + RTWA(858, 68, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
											RTHOOK(93);
											RTDBGAA(Current, dtype, 858, 66, 0x10000000, 1); /* type */
											
											*(EIF_INTEGER_32 *)(Current + RTWA(858, 66, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
										} else {
											RTHOOK(94);
											tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(858, 60, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											ur1 = RTCCL(tr1);
											tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(858, 43, dtype))(Current, ur1x)).it_b);
											if (tb1) {
												RTHOOK(95);
												RTDBGAA(Current, dtype, 858, 61, 0x10000000, 1); /* count_max */
												
												*(EIF_INTEGER_32 *)(Current + RTWA(858, 61, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
												RTHOOK(96);
												RTDBGAA(Current, dtype, 858, 62, 0x10000000, 1); /* count_min */
												
												*(EIF_INTEGER_32 *)(Current + RTWA(858, 62, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
												RTHOOK(97);
												RTDBGAL(Current, 1, 0xF80000C9, 0, 0); /* loc1 */
												
												loc1 = RTMS_EX_H("hour-12-clock-scale",19,1508112997);
												RTHOOK(98);
												RTDBGAA(Current, dtype, 858, 64, 0x10000000, 1); /* value_max */
												
												*(EIF_INTEGER_32 *)(Current + RTWA(858, 64, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
												RTHOOK(99);
												RTDBGAA(Current, dtype, 858, 65, 0x10000000, 1); /* value_min */
												
												*(EIF_INTEGER_32 *)(Current + RTWA(858, 65, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
												RTHOOK(100);
												RTDBGAA(Current, dtype, 858, 67, 0x04000000, 1); /* is_text */
												
												*(EIF_BOOLEAN *)(Current + RTWA(858, 67, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
												RTHOOK(101);
												RTDBGAA(Current, dtype, 858, 68, 0x04000000, 1); /* is_numeric */
												
												*(EIF_BOOLEAN *)(Current + RTWA(858, 68, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
												RTHOOK(102);
												RTDBGAA(Current, dtype, 858, 66, 0x10000000, 1); /* type */
												
												*(EIF_INTEGER_32 *)(Current + RTWA(858, 66, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 11L);
											} else {
												RTHOOK(103);
												tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(858, 60, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
												ur1 = RTCCL(tr1);
												tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(858, 45, dtype))(Current, ur1x)).it_b);
												if (tb1) {
													RTHOOK(104);
													RTDBGAA(Current, dtype, 858, 61, 0x10000000, 1); /* count_max */
													
													*(EIF_INTEGER_32 *)(Current + RTWA(858, 61, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
													RTHOOK(105);
													RTDBGAA(Current, dtype, 858, 62, 0x10000000, 1); /* count_min */
													
													*(EIF_INTEGER_32 *)(Current + RTWA(858, 62, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
													RTHOOK(106);
													RTDBGAL(Current, 1, 0xF80000C9, 0, 0); /* loc1 */
													
													loc1 = RTMS_EX_H("minute-numeric",14,220677219);
													RTHOOK(107);
													RTDBGAA(Current, dtype, 858, 64, 0x10000000, 1); /* value_max */
													
													*(EIF_INTEGER_32 *)(Current + RTWA(858, 64, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 59L);
													RTHOOK(108);
													RTDBGAA(Current, dtype, 858, 65, 0x10000000, 1); /* value_min */
													
													*(EIF_INTEGER_32 *)(Current + RTWA(858, 65, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
													RTHOOK(109);
													RTDBGAA(Current, dtype, 858, 67, 0x04000000, 1); /* is_text */
													
													*(EIF_BOOLEAN *)(Current + RTWA(858, 67, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
													RTHOOK(110);
													RTDBGAA(Current, dtype, 858, 68, 0x04000000, 1); /* is_numeric */
													
													*(EIF_BOOLEAN *)(Current + RTWA(858, 68, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
													RTHOOK(111);
													RTDBGAA(Current, dtype, 858, 66, 0x10000000, 1); /* type */
													
													*(EIF_INTEGER_32 *)(Current + RTWA(858, 66, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
												} else {
													RTHOOK(112);
													tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(858, 60, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
													ur1 = RTCCL(tr1);
													tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(858, 46, dtype))(Current, ur1x)).it_b);
													if (tb1) {
														RTHOOK(113);
														RTDBGAA(Current, dtype, 858, 61, 0x10000000, 1); /* count_max */
														
														*(EIF_INTEGER_32 *)(Current + RTWA(858, 61, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
														RTHOOK(114);
														RTDBGAA(Current, dtype, 858, 62, 0x10000000, 1); /* count_min */
														
														*(EIF_INTEGER_32 *)(Current + RTWA(858, 62, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
														RTHOOK(115);
														RTDBGAL(Current, 1, 0xF80000C9, 0, 0); /* loc1 */
														
														loc1 = RTMS_EX_H("minute-numeric-on-2-digits",26,1724761203);
														RTHOOK(116);
														RTDBGAA(Current, dtype, 858, 64, 0x10000000, 1); /* value_max */
														
														*(EIF_INTEGER_32 *)(Current + RTWA(858, 64, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 59L);
														RTHOOK(117);
														RTDBGAA(Current, dtype, 858, 65, 0x10000000, 1); /* value_min */
														
														*(EIF_INTEGER_32 *)(Current + RTWA(858, 65, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
														RTHOOK(118);
														RTDBGAA(Current, dtype, 858, 67, 0x04000000, 1); /* is_text */
														
														*(EIF_BOOLEAN *)(Current + RTWA(858, 67, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
														RTHOOK(119);
														RTDBGAA(Current, dtype, 858, 68, 0x04000000, 1); /* is_numeric */
														
														*(EIF_BOOLEAN *)(Current + RTWA(858, 68, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
														RTHOOK(120);
														RTDBGAA(Current, dtype, 858, 66, 0x10000000, 1); /* type */
														
														*(EIF_INTEGER_32 *)(Current + RTWA(858, 66, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 13L);
													} else {
														RTHOOK(121);
														tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(858, 60, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
														ur1 = RTCCL(tr1);
														tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(858, 47, dtype))(Current, ur1x)).it_b);
														if (tb1) {
															RTHOOK(122);
															RTDBGAA(Current, dtype, 858, 61, 0x10000000, 1); /* count_max */
															
															*(EIF_INTEGER_32 *)(Current + RTWA(858, 61, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
															RTHOOK(123);
															RTDBGAA(Current, dtype, 858, 62, 0x10000000, 1); /* count_min */
															
															*(EIF_INTEGER_32 *)(Current + RTWA(858, 62, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
															RTHOOK(124);
															RTDBGAL(Current, 1, 0xF80000C9, 0, 0); /* loc1 */
															
															loc1 = RTMS_EX_H("second-numeric",14,1358324579);
															RTHOOK(125);
															RTDBGAA(Current, dtype, 858, 64, 0x10000000, 1); /* value_max */
															
															*(EIF_INTEGER_32 *)(Current + RTWA(858, 64, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 59L);
															RTHOOK(126);
															RTDBGAA(Current, dtype, 858, 65, 0x10000000, 1); /* value_min */
															
															*(EIF_INTEGER_32 *)(Current + RTWA(858, 65, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
															RTHOOK(127);
															RTDBGAA(Current, dtype, 858, 67, 0x04000000, 1); /* is_text */
															
															*(EIF_BOOLEAN *)(Current + RTWA(858, 67, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
															RTHOOK(128);
															RTDBGAA(Current, dtype, 858, 68, 0x04000000, 1); /* is_numeric */
															
															*(EIF_BOOLEAN *)(Current + RTWA(858, 68, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
															RTHOOK(129);
															RTDBGAA(Current, dtype, 858, 66, 0x10000000, 1); /* type */
															
															*(EIF_INTEGER_32 *)(Current + RTWA(858, 66, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 14L);
														} else {
															RTHOOK(130);
															tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(858, 60, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
															ur1 = RTCCL(tr1);
															tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(858, 48, dtype))(Current, ur1x)).it_b);
															if (tb1) {
																RTHOOK(131);
																RTDBGAA(Current, dtype, 858, 61, 0x10000000, 1); /* count_max */
																
																*(EIF_INTEGER_32 *)(Current + RTWA(858, 61, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
																RTHOOK(132);
																RTDBGAA(Current, dtype, 858, 62, 0x10000000, 1); /* count_min */
																
																*(EIF_INTEGER_32 *)(Current + RTWA(858, 62, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
																RTHOOK(133);
																RTDBGAL(Current, 1, 0xF80000C9, 0, 0); /* loc1 */
																
																loc1 = RTMS_EX_H("second-numeric-on-2-digits",26,1763349363);
																RTHOOK(134);
																RTDBGAA(Current, dtype, 858, 64, 0x10000000, 1); /* value_max */
																
																*(EIF_INTEGER_32 *)(Current + RTWA(858, 64, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 59L);
																RTHOOK(135);
																RTDBGAA(Current, dtype, 858, 65, 0x10000000, 1); /* value_min */
																
																*(EIF_INTEGER_32 *)(Current + RTWA(858, 65, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
																RTHOOK(136);
																RTDBGAA(Current, dtype, 858, 67, 0x04000000, 1); /* is_text */
																
																*(EIF_BOOLEAN *)(Current + RTWA(858, 67, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
																RTHOOK(137);
																RTDBGAA(Current, dtype, 858, 68, 0x04000000, 1); /* is_numeric */
																
																*(EIF_BOOLEAN *)(Current + RTWA(858, 68, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
																RTHOOK(138);
																RTDBGAA(Current, dtype, 858, 66, 0x10000000, 1); /* type */
																
																*(EIF_INTEGER_32 *)(Current + RTWA(858, 66, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 15L);
															} else {
																RTHOOK(139);
																tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(858, 60, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																ur1 = RTCCL(tr1);
																tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(858, 49, dtype))(Current, ur1x)).it_b);
																if (tb1) {
																	RTHOOK(140);
																	RTDBGAA(Current, dtype, 858, 61, 0x10000000, 1); /* count_max */
																	
																	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(858, 60, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																	RTNHOOK(140,1);
																	ui4_1 = ((EIF_INTEGER_32) 3L);
																	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(858, 60, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
																	RTNHOOK(140,2);
																	ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVPA(324, 46, "count", tr2));
																	ui4_2 = ti4_1;
																	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVPF(320, 44, "substring", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
																	RTNHOOK(140,3);
																	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVPF(324, 24, "to_integer", tr2))(tr2)).it_i4);
																	*(EIF_INTEGER_32 *)(Current + RTWA(858, 61, dtype)) = (EIF_INTEGER_32) ti4_1;
																	RTHOOK(141);
																	RTDBGAA(Current, dtype, 858, 62, 0x10000000, 1); /* count_min */
																	
																	*(EIF_INTEGER_32 *)(Current + RTWA(858, 62, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																	RTHOOK(142);
																	RTDBGAL(Current, 1, 0xF80000C9, 0, 0); /* loc1 */
																	
																	loc1 = RTMS_EX_H("fractional-second-numeric",25,941051235);
																	RTHOOK(143);
																	RTDBGAA(Current, dtype, 858, 67, 0x04000000, 1); /* is_text */
																	
																	*(EIF_BOOLEAN *)(Current + RTWA(858, 67, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
																	RTHOOK(144);
																	RTDBGAA(Current, dtype, 858, 68, 0x04000000, 1); /* is_numeric */
																	
																	*(EIF_BOOLEAN *)(Current + RTWA(858, 68, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
																	RTHOOK(145);
																	RTDBGAA(Current, dtype, 858, 66, 0x10000000, 1); /* type */
																	
																	*(EIF_INTEGER_32 *)(Current + RTWA(858, 66, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
																	RTHOOK(146);
																	RTDBGAA(Current, dtype, 858, 64, 0x10000000, 1); /* value_max */
																	
																	*(EIF_INTEGER_32 *)(Current + RTWA(858, 64, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
																	RTHOOK(147);
																	RTDBGAA(Current, dtype, 858, 65, 0x10000000, 1); /* value_min */
																	
																	*(EIF_INTEGER_32 *)(Current + RTWA(858, 65, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
																} else {
																	RTHOOK(148);
																	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(858, 60, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																	ur1 = RTCCL(tr1);
																	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(858, 50, dtype))(Current, ur1x)).it_b);
																	if (tb1) {
																		RTHOOK(149);
																		RTDBGAA(Current, dtype, 858, 61, 0x10000000, 1); /* count_max */
																		
																		*(EIF_INTEGER_32 *)(Current + RTWA(858, 61, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																		RTHOOK(150);
																		RTDBGAA(Current, dtype, 858, 62, 0x10000000, 1); /* count_min */
																		
																		*(EIF_INTEGER_32 *)(Current + RTWA(858, 62, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																		RTHOOK(151);
																		RTDBGAL(Current, 1, 0xF80000C9, 0, 0); /* loc1 */
																		
																		loc1 = RTMS_EX_H("colon",5,1870137710);
																		RTHOOK(152);
																		RTDBGAA(Current, dtype, 858, 67, 0x04000000, 1); /* is_text */
																		
																		*(EIF_BOOLEAN *)(Current + RTWA(858, 67, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
																		RTHOOK(153);
																		RTDBGAA(Current, dtype, 858, 68, 0x04000000, 1); /* is_numeric */
																		
																		*(EIF_BOOLEAN *)(Current + RTWA(858, 68, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
																		RTHOOK(154);
																		RTDBGAA(Current, dtype, 858, 66, 0x10000000, 1); /* type */
																		
																		*(EIF_INTEGER_32 *)(Current + RTWA(858, 66, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 17L);
																	} else {
																		RTHOOK(155);
																		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(858, 60, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																		ur1 = RTCCL(tr1);
																		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(858, 51, dtype))(Current, ur1x)).it_b);
																		if (tb1) {
																			RTHOOK(156);
																			RTDBGAA(Current, dtype, 858, 61, 0x10000000, 1); /* count_max */
																			
																			*(EIF_INTEGER_32 *)(Current + RTWA(858, 61, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																			RTHOOK(157);
																			RTDBGAA(Current, dtype, 858, 62, 0x10000000, 1); /* count_min */
																			
																			*(EIF_INTEGER_32 *)(Current + RTWA(858, 62, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																			RTHOOK(158);
																			RTDBGAL(Current, 1, 0xF80000C9, 0, 0); /* loc1 */
																			
																			loc1 = RTMS_EX_H("slash",5,1819209064);
																			RTHOOK(159);
																			RTDBGAA(Current, dtype, 858, 67, 0x04000000, 1); /* is_text */
																			
																			*(EIF_BOOLEAN *)(Current + RTWA(858, 67, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
																			RTHOOK(160);
																			RTDBGAA(Current, dtype, 858, 68, 0x04000000, 1); /* is_numeric */
																			
																			*(EIF_BOOLEAN *)(Current + RTWA(858, 68, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
																			RTHOOK(161);
																			RTDBGAA(Current, dtype, 858, 66, 0x10000000, 1); /* type */
																			
																			*(EIF_INTEGER_32 *)(Current + RTWA(858, 66, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 18L);
																		} else {
																			RTHOOK(162);
																			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(858, 60, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																			ur1 = RTCCL(tr1);
																			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(858, 52, dtype))(Current, ur1x)).it_b);
																			if (tb1) {
																				RTHOOK(163);
																				RTDBGAA(Current, dtype, 858, 61, 0x10000000, 1); /* count_max */
																				
																				*(EIF_INTEGER_32 *)(Current + RTWA(858, 61, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																				RTHOOK(164);
																				RTDBGAA(Current, dtype, 858, 62, 0x10000000, 1); /* count_min */
																				
																				*(EIF_INTEGER_32 *)(Current + RTWA(858, 62, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																				RTHOOK(165);
																				RTDBGAL(Current, 1, 0xF80000C9, 0, 0); /* loc1 */
																				
																				loc1 = RTMS_EX_H("minus",5,1769683827);
																				RTHOOK(166);
																				RTDBGAA(Current, dtype, 858, 67, 0x04000000, 1); /* is_text */
																				
																				*(EIF_BOOLEAN *)(Current + RTWA(858, 67, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
																				RTHOOK(167);
																				RTDBGAA(Current, dtype, 858, 68, 0x04000000, 1); /* is_numeric */
																				
																				*(EIF_BOOLEAN *)(Current + RTWA(858, 68, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
																				RTHOOK(168);
																				RTDBGAA(Current, dtype, 858, 66, 0x10000000, 1); /* type */
																				
																				*(EIF_INTEGER_32 *)(Current + RTWA(858, 66, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 19L);
																			} else {
																				RTHOOK(169);
																				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(858, 60, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																				ur1 = RTCCL(tr1);
																				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(858, 53, dtype))(Current, ur1x)).it_b);
																				if (tb1) {
																					RTHOOK(170);
																					RTDBGAA(Current, dtype, 858, 61, 0x10000000, 1); /* count_max */
																					
																					*(EIF_INTEGER_32 *)(Current + RTWA(858, 61, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																					RTHOOK(171);
																					RTDBGAA(Current, dtype, 858, 62, 0x10000000, 1); /* count_min */
																					
																					*(EIF_INTEGER_32 *)(Current + RTWA(858, 62, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																					RTHOOK(172);
																					RTDBGAL(Current, 1, 0xF80000C9, 0, 0); /* loc1 */
																					
																					loc1 = RTMS_EX_H("comma",5,1870202721);
																					RTHOOK(173);
																					RTDBGAA(Current, dtype, 858, 67, 0x04000000, 1); /* is_text */
																					
																					*(EIF_BOOLEAN *)(Current + RTWA(858, 67, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
																					RTHOOK(174);
																					RTDBGAA(Current, dtype, 858, 68, 0x04000000, 1); /* is_numeric */
																					
																					*(EIF_BOOLEAN *)(Current + RTWA(858, 68, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
																					RTHOOK(175);
																					RTDBGAA(Current, dtype, 858, 66, 0x10000000, 1); /* type */
																					
																					*(EIF_INTEGER_32 *)(Current + RTWA(858, 66, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 20L);
																				} else {
																					RTHOOK(176);
																					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(858, 60, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																					ur1 = RTCCL(tr1);
																					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(858, 54, dtype))(Current, ur1x)).it_b);
																					if (tb1) {
																						RTHOOK(177);
																						RTDBGAA(Current, dtype, 858, 61, 0x10000000, 1); /* count_max */
																						
																						*(EIF_INTEGER_32 *)(Current + RTWA(858, 61, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																						RTHOOK(178);
																						RTDBGAA(Current, dtype, 858, 62, 0x10000000, 1); /* count_min */
																						
																						*(EIF_INTEGER_32 *)(Current + RTWA(858, 62, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																						RTHOOK(179);
																						RTDBGAL(Current, 1, 0xF80000C9, 0, 0); /* loc1 */
																						
																						loc1 = RTMS_EX_H("space",5,1886313829);
																						RTHOOK(180);
																						RTDBGAA(Current, dtype, 858, 67, 0x04000000, 1); /* is_text */
																						
																						*(EIF_BOOLEAN *)(Current + RTWA(858, 67, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
																						RTHOOK(181);
																						RTDBGAA(Current, dtype, 858, 68, 0x04000000, 1); /* is_numeric */
																						
																						*(EIF_BOOLEAN *)(Current + RTWA(858, 68, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
																						RTHOOK(182);
																						RTDBGAA(Current, dtype, 858, 66, 0x10000000, 1); /* type */
																						
																						*(EIF_INTEGER_32 *)(Current + RTWA(858, 66, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 21L);
																					} else {
																						RTHOOK(183);
																						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(858, 60, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																						ur1 = RTCCL(tr1);
																						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(858, 55, dtype))(Current, ur1x)).it_b);
																						if (tb1) {
																							RTHOOK(184);
																							RTDBGAA(Current, dtype, 858, 61, 0x10000000, 1); /* count_max */
																							
																							*(EIF_INTEGER_32 *)(Current + RTWA(858, 61, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																							RTHOOK(185);
																							RTDBGAA(Current, dtype, 858, 62, 0x10000000, 1); /* count_min */
																							
																							*(EIF_INTEGER_32 *)(Current + RTWA(858, 62, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																							RTHOOK(186);
																							RTDBGAL(Current, 1, 0xF80000C9, 0, 0); /* loc1 */
																							
																							loc1 = RTMS_EX_H("dot",3,6582132);
																							RTHOOK(187);
																							RTDBGAA(Current, dtype, 858, 67, 0x04000000, 1); /* is_text */
																							
																							*(EIF_BOOLEAN *)(Current + RTWA(858, 67, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
																							RTHOOK(188);
																							RTDBGAA(Current, dtype, 858, 68, 0x04000000, 1); /* is_numeric */
																							
																							*(EIF_BOOLEAN *)(Current + RTWA(858, 68, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
																							RTHOOK(189);
																							RTDBGAA(Current, dtype, 858, 66, 0x10000000, 1); /* type */
																							
																							*(EIF_INTEGER_32 *)(Current + RTWA(858, 66, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 22L);
																						} else {
																							RTHOOK(190);
																							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(858, 60, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																							ur1 = RTCCL(tr1);
																							tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(858, 57, dtype))(Current, ur1x)).it_b);
																							if (tb1) {
																								RTHOOK(191);
																								RTDBGAA(Current, dtype, 858, 61, 0x10000000, 1); /* count_max */
																								
																								*(EIF_INTEGER_32 *)(Current + RTWA(858, 61, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
																								RTHOOK(192);
																								RTDBGAA(Current, dtype, 858, 62, 0x10000000, 1); /* count_min */
																								
																								*(EIF_INTEGER_32 *)(Current + RTWA(858, 62, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
																								RTHOOK(193);
																								RTDBGAL(Current, 1, 0xF80000C9, 0, 0); /* loc1 */
																								
																								loc1 = RTMS_EX_H("meridiem",8,1230131053);
																								RTHOOK(194);
																								RTDBGAA(Current, dtype, 858, 67, 0x04000000, 1); /* is_text */
																								
																								*(EIF_BOOLEAN *)(Current + RTWA(858, 67, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
																								RTHOOK(195);
																								RTDBGAA(Current, dtype, 858, 68, 0x04000000, 1); /* is_numeric */
																								
																								*(EIF_BOOLEAN *)(Current + RTWA(858, 68, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
																								RTHOOK(196);
																								RTDBGAA(Current, dtype, 858, 66, 0x10000000, 1); /* type */
																								
																								*(EIF_INTEGER_32 *)(Current + RTWA(858, 66, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 23L);
																							} else {
																								if (RTAL & CK_CHECK) {
																									RTHOOK(197);
																									RTCT("is_hour12_0", EX_CHECK);
																									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(858, 60, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																									ur1 = RTCCL(tr1);
																									tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(858, 44, dtype))(Current, ur1x)).it_b);
																									if (tb1) {
																										RTCK;
																									} else {
																										RTCF;
																									}
																								}
																								RTHOOK(198);
																								RTDBGAA(Current, dtype, 858, 61, 0x10000000, 1); /* count_max */
																								
																								*(EIF_INTEGER_32 *)(Current + RTWA(858, 61, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
																								RTHOOK(199);
																								RTDBGAA(Current, dtype, 858, 62, 0x10000000, 1); /* count_min */
																								
																								*(EIF_INTEGER_32 *)(Current + RTWA(858, 62, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
																								RTHOOK(200);
																								RTDBGAL(Current, 1, 0xF80000C9, 0, 0); /* loc1 */
																								
																								loc1 = RTMS_EX_H("hour-12-clock-scale-on-2-digits",31,1799302003);
																								RTHOOK(201);
																								RTDBGAA(Current, dtype, 858, 64, 0x10000000, 1); /* value_max */
																								
																								*(EIF_INTEGER_32 *)(Current + RTWA(858, 64, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
																								RTHOOK(202);
																								RTDBGAA(Current, dtype, 858, 65, 0x10000000, 1); /* value_min */
																								
																								*(EIF_INTEGER_32 *)(Current + RTWA(858, 65, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
																								RTHOOK(203);
																								RTDBGAA(Current, dtype, 858, 67, 0x04000000, 1); /* is_text */
																								
																								*(EIF_BOOLEAN *)(Current + RTWA(858, 67, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
																								RTHOOK(204);
																								RTDBGAA(Current, dtype, 858, 68, 0x04000000, 1); /* is_numeric */
																								
																								*(EIF_BOOLEAN *)(Current + RTWA(858, 68, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
																								RTHOOK(205);
																								RTDBGAA(Current, dtype, 858, 66, 0x10000000, 1); /* type */
																								
																								*(EIF_INTEGER_32 *)(Current + RTWA(858, 66, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	RTHOOK(206);
	RTDBGAA(Current, dtype, 858, 63, 0xF80000C9, 0); /* name */
	
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + RTWA(858, 63, dtype)) = (EIF_REFERENCE) RTCCL(loc1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(207);
		RTCT("value_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(858, 60, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(207,1);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVPF(1, 4, "is_equal", tr1))(tr1, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(208);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {DATE_TIME_CODE}.value */
EIF_TYPED_VALUE F859_7734 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(858,60, Dtype(Current)));
	return r;
}


/* {DATE_TIME_CODE}.count_max */
EIF_TYPED_VALUE F859_7735 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(858,61, Dtype(Current)));
	return r;
}


/* {DATE_TIME_CODE}.count_min */
EIF_TYPED_VALUE F859_7736 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(858,62, Dtype(Current)));
	return r;
}


/* {DATE_TIME_CODE}.name */
EIF_TYPED_VALUE F859_7737 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(858,63, Dtype(Current)));
	return r;
}


/* {DATE_TIME_CODE}.value_max */
EIF_TYPED_VALUE F859_7738 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(858,64, Dtype(Current)));
	return r;
}


/* {DATE_TIME_CODE}.value_min */
EIF_TYPED_VALUE F859_7739 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(858,65, Dtype(Current)));
	return r;
}


/* {DATE_TIME_CODE}.type */
EIF_TYPED_VALUE F859_7740 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(858,66, Dtype(Current)));
	return r;
}


/* {DATE_TIME_CODE}.is_text */
EIF_TYPED_VALUE F859_7741 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(858,67, Dtype(Current)));
	return r;
}


/* {DATE_TIME_CODE}.is_numeric */
EIF_TYPED_VALUE F859_7742 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(858,68, Dtype(Current)));
	return r;
}


void EIF_Minit859 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
