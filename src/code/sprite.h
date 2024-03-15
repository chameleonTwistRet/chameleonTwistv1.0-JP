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
    s32* curHPPtr;
    s32 mode;
    f32 movePhase;
    f32 idleTime;
    s32 lastHP;
} Effect_HealthBar_Data;

typedef struct Effect_TypeC_Data {
    RGBA32 color;
    s32 spriteID;
    f32 sizeX;
    f32 sizeY;
} Effect_TypeC_Data;

typedef struct Effect_TypeD_Data {
    RGBA32 color;
    s32 unk_04;
    f32 sizeX;
    f32 sizeY;
} Effect_TypeD_Data;

typedef struct Effect_TypeE_Data {
    Vec3f dir;
    f32 sizeX;
    f32 sizeY;
    u32 colorR;
    u32 colorG;
    u32 colorB;
    u32 colorA;
} Effect_TypeE_Data;

typedef struct Effect_TypeF_Data {
    f32 sizeX;
    f32 sizeY;
    u32 colorR;
    u32 colorG;
    u32 colorB;
    u32 colorA;
} Effect_TypeF_Data;

typedef struct Effect_TypeG_Data {
    Mtx mtx;
    Vec3f scale;
    Gfx* dlist;
} Effect_TypeG_Data;

typedef struct Effect_TypeH_Data {
    Mtx mtx[2];
    s32 mtxIndex;
    Vec3f scale;
    Gfx* dlist;
    f32 angle;
} Effect_TypeH_Data;

typedef struct Effect_TypeI_Data {
    f32* ptrPosX;
    f32* ptrPosY;
    f32* ptrPosZ;
    f32 scale;
} Effect_TypeI_Data;

typedef struct Effect_TypeM_Data {
    Mtx mtx;
    Gfx* dlist;
    s32* finish;    
} Effect_TypeM_Data;

typedef struct UnkBowlingStruct {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
} UnkBowlingStruct; //sizeof 0x8

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

/* functions */
void func_80055C04(void);
Effect* func_80062D10(s32, s32, s32*, s32*, u32, s32);
Effect* func_800634D4(s32, s32, s32*, s32*, u32, s32);
void func_8007AF80(void);
void ResetEyeParams(void);
void Rumble_Tick(void);
void Effect_UpdateAll(s32*);
void func_80069734(void);
void func_8007CDEC(void);
f32 func_80056104(f32, f32);

#endif //_SPRITE_H_
