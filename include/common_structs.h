#ifndef COMMON_STRUCTS_H
#define COMMON_STRUCTS_H

#include "PR/ultratypes.h"

typedef struct Vec2f {
               f32 x;
               f32 y;
} Vec2f;

typedef struct Vec2s {
               s32 x;
               s32 y;
} Vec2s;

typedef struct Vec3f {
               f32 x;
               f32 y;
               f32 z;
} Vec3f;

typedef struct Vec3s {
               s32 x;
               s32 y;
               s32 z;
} Vec3s;

typedef struct Vec4f {
               f32 x;
               f32 y;
               f32 z;
               f32 yaw;
} Vec4f;

typedef struct playerActor {
    /* 0x00 */ u32 flags; //a guess
    /* 0x04 */ f32 xPos;
    /* 0x08 */ f32 yPos;
    /* 0x0C */ f32 zPos;
    /* 0x10 */ char unk_10[0x14];
    /* 0x24 */ f32 xSpeed;
    /* 0x28 */ f32 ySpeed;
    /* 0x2C */ f32 zSpeed;
    /* 0x30 */ char unk_30[0x0C];
    /* 0x3C */ f32 yAngle;
    /* 0x40 */ f32 playerSpeed; // between 0 and 20.8...
    //char unk_40[0x88];
    /* 0x54 */ s32 jumpFlag;    // 0x00 = not jumping, 0x01 = jumping
    /* 0xC8 */ s32 hp;
} playerActor;

typedef struct unk_8010AA28 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_8010AA28;

typedef struct unk_80170968 {
    /* 0x00 */  s32 unk_00;
    /* 0x04 */  s32 unk_04;
    /* 0x08 */  s32 unk_08;
    /* 0x0C */  s32 unk_0C;
    /* 0x10 */  s32 unk_10;
    /* 0x14 */  s32 unk_14;
} unk_80170968;

typedef struct actorSubArray { //starts at 0x40
    /* 0x00 */ f32 unk_00;
    /* 0x04 */ f32 unk_04;
    /* 0x08 */ f32 unk_08;
    /* 0x0C */ f32 unk_0C;
    /* 0x10 */ f32 unk_10;
} actorSubArray;

typedef struct Actor {
    /* 0x000 */ s32 actorID;
    /* 0x004 */ s32 actorIndex;
    /* 0x008 */ s32 unk_08;
    /* 0x00C */ s32 unk_0C;
    /* 0x010 */ s32 lifeDuration;
    /* 0x014 */ s32 unk_14;
    /* 0x018 */ s32 unk_18;
    /* 0x01C */ s32 unk_1C;
    /* 0x020 */ s32 unk_20;
    /* 0x024 */ f32 unk_24;
    /* 0x028 */ f32 unk_28;
    /* 0x02C */ f32 unk_2C;
    /* 0x030 */ f32 unk_30;
    /* 0x034 */ f32 unk_34;
    /* 0x038 */ f32 unk_38;
    /* 0x03C */ f32 unk_3C;
    /* 0x040 */ f32 unk_40;
    /* 0x044 */ f32 unk_44;
    /* 0x048 */ f32 unk_48;
    /* 0x04C */ f32 unk_4C;
    /* 0x050 */ s32 unk_50;

    /* 0x054 */ actorSubArray unknownPositionThings[3]; //usually 2?
    //actorSubArray is these offsets in the struct
        // /* 0x054 */ f32 unk_54;
        // /* 0x058 */ f32 unk_58;
        // /* 0x05C */ f32 unk_5C;
        // /* 0x060 */ f32 unk_60;
        // /* 0x064 */ f32 unk_64;
        
        // /* 0x068 */ f32 unk_68;
        // /* 0x06C */ f32 unk_6C;
        // /* 0x070 */ f32 unk_70;
        // /* 0x074 */ f32 unk_74;
        // /* 0x078 */ f32 unk_78;

        // /* 0x07C */ f32 unk_7C;
        // /* 0x080 */ f32 unk_80;
        // /* 0x084 */ f32 unk_84;
        // /* 0x088 */ f32 unk_88;
        // /* 0x08C */ f32 unk_8C;

    /* 0x090 */ f32 unk_90;
    /* 0x094 */ f32 unk_94;
    /* 0x098 */ s32 unk_98;
    /* 0x09C */ s32 unk_9C;
    /* 0x0A0 */ unk_8010AA28 unk_A0;
    /* 0x0B0 */ f32 unk_B0;
    /* 0x0B4 */ f32 unk_B4;
    /* 0x0B8 */ f32 unk_B8;
    /* 0x0BC */ f32 unk_BC;
    /* 0x0C0 */ f32 unk_C0;
    /* 0x0C4 */ s32 unk_C4;
    /* 0x0C8 */ s32 unk_C8;
    /* 0x0CC */ f32 unk_CC;
    /* 0x0D0 */ f32 unk_D0;
    /* 0x0D4 */ f32 unk_D4;
    /* 0x0D8 */ f32 unk_D8;
    /* 0x0DC */ f32 unk_DC;
    /* 0x0E0 */ s32 unk_E0;
    /* 0x0E4 */ s32 unk_E4;
    /* 0x0E8 */ f32 unk_E8;
    /* 0x0EC */ s32 unk_EC;
    /* 0x0F0 */ s32 unk_F0;
    /* 0x0F4 */ f32 unk_F4;
    /* 0x0F8 */ f32 unk_F8;
    /* 0x0FC */ f32 unk_FC;
    /* 0x100 */ f32 unk_100;
    /* 0x104 */ f32 unk_104;
    /* 0x108 */ f32 unk_108;
    /* 0x10C */ s32 unk_10C[5];
    /* 0x120 */ s32 unk_120;
    /* 0x124 */ s32 unk_124;
    /* 0x128 */ s32 unk_128;
    /* 0x12C */ s32 unk_12C;
    /* 0x130 */ s32 unk_130;
    /* 0x134 */ f32 unk_134[8];
        /* 0x154 */ union {
        Vec2f _f32;
        Vec2s _s32;
    } position;
    /* 0x154 */ //s32 unk_154;
    /* 0x158 */ //s32 unk_158;
    /* 0x15C */ f32 unk_15C;
    /* 0x160 */ f32 unk_160;
    /* 0x164 */ f32 unk_164;
    /* 0x168 */ f32 unk_168;
    /* 0x16C */ f32 unk_16C;
    /* 0x170 */ f32 unk_170;
} Actor; //sizeof 0x174

typedef struct unk_80109E94 {
    /* 0x00 */ u16 flags;
    /* 0x02 */ char unk_02[0x22];
    /* 0x24 */ f32 unk_24;
} unk_80109E94;

typedef struct unktemp {
    /* 0x00 */ f32 unk_00;
    /* 0x04 */ char unk_04[0x10];
    /* 0x14 */ f32 unk_14;
    /* 0x18 */ char unk_18[0x10];
    /* 0x28 */ f32 unk_28;
    /* 0x2C */ char unk_2C[0x10];
    /* 0x3C */ f32 unk_3C;
} unktemp; //unknown size

typedef struct unkStruct02 {
    /* 0x00 */ s32 flags;
    /* 0x04 */ void* unk_04;
    /* 0x08 */ void* unk_08;
} unkStruct02; //sizeof 0x0C


//camera 0x8016AA98
//camera copy 0x801768A0
typedef struct camera {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ f32 unk_04;
    /* 0x08 */ f32 unk_08;
    /* 0x0C */ f32 unk_0C;
    /* 0x10 */ f32 unk_10;
    /* 0x14 */ f32 unk_14;
    /* 0x18 */ f32 unk_18;
    /* 0x1C */ f32 unk_1C;
    /* 0x20 */ f32 unk_20;
    /* 0x24 */ f32 unk_24;
    /* 0x28 */ f32 unk_28;
    /* 0x2C */ f32 unk_2C;
    /* 0x30 */ f32 unk_30;
    /* 0x34 */ f32 unk_34;
    /* 0x38 */ f32 unk_38;
} camera; //sizeof 0x48

//related to kicking dust
typedef struct unkStruct03 {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0C */ f32 unk_0C;
    /* 0x10 */ f32 unk_10;
    /* 0x14 */ f32 unk_14;
    /* 0x18 */ f32 unk_18;
    /* 0x1C */ char unk_1C[0x14];
    /* 0x30 */ f32 unk_30;
    /* 0x34 */ void* unk_34;
    /* 0x38 */ void* unk_38;
    /* 0x3C */ char unk_3C[4];
    /* 0x40 */ void* unk_40;
    /* 0x44 */ s32 unk_44;
} unkStruct03; //sizeof 0x48


//5FF30
//linked list probably, heap related?
typedef struct unk_D_801FFB90 {
/* 0x00 */ void* unk_00;
/* 0x04 */ void* unk_04;
/* 0x08 */ void* unk_08;
/* 0x0C */ s32 unk_0C;
/* 0x10 */ s32 unk_10;
} unk_D_801FFB90;

#endif
