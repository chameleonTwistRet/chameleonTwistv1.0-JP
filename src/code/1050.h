#ifndef _1050_H_
#define _1050_H_

#include "common.h"

/* Structs */


/* Functions */
Gfx* func_8002C4E8(graphicStruct*, s32, s32);
void func_8002CB6C(Gfx*, graphicStruct*, s32);
void func_8002CBE8(s32);
void func_8002CDBC(contMain*);
void func_8004BC48(contMain*);
void func_8004CD9C(s32, void*);
void func_8004DDE0(void);
void func_8004E784(contMain*, u32, s32*, contMain*);
void Battle_Update(void);
void func_80059254(Mtx*, f32, f32, f32, f32, f32, f32, s32);
void func_800598C4(Mtx*, f32, f32, f32, f32, f32, f32, s32);
void func_8005747C(f32, f32, f32, f32, f32, f32, s32);
void func_8008C494(void);
void func_8008C4B8(void);
void func_8008C554(void);
void osViSwapBuffer(void* frameBufPtr);
s32 Controller_Init(void);
void Video_StartThread(void);
void Audio_StartThread(void);
s32 func_800AF604(f32, f32, f32, f32);
void __osInitialize_common(void);


/* Ext Variables */
extern graphicStruct gGraphicsList[2];
extern s32 gFramebufferIndex;
extern s32 D_800F066C;
extern s32 sDebugMultiplayer;
extern s8 D_800FF8DC;
extern u8 D_800FF8E0[];
extern u8 D_800FF8E4[];
extern s32 D_80174980;
extern s32 Battle_GameType;
extern OSTask D_800F04E0[2];
extern OSMesgQueue D_801192D0;
extern OSMesgQueue D_801192E8;


#endif // _1050_H_
