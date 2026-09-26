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
void func_8008C1C8(Gfx**); //void func_8008C1C8(Gfx**);
void Timing_StartProcess(void);
void Timing_StopProcess(void);
void func_8008C554(void);
void osViSwapBuffer(void* frameBufPtr);
void Sched_StartThread(void);
void Audio_StartThread(void);
s32 IsPointInViewAreaFull(f32, f32, f32, f32);
void __osInitialize_common(void);
Gfx* func_8007B524(GraphicStruct*, Gfx*, Camera*);
Gfx* func_8005F408(Gfx*);
void debugMain(void);
Gfx* Shadows_Draw(GraphicStruct*, Gfx*);
Gfx* func_800C3B50(GraphicStruct*, Gfx*);
s32 PutDList(Mtx** arg0, Gfx** arg1, Gfx* arg2);
void func_80080C28(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9);
void func_80058044(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, s32 arg7);
void func_80027240(Mtx** arg0, Mtx* arg1, s32 arg2, s32 arg3);
void Anim_LoadPointer(AnimPointer* arg0, s32* arg1, s32* arg2, Mtx** arg3);
void Effect_DizzyStars_Init(f32* arg0, f32* arg1, f32* arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6, s32 arg7, s32 arg8);

/* Ext Variables */
extern f32 D_80168D88;
extern f32 D_80168D8C;
extern f32 D_80168D90;
extern s32 gFramebufferIndex;
extern s32 D_800F066C;
extern s32 sDebugMultiplayer;
extern Mtx* gMatrixBufPtr;
extern u8 D_800FF8DC;
extern u8 D_800FF8E0;
extern u8 D_800FF8E4;
extern s32 gLevelFlowState;
extern s32 Battle_GameType;
extern OSTask D_800F04E0[2];
extern OSMesgQueue gFrameDrawnMessageQueue;
extern OSMesgQueue gSyncMessageQueue;
extern Gfx D_1015B18[];
extern s16 D_800FFEC0;
extern Gfx D_1015A70[];
extern Gfx D_1015AB8[];
extern Gfx D_1015AE8[];
extern Gfx AntLand_YellowAntModel_Gfx[];
extern Gfx Quintella_Model_Gfx[];
extern Gfx BombSnake_HeadModel_Gfx[];
extern Gfx BombSnake_TailModel_Gfx[];
extern Gfx BombLand_CannonModel_Gfx[];
extern Gfx BattleMode_PopcornBucket_Gfx[];
extern Gfx KidsLand_PogoModel_Gfx[];
extern Gfx GiantCake_CakeWithNoStrawberriesModel_Gfx[];
extern Gfx GiantCake_WalkingWheelModel_Gfx[];
extern Gfx GiantCake_StrawberryModel_Gfx[];
extern Gfx KidsLand_BowlingPin_Gfx[];
extern Gfx KidsLand_DavyBowlingPinModel_Gfx[];
extern Gfx DesertCastle_ArrowModel_Gfx[];
extern Gfx DesertCastle_ChomperModel_Gfx[];
extern Gfx DesertCastle_BoulderModel_Gfx[];
extern Gfx Armadillo_Model_Gfx[];
extern Gfx GhostCastle_GetaShoeModel_Gfx[];
extern Gfx GhostCastle_FoldingScreenModel_Gfx[];
extern Gfx GhostCastle_WallScrollModel_Gfx[];
extern Gfx GhostCastle_FireShooterModel_Gfx[];
extern Gfx PileOfBooks_Model_Gfx[];
extern Gfx PileOfBooks_HandModel_Gfx[];
extern Gfx JungleLand_GolemModel_Gfx[];
extern Gfx JungleLand_SpiderRockModel_Gfx[];
extern Gfx JungleLand_FishBodyModel_Gfx[];
extern Gfx JungleLand_FishTailModel_Gfx[];
extern Gfx LizardKong_BoulderModel_Gfx[];
extern Gfx LizardKong_Model_Gfx[];
extern AnimPointer LizardKong_ThrowBoulderPointers_Animp;
extern s32 D_800FE400;
extern Gfx Davy_Model_Gfx[];
extern Gfx Jack_Model_Gfx[];
extern Gfx Fred_Model_Gfx[];
extern Gfx Linda_Model_Gfx[];
extern Gfx Black_Model_Gfx[];
extern Gfx White_Model_Gfx[];

extern Gfx Battle_Chameleons_Davy_Model_Gfx[];
extern Gfx Battle_Chameleons_Jack_Model_Gfx[];
extern Gfx Battle_Chameleons_Fred_Model_Gfx[];
extern Gfx Battle_Chameleons_Linda_Model_Gfx[];
extern Gfx Battle_Chameleons_Black_Model_Gfx[];
extern Gfx Battle_Chameleons_White_Model_Gfx[];


extern Gfx* Battle_ChameleonGfxs[];
extern Gfx static0_gfx6_Gfx[];
extern Gfx static0_gfx5_Gfx[];
extern Gfx Global_unusedStructure_Gfx[];


extern s32 Chameleon_StepBool;

extern AnimPointer JungleLand_SpiderRockIdlePointers_Animp;
extern AnimPointer JungleLand_GolemGetUpPointers_Animp;
extern AnimPointer JungleLand_GolemAttackPointers_Animp;
extern AnimPointer JungleLand_FishBodyIdlePointers_Animp;
extern AnimPointer JungleLand_FishTailIdlePointers_Animp;
extern Addr framebuffers_VRAM;


#endif // _1050_H_
