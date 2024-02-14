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


/* Functions */
void func_8005456C(f32, f32, f32, f32, f32, s32);
void func_80073090(void);
s32 func_8008BE14(void);
void func_800A0D90(void);
void func_800678EC(s32, s32, s32, s32, s32);
void func_80058BE4(Mtx* arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, s32 arg7);
void func_800536D8(void);
void func_80059F28(f32, f32, f32, f32, f32, f32, f32, f32, s32);
void func_800771DC(s32*, f32, f32, s32, s32, s32*, f32, f32, f32, f32);


/* Ext Variables */
extern unk800FE564 D_800FE564[];
extern s32 D_800FE708;
extern s32 D_80168EBC;
extern s32 D_80168EC0;
extern s32 D_80168FEC;
extern s32 D_80168FF0;
extern s32 D_8016911C;
extern s32 D_80169120;
extern s32 D_8016924C;
extern s32 D_80169250;
extern s32 D_800F0B68[4][4];
extern s32 D_800F0BC0[4];
extern s32 D_800F0B5C;
extern s32 D_800FE404;
extern s32 D_800FE74C;

#endif  //_2C3B0_H_
