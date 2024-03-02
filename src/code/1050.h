#ifndef _1050_H_
#define _1050_H_

#include "common.h"

/* Structs */


/* Functions */
void func_8002CB6C(Gfx*, graphicStruct*, s32);
void func_8002CBE8(s32);
void func_8002CDBC(ContMain*);
void func_8004BC48(ContMain*);
void func_8004CD9C(s32, void*);
void func_8004DDE0(void);
void func_8004E784(ContMain*, u32, s32*, ContMain*);
void Battle_Update(void);
void func_80059254(Mtx*, f32, f32, f32, f32, f32, f32, s32);
void func_800598C4(Mtx*, f32, f32, f32, f32, f32, f32, s32);
void func_8005747C(f32, f32, f32, f32, f32, f32, s32);
Gfx* func_8005CA44(Gfx*);
Gfx* func_8007A2D8(Gfx*, Camera*);
void func_8007AC60(Camera*, PlayerActor*);
void func_80084A04(void);
void func_8008C1C8(Gfx**);
void func_8008C494(void);
void func_8008C4B8(void);
void func_8008C554(void);
void osViSwapBuffer(void* frameBufPtr);
s32 Controller_Init(void);
void Video_StartThread(void);
void Audio_StartThread(void);
s32 func_800AF604(f32, f32, f32, f32);
void __osInitialize_common(void);
Gfx* func_8007B524(graphicStruct*, Gfx*, Camera*);
Gfx* func_8005F408(Gfx*);
Gfx* func_80084884(Gfx*);
void debugMain(void);
Gfx* Shadows_Draw(graphicStruct*, Gfx*);
Gfx* func_800C3B50(graphicStruct*, Gfx*);
s32 PutDList(Mtx** arg0, Gfx** arg1, Gfx* arg2);


/* Ext Variables */
extern graphicStruct gGraphicsList[2];
extern s32 gFramebufferIndex;
extern s32 D_800F066C;
extern s32 sDebugMultiplayer;
extern Mtx* D_800FF8D4;
extern u8 D_800FF8DC;
extern u8 D_800FF8E0;
extern u8 D_800FF8E4;
extern s32 D_80174980;
extern s32 Battle_GameType;
extern OSTask D_800F04E0[2];
extern OSMesgQueue D_801192D0;
extern OSMesgQueue D_801192E8;
extern Gfx D_1015B18[];
extern s16 D_800FFEC0;
extern Gfx D_1015A70[];
extern Gfx D_1015AB8[];
extern Gfx D_1015AE8[];

#endif // _1050_H_
