#ifndef _84E0_H_
#define _84E0_H_

#include "common.h"

/* Structs */
typedef struct ContInput {
    u16 buttons0;
    u16 buttons1;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} ContInput;

//TODO: find out what this does
typedef struct Unk_func_80035374{
    s32 unk0;
    s16 unk4;
    s16 unk6;
    s16 unk8;
    s16 unkA;
    f32 unkC;
}Unk_func_80035374;

// typedef struct armsMaybe {
//     s32 armActorIDs[15][15]; //static s32 D_801749D8[15];
//     // s32 armActorIDs2[15]; //static s32 D_80174A14[15];
// } armsMaybe;

// //these 3 should maybe be a struct
// armsMaybe D_801749D8;

/* Functions */

void WrapDegrees(f32* theta_ptr);
void Effect_TypeD_Create(f32, f32, f32);
void func_800D34CC(void);
void ResetCpuControllers(void);
s32 GetTongueTargetDistSq(Actor*, PlayerActor*, f32, f32);
s32 GetTongueTargetDistSq(Actor*, PlayerActor*, f32, f32);
void SetCameraParameters(void);
void func_8002E9F4(void);
void ActorTick_BattleModeSaucer(Actor* actor);

void ActorInit_BulletHellAntSpawner(Actor*);
void ActorInit_Chomper(Actor*);

/* Ext Variables */
extern s32 gLevelFlowState;
extern s32 D_80174988;
extern s32 D_80174868;
extern f32 D_80174748;
extern s32 D_800F06F4;
extern s32 D_800F06F8;
extern s32 D_800F06FC;
extern s32 D_800F0700;
extern s32 D_80168D7C;
extern s32 D_80168D80;
extern s32 D_80168D84;
extern s32 sDebugMultiplayer;
extern s32 Battle_GameType;

extern f32 D_8010B348;
extern f32 D_8010B284;
extern f32 D_8010B288;
extern f32 D_8010B28C;
extern f32 D_8010B290;
extern f32 D_8010B294;
extern s32 gCameraInputDisabled;

extern f32 D_8010BC70;
extern f32 D_8010BC74;

void Effect_TypeX_Create(f32, f32, f32, f32, s32); // sprite.c

#endif //_84E0_H_
