#ifndef _1050_H_
#define _1050_H_

#include "common.h"

/* Functions */
void bootproc(void);
void func_80025EF0(PlayerActor* player, Tongue* tongue, s32 arg2);
void func_8002CDBC(ContMain*);
void func_8004BC48(ContMain*);
void func_8004CD9C(s32, void*);
void Battle_Update(void);
Gfx* func_8007A2D8(Gfx*, Camera*);
void func_8007AC60(Camera*, PlayerActor*);
void func_8008C1C8(Gfx**);
void Timing_StartProcess(void);
void Timing_StopProcess(void);
void func_8008C554(void);
void osViSwapBuffer(void* frameBufPtr);
void Sched_StartThread(void);
void Audio_StartThread(void);
s32 func_800AF604(f32, f32, f32, f32);
void __osInitialize_common(void);
Gfx* func_8007B524(GraphicStruct*, Gfx*, Camera*);
Gfx* func_8005F408(Gfx*);
void debugMain(void);
Gfx* Shadows_Draw(GraphicStruct*, Gfx*);
Gfx* func_800C3B50(GraphicStruct*, Gfx*);
s32 PutDList(Mtx** arg0, Gfx** arg1, Gfx* arg2);
void func_80080C28(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9);
void func_80058044(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, s32 arg7);
void Effect_TypeT_Init(f32, f32, s32, s32);
void func_80027240(Mtx** arg0, Mtx* arg1, s32 arg2, s32 arg3);
void func_80027138(AnimPointer* arg0, s32* arg1, s32* arg2, Mtx** arg3);
void Effect_TypeAF_Init(f32* arg0, f32* arg1, f32* arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6, s32 arg7, s32 arg8);

/* Ext Variables */
extern f32 D_80168D88;
extern f32 D_80168D8C;
extern f32 D_80168D90;
extern GraphicStruct gGraphicsList[2];
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
extern OSMesgQueue gFrameDrawnMessageQueue;
extern OSMesgQueue gSyncMessageQueue;
extern Gfx D_1015B18[];
extern s16 D_800FFEC0;
extern Gfx D_1015A70[];
extern Gfx D_1015AB8[];
extern Gfx D_1015AE8[];
extern Gfx AntLand_yellowAnt_gfx14_Gfx[];
extern Gfx D_300EFC0[];
extern Gfx D_3007EA0[];
extern Gfx D_3008428[];
extern Gfx BombLand_unk74_Gfx[];
extern Gfx D_3012460[];
extern Gfx KidsLand_actorModel9_Gfx[];
extern Gfx D_30081F8[];
extern Gfx D_30093A8[];
extern Gfx D_300A9E0[];
extern Gfx KidsLand_actorModel10_Gfx[];
extern Gfx KidsLand_actorModel12_Gfx[];
extern Gfx DesertCastle_actorModel4_Gfx[];
extern Gfx DesertCastle_actorModel19_Gfx[];
extern Gfx DesertCastle_actorModel21_Gfx[];
extern Gfx D_300CED0[];
extern Gfx D_306DDC0[];
extern Gfx D_306F3C8[];
extern Gfx D_30708F0[];
extern Gfx D_30740B0[];
extern Gfx D_3010220[];
extern Gfx D_3013390[];
extern Gfx JungleLand_unkunk_Gfx[];
extern Gfx JungleLand_unkunk2_Gfx[];
extern Gfx JungleLand_unkunk3_Gfx[];
extern Gfx JungleLand_unkunk4_Gfx[];
extern Gfx D_3011318[];
extern Gfx D_300DB48[];
extern void* D_3025DA8;
extern s32 D_800FE400;
extern Gfx Davy_restAssociate_Gfx[];
extern Gfx* D_800F0650[];
extern Gfx static0_gfx6_Gfx[];
extern Gfx static0_gfx5_Gfx[];
extern Gfx Global_unusedStructure_Gfx[];


extern s32 D_800F0560;

extern AnimPointer JungleLand_spiderRockInitPointers_Animp;
extern AnimPointer JungleLand_golemSleepPointers_Animp;
extern AnimPointer JungleLand_golemAttackPointers_Animp;
extern AnimPointer JungleLand_fishHeadInitPointers_Animp;
extern AnimPointer JungleLand_fishTailInitPointers_Animp;


#endif // _1050_H_
