#ifndef _1050_H_
#define _1050_H_

#include "common.h"

/* Structs */
typedef struct Unk_8002B7BC {
    /* 0x000 */ Mtx unk_00;
    /* 0x040 */ char unk_40[0x140];
    /* 0x180 */ Mtx unk_180[2];
    /* 0x200 */ Mtx unk_200[1]; // count unknown
} Unk_8002B7BC; // size unknown

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
void func_80080C28(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9);
void func_80058044(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, s32 arg7);
void func_800698A4(f32, f32, s32, s32);
void func_80027240(Mtx** arg0, Mtx* arg1, s32 arg2, s32 arg3);
void func_80027138(void* arg0, s32* arg1, s32* arg2, Unk_8002B7BC** arg3);
void func_800703C0(f32* arg0, f32* arg1, f32* arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6, s32 arg7, s32 arg8);

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
extern Gfx D_3057250[];
extern Gfx D_300EFC0[];
extern Gfx D_3007EA0[];
extern Gfx D_3008428[];
extern Gfx D_3043F60[];
extern Gfx D_3012460[];
extern Gfx D_3053ED0[];
extern Gfx D_30081F8[];
extern Gfx D_30093A8[];
extern Gfx D_300A9E0[];
extern Gfx D_30545C8[];
extern Gfx D_3056428[];
extern Gfx D_3044498[];
extern Gfx D_30466C8[];
extern Gfx D_3049EB0[];
extern Gfx D_300CED0[];
extern Gfx D_306DDC0[];
extern Gfx D_306F3C8[];
extern Gfx D_30708F0[];
extern Gfx D_30740B0[];
extern Gfx D_3010220[];
extern Gfx D_3013390[];
extern Gfx D_3058750[];
extern Gfx D_30595A8[];
extern Gfx D_305A738[];
extern Gfx D_305B528[];
extern Gfx D_3011318[];
extern Gfx D_300DB48[];
extern void* D_3025DA8;
extern s32 D_800FE400;
extern Gfx D_8008B58[];
extern Gfx* D_800F0638[];
extern Gfx* D_800F0650[];
extern Gfx D_1015CB0[];
extern Gfx D_1015BD0[];
extern Gfx D_2006160[];
extern s32 D_800F686C;
extern s32 D_800F6870;
extern void* D_1045BF4;
extern void* D_1045BAC;
extern void* D_1045BB8;
extern void* D_1045BDC;
extern void* D_1045BE8;
extern void* D_1045BD0;
extern void* D_1045BC4;
extern void* D_1045B70;
extern void* D_1045BA0;
extern void* D_1045B7C;
extern s32 D_800F0560;
extern void* D_1045B88;
extern f32 D_80168D88;
extern f32 D_80168D8C;
extern f32 D_80168D90;

#endif // _1050_H_
