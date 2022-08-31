#include "ultra64.h"
#include "macros.h"
#include "common_structs.h"
#include "io/viint.h"
#include "os/osint.h"


#ifndef VARIABLES_JP_H
#define VARIABLES_JP_H



extern __OSViContext* __osViCurr;
extern __OSViContext* __osViNext;
extern s32 __additional_scanline; //rng
extern playerActor* PlayerPointer;
extern tongue* TonguePointer;



extern u8 D_800F06DC;
extern s32 D_800F06EC;
extern s32 D_800F0B38;
extern u32 D_800F0B50;
extern s32 D_800F6880;
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
extern s32 D_800FDFA0;
extern s32 D_800FDFC0[2];
extern s32 D_800FDFC8[2];
extern s8 D_800FDFD0;
extern s8 D_800FDFD4;
extern s8 D_800FDFD8;
extern s8 D_800FDFDC;
extern s8 D_800FDFE0;
extern s8 D_800FDFE4;
extern s32 D_800FDFE8;
extern s32 D_800FDFEC;
extern f32 D_800FDFF0;
extern f32 D_800FDFF4;
extern f32 D_800FDFF8;
extern f32 D_800FDFFC;
extern s32 D_800FE000;
extern f32 D_800FE004;
extern f32 D_800FE008;
extern f32 D_800FE00C;
extern f32 D_800FE010;
extern f32 D_800FE060;
extern s32 D_800FE160;
extern s32 D_800FE164;
extern u8 D_800FE18C;
extern u8 D_800FE190;
extern u8 D_800FE194;
extern u8 D_800FE198;
extern s32 D_800FE19C;
extern s8 D_800FE4DC;
extern s32 D_800FEA30;
extern s32 D_800FEA34;
extern s32 D_800FEA4C;
extern s32 D_800FEB90;
extern s32 D_800FEB94;
extern s32 D_800FEB98;
extern s32 D_800FEB9C;
extern f32 D_800FEBD0;
extern what D_800FEBD4;
extern s32 D_800FF5D0;
extern s32 D_800FF5E4;
extern s32 D_800FF5E8;
extern s16 D_800FF5EC;
extern s16 D_800FF5F0;
extern s16 D_800FF5F4;
extern s16 D_800FF5F8;
extern s16 D_800FF5FC;
extern s16 D_800FF604;
extern s16 D_800FF608;
extern s32 D_800FF63C;
extern s8 D_800FF64C;
extern s8 D_800FF650;
extern s16 D_800FF854[];
extern s32 D_800FFEB4;
extern s32 D_80108B68;
extern OSViMode D_801090F0;
extern Vec2f D_8010A6D0[0x6C]; //positions?
extern unk_8010AA28 D_8010AA28[0x6C]; //actor related?
extern f32 D_8010B328;
extern f32 D_8010B32C;
extern f32 D_8010B330;
extern f32 D_8010B334;
extern f32 D_8010B34C;
extern f32 D_8010B350;
extern f64 D_8010C510;
extern f64 D_8010C518;
extern f32 D_8010C7B0;
extern char D_8010CA10[9]; //"mem err!\n"
extern f64 D_8010FFF8;
extern f64 D_80110000;
extern f32 D_80110108;
extern f64 D_80110120;
extern OSThread D_80113C90; // thread1
extern OSThread D_80115E40; // thread3
extern s32 D_80117FF0;
extern s32 D_801191A0;
extern OSMesg   D_801191A8;
extern OSMesgQueue D_80119270;
extern s32 D_80168D70;
extern s32 D_80168D78[];
extern s32 D_80168DA4;
extern playerActor D_80168DA8;
extern s32 D_80168E5C;
extern tongue D_80169268;
extern Actor D_8016AC68[64]; //currently loaded actor structs
//eof == 80170968
extern unkStruct D_80172E88[];
extern s32 D_80174878;
extern argcdbc D_80174880;
extern s32 D_801748A0;
extern s32 D_80174998;
extern s32 D_801749B0;
extern u64 D_80175620; //needs to be pointer i guess
extern u8 D_80176850[16];
extern f32 D_80176F50;
extern s32 D_801B3120;
extern s32 D_801B3138;
extern s32 D_801B3140;
extern s32 D_801FC9A0;
extern s32 D_801FC9A8;
extern s16 D_801FC9B4;
extern f64 D_801FCA00;
extern OSThread* D_801FD560;
extern s32 D_801FF710;
extern s32 D_801FF750;
extern s32 D_801FF7F0;
extern s32 D_801FFB78;
extern unk_D_801FFB90 D_801FFB90;
extern u32 D_80200054;
extern s32 D_80200060;
extern s32 D_802025B0;
extern s32 D_80236968;
extern s32 D_80240CD8;

#endif
