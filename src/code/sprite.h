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
