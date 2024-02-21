#ifndef _SPRITE_H_
#define _SPRITE_H_

#include "common.h"

/* structs */
typedef struct SpriteListing {
    char unk_00[4];
    void* bitmapP; // "malloc'd" after size calc.
    void* palletteP; //palette? both this and above start with devAddr+0XD73D960
    s32 type; // use "COLORMODE_*" enum
    void* unk10;
    u8 unk14;
    u8 tileCountX;
    u8 tileCountY;
    char unk17[3]; //align?
    u16 height; // height of each tile
    u16 width; // width of each tile
    u16 unk1E;
    char unk20[0x48]; //repeating substruct? has 5 feilds of RGBA32
    s32 bitmapRom; //devAddr-0x8c26a0
    s32 paletteRom;
    s32 unk70;
    char unk_74[4];
} SpriteListing; //sizeof 0x78

typedef struct UnkBowlingStruct {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ char unk_08[0x04];
    /* 0x0C */ f32 unkC;
    /* 0x10 */ f32 unk_10;
    /* 0x14 */ f32 unk_14;
    /* 0x18 */ f32 unk_18;
    /* 0x1C */ f32 unk_1C;
    /* 0x20 */ f32 unk_20;
    /* 0x24 */ f32 unk_24;
    /* 0x28*/ s32 UNK_28;
    /* 0x2C */ s32 unk_2C;
    /* 0x30 */ f32 unk_30;
    /* 0x34 */ void* unk34;
    /* 0x38 */ void* unk_38; // this struct varies widely
    /* 0x3C */ d8006266c* unk_3C;
    /* 0x40 */ struct aa1* previous;
    /* 0x44 */ struct aa1* next;
} UnkBowlingStruct; //sizeof 0x48

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

/* functions */
void func_80055C04(void);
void func_80062D10(s32, s32, s32*, s32*, u32, s32);
void func_800634D4(s32, s32, s32*, s32*, s32, s32);
void func_8007AF80(void);
void ResetEyeParams(void);
void Rumble_Tick(void);
void func_800615D4(s32*);
void func_80069734(void);
void func_8007CDEC(void);

#endif //_SPRITE_H_
