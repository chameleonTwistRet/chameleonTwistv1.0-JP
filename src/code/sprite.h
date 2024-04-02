#ifndef _SPRITE_H_
#define _SPRITE_H_

#include "common.h"

/* structs */
typedef struct SpriteListing {
    /* 0x00 */ Gfx* unk_00;
    /* 0x04 */ void* bitmapP; // "malloc'd" after size calc.
    /* 0x08 */ void* palletteP; //palette? both this and above start with devAddr+0XD73D960
    /* 0x0C */ s32 type; // use "COLORMODE_*" enum
    /* 0x10 */ u8* unk10;
    /* 0x14 */ u8 unk14;
    /* 0x15 */ u8 tileCountX;
    /* 0x16 */ u8 tileCountY;
    /* 0x17 */ u8 tileIndexX;
    /* 0x18 */ u8 tileIndexY;
    /* 0x19 */ char unk19;
    /* 0x1A */ u16 width; // width of each tile
    /* 0x1C */ u16 height; // height of each tile
    /* 0x1E */ RGBA32 prim;
    /* 0x22 */ char unk22[0x6];
    /* 0x28 */ Vtx quad[4];
    /* 0x68 */ s32 bitmapRom; //devAddr-0x8c26a0
    /* 0x6C */ s32 paletteRom;
    /* 0x70 */ s32 unk70;
    /* 0x74 */ char unk_74[4];
} SpriteListing; //sizeof 0x78

typedef struct Effect_HealthBar_Data {
    /* 0x00 */ s32* curHPPtr;
    /* 0x04 */ s32 mode;
    /* 0x08 */ f32 movePhase;
    /* 0x0C */ f32 idleTime;
    /* 0x10 */ s32 lastHP;
} Effect_HealthBar_Data; //sizeof 0x14

typedef struct Effect_TypeC_Data {
    /* 0x00 */ RGBA32 color;
    /* 0x04 */ s32 spriteID;
    /* 0x08 */ f32 sizeX;
    /* 0x0C */ f32 sizeY;
} Effect_TypeC_Data; //sizeof 0x10

typedef struct Effect_TypeD_Data {
    /* 0x00 */ RGBA32 color;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ f32 sizeX;
    /* 0x0C */ f32 sizeY;
} Effect_TypeD_Data; //sizeof 0x10

typedef struct Effect_TypeE_Data {
    /* 0x00 */ Vec3f dir;
    /* 0x0C */ f32 sizeX;
    /* 0x10 */ f32 sizeY;
    /* 0x14 */ u32 colorR;
    /* 0x18 */ u32 colorG;
    /* 0x1C */ u32 colorB;
    /* 0x20 */ u32 colorA;
} Effect_TypeE_Data; //sizeof 0x24

typedef struct Effect_TypeF_Data {
    /* 0x00 */ f32 sizeX;
    /* 0x04 */ f32 sizeY;
    /* 0x08 */ u32 colorR;
    /* 0x0C */ u32 colorG;
    /* 0x10 */ u32 colorB;
    /* 0x14 */ u32 colorA;
} Effect_TypeF_Data; //sizeof 0x18

typedef struct Effect_TypeG_Data {
    /* 0x00 */ Mtx mtx;
    /* 0x40 */ Vec3f scale;
    /* 0x4C */ Gfx* dlist;
} Effect_TypeG_Data; //sizeof 0x50

typedef struct Effect_TypeH_Data {
    /* 0x00 */ Mtx mtx[2];
    /* 0x80 */ s32 mtxIndex;
    /* 0x84 */ Vec3f scale;
    /* 0x90 */ Gfx* dlist;
    /* 0x94 */ f32 angle;
} Effect_TypeH_Data; //sizeof 0x98

typedef struct Effect_TypeI_Data {
    /* 0x00 */ f32* ptrPosX;
    /* 0x04 */ f32* ptrPosY;
    /* 0x08 */ f32* ptrPosZ;
    /* 0x0C */ f32 scale;
} Effect_TypeI_Data; //sizeof 0x10

typedef struct Effect_TypeM_Data {
    /* 0x00 */ Mtx mtx;
    /* 0x40 */ Gfx* dlist;
    /* 0x44 */ s32* finish;    
} Effect_TypeM_Data; //sizeof 0x48

typedef struct Effect_TypeT_Data {
    /* 0x00 */ f32 unk0;
    /* 0x04 */ f32 unk4;
    /* 0x08 */ s32 unk8;
    /* 0x0C */ s32 unkC;
} Effect_TypeT_Data; //sizeof 0x10

typedef struct Effect_TypeV_Data {
    /* 0x00 */ RGBA32 color;
} Effect_TypeV_Data; //sizeof 0x4

typedef struct UnkBowlingStruct {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
} UnkBowlingStruct; //sizeof 0x8

typedef struct struct_800FE4E4 {
    /* 0x0 */ u8 unk_00;
    /* 0x1 */ u8 unk_01;
} struct_800FE4E4; //sizeof 0x2

typedef struct struct_800FE4EC {
    u8* unk_00;
    u8* unk_04;
    u8* unk_08;
    u8* unk_0C;
} struct_800FE4EC;

typedef struct struct_800FE54C {
    u8* unk_00;
    u8* unk_04;
} struct_800FE54C;

typedef struct Effect_TypeX_Data {
    /* 0x00 */ Vec3f unk_00;
    /* 0x0C */ Vec3f unk_0C;
} Effect_TypeX_Data; //sizeof 0x18

typedef struct Effect_TypeZ_Data {
    /* 0x00 */ Vec3f pos;
    /* 0x0C */ f32 scale;
    /* 0x10 */ s32 angle;
    /* 0x14 */ RGBA32 color;
} Effect_TypeZ_Data; //sizeof 0x18

typedef struct Effect_TypeAA_Data {
    /* 0x00 */ Vec3f pos;
    /* 0x0C */ RGBA32 color;
} Effect_TypeAA_Data; //sizeof 0x10

typedef struct Effect_TypeAB_Data {
    /* 0x00 */ f32 size;
    /* 0x04 */ RGBA32 color;
} Effect_TypeAB_Data; //sizeof 0x08

typedef struct Effect_TypeAC_Data {
    /* 0x00 */ RGBA32 color;
} Effect_TypeAC_Data; //sizeof 0x04

typedef struct Effect_TypeAF_Data {
    /* 0x00 */ f32* pPosX;
    /* 0x04 */ f32* pPosY;
    /* 0x08 */ f32* pPosZ;
    /* 0x0C */ f32 unk_0C;
    /* 0x10 */ f32 unk_10;
    /* 0x14 */ f32 unk_14;
    /* 0x18 */ f32 unk_18;
    /* 0x1C */ f32 unk_1C;
    /* 0x20 */ f32 unk_20;
    /* 0x24 */ f32 unk_24;
    /* 0x28 */ s32 unk_28;
} Effect_TypeAF_Data; //sizeof 0x2C

typedef struct Effect_TypeAH_Data {
    /* 0x000 */ Mtx mtx[2];
    /* 0x080 */ Gfx* dlist;
    /* 0x084 */ char pad_84[4];
    /* 0x088 */ Mtx animArray[2][20];
    /* 0xA88 */ void* unk_A88;
    /* 0xA8C */ void* unk_A8C;
    /* 0xA90 */ f32 yaw;
    /* 0xA94 */ s32 unk_A94;
    /* 0xA98 */ s32 unk_A98;
    /* 0xA9C */ s32 unk_A9C;
    /* 0xAA0 */ u8* unk_AA0;
    /* 0xAA4 */ u8* unk_AA4;
    /* 0xAA8 */ u8 unk_AA8;
    /* 0xAAC */ char unk_AAC[4];
} Effect_TypeAH_Data; //sizeof 0xAB0

typedef struct Effect_TypeAH_Arg5 {
    /* 0x00 */ void* unk_00;
    /* 0x04 */ void* unk_04;
    /* 0x08 */ u8* unk_08;
    /* 0x0C */ s32 unk_0C;
} Effect_TypeAH_Arg5; // sizeof 0x10

/* extern symbols */
extern s32 D_80176960[];
extern s32 D_80176980[];
extern OSPfs gRumblePfs[];
extern s32 gUnkRumbleArray[];
void osMotorStop(OSPfs *pfs);
extern s32 D_80176960[];
extern OSPfs gRumblePfs[];
extern s32 gRumbleTime[];
extern f32 D_800FEA18;
extern f32 D_800FEA1C;
extern u32 D_800FEDB4;
extern s32 D_800FEDB8;
extern Tongue* D_80176B70;
extern PlayerActor* D_80176B74;
extern Camera* D_80176B78;
extern s32 currentStageCrowns;
extern SpriteListing gSpriteListings[230];
extern char D_8010CA1C[];
extern char D_8010CA54[];
extern Addr D_8C26A0;
extern unkStruct02* D_80176F4C;
extern s32 gSpriteFrameBuffer;
extern Gfx D_10012A0[];
extern Gfx D_1001300[];
extern Gfx D_1001370[];
extern Mtx D_800F69D0;
extern Gfx D_800FE080[];
extern SpriteListing D_80176F98[2][200];
extern SpriteListing D_80182B18[2][200];
extern SpriteListing D_8018E698[2][200];
extern SpriteListing D_8019A218[2][200];
extern SpriteListing D_801A5D98[2][200];
extern Gfx D_800FE0F0[];
extern s32 D_800FDFA8[2];
extern s32 D_800FDFB0[2];
extern s32 D_800FDFB8[2];
extern f32 D_800FDF9C;
extern s32 D_800FDF98;
extern Gfx D_303AD50[];
extern Gfx D_303F300[];
extern Gfx D_303F1A0[];
extern Gfx D_303D418[];
extern Mtx D_80176860;
extern Camera D_801768A0;
extern s32 D_800F687C;
extern s16 D_800F06E4;
extern f32 D_800FE014;
extern u32 D_80108790;
extern s32 D_800FE188;
extern Gfx D_1013F78[];
extern Gfx D_10149D0[];
extern Effect* D_800FE1A0;
extern s32 Battle_GameType;
extern struct_800FE4E4 D_800FE4E4[];
extern f32 D_800FE6F4[];
extern u8 D_800FE704[];
extern struct_800FE4EC D_800FE4EC[];
extern struct_800FE54C D_800FE54C[];
extern s32 D_80174980;
extern s16 D_800FFEBC;
extern u8 D_800FE6F0;
extern Gfx* D_800F0638[];
extern s32 D_800FE708;

/* functions */
void func_80055C04(void);
Effect* Effect_HealthBar_Init(s32, s32, s32*, s32*, u32, s32);
Effect* func_800634D4(s32, s32, s32*, s32*, u32, s32);
void func_8007AF80(void);
void ResetEyeParams(void);
void Rumble_Tick(void);
void Effect_UpdateAll(s32*);
void func_80069734(void);
void func_8007CDEC(void);
f32 func_80056104(f32, f32);
void Effect_TypeAC_Init(f32 posX, f32 posY, f32 posZ, f32 arg3, f32 duration);
void func_80088474(s32, s32);
void func_800882D0(s32, s32);
void func_80088474(s32, s32);
void func_80027138(void* arg0, s32* arg1, s32* arg2, Mtx** arg3);
void func_80027240(Mtx** arg0, Mtx* arg1, s32 arg2, s32 arg3);
s32 PutDList(Mtx** arg0, Gfx** arg1, Gfx* arg2);

#endif //_SPRITE_H_
