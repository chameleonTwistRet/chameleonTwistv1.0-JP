#ifndef _BATTLE_H_
#define _BATTLE_H_

#include "common.h"

/* Structs */

typedef struct BattlePlayerData {
    /* 0x00 */ s32 fallOffTime;
    /* 0x04 */ Vec2f portraitPos;
    /* 0x0C */ Vec2f timerPos;
    /* 0x14 */ Vec2f rankPos;
    /* 0x1C */ f32 rankTimer;
    /* 0x20 */ s32 rank;
} BattlePlayerData; //sizeof 0x24

typedef struct unk_80052094_8 {
    /* 0x00 */ f32 unk_00;
    /* 0x08 */ s32 unk_04;
} unk_80052094_8; //sizeof 0x8

typedef struct unkStruct16 {
Addr* unk0;
Addr* unk4;
void* unk8;
s32 unkC;
f32 unk10;
} unkStruct16;

enum BattleStages {
    BATTLE_STAGE_INIT = 0,
    BATTLE_STAGE_INVALID = 1,
    BATTLE_STAGE_AFTER_INIT = 2,
    BATTLE_STAGE_READY = 3,
    BATTLE_STAGE_GO = 4,
    BATTLE_STAGE_GAME = 5,
    BATTLE_STAGE_SUDDEN_DEATH = 6,
    BATTLE_STAGE_END_ACTIONS= 7,
    BATTLE_STAGE_SHOW_WINNER = 8,
    BATTLE_STAGE_WAIT_BEFORE_EXIT = 9,
    BATTLE_STAGE_EXIT = 10
};

enum BattleTypes {
    BATTLE_TYPE_UNK_0 = 0,
    BATTLE_TYPE_SURVIVAL = 1,
    BATTLE_TYPE_TIME_TRIAL = 2
};

/* Functions */
void Effect_TypeO_Init(s32, s32, s32, s32, s32);
void func_80058BE4(Mtx* arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, s32 arg7);
void func_80059F28(f32, f32, f32, f32, f32, f32, f32, f32, s32);
void Effect_TypeAG_Init(f32, f32, s32);
void func_80070970(u8*, f32, f32, f32, f32, unkStruct16*, s32, s32, s32);
void func_80077688(f32, f32, f32, f32, s32, unk_80052094_8*, s32, s32, f32, f32, f32);
void func_800771DC(s32*, f32, f32, s32, s32, s32*, f32, f32, f32, f32);
s32 func_80080318(s32, s32, s32*, s32*);
s32 func_8008BFE0(s32);
s32 func_8008BE14(void);
void func_800A0D90(void);
void func_80073090(void);

/* Ext Variables */
extern s32 D_800FE708;
extern Camera* D_80176B78;
extern s16 gSelectedBattleBGM;
extern s32 D_800F0674;
extern unkStruct16 D_800F0D90[];
extern unkStruct16 D_800F0DE0[];
extern s32 D_800FE404;
extern RGBA32 D_800FE564[];
extern s32 D_800FE74C;

extern unk_80052094_8 Battle_MsgReady[];
extern unk_80052094_8 Battle_MsgGo[];

extern s32 Battle_GameType;
extern s32 gTimeTrialDuration;

#endif  //_BATTLE_H_
