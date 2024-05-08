#ifndef _SPRITE_H_
#define _SPRITE_H_

#include "common.h" 

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

typedef struct Struct_800714C8 {
    s32 array[6];
} Struct_800714C8;

typedef struct Effect_TypeAL_Data {
    /* 0x00 */ s8 unk_00[0x10];
    /* 0x10 */ u8 unk_10;
} Effect_TypeAL_Data; //sizeof 0x11

typedef struct Effect_TypeAM_Data {
    /* 0x00 */ s32* unk_00;
} Effect_TypeAM_Data; //sizeof 0x4

typedef struct Effect_TypeAQ_Data {
    /* 0x00 */ f32 unk_00;
    /* 0x04 */ f32 unk_04;
    /* 0x08 */ f32 unk_08;
    /* 0x0C */ f32 unk_0C;
    /* 0x10 */ f32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32* unk_18;
    /* 0x1C */ u8 unk_1C;
    /* 0x20 */ EffectTypeAQArg7* unk_20;
} Effect_TypeAQ_Data; //sizeof 0x24

typedef struct Effect_TypeAS_Data {
    /* 0x00 */ u8 unk_00[12];
    /* 0x0C */ s32 unk_0C;
    /* 0x10 */ s32 unk_10;
} Effect_TypeAS_Data; //sizeof 0x14

typedef struct Effect_TypeAT_Data {
    /* 0x00 */ u8* text;
    /* 0x04 */ char unk_04[4];
    /* 0x08 */ s32 unk_08;
    /* 0x0C */ s32 unk_0C;
} Effect_TypeAT_Data; //sizeof 0x10

typedef struct Effect_TypeAV_Data {
    /* 0x00 */ RGBA32 color;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ f32 unk_08;
    /* 0x0C */ f32 unk_0C;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
} Effect_TypeAV_Data; //sizeof 0x18

typedef struct Effect_TypeAW_Data {
    /* 0x00 */ Mtx mtx[2];
    /* 0x80 */ f32 unk_80;
    /* 0x84 */ f32 unk_84;
    /* 0x88 */ f32 unk_88;
    /* 0x8C */ Gfx* dlist;
    /* 0x90 */ f32 yaw;
    /* 0x94 */ s32 mtxIndex;
    /* 0x98 */ s32 finished;
    /* 0x9C */ s32 unk_9C;
} Effect_TypeAW_Data; //sizeof 0xA0

typedef struct Effect_TypeAY_Data {
    /* 0x00 */ Struct_80076EA0* unk_00;
    /* 0x04 */ f32 unk_04;
    /* 0x08 */ f32 unk_08;
    /* 0x0C */ s32 unk_0C;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32* unk_18;
    /* 0x1C */ s32 unk_1C;
    /* 0x20 */ u8 unk_20;
    /* 0x21 */ u8 unk_21;
    /* 0x24 */ f32 unk_24;
    /* 0x28 */ f32 unk_28;
    /* 0x2C */ f32 unk_2C;
    /* 0x30 */ f32 unk_30;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ s32 unk_38;
} Effect_TypeAY_Data; //sizeof 0x3C

typedef struct Effect_TypeAZ_Data_Sub {
    /* 0x00 */ f32 unk_00;
    /* 0x04 */ f32 unk_04;
    /* 0x08 */ f32 unk_08;
    /* 0x0C */ f32 unk_0C;
    /* 0x10 */ f32 unk_10;
} Effect_TypeAZ_Data_Sub; //sizeof 0x14

typedef struct Effect_TypeAZ_Data {
    /* 0x00 */ Effect_TypeAZ_Data_Sub unk_00[10];
    /* 0xC8 */ f32 unk_C8;
    /* 0xCC */ f32 unk_CC;
    /* 0xD0 */ f32 unk_D0;
    /* 0xD4 */ s32 unk_D4;
    /* 0xD8 */ s32 unk_D8;
    /* 0xDC */ s32 unk_DC;
    /* 0xE0 */ s32 unk_E0;
} Effect_TypeAZ_Data; //sizeof 0xE4

typedef struct Effect_StageRecordTime_Data_Sub {
    /* 0x00 */ f32 unk_00;
    /* 0x04 */ u8 unk_04[12];
    /* 0x10 */ f32 unk_10;
} Effect_StageRecordTime_Data_Sub; //sizeof 0x14

typedef struct Effect_StageRecordTime_Data {
    /* 0x00 */ Effect_StageRecordTime_Data_Sub unk_00[6];
    /* 0x78 */ u8 unk_78;
    /* 0x79 */ u8 unk_79;
} Effect_StageRecordTime_Data; //sizeof 0x7C

typedef struct Effect_TypeBA_Data {
    /* 0x00 */ RGBA32 color;
    /* 0x04 */ f32 size;
} Effect_TypeBA_Data; //sizeof 0x08

typedef struct Effect_TypeBB_Data {
    /* 0x00 */ Vec3f pos;
    /* 0x0C */ Vec3f v1;
    /* 0x18 */ Vec3f v2;
    /* 0x24 */ Vec3f v3;
    /* 0x30 */ RGBA32 color;
} Effect_TypeBB_Data; //sizeof 0x34

typedef struct Effect_TypeBF_Data {
    /* 0x00 */ RGBA32 color;
} Effect_TypeBF_Data; //sizeof 0x04

typedef struct Effect_TypeBI_Data {
    /* 0x00 */ RGBA32* unk_00;
    /* 0x04 */ f32 size;
} Effect_TypeBI_Data; //sizeof 0x08

typedef unsigned char TImg;
typedef unsigned char TLut;

typedef struct chameleonEyeListEntry {
  TImg* eyeR;
  TImg* eyeL;
  TLut* eyeRPalette;
  TLut* eyeLPalette;
} chameleonEyeListEntry;


/* extern symbols */
extern chameleonEyeListEntry chameleonEyeList[6];
extern s32 D_80176960[];
extern s32 D_80176980[];
extern s32 gUnkRumbleArray[];
void osMotorStop(OSPfs *pfs);
extern s32 D_80176960[];
extern s32 gRumbleTime[];
extern f32 D_800FEA18;
extern f32 D_800FEA1C;
extern u32 D_800FEDB4;
extern s32 D_800FEDB8;
extern Tongue* D_80176B70;
extern PlayerActor* D_80176B74;
extern Camera* D_80176B78;
extern char D_8010CA1C[];
extern char D_8010CA54[];
extern unkStruct02* D_80176F4C;
extern s32 gSpriteFrameBuffer;
extern Gfx static0_spriteController7_Gfx[];
extern Gfx static0_spriteController8_Gfx[];
extern Gfx static0_spriteController9_Gfx[];
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
extern Gfx KidsLand_model56_Gfx[];
extern Gfx KidsLand_model66_Gfx[];
extern Gfx KidsLand_model65_Gfx[];
extern Gfx KidsLand_model61_Gfx[];
extern Mtx D_80176860;
extern Camera D_801768A0;
extern s32 D_800F687C;
extern s16 D_800F06E4;
extern f32 D_800FE014;
extern u32 D_80108790;
extern s32 D_800FE188;
extern Gfx static0_gfx1_Gfx[];
extern Gfx static0_gfx2_Gfx[];
extern Effect* D_800FE1A0;
extern s32 Battle_GameType;
extern struct_800FE4E4 D_800FE4E4[4];
extern f32 D_800FE6F4[];
extern u8 D_800FE704[];
extern struct_800FE54C D_800FE54C[];
extern s32 D_80174980;
extern s16 D_800FFEBC;
extern u8 D_800FE6F0;
extern s32 D_800FE708;
extern u8 gLevelAccessBitfeild;
extern Struct_800714C8 D_800FE70C;
extern s16 sStageCrownTotals[];
extern TimeVal D_80200B85[];
extern s32 perfectCode;
extern u8 D_800FE724[];
extern s32 D_800F0B5C;
extern u8 D_800FE748;
extern Struct_80076EA0 D_800FE47C[];
extern s32 RumblePakError;
extern unk_80052094_8 D_800FE750[];
extern Gfx static0_gfx3_Gfx[];
extern u8 sTextGradientPalettes[];
extern s32 gCharacterPortraits[];
extern u8 D_800FE790[];





/* functions */
void Memory_Free(void*);
void func_80055C04(void);
Effect* Effect_HealthBar_Init(s32, s32, s32*, s32*, u32, s32);
Effect* func_800634D4(s32, s32, s32*, s32*, u32, s32);
void func_8007AF80(void);
void ResetEyeParams(void);
void Rumble_Tick(void);
void Effect_UpdateAll(Gfx**);
void func_80069734(void);
void func_8007CDEC(void);
f32 func_80056104(f32, f32);
void Effect_TypeAC_Init(f32 posX, f32 posY, f32 posZ, f32 arg3, f32 duration);
void func_80088474(s32, s32);
void func_800882D0(s32, s32);
void func_80088474(s32, s32);
void func_80027138(AnimPointer* arg0, s32* arg1, s32* arg2, Mtx** arg3);
void func_80027240(Mtx** arg0, Mtx* arg1, s32 arg2, s32 arg3);
s32 PutDList(Mtx** arg0, Gfx** arg1, Gfx* arg2);
void Effect_TypeAT_Init(f32, f32, f32, f32, f32, f32, s32, char*);
void Effect_TypeAU_Init(f32, f32, f32, f32, s32, s32, f32, f32, f32);
void Effect_TypeAS_Init(f32, f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32);
s32 RecordTime_ParseToSecs(TimeVal*);
s32 RecordTime_GetByStageRank(s32, s32, s32*, s32*, s32*, s32*);
void Effect_StageRecordTime_Init(f32 arg0, f32 arg1, f32 arg2, u8 arg3, u8 arg4, u8 arg5, u8 arg6, f32 arg7, f32 arg8);
void func_80054284(void);
void func_80053CA0(void);
void Effect_TypeAY_Init(Struct_80076EA0* arg0, f32 arg1, f32 arg2, s32 arg3, s32 arg4, s32* arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9);
Effect* Effect_TypeO_Init(u8, u8, u8, s32, s32);
void Effect_TypeAG_Init(f32, f32, s32);
void Effect_TypeAH_Init(u8*, f32, f32, f32, f32, unkStruct16*, s32, s32, u8);
Gfx* func_80084884(Gfx*);
Effect* Effect_Alloc(s32 numParts, s32 dataSize, void* fpUpdate);
void* func_800745F8(void);
void Effect_TypeBH_Init(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, RGBA32* arg5);
void Effect_TypeBF_Init(f32 posX, f32 posY, f32 posZ, f32 velV, f32 yaw, f32 velH, f32 arg6, f32 duration, u8 colorR, u8 colorG, u8 colorB);
void SetPlayerEyes(s32 spriteIndex, s32 whichEye, s32 eyeIndex);
s32 printTextbox(f32, f32, char*);
void WrapDegrees(f32* theta_ptr);
#endif //_SPRITE_H_
