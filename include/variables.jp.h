#include "ultra64.h"
#include "macros.h"
#include "common_structs.h"
#include "io/viint.h"
#include "os/osint.h"


#ifndef VARIABLES_JP_H
#define VARIABLES_JP_H

//A3D00
extern f64 D_80110120;
extern f32 D_80110108;


extern s32 D_801748A0;
extern __OSViContext* __osViCurr;
extern __OSViContext* __osViNext;
extern OSThread* D_801FD560;
extern Vec2f D_8010A6D0[0x6C]; //positions?
extern unk_8010AA28 D_8010AA28[0x6C]; //actor related?
extern Actor D_8016AC68[64]; //currently loaded actor structs
extern s32 __additional_scanline; //rng

extern s32 D_800F6888;
extern s32 D_800F688C;
extern s32 D_800F6890;
extern s32 D_800F6894;
extern s32 D_800F6898;
extern s32 D_800F689C;
extern s32 D_800F68A0;
extern s32 D_800F68A4;
extern s32 D_800F68A8;
extern s32 D_800F68AC;
extern s32 D_800F68C0;
extern s32 D_800F68C4[2];
extern s32 D_800F68CC;
extern s32 D_801191A0;
extern s32 D_801FFB78;
extern char D_8010CA10[9]; //"mem err!\n"
extern f32 D_800FDFF4;
extern f32 D_800FDFF8;
extern f32 D_800FDFFC;
extern s8 D_800FDFD0;
extern s8 D_800FDFD4;
extern s8 D_800FDFD8;
extern s8 D_800FDFDC;
extern f32 D_800FDFF0;
extern s32 D_800FDFE8;
extern s32 D_800FDFEC;
extern u8 D_80176850[16];
extern s32 D_800FDFC0[2];
extern s32 D_800FDFC8[2];




//5FF30
extern u8 D_800F06DC;
extern s32 D_800F06EC;
extern s32 D_80174878;
extern s32 D_800FF5D0;
extern s32 D_801B3120;
extern s32 D_801B3138;
extern s32 D_801B3140;
extern s32 D_800FF63C;
extern unk_D_801FFB90 D_801FFB90;

extern u32 D_80200054;
extern s32 D_80200060;
extern s32 D_801FF750;
extern s32 D_801FF7F0;
extern s32 D_800FF5E4;
extern s32 D_800FF5E8;
extern s16 D_800FF5EC;
extern s16 D_800FF5F0;
extern s16 D_800FF5F4;
extern s16 D_800FF5F8;
extern s16 D_800FF5FC;
extern s16 D_800FF604;
extern s16 D_800FF608;
extern s8 D_800FF64C;
extern s8 D_800FF650;
extern s32 D_801FC9A0;
extern s32 D_801FC9A8;
extern s16 D_801FC9B4;
extern f64 D_801FCA00;
extern s32 D_801FF710;
extern playerActor D_80168DA8;
extern tongue D_80169268;


extern f32 D_8010B328;
extern f32 D_8010B32C;
extern f32 D_8010B330;
extern f32 D_8010B334;

extern playerActor* PlayerPointer;
extern tongue* TonguePointer;

#endif
