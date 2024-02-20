#ifndef _2C3B0_H_
#define _2C3B0_H_

#include "common.h"

/* Structs */
typedef struct unk80176840 {
    char unk_00[0x10];
} unk80176840;

typedef struct unk800FE564 {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
} unk800FE564;

typedef struct unk800F0BE4 {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ f32 unk_04;
    /* 0x08 */ f32 unk_08;
    /* 0x0C */ f32 unk_0C;
    /* 0x10 */ f32 unk_10;
    /* 0x14 */ f32 unk_14;
    /* 0x18 */ f32 unk_18;
    /* 0x1C */ f32 unk_1C;
    /* 0x20 */ s32 unk_20;
} unk800F0BE4; //sizeof 0x24

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

/* Functions */
void func_8005456C(f32, f32, f32, f32, f32, s32);
void func_80073090(void);
s32 func_8008BE14(void);
void func_800A0D90(void);
void func_800678EC(s32, s32, s32, s32, s32);
void func_80058BE4(Mtx* arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, s32 arg7);
void func_800536D8(void);
void func_80059F28(f32, f32, f32, f32, f32, f32, f32, f32, s32);
void func_80070970(u8*, f32, f32, f32, f32, unkStruct16*, s32, s32, s32);
void func_80077688(f32, f32, f32, f32, s32, unk_80052094_8*, s32, s32, f32, f32, f32);
void func_800771DC(s32*, f32, f32, s32, s32, s32*, f32, f32, f32, f32);
s32 func_80080318(s32, s32, s32*, s32*);

/* Ext Variables */
extern Camera* D_80176B78;
extern s16 gSelectedBattleBGM;
extern s32 D_800F0674;
extern unkStruct16 D_800F0D90[];
extern unkStruct16 D_800F0DE0[];
extern s32 D_800FE404;
extern unk800FE564 D_800FE564[];
extern s32 D_800FE708;
extern s32 D_800FE74C;
extern s32 D_80168EBC;
extern s32 D_80168EC0;
extern s32 D_80168FEC;
extern s32 D_80168FF0;
extern s32 D_8016911C;
extern s32 D_80169120;
extern s32 D_8016924C;
extern s32 D_80169250;
extern s32 D_801749AC;
extern s32 D_8020250C;

#endif  //_2C3B0_H_
