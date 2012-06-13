/*
 * Code for class GAME_AUDIO_EXTERNAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F841_7203(EIF_REFERENCE);
extern EIF_TYPED_VALUE F841_7204(EIF_REFERENCE);
extern EIF_TYPED_VALUE F841_7205(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F841_7206(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F841_7207(EIF_REFERENCE);
extern void F841_7208(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F841_7209(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F841_7210(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F841_7211(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F841_7212(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F841_7213(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F841_7214(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F841_7215(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F841_7216(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F841_7217(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F841_7218(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F841_7219(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F841_7220(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F841_7221(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F841_7222(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F841_7223(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F841_7224(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F841_7225(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F841_7226(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F841_7227(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F841_7228(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F841_7229(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F841_7230(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F841_7231(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F841_7232(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F841_7233(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F841_7234(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F841_7235(EIF_REFERENCE);
extern EIF_TYPED_VALUE F841_7236(EIF_REFERENCE);
extern void F841_7237(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F841_7238(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F841_7239(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F841_7240(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F841_7241(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F841_7242(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F841_7243(EIF_REFERENCE);
extern EIF_TYPED_VALUE F841_7244(EIF_REFERENCE);
extern EIF_TYPED_VALUE F841_7245(EIF_REFERENCE);
extern EIF_TYPED_VALUE F841_7246(EIF_REFERENCE);
extern EIF_TYPED_VALUE F841_7247(EIF_REFERENCE);
extern EIF_TYPED_VALUE F841_7248(EIF_REFERENCE);
extern EIF_TYPED_VALUE F841_7249(EIF_REFERENCE);
extern EIF_TYPED_VALUE F841_7250(EIF_REFERENCE);
extern EIF_TYPED_VALUE F841_7251(EIF_REFERENCE);
extern EIF_TYPED_VALUE F841_7252(EIF_REFERENCE);
extern EIF_TYPED_VALUE F841_7253(EIF_REFERENCE);
extern EIF_TYPED_VALUE F841_7254(EIF_REFERENCE);
extern EIF_TYPED_VALUE F841_7255(EIF_REFERENCE);
extern EIF_TYPED_VALUE F841_7256(EIF_REFERENCE);
extern EIF_TYPED_VALUE F841_7257(EIF_REFERENCE);
extern EIF_TYPED_VALUE F841_7258(EIF_REFERENCE);
extern EIF_TYPED_VALUE F841_7259(EIF_REFERENCE);
extern EIF_TYPED_VALUE F841_7260(EIF_REFERENCE);
extern EIF_TYPED_VALUE F841_7261(EIF_REFERENCE);
extern EIF_TYPED_VALUE F841_7262(EIF_REFERENCE);
extern EIF_TYPED_VALUE F841_7263(EIF_REFERENCE);
extern EIF_TYPED_VALUE F841_7264(EIF_REFERENCE);
extern EIF_TYPED_VALUE F841_7265(EIF_REFERENCE);
extern EIF_TYPED_VALUE F841_7266(EIF_REFERENCE);
extern EIF_TYPED_VALUE F841_7267(EIF_REFERENCE);
extern EIF_TYPED_VALUE F841_7268(EIF_REFERENCE);
extern EIF_TYPED_VALUE F841_7269(EIF_REFERENCE);
extern EIF_TYPED_VALUE F841_7270(EIF_REFERENCE);
extern EIF_TYPED_VALUE F841_7271(EIF_REFERENCE);
extern void EIF_Minit841(void);

#ifdef __cplusplus
}
#endif

#include <alc.h>
#include <al.h>
#include <game_more.h>
#include <sndfile.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F841_7203
static EIF_INTEGER_32 inline_F841_7203 (void)
{
	return (EIF_INTEGER_32) (sizeof(sf_count_t))
	;
}
#define INLINE_F841_7203
#endif
#ifndef INLINE_F841_7235
static EIF_INTEGER_32 inline_F841_7235 (void)
{
	return (EIF_INTEGER_32) (sizeof(SF_VIRTUAL_IO))
	;
}
#define INLINE_F841_7235
#endif
#ifndef INLINE_F841_7236
static EIF_POINTER inline_F841_7236 (void)
{
	return (EIF_POINTER) (malloc (sizeof(SF_INFO)))
	;
}
#define INLINE_F841_7236
#endif
#ifndef INLINE_F841_7237
static void inline_F841_7237 (EIF_POINTER arg1)
{
	free((SF_INFO *)arg1)
	;
}
#define INLINE_F841_7237
#endif
#ifndef INLINE_F841_7243
static EIF_INTEGER_32 inline_F841_7243 (void)
{
	return (EIF_INTEGER_32) (ALC_INVALID_VALUE)
	;
}
#define INLINE_F841_7243
#endif
#ifndef INLINE_F841_7244
static EIF_INTEGER_32 inline_F841_7244 (void)
{
	return (EIF_INTEGER_32) (AL_INVALID_ENUM)
	;
}
#define INLINE_F841_7244
#endif
#ifndef INLINE_F841_7245
static EIF_INTEGER_32 inline_F841_7245 (void)
{
	return (EIF_INTEGER_32) (AL_INVALID_OPERATION)
	;
}
#define INLINE_F841_7245
#endif
#ifndef INLINE_F841_7246
static EIF_INTEGER_32 inline_F841_7246 (void)
{
	return (EIF_INTEGER_32) (AL_INVALID_NAME)
	;
}
#define INLINE_F841_7246
#endif
#ifndef INLINE_F841_7247
static EIF_INTEGER_32 inline_F841_7247 (void)
{
	return (EIF_INTEGER_32) (AL_OUT_OF_MEMORY)
	;
}
#define INLINE_F841_7247
#endif
#ifndef INLINE_F841_7248
static EIF_INTEGER_32 inline_F841_7248 (void)
{
	return (EIF_INTEGER_32) (ALC_INVALID_DEVICE)
	;
}
#define INLINE_F841_7248
#endif
#ifndef INLINE_F841_7249
static EIF_INTEGER_32 inline_F841_7249 (void)
{
	return (EIF_INTEGER_32) (ALC_INVALID_CONTEXT)
	;
}
#define INLINE_F841_7249
#endif
#ifndef INLINE_F841_7250
static EIF_INTEGER_32 inline_F841_7250 (void)
{
	return (EIF_INTEGER_32) (AL_NO_ERROR)
	;
}
#define INLINE_F841_7250
#endif
#ifndef INLINE_F841_7251
static EIF_INTEGER_32 inline_F841_7251 (void)
{
	return (EIF_INTEGER_32) (AL_POSITION)
	;
}
#define INLINE_F841_7251
#endif
#ifndef INLINE_F841_7252
static EIF_INTEGER_32 inline_F841_7252 (void)
{
	return (EIF_INTEGER_32) (AL_VELOCITY)
	;
}
#define INLINE_F841_7252
#endif
#ifndef INLINE_F841_7253
static EIF_INTEGER_32 inline_F841_7253 (void)
{
	return (EIF_INTEGER_32) (AL_ORIENTATION)
	;
}
#define INLINE_F841_7253
#endif
#ifndef INLINE_F841_7254
static EIF_INTEGER_32 inline_F841_7254 (void)
{
	return (EIF_INTEGER_32) (AL_DIRECTION)
	;
}
#define INLINE_F841_7254
#endif
#ifndef INLINE_F841_7255
static EIF_INTEGER_32 inline_F841_7255 (void)
{
	return (EIF_INTEGER_32) (AL_BUFFERS_PROCESSED)
	;
}
#define INLINE_F841_7255
#endif
#ifndef INLINE_F841_7256
static EIF_INTEGER_32 inline_F841_7256 (void)
{
	return (EIF_INTEGER_32) (AL_FORMAT_MONO8)
	;
}
#define INLINE_F841_7256
#endif
#ifndef INLINE_F841_7257
static EIF_INTEGER_32 inline_F841_7257 (void)
{
	return (EIF_INTEGER_32) (AL_FORMAT_STEREO8)
	;
}
#define INLINE_F841_7257
#endif
#ifndef INLINE_F841_7258
static EIF_INTEGER_32 inline_F841_7258 (void)
{
	return (EIF_INTEGER_32) (AL_FORMAT_MONO16)
	;
}
#define INLINE_F841_7258
#endif
#ifndef INLINE_F841_7259
static EIF_INTEGER_32 inline_F841_7259 (void)
{
	return (EIF_INTEGER_32) (AL_FORMAT_STEREO16)
	;
}
#define INLINE_F841_7259
#endif
#ifndef INLINE_F841_7260
static EIF_INTEGER_32 inline_F841_7260 (void)
{
	return (EIF_INTEGER_32) (AL_SOURCE_STATE)
	;
}
#define INLINE_F841_7260
#endif
#ifndef INLINE_F841_7261
static EIF_INTEGER_32 inline_F841_7261 (void)
{
	return (EIF_INTEGER_32) (AL_INITIAL)
	;
}
#define INLINE_F841_7261
#endif
#ifndef INLINE_F841_7262
static EIF_INTEGER_32 inline_F841_7262 (void)
{
	return (EIF_INTEGER_32) (AL_PLAYING)
	;
}
#define INLINE_F841_7262
#endif
#ifndef INLINE_F841_7263
static EIF_INTEGER_32 inline_F841_7263 (void)
{
	return (EIF_INTEGER_32) (AL_PAUSED)
	;
}
#define INLINE_F841_7263
#endif
#ifndef INLINE_F841_7264
static EIF_INTEGER_32 inline_F841_7264 (void)
{
	return (EIF_INTEGER_32) (AL_STOPPED)
	;
}
#define INLINE_F841_7264
#endif
#ifndef INLINE_F841_7265
static EIF_INTEGER_32 inline_F841_7265 (void)
{
	return (EIF_INTEGER_32) (AL_GAIN)
	;
}
#define INLINE_F841_7265
#endif
#ifndef INLINE_F841_7266
static EIF_INTEGER_32 inline_F841_7266 (void)
{
	return (EIF_INTEGER_32) (SFM_READ)
	;
}
#define INLINE_F841_7266
#endif
#ifndef INLINE_F841_7267
static EIF_INTEGER_32 inline_F841_7267 (void)
{
	return (EIF_INTEGER_32) (SFM_WRITE)
	;
}
#define INLINE_F841_7267
#endif
#ifndef INLINE_F841_7268
static EIF_INTEGER_32 inline_F841_7268 (void)
{
	return (EIF_INTEGER_32) (SFM_RDWR)
	;
}
#define INLINE_F841_7268
#endif
#ifndef INLINE_F841_7269
static EIF_INTEGER_32 inline_F841_7269 (void)
{
	return (EIF_INTEGER_32) (SEEK_SET)
	;
}
#define INLINE_F841_7269
#endif
#ifndef INLINE_F841_7270
static EIF_INTEGER_32 inline_F841_7270 (void)
{
	return (EIF_INTEGER_32) (SEEK_CUR)
	;
}
#define INLINE_F841_7270
#endif
#ifndef INLINE_F841_7271
static EIF_INTEGER_32 inline_F841_7271 (void)
{
	return (EIF_INTEGER_32) (SEEK_END)
	;
}
#define INLINE_F841_7271
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {GAME_AUDIO_EXTERNAL}.c_sizeof_sf_count_t */
EIF_TYPED_VALUE F841_7203 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_sizeof_sf_count_t";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 0, 12423);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12423);
	RTIV(Current, RTAL);
	Result = inline_F841_7203 ();
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

/* {GAME_AUDIO_EXTERNAL}.al_get_error */
EIF_TYPED_VALUE F841_7204 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_get_error";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 0, 12424);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12424);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) alGetError();
	
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

/* {GAME_AUDIO_EXTERNAL}.al_create_context */
EIF_TYPED_VALUE F841_7205 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "al_create_context";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 2, 12425);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12425);
	RTIV(Current, RTAL);Result = (EIF_POINTER) alcCreateContext((ALCdevice *) arg1, (ALCint *) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg2
#undef arg1
}

/* {GAME_AUDIO_EXTERNAL}.al_make_context_current */
void F841_7206 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "al_make_context_current";
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
	
	RTEAA(l_feature_name, 840, Current, 0, 1, 12426);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12426);
	RTIV(Current, RTAL);alcMakeContextCurrent((ALCcontext *) arg1);
	
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

/* {GAME_AUDIO_EXTERNAL}.al_get_current_context */
EIF_TYPED_VALUE F841_7207 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_get_current_context";
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 0, 12427);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12427);
	RTIV(Current, RTAL);Result = (EIF_POINTER) alcGetCurrentContext();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
}

/* {GAME_AUDIO_EXTERNAL}.al_destroy_context */
void F841_7208 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "al_destroy_context";
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
	
	RTEAA(l_feature_name, 840, Current, 0, 1, 12428);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12428);
	RTIV(Current, RTAL);alcDestroyContext((ALCcontext *) arg1);
	
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

/* {GAME_AUDIO_EXTERNAL}.al_suspend_context */
void F841_7209 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "al_suspend_context";
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
	
	RTEAA(l_feature_name, 840, Current, 0, 1, 12429);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12429);
	RTIV(Current, RTAL);alcSuspendContext((ALCcontext *) arg1);
	
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

/* {GAME_AUDIO_EXTERNAL}.al_open_device */
EIF_TYPED_VALUE F841_7210 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "al_open_device";
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
	
	RTEAA(l_feature_name, 840, Current, 0, 1, 12430);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12430);
	RTIV(Current, RTAL);Result = (EIF_POINTER) alcOpenDevice((ALCchar *) arg1);
	
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

/* {GAME_AUDIO_EXTERNAL}.al_close_device */
EIF_TYPED_VALUE F841_7211 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "al_close_device";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 1, 12431);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12431);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) alcCloseDevice((ALCdevice *) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {GAME_AUDIO_EXTERNAL}.al_get_listener_fv */
void F841_7212 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "al_get_listener_fv";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 2, 12432);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12432);
	RTIV(Current, RTAL);alGetListenerfv((ALenum) arg1, (ALfloat *) arg2);
	
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

/* {GAME_AUDIO_EXTERNAL}.al_set_listener_fv */
void F841_7213 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "al_set_listener_fv";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 2, 12433);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12433);
	RTIV(Current, RTAL);alListenerfv((ALenum) arg1, (ALfloat *) arg2);
	
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

/* {GAME_AUDIO_EXTERNAL}.al_get_source_fv */
void F841_7214 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "al_get_source_fv";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 3, 12434);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12434);
	RTIV(Current, RTAL);alGetSourcefv((ALuint) arg1, (ALenum) arg2, (ALfloat *) arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {GAME_AUDIO_EXTERNAL}.al_get_source_i */
void F841_7215 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "al_get_source_i";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 3, 12435);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12435);
	RTIV(Current, RTAL);alGetSourcei((ALuint) arg1, (ALenum) arg2, (ALint *) arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {GAME_AUDIO_EXTERNAL}.al_get_source_f */
void F841_7216 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "al_get_source_f";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 3, 12436);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12436);
	RTIV(Current, RTAL);alGetSourcef((ALuint) arg1, (ALenum) arg2, (ALfloat *) arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {GAME_AUDIO_EXTERNAL}.al_set_source_fv */
void F841_7217 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "al_set_source_fv";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 3, 12437);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12437);
	RTIV(Current, RTAL);alSourcefv((ALuint) arg1, (ALenum) arg2, (ALfloat *) arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {GAME_AUDIO_EXTERNAL}.al_set_source_f */
void F841_7218 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "al_set_source_f";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_r4 = * (EIF_REAL_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REAL32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 3, 12438);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12438);
	RTIV(Current, RTAL);alSourcef((ALuint) arg1, (ALenum) arg2, (ALfloat) arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {GAME_AUDIO_EXTERNAL}.al_gen_sources */
void F841_7219 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "al_gen_sources";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 2, 12439);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12439);
	RTIV(Current, RTAL);alGenSources((ALsizei) arg1, (ALuint *) arg2);
	
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

/* {GAME_AUDIO_EXTERNAL}.al_delete_sources */
void F841_7220 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "al_delete_sources";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 2, 12440);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12440);
	RTIV(Current, RTAL);alDeleteSources((ALsizei) arg1, (ALuint *) arg2);
	
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

/* {GAME_AUDIO_EXTERNAL}.al_gen_buffers */
void F841_7221 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "al_gen_buffers";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 2, 12441);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12441);
	RTIV(Current, RTAL);alGenBuffers((ALsizei) arg1, (ALuint *) arg2);
	
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

/* {GAME_AUDIO_EXTERNAL}.al_source_queue_buffers */
void F841_7222 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "al_source_queue_buffers";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 3, 12442);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12442);
	RTIV(Current, RTAL);alSourceQueueBuffers((ALuint) arg1, (ALsizei) arg2, (ALuint *) arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {GAME_AUDIO_EXTERNAL}.al_source_unqueue_buffers */
void F841_7223 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "al_source_unqueue_buffers";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 3, 12443);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12443);
	RTIV(Current, RTAL);alSourceUnqueueBuffers((ALuint) arg1, (ALsizei) arg2, (ALuint *) arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {GAME_AUDIO_EXTERNAL}.al_buffer_data */
void F841_7224 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "al_buffer_data";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_p
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 5, 12444);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12444);
	RTIV(Current, RTAL);alBufferData((ALuint) arg1, (ALenum) arg2, (ALvoid *) arg3, (ALsizei) arg4, (ALsizei) arg5);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(7);
	RTEE;
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {GAME_AUDIO_EXTERNAL}.al_source_play */
void F841_7225 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "al_source_play";
	RTEX;
#define arg1 arg1x.it_n4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 1, 12445);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12445);
	RTIV(Current, RTAL);alSourcePlay((ALuint) arg1);
	
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

/* {GAME_AUDIO_EXTERNAL}.al_source_pause */
void F841_7226 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "al_source_pause";
	RTEX;
#define arg1 arg1x.it_n4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 1, 12446);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12446);
	RTIV(Current, RTAL);alSourcePause((ALuint) arg1);
	
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

/* {GAME_AUDIO_EXTERNAL}.al_source_stop */
void F841_7227 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "al_source_stop";
	RTEX;
#define arg1 arg1x.it_n4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 1, 12447);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12447);
	RTIV(Current, RTAL);alSourceStop((ALuint) arg1);
	
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

/* {GAME_AUDIO_EXTERNAL}.al_source_rewind */
void F841_7228 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "al_source_rewind";
	RTEX;
#define arg1 arg1x.it_n4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 1, 12448);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12448);
	RTIV(Current, RTAL);alSourceRewind((ALuint) arg1);
	
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

/* {GAME_AUDIO_EXTERNAL}.sf_open */
EIF_TYPED_VALUE F841_7229 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "sf_open";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_p
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 3, 12449);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12449);
	RTIV(Current, RTAL);Result = (EIF_POINTER) sf_open((const char *) arg1, (int) arg2, (SF_INFO *) arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg3
#undef arg2
#undef arg1
}

/* {GAME_AUDIO_EXTERNAL}.sf_open_virtual */
EIF_TYPED_VALUE F841_7230 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "sf_open_virtual";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_p
#define arg4 arg4x.it_p
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_p = * (EIF_POINTER *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU(SK_POINTER,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 4, 12450);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12450);
	RTIV(Current, RTAL);Result = (EIF_POINTER) sf_open_virtual((SF_VIRTUAL_IO *) arg1, (int) arg2, (SF_INFO *) arg3, (void *) arg4);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {GAME_AUDIO_EXTERNAL}.sf_close */
EIF_TYPED_VALUE F841_7231 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "sf_close";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 1, 12451);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12451);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) sf_close((SNDFILE *) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {GAME_AUDIO_EXTERNAL}.sf_seek */
EIF_TYPED_VALUE F841_7232 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "sf_seek";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i8
#define arg3 arg3x.it_i4
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i8 = * (EIF_INTEGER_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT64, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT64,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 3, 12452);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12452);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_64) sf_seek((SNDFILE *) arg1, (sf_count_t) arg2, (int) arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT64; r.it_i8 = Result; return r; }
#undef arg3
#undef arg2
#undef arg1
}

/* {GAME_AUDIO_EXTERNAL}.sf_read_short */
EIF_TYPED_VALUE F841_7233 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "sf_read_short";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
#define arg3 arg3x.it_i8
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i8 = * (EIF_INTEGER_64 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT64, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_INT64,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 3, 12453);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12453);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_64) sf_read_short((SNDFILE *) arg1, (short *) arg2, (sf_count_t) arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT64; r.it_i8 = Result; return r; }
#undef arg3
#undef arg2
#undef arg1
}

/* {GAME_AUDIO_EXTERNAL}.set_snd_file_virtual_io */
void F841_7234 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_snd_file_virtual_io";
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
	
	RTEAA(l_feature_name, 840, Current, 0, 1, 12454);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12454);
	RTIV(Current, RTAL);setSndFileVirtualIo((SF_VIRTUAL_IO *) arg1);
	
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

/* {GAME_AUDIO_EXTERNAL}.c_sizeof_snd_file_virtual_io */
EIF_TYPED_VALUE F841_7235 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_sizeof_snd_file_virtual_io";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 0, 12455);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12455);
	RTIV(Current, RTAL);
	Result = inline_F841_7235 ();
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

/* {GAME_AUDIO_EXTERNAL}.c_sf_info_struct_allocate */
EIF_TYPED_VALUE F841_7236 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_sf_info_struct_allocate";
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 0, 12456);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12456);
	RTIV(Current, RTAL);
	Result = inline_F841_7236 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
}

/* {GAME_AUDIO_EXTERNAL}.c_sf_info_struct_free */
void F841_7237 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "c_sf_info_struct_free";
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
	
	RTEAA(l_feature_name, 840, Current, 0, 1, 12457);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12457);
	RTIV(Current, RTAL);
	inline_F841_7237 ((EIF_POINTER) arg1);
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

/* {GAME_AUDIO_EXTERNAL}.get_sf_info_struct_channels */
EIF_TYPED_VALUE F841_7238 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_sf_info_struct_channels";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 1, 12458);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12458);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) (((SF_INFO *)arg1)->channels);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {GAME_AUDIO_EXTERNAL}.get_sf_info_struct_frames */
EIF_TYPED_VALUE F841_7239 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_sf_info_struct_frames";
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
	
	RTEAA(l_feature_name, 840, Current, 0, 1, 12459);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12459);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_64) (((SF_INFO *)arg1)->frames);
	
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

/* {GAME_AUDIO_EXTERNAL}.get_sf_info_struct_format */
EIF_TYPED_VALUE F841_7240 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_sf_info_struct_format";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 1, 12460);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12460);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) (((SF_INFO *)arg1)->format);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {GAME_AUDIO_EXTERNAL}.get_sf_info_struct_samplerate */
EIF_TYPED_VALUE F841_7241 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_sf_info_struct_samplerate";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 1, 12461);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12461);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) (((SF_INFO *)arg1)->samplerate);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {GAME_AUDIO_EXTERNAL}.get_sf_info_struct_seekable */
EIF_TYPED_VALUE F841_7242 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_sf_info_struct_seekable";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 1, 12462);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12462);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) (((SF_INFO *)arg1)->seekable);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {GAME_AUDIO_EXTERNAL}.al_invalid_value */
EIF_TYPED_VALUE F841_7243 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_invalid_value";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 0, 12463);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12463);
	RTIV(Current, RTAL);
	Result = inline_F841_7243 ();
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

/* {GAME_AUDIO_EXTERNAL}.al_invalid_enum */
EIF_TYPED_VALUE F841_7244 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_invalid_enum";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 0, 12464);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12464);
	RTIV(Current, RTAL);
	Result = inline_F841_7244 ();
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

/* {GAME_AUDIO_EXTERNAL}.al_invalid_operation */
EIF_TYPED_VALUE F841_7245 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_invalid_operation";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 0, 12465);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12465);
	RTIV(Current, RTAL);
	Result = inline_F841_7245 ();
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

/* {GAME_AUDIO_EXTERNAL}.al_invalid_name */
EIF_TYPED_VALUE F841_7246 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_invalid_name";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 0, 12466);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12466);
	RTIV(Current, RTAL);
	Result = inline_F841_7246 ();
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

/* {GAME_AUDIO_EXTERNAL}.al_out_of_memory */
EIF_TYPED_VALUE F841_7247 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_out_of_memory";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 0, 12467);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12467);
	RTIV(Current, RTAL);
	Result = inline_F841_7247 ();
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

/* {GAME_AUDIO_EXTERNAL}.al_invalid_device */
EIF_TYPED_VALUE F841_7248 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_invalid_device";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 0, 12468);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12468);
	RTIV(Current, RTAL);
	Result = inline_F841_7248 ();
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

/* {GAME_AUDIO_EXTERNAL}.al_invalid_context */
EIF_TYPED_VALUE F841_7249 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_invalid_context";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 0, 12469);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12469);
	RTIV(Current, RTAL);
	Result = inline_F841_7249 ();
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

/* {GAME_AUDIO_EXTERNAL}.al_no_error */
EIF_TYPED_VALUE F841_7250 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_no_error";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 0, 12470);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12470);
	RTIV(Current, RTAL);
	Result = inline_F841_7250 ();
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

/* {GAME_AUDIO_EXTERNAL}.al_position */
EIF_TYPED_VALUE F841_7251 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_position";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 0, 12471);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12471);
	RTIV(Current, RTAL);
	Result = inline_F841_7251 ();
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

/* {GAME_AUDIO_EXTERNAL}.al_velocity */
EIF_TYPED_VALUE F841_7252 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_velocity";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 0, 12472);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12472);
	RTIV(Current, RTAL);
	Result = inline_F841_7252 ();
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

/* {GAME_AUDIO_EXTERNAL}.al_orientation */
EIF_TYPED_VALUE F841_7253 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_orientation";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 0, 12473);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12473);
	RTIV(Current, RTAL);
	Result = inline_F841_7253 ();
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

/* {GAME_AUDIO_EXTERNAL}.al_direction */
EIF_TYPED_VALUE F841_7254 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_direction";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 0, 12474);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12474);
	RTIV(Current, RTAL);
	Result = inline_F841_7254 ();
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

/* {GAME_AUDIO_EXTERNAL}.al_buffers_processed */
EIF_TYPED_VALUE F841_7255 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_buffers_processed";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 0, 12475);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12475);
	RTIV(Current, RTAL);
	Result = inline_F841_7255 ();
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

/* {GAME_AUDIO_EXTERNAL}.al_format_mono8 */
EIF_TYPED_VALUE F841_7256 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_format_mono8";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 0, 12476);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12476);
	RTIV(Current, RTAL);
	Result = inline_F841_7256 ();
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

/* {GAME_AUDIO_EXTERNAL}.al_format_stereo8 */
EIF_TYPED_VALUE F841_7257 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_format_stereo8";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 0, 12477);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12477);
	RTIV(Current, RTAL);
	Result = inline_F841_7257 ();
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

/* {GAME_AUDIO_EXTERNAL}.al_format_mono16 */
EIF_TYPED_VALUE F841_7258 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_format_mono16";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 0, 12478);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12478);
	RTIV(Current, RTAL);
	Result = inline_F841_7258 ();
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

/* {GAME_AUDIO_EXTERNAL}.al_format_stereo16 */
EIF_TYPED_VALUE F841_7259 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_format_stereo16";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 0, 12479);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12479);
	RTIV(Current, RTAL);
	Result = inline_F841_7259 ();
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

/* {GAME_AUDIO_EXTERNAL}.al_source_state */
EIF_TYPED_VALUE F841_7260 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_source_state";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 0, 12480);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12480);
	RTIV(Current, RTAL);
	Result = inline_F841_7260 ();
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

/* {GAME_AUDIO_EXTERNAL}.al_initial */
EIF_TYPED_VALUE F841_7261 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_initial";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 0, 12481);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12481);
	RTIV(Current, RTAL);
	Result = inline_F841_7261 ();
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

/* {GAME_AUDIO_EXTERNAL}.al_playing */
EIF_TYPED_VALUE F841_7262 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_playing";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 0, 12482);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12482);
	RTIV(Current, RTAL);
	Result = inline_F841_7262 ();
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

/* {GAME_AUDIO_EXTERNAL}.al_paused */
EIF_TYPED_VALUE F841_7263 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_paused";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 0, 12483);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12483);
	RTIV(Current, RTAL);
	Result = inline_F841_7263 ();
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

/* {GAME_AUDIO_EXTERNAL}.al_stopped */
EIF_TYPED_VALUE F841_7264 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_stopped";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 0, 12484);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12484);
	RTIV(Current, RTAL);
	Result = inline_F841_7264 ();
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

/* {GAME_AUDIO_EXTERNAL}.al_gain */
EIF_TYPED_VALUE F841_7265 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "al_gain";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 0, 12485);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12485);
	RTIV(Current, RTAL);
	Result = inline_F841_7265 ();
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

/* {GAME_AUDIO_EXTERNAL}.sfm_read */
EIF_TYPED_VALUE F841_7266 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sfm_read";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 0, 12486);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12486);
	RTIV(Current, RTAL);
	Result = inline_F841_7266 ();
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

/* {GAME_AUDIO_EXTERNAL}.sfm_write */
EIF_TYPED_VALUE F841_7267 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sfm_write";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 0, 12487);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12487);
	RTIV(Current, RTAL);
	Result = inline_F841_7267 ();
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

/* {GAME_AUDIO_EXTERNAL}.sfm_rdwr */
EIF_TYPED_VALUE F841_7268 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sfm_rdwr";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 0, 12488);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12488);
	RTIV(Current, RTAL);
	Result = inline_F841_7268 ();
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

/* {GAME_AUDIO_EXTERNAL}.seek_set */
EIF_TYPED_VALUE F841_7269 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "seek_set";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 0, 12489);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12489);
	RTIV(Current, RTAL);
	Result = inline_F841_7269 ();
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

/* {GAME_AUDIO_EXTERNAL}.seek_cur */
EIF_TYPED_VALUE F841_7270 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "seek_cur";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 0, 12490);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12490);
	RTIV(Current, RTAL);
	Result = inline_F841_7270 ();
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

/* {GAME_AUDIO_EXTERNAL}.seek_end */
EIF_TYPED_VALUE F841_7271 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "seek_end";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 840, Current, 0, 0, 12491);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(840, Current, 12491);
	RTIV(Current, RTAL);
	Result = inline_F841_7271 ();
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

void EIF_Minit841 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
