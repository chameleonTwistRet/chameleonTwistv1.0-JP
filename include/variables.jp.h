#include "ultra64.h"
#include "macros.h"
#include "common_structs.h"
#include "io/viint.h"
#include "os/osint.h"
#include "enums.h"


#ifndef VARIABLES_JP_H
#define VARIABLES_JP_H



extern __OSViContext* __osViCurr;
extern __OSViContext* __osViNext;
extern s32 rngSeed; //rng

extern camera* D_80174860;
extern playerActor* PlayerPointer;
extern tongue* TonguePointer;

extern unk0* D_801FFB84;

extern s32 D_800F06B0;
extern u8 D_800F06DC;
extern s32 D_800F06EC;
extern s32 D_800F0B38;
extern u32 D_800F0B50;
extern s8 D_800F0B54;
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
extern f32 D_800FE018;
extern f32 D_800FE01C;
extern f32 D_800FE020;
extern f32 D_800FE024;
extern f32 D_800FE028;
extern f32 D_800FE02C;
extern f32 D_800FE030;
extern f32 D_800FE034;
extern f32 D_800FE038;
extern f32 D_800FE03C;
extern f32 D_800FE040;
extern f32 D_800FE044;
extern f32 D_800FE048;
extern f32 D_800FE04C;
extern f32 D_800FE050;
extern f32 D_800FE054;
extern f32 D_800FE058;
extern f32 D_800FE05C;
extern f32 D_800FE060;
extern s32 D_800FE160;
extern s32 D_800FE164;
extern u8 D_800FE18C;
extern u8 D_800FE190;
extern u8 D_800FE194;
extern u8 D_800FE198;
extern s32 D_800FE19C;
extern s8 D_800FE4DC;
extern u8 D_800FE6EC;
extern s32 D_800FEA30;
extern s32 D_800FEA34;
extern s32 D_800FEA4C;
extern s32 D_800FEB90;
extern s32 D_800FEB94;
extern s32 D_800FEB98;
extern s32 D_800FEB9C;
extern f32 D_800FEBB4;
extern f32 D_800FEBB8;
extern f32 D_800FEBBC;
extern f32 D_800FEBC0;
extern u8 D_800FEBC4;
extern u8 D_800FEBC8;
extern u8 D_800FEBCC;
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
extern s32 D_800FF614;
extern s32 D_800FF63C;
extern s8 D_800FF64C;
extern s8 D_800FF650;
extern s16 D_800FF854[];
extern s16 D_800FFDF0;
extern s16 D_800FFDF4;
extern s32 D_800FFEB4;
extern s32 D_800FFEB8;
extern s16 D_80100FD0;
extern f32 D_8010881C;
extern f32 D_80108820;
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
extern f32 D_8010B4D8;
extern f64 D_8010B4E0;
extern f64 D_8010B4E8;
extern f64 D_8010B550;
extern f64 D_8010B558;
extern f64 D_8010B560;
extern f64 D_8010B568;
extern f64 D_8010B7A0;
extern f64 D_8010B7A8;
extern f64 D_8010B7B0;
extern f64 D_8010B7B8;
extern f32 D_8010B7F8;
extern f32 D_8010B7FC;
extern f32 D_8010B9E8;
extern f32 D_8010BA90;
extern f32 D_8010BA94;
extern f32 D_8010BAA4;
extern f32 D_8010BB30;
extern f64 D_8010BE30;
extern f32 D_8010C098;
extern f32 D_8010C0F4;
extern f32 D_8010C0F8;
extern f32 D_8010C26C;
extern f32 D_8010C270;
extern f32 D_8010C274;
extern f32 D_8010C2B8;
extern f32 D_8010C2BC;
extern f32 D_8010C318;
extern f32 D_8010C31C;
extern f32 D_8010C320;
extern f32 D_8010C324;
extern f64 D_8010C510;
extern f64 D_8010C518;
extern char D_8010C7B0[16];
extern char D_8010C944[8];
extern char D_8010CA10[9]; //"mem err!\n"
extern f64 D_8010FFF8;
extern f64 D_80110000;
extern f32 D_80110108;
extern f64 D_80110120;
extern s32 D_8011074C;
extern s32 D_8011077C;
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
extern Actor D_8016AC68[ACTORS_MAX]; //currently loaded actor structs
extern pole D_80170968[64]; //currently loaded pole structs
extern unkStruct D_80172E88[];
extern s32 D_80174758[];
extern s32 D_80174864;
extern s32 D_80174878;
extern s32 D_80174880[0x20];
extern s32 D_801748A0;
extern s32 D_80174998;
extern s32 D_8017499C;
extern s32 D_801749B0;
extern OSMesgQueue D_80175620;
extern s32 D_80176824;
extern u8 D_80176850[16];
extern f32 D_80176F50;
extern s32 D_801B3120;
extern s32 D_801B3138;
extern s32 D_801B3140;
extern s16 D_801B3540;
extern s32 D_801FC9A0;
extern s32 D_801FC9A8;
extern s16 D_801FC9AC;
extern s16 D_801FC9B4;
extern f64 D_801FCA00;
extern OSThread* D_801FD560;
extern s32 D_801FF710;
extern s32 D_801FF750;
extern s32 D_801FF7F0;
extern s32 D_801FFB78;
extern unk_D_801FFB90 D_801FFB90;
extern u32 D_80200054;
extern struct UnkList D_80200060; //beginning of linked list?
extern s32 D_802025B0;
extern s32 D_8020D854;
extern s32 D_8020D85C;
extern s32 D_8020D860;
extern s32 D_80236968;
extern s32 D_8023696C;
extern s32 currentZone; //D_80240CD8

#endif
