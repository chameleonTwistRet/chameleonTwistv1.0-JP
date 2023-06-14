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

typedef struct Color32{
    u8 r;
    u8 g;
    u8 b;
    u8 a;
}Color32;

typedef struct Rect {
    Vec3f min;
    Vec3f max;
} Rect;

typedef struct playerActor {
    /* 0x000 */ u32 playerID;
    /* 0x004 */ Vec3f pos;
    /* 0x010 */ Vec3f pos2; //slightly off from pos
    /* 0x01C */ f32 yCounter; //counts around where the y is but not at
    /* 0x020 */ f32 waterGIMP; //how much to gimp you in water? idk but its correlated
    /* 0x024 */ Vec3f vel;
    /* 0x030 */ Vec3f vaultlocity;
    /* 0x03C */ f32 yAngle;
    /* 0x040 */ f32 forwardVel; //between 0 and 20.8. gets broken on slope jumps
    /* 0x044 */ f32 forwardImpulse;
    /* 0x048 */ f32 waterFactor; //gets effected in water again
    /* 0x04C */ f32 hitboxSize; //30 default
    /* 0x050 */ f32 hitboxYStretch; //unconfirmed. 150 default.
    /* 0x054 */ u32 canJump;    //0x00 = yes, 0x01 = no
    /* 0x058 */ u32 jumpReleasedInAir;    // 0x00 = no, 0x01 = yes
    /* 0x05C */ u32 jumpAnimFrame;
    /* 0x060 */ u32 hasTumbled;    //0x00 = no, 0x01 = yes. resets on jump.
    /* 0x064 */ u32 unk64;
    /* 0x068 */ u32 inWater;//0x00 = no, 0x01 = yes.
    /* 0x06C */ u32 squishTimer;
    /* 0x070 */ f32 yScale;
    /* 0x074 */ u32 locked; //0x00 = no, 0x16 = yes. when using lock to stand in place.
    /* 0x078 */ s32 amountToShoot; //number for machine gun shoot
    /* 0x07C */ s32 surface; //-1 when off ground, diff number when on diff surface. if 0 you slow to a crawl
    /* 0x080 */ s32 wSurface; //-1 when not in water, diff number when in diff water
    /* 0x084 */ s32 surfaceSlide; //1 if you slide on a slope while standing. 0 if else (not walkable slopes)
    /* 0x088 */ s32 surfaceFine; //more accurate
    /* 0x08C */ s32 vaulting; // 0 if not, 1 if
    /* 0x090 */ f32 xFromCenter; //from center of room (when on ground)
    /* 0x094 */ f32 yFromCenter;
    /* 0x098 */ f32 zFromCenter;
    /* 0x09C */ Vec3f shift; //override(?) when on moving objects (falling bridges, etc)
    /* 0x0A8 */ Vec3f move; //override when sliding on slopes or on poles
    /* 0x0B4 */ u32 groundMovement; //0x00 = standing, 0x01 = walking, 0x02 = running
    /* 0x0B8 */ f32 globalTimer;
    /* 0x0BC */ u32 unkBC;
    /* 0x0C0 */ u32 shootLeft;
    /* 0x0C4 */ u32 vaultFall;//timer for falling after vault
    /* 0x0C8 */ u32 hp;
    /* 0x0CC */ u32 playerHURTSTATE;
    /* 0x0D0 */ u32 playerHURTTIMER;
    /* 0x0D4 */ u32 playerHURTANIM;
    /* 0x0D8 */ u32 playerHURTBY;
    /* 0x0DC */ f32 unk_DC;
    /* 0x0E0 */ f32 unk_E0;
    /* 0x0E4 */ f32 unk_E4;
    /* 0x0E8 */ f32 unk_E8;
    /* 0x0EC */ f32 unk_EC;
    /* 0x0F0 */ f32 unk_F0;
    /* 0x0F4 */ f32 unk_F4;
    /* 0x0F8 */ f32 unk_F8;
    /* 0x0FC */ f32 unk_FC;
    /* 0x100 */ f32 unk_100;
    /* 0x104 */ f32 unk_104;
    /* 0x108 */ f32 unk_108;
    /* 0x10C */ f32 timerDown;
    /* 0x110 */ f32 reticleSize;
    /* 0x114 */ s32 active; //0x00 = no, 0x01 = yes
    /* 0x118 */ s32 exists; //0x00 = no, 0x01 = yes
    /* 0x11C */ u32 power; //enum of power it has
    /* 0x120 */ u32 powerTimer; 
    /* 0x124 */ u32 powerTimerTill; 
    /* 0x128 */ f32 tongueYOffset; 
    /* 0x12C */ f32 tongueSeperation; 
} playerActor; //sizeof 0x130


typedef struct TonguePos{
    /* 0x00 */ f32 positions[32];
} TonguePos; //sizeof 0x80

typedef struct tongueSlot {
    /* 0x00 */ u32 slots[64];
} tongueSlot; //sizeof 0x100

typedef struct Tongue { // at 80169268 (for p1 at least lol)
    /* 0x00 */ u32 vaulting; //0x00 = no, 0x01 = yes
    /* 0x04 */ u32 tongueMode; //enum of tongue actions
    /* 0x08 */ s32 segments;
    /* 0x0C */ s32 poleSegmentAt;
    /* 0x10 */ u32 timer;
    /* 0x14 */ s32 cameraSegmentAt;//where to point the camera
    /* 0x18 */ TonguePos tongueXs;//all (including the rope model) positions
    /* 0x98 */ f32 xpos33;//the last piece is special to the positions and angle
    /* 0x9C */ TonguePos tongueYs;
    /* 0x11C*/ f32 ypos33;
    /* 0x120*/ TonguePos tongueZs;
    /* 0x1A0*/ f32 zpos33;
    /* 0x1A4*/ TonguePos tongueAngles;
    /* 0x224*/ f32 anglepos33;
    /* 0x228*/ TonguePos tongueForwards;
    /* 0x2A8*/ TonguePos tongueHalfX;// idk what this or the other one is doing but they are axiis so
    /* 0x328*/ TonguePos tongueHalfZ;
    /* 0x3A8*/ f32 controlAngle;
    /* 0x3AC*/ f32 length;
    /* 0x3B0*/ f32 trueAngle;
    /* 0x3B4*/ tongueSlot onTongue;
    /* 0x4B4*/ u32 amountTnTongue; //called "capture_num" in US 1.0
    /* 0x4B8*/ tongueSlot inMouth;
    /* 0x5B8*/ u32 amountInMouth;
    //all of this has to do with vaulting
    /* 0x5BC*/ f32 reset1;
    /* 0x5C0*/ f32 reset2;
    /* 0x5C4*/ f32 reset3;
    /* 0x5C8*/ f32 reset4;
    /* 0x5CC*/ f32 reset5;
    /* 0x5D0*/ f32 reset6;
    /* 0x5D4*/ f32 reset7;
    /* 0x5D8*/ f32 reset8;
    /* 0x5DC*/ f32 reset9;
    /* 0x5E0*/ f32 reset10;//used, but always set to 0 at the peak of vault
    /* 0x5E4*/ f32 angleOfVault;
    /* 0x5E8*/ f32 powerOfVault;
    /* 0x5EC*/ f32 xOffset;//offsets for when you release
    /* 0x5F0*/ f32 yOffset;
    /* 0x5F4*/ f32 zOffset;
    /* 0x5F8*/ u32 vaultTime;
    //all of this has to do with poles
    /* 0x5FC*/ f32 lastTongueOffset;//offset for matching the twisted model to the last segment
    /* 0x600*/ u32 poleID;//please tell me im right
    /* 0x604*/ u32 tongueDir;//0x01 for counter clockwise. 0xFFFFFFFF for clockwise.
    //wall
    /* 0x608*/ u32 wallTime;//timer for tongue-touching a wall
} Tongue; //sizeof 0x60C

//struct names are based on offset into main struct, Collision which holds Rect


typedef struct Collision {
    /* 0x00 */ s32 collisionType;
    /* 0x04 */ char pad4[0x14];                     /* maybe part of collisionType[6]? */
    /* 0x18 */ s32 unk18;
    /* 0x1C */ char pad1C[0x14];                    /* maybe part of unk18[6]? */
    /* 0x30 */ Rect rect_30; // bounding box?
    /* 0x48 */ char pad48[0x30];                    /* maybe part of collisionSubStruct[3]? */
    /* 0x78 */ s32 unk78;
    /* 0x7C */ char pad7C[0x10];                    /* maybe part of unk78[7]? */
    /* 0x8C */ s32 unk8C;
    /* 0x90 */ char pad90[0x4];                     /* maybe part of unk8C[1]? */
    /* 0x94 */ s32 unk94;
    /* 0x98 */ f32 unk98;                           /* inferred */
    /* 0x9C */ f32 unk9C;                           /* inferred */
    /* 0xA0 */ f32 unkA0;                           /* inferred */
    /* 0xA4 */ f32 unkA4;                           /* inferred */
    /* 0xA8 */ f32 unkA8;                           /* inferred */
    /* 0xAC */ f32 unkAC;                           /* inferred */
    /* 0xB0 */ char padB0[0x20];                    /* maybe part of unkAC[9]? */
    /* 0xD0 */ f32 unkD0;                           /* inferred */
    /* 0xD4 */ char padD4[4];
} Collision; //sizeof 0xD8

typedef struct unkItemStruct {
    s32 unk_00;
    f32 unk_04;
    f32 unk_08;
    union {
        f32 _f32;
        s32 _s32;
    } unk_0C;
    s32 unk_10;
    f32 unk_14;
    s32 unk_18;
    s32 unk_1C;
} unkItemStruct;

typedef struct unkStruct07 {
    unkItemStruct* unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 boolForSpawning; //if TRUE, spawn item
    s32 unk_10;
} unkStruct07;

typedef struct CardinalDirection {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ s32 unk4;
    /* 0x08 */ s32 unk8;
    /* 0x0C */ const char* name;
    /* 0x10 */ f32 angle;
} CardinalDirection; 

//camera 0x8016AA98
//camera copy 0x801768A0
typedef struct Camera {//take these with a grain of salt
    /* 0x00 */ s32 unk0;
    /* 0x04 */ Vec3f f1;
    /* 0x10 */ Vec3f f2;
    /* 0x1C */ Vec3f f3;
    /* 0x28 */ Vec3f f4; // perspective "eye"
    /* 0x34 */ Vec3f f5; // perspective "at"
    /* 0x40 */ s32 unk40;
    /* 0x44 */ f32 size1;
    /* 0x48 */ f32 size2;
    /* 0x4C */ u32 untouchedTimer; //timer that incs when the camera hasnt been used
    /* 0x50 */ f32 unk50;
    /* 0x54 */ s32 pushHoriz;//the impulse horizontally by the player
    /* 0x58 */ s32 unk58;
    /* 0x5C */ f32 unk5C;
    /* 0x60 */ f32 unk60;
    /* 0x64 */ f32 unk64;
    /* 0x68 */ f32 unk68;
    /* 0x6C */ f32 unk6C;
    /* 0x70 */ f32 unk70;
} Camera; //size 0x74

typedef struct PlayerInit {
    u32 unk0; //used to ID selected chameleon.
    u32 unk4;
    u32 unk8;
    playerActor actorInit;
    Tongue tongueInit;
    u8 cameraInit[0x6C]; //camera substruct(s?) yet defined. copied like the other 2
    s32 unk7b4;
    s32 unk7b8;
    u32 zone;
} PlayerInit; //sizeof 0x7c0

typedef struct unk_8010AA28 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_8010AA28; //sizeof 0x10


typedef struct actorSubArray { //starts at 0x40
    /* 0x00 */ f32 unk_00;
    /* 0x04 */ f32 unk_04;
    /* 0x08 */ f32 unk_08;
    /* 0x0C */ f32 unk_0C;
    /* 0x10 */ f32 unk_10;
} actorSubArray; //sizeof 0x14

typedef struct Collider {
    /* 0x000 */ s32 unk_00;
    /* 0x004 */ s32 unk_04;
    /* 0x008 */ s32 unk_08;
    /* 0x00C */ s32 unk_0C;
    /* 0x010 */ s32 unk_10;
    /* 0x014 */ s32 unk_14;
    /* 0x018 */ Vec3f sfxPos;
    /* 0x024 */ f32 unk_24;
    /* 0x028 */ s32 unk_28;
    /* 0x02C */ s32 unk_2C;
    /* 0x030 */ f32 unk_30;
    /* 0x034 */ f32 unk_34;
    /* 0x038 */ f32 unk_38;
    /* 0x03C */ f32 unk_3C;
    /* 0x040 */ f32 unk_40;
    /* 0x044 */ f32 unk_44;
    /* 0x048 */ f32 unk_48;
    /* 0x04C */ f32 unk_4C;
    /* 0x050 */ f32 unk_50;
    /* 0x054 */ f32 unk_54;
    /* 0x058 */ f32 unk_58;
    /* 0x05C */ f32 unk_5C;
    /* 0x060 */ char pad60[0x20];                   /* maybe part of unk_5C[9]? */
    /* 0x080 */ s32 unk80;                          /* inferred */
    /* 0x084 */ char pad84[8];                      /* maybe part of unk80[3]? */
    /* 0x08C */ f32 unk_8C;
    /* 0x090 */ f32 unk_90;
    /* 0x094 */ f32 unk_94;
    /* 0x098 */ f32 unk_98;
    /* 0x09C */ f32 unk_9C;
    /* 0x0A0 */ f32 unk_A0;
    /* 0x0A4 */ char padA4[8];                      /* maybe part of unk_A0[3]? */
    /* 0x0AC */ s32 unk_AC;
    /* 0x0B0 */ s32 unk_B0;
    /* 0x0B4 */ s32 unk_B4;
    /* 0x0B8 */ s32 unk_B8;
    /* 0x0BC */ s32 unk_BC;
    /* 0x0C0 */ s32 unk_C0;
    /* 0x0C4 */ char padC4[8];                      /* maybe part of unk_C0[3]? */
    /* 0x0CC */ f32 unk_CC;
    /* 0x0D0 */ f32 unk_D0;
    /* 0x0D4 */ f32 unk_D4;
    /* 0x0D8 */ f32 unk_D8;
    /* 0x0DC */ f32 unk_DC;
    /* 0x0E0 */ f32 unk_E0;
    /* 0x0E4 */ void* unk_E4;
    /* 0x0E8 */ void* unk_E8;
    /* 0x0EC */ s32 unk_EC;
    /* 0x0F0 */ char padF0[8];                      /* maybe part of unk_EC[3]? */
    /* 0x0F8 */ void* unk_F8;
    /* 0x0FC */ void* unk_FC;
    /* 0x100 */ void* unk_100;
    /* 0x104 */ char pad104[0xC];                   /* maybe part of unk_100[4]? */
    /* 0x110 */ s32 unk_110;
    /* 0x114 */ s32 unk_114;
    /* 0x118 */ s32 unk_118;
    /* 0x11C */ s32 unk_11C;
    /* 0x120 */ char pad120[4];
    /* 0x124 */ s32 unk_124;
    /* 0x128 */ s32 unk_128;
    /* 0x12C */ char unk_12C[4];
} Collider; //sizeof 0x130

typedef struct DMAStruct {
    /* 0x00 */ OSIoMesg ioMsg;
    /* 0x18 */ s32 index;
} DMAStruct; //sizeof 0x1C

typedef struct unk802000C84 {
    /* 0x00 */ u8 unk0;
    /* 0x02 */ u16 unk2;
    /* 0x04 */ s8 unk4;
    /* 0x05 */ s8 unk5;
} unk802000C84; //sizeof 0x06 (unk size)

//struct for saveGame data?
typedef struct unkStruct09 {
char unk_00[0x84];
} unkStruct09; //sizeof 0x84



typedef struct unkStruct14 {
/* 0x00 */ char unk_00[0x38];
/* 0x38 */ s32 unk_38;
} unkStruct14;

// this is probably a Rect, but for whatever reason, replacing it causes a mismatch.
typedef struct unkStruct15 {
    /* 0x00 */ f32 unk_00;
    /* 0x04 */ f32 unk_04;
    /* 0x08 */ f32 unk_08;
    /* 0x0C */ f32 unk_0C;
    /* 0x10 */ f32 unk_10;
    /* 0x14 */ f32 unk_14;
    /* 0x18 */ f32 unk_18;
} unkStruct15; //sizeof 0x18

typedef struct SaveRecord {
/* 0x00 */ u8 flags[4]; //{checksum,flags,blank,blank}
/* 0x04 */ s32 perfectCode; 
/* 0x08 */ u8 stageTimes[7][5][3]; //[stageIndex][timeRank][]
/* 0x71 */ s8 index; //index of most recent save file
/* 0x72 */ s8 unk_72[2];
/* 0x74 */ u16 bowlingScore;
/* 0x76 */ s8 pad[10];
} SaveRecord; //sizeof 0x80

typedef struct segTableEntry {
    char* name;
    void* romAddrStart;
    void* romAddrEnd;
    void* ramAddrStart;
    void* ramAddrEnd;
} segTableEntry;

typedef struct unk80100F50 {
    /* 0x00 */ u32 base_address;
    /* 0x04*/ u32 unk4;
} unk80100F50; //sizeof 0x08

typedef struct frameBufferData {
    /* 0x00 */ char data[0x25800]; // h*W*colDepth
} frameBufferData; //sizeof 0x25800

typedef struct unkSpriteStruct {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ char unk_04[0x10];
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ char unk_18[0x34];
    /* 0x4C */ struct unkSpriteStruct* unk_4C; //pointer to another type of this same struct
    /* 0x50 */ char unk_50[0x10];
} unkSpriteStruct; //sizeof 0x60

typedef struct unkSpriteStruct2 {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ char unk_04[0x1C];
} unkSpriteStruct2; //sizeof 0x20

typedef struct unkSpriteStruct3 {
    /* 0x00 */ s32 unk_00;
    /* 0x68 */ char unk_04[0x68];
} unkSpriteStruct3; //sizeof 0x6C

typedef struct unkSpriteStruct4 {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ char unk_04[0x4C];
} unkSpriteStruct4; //sizeof 0x50

typedef struct tempStruct {
    /* 0x00 */ char unk_00[60];
    /* 0x3C */ Vec3f unk_3C;
} tempStruct; //sizeof 0x48

typedef struct CTTask { // interally referred to as "S_task"
    /* 0x00 */ s16 unk_00;
    /* 0x02 */ s16 unk_02;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ void (*function)(struct CTTask*);
    /* 0x0C */ struct CTTask* next; 
    /* 0x10 */ struct CTTask* unk_10; //prev?
    /* 0x14 */ Vec3f pos;
    /* 0x20 */ f32 rotA;
    /* 0x24 */ Vec3f scale;
    /* 0x30 */ Vec3f rot;
    /* 0x3C */ f32 unk3C;
    /* 0x40 */ char pad40[0x14];
    /* 0x54 */ u8 unk54;                            /* inferred */
    /* 0x55 */ char pad55[7];                       /* maybe part of unk54[8]? */
    /* 0x5C */ s16 unk_5C;
    /* 0x5E */ char pad5E[4];                       /* maybe part of unk_5C[3]? */
    /* 0x62 */ s16 unk_62;
    /* 0x64 */ s16 unk_64;
    /* 0x66 */ char pad66[2];
    /* 0x68 */ s16 unk_68;
    /* 0x6A */ char pad6A[2];
    /* 0x6C */ char unk6C[0x18];
    /* 0x84 */ char str[0x24]; // used in strcpy twice.
} CTTask; //sizeof 0xA8

typedef struct unk801FCA20 {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
} unk801FCA20; //sizeof 0x8


typedef struct unk800FF624 {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
} unk800FF624; //sizeof 0xC


typedef struct unkStruct0 {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0C */ s32 unk_0C;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1C */ s32 unk_1C;
    /* 0x20 */ s32 unk_20;
} unkStruct0; //sizeof 0x24


typedef struct unkVecStruct {
    Vec3f vec1;
    Vec3f vec2;
    Vec3f normal;
} unkVecStruct;

typedef struct Poly {
    /* 0x00 */ s32 unk_00; 
    /* 0x04 */ char unk_04[4];
    /* 0x08 */ Vec3f offset;
    /* 0x14 */ Vec3f unkVec;
    /* 0x20 */ Vec3f unkVec2;
    /* 0x2C */ Rect boundBox;
    /* 0x44 */ unkVecStruct unkVectorStruct;
    /* 0x68 */ f32 unk_68;
    /* 0x6C */ f32 unk_6C;
    /* 0x70 */ f32 unk_70;
    /* 0x74 */ f32 unk_74;
    /* 0x78 */ f32 unk_78;
    /* 0x7C */ f32 unk_7C;
    /* 0x80 */ f32 unk_80;
    /* 0x84 */ f32 unk_84;
    /* 0x88 */ f32 unk_88;
    /* 0x8C */ f32 unk_8C;
    /* 0x90 */ f32 unk_90;
} Poly;

typedef struct Actor {
    /* 0x000 */ s32 actorID;
    /* 0x004 */ s32 actorIndex;
    /* 0x008 */ s32 actorState;//enum, 0 == idle, 1 == on tongue, 2 == in mouth, 3 == spit
    /* 0x00C */ s32 posOnTongue;//the segment iirc
    /* 0x010 */ s32 globalTimer;
    /* 0x014 */ s32 touched; //0 == false. 1 == true.
    /* 0x018 */ s32 hit; //triggered when hit
    /* 0x01C */ s32 tongueBumpSeg; //the segment at which the tongue was bumped back
    /* 0x020 */ s32 eaten;//0 == false. 1 == true. does not reset.
    /* 0x024 */ Vec3f pos;
    /* 0x030 */ Vec3f vel;
    /* 0x03C */ f32 tScale;
    /* 0x040 */ f32 tYPos;
    /* 0x044 */ Vec3f tOffset;
    /* 0x050 */ s32 tongueCollision; //tongue collision enum. 0 == none. 1 == toungable.

    /* 0x054 */ actorSubArray unknownPositionThings[3]; //usually 2?
    //actorSubArray is these offsets in the struct
        // /* 0x054 */ f32 unk_54;//cos x used by fish
        // /* 0x058 */ f32 unk_58;//presumably y
        // /* 0x05C */ f32 unk_5C;//sin z used by fish
        // /* 0x060 */ f32 unk_60;//hitboxScale
        // /* 0x064 */ f32 unk_64;//hitboxYstretch
        
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
    /* 0x0CC */ f32 sizeScalar;
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
    /* 0x15C */ f32 unk_15C;
    /* 0x160 */ f32 unk_160;
    /* 0x164 */ f32 unk_164;
    /* 0x168 */ f32 unk_168;
    /* 0x16C */ f32 unk_16C;
    /* 0x170 */ f32 unk_170;
} Actor; //sizeof 0x174



typedef struct unkStruct02 {
    /* 0x00 */ s32 flags;
    /* 0x04 */ void* unk_04;
    /* 0x08 */ struct unkStruct02* next;
    /* 0x0C */ char unk_0C[0x74];
} unkStruct02; //is this actually size 0x80?



typedef struct SaveFile {
    /* 0x00 */ u8 checksum;
    /* 0x01 */ u8 flags;
    /* 0x02 */ u8 unk2;
    /* 0x03 */ char unk3[1];
    /* 0x04 */ char unk_04[0x1E]; //room/stage flags?
    /* 0x22 */ s16 unk_22;
    /* 0x24 */ char unk_24[2];
    /* 0x26 */ u8 stageAccess;
    /* 0x27 */ u8 stageClear;
    /* 0x28 */ u8 stageCrownClear;
    /* 0x29 */ u8 selectedCharacter;
    /* 0x2A */ u8 stageCrownRecord[7];
    /* 0x31 */ u8 currentStage;
    /* 0x32 */ u8 gCurrentZone;
    /* 0x33 */ u8 unk33; //copies D_8020d8a8
    /* 0x34 */ u8 unk34[16]; //stores D_802023e0[]
    /* 0x44 */ u8 stageCrowns;
    /* 0x45 */ u8 stageTimes[8][3];
    /* 0x5D */ u8 carrotBitfield; 
    /* 0x5E */ u8 unk_5E[2]; //first also copies carrot progress.
} SaveFile; //sizeof 0x60

//5FF30
//linked list probably, heap related?
typedef struct unk_D_801FFB90 {
    /* 0x00 */ void* unk_00;
    /* 0x04 */ void* unk_04;
    /* 0x08 */ void* unk_08;
    /* 0x0C */ s32 unk_0C;
    /* 0x10 */ s32 unk_10;
} unk_D_801FFB90; //sizeof 0x14

typedef struct contMain {
    u16 buttons0;
    u16 buttons1;
    u16 buttons2;
    s16 stickx;
    s16 sticky;
    u16 unk_0A; //align
    f32 stickAngle;
} contMain; //sizeof 0x10

typedef struct d8006266c{
    /* 0x00 */ s32 unk0;
    /* 0x04 */ s32 unk4;
    /* 0x08 */ s32 unk8;
    /* 0x0C */ f32 unkC;
    /* 0x10 */ char unk_10[0x20];
    /* 0x30 */ f32 unk_30;
    /* 0x34 */ char unk_34[4];
    /* 0x38 */ struct d8006266c* unk_38;
    /* 0x3C */ s32 unk_3C[4];
} d8006266c; //sizeof 0x40

typedef struct aa1{ // TODO: give better name
    /* 0x00 */ s32 unk0;
    /* 0x04 */ s8 unk4;
    /* 0x05 */ s8 unk5;
    /* 0x06 */ s8 unk6;
    /* 0x07 */ s8 unk7;
    /* 0x08 */ s32 unk8;
    /* 0x0C */ f32 unkC;
    /* 0x10 */ f32 unk_10;
    /* 0x14 */ f32 unk_14;
    /* 0x18 */ f32 unk_18;
    /* 0x1C */ f32 unk_1C;
    /* 0x20 */ f32 unk_20;
    /* 0x24 */ f32 unk_24;
    /* 0x28*/ s32 unk_28;
    /* 0x2C */ s32 unk_2C;
    /* 0x30 */ f32 unk_30;
    /* 0x34 */ void* unk34;
    /* 0x38 */ void* unk_38; // this struct varies widely
    /* 0x3C */ d8006266c* unk_3C;
    /* 0x40 */ struct aa1* previous;
    /* 0x44 */ struct aa1* next;
} aa1; //sizeof 0x48



typedef struct bf8{
    /* 0x00 */ s16 unk0;
    /* 0x02 */ s16 unk2;
    /* 0x04 */ s16 unk4;
    /* 0x06 */ s16 unk6;
    /* 0x08 */ s16 unk8;
} bf8; //sizeof 0xC


typedef struct unkStruct {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ char unk_04[0x104];
} unkStruct; //sizeof 0x108

// this struct seems to manage sound effects
typedef struct unk0 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ s16 unk20;
    /* 0x22 */ s16 unk22;
    /* 0x24 */ u8 unk24;
    /* 0x25 */ char pad25[7];
    /* 0x2C */ f32 unk2C;
    /* 0x30 */ s16 unk30;
    /* 0x32 */ s16 unk32;
    /* 0x34 */ char pad34[4];
    /* 0x38 */ f32 unk38;
    /* 0x3C */ u8 unk3C;
    /* 0x3D */ u8 unk3D;
    /* 0x3E */ char pad3E[2];
    /* 0x40 */ s16 unk40;
    /* 0x42 */ s16 unk42;
    /* 0x44 */ s8 unk44;
    /* 0x45 */ char pad45[3];
    /* 0x48 */ s32 unk48;
    /* 0x4C */ s32 unk4C;
    /* 0x50 */ struct unk0* unk50;
    /* 0x54 */ char pad54[4];
} unk0; //sizeof 0x58

typedef struct pole{
    /* 0x00 */ s32 mode;
    /* 0x04 */ Vec3f pos;
    /* 0x10 */ f32 yStretch;
} pole; //sizeof 0x14

struct UnkList {
    /* 0x00 */ struct UnkList* unk0;
    /* 0x04 */ s32 unk_04;
}; //sizeof 0x8

typedef struct func_80069858_temp_v0{
    /* 0x00 */ f32 unk0;
    /* 0x04 */ f32 unk4;
    /* 0x08 */ s32 unk8;
    /* 0x0C */ s32 unkC;
} func_80069858_temp_v0; //sizeof 0x10

typedef struct graphicStruct {
/*0x0*/         Gfx dlist[0x1000];
/*0x8000*/      Mtx perspective;
/*0x8040*/      Mtx lookAt;
/*0x8080*/      Mtx playerTranslate[4];
/*0x8180*/      Mtx playerRotate[4];
/*0x8280*/      Mtx playerScale[4];
/*0x8380*/      Mtx reticuleTranslate[4][6];
/*0x8980*/      Mtx reticuleRotate[4][6];
/*0x8F80*/      Mtx reticuleScale[4][6];
/*0x9580*/      Mtx toungeTranslate[4][33];
/*0xb680*/      Mtx toungeRotate[4][33];
/*0xD780*/      Mtx toungeScale[4][33];
/*0xf880*/      Mtx actorTanslate[64];
/*0x10880*/    Mtx actorRotate[64];
/*0x11880*/    Mtx actorScale[64];
/*0x12880*/    s8 unk12880[0x4000]; //mtx's for shadows?
/*0x16880*/    Mtx colliderTransforms[128][3]; // may be wrong.
/*0x1C880*/    s8 unk1c880[0x2000];
/*0x1E880*/    Mtx unk1e880[74]; //may be used for "CTTask"s
} graphicStruct; //sizeof 0x1FB00

typedef struct Shadow{
    u32 active;
    Vec3f pos;
    f32 rotY;
    f32 rotX;
    f32 scale;
    f32 unk1c;
    f32 rotYArrow;
    u32 dlist;
    u32 actorID;
    Actor* actor;
}Shadow;

typedef struct Door{
    s32 index;
    s32 unk4; //not read?
    s32 inZone;
    f32 minX;
    f32 minZ;
    f32 maxX;
    f32 maxZ;
    f32 toX;
    f32 toZ;
    f32 unk24;
    f32 maxY;
    f32 unk2C;
    u32 direction; // index in gCardinalDirections
    s32 unk34; //not read?
    s32 unk38; 
    s32 unk3C; 
    s32 toZone;
    s32 unk44; 
    s32 unk48; 
} Door; //sizeof 0x4C (?)

typedef struct ModelData{
    s32 vertCount;
    s32 triCount;
    Vec3f* verts;
    Vec3f* tris;
    Rect* modelBox;
} ModelData; //sizeof 0x14

typedef struct unk_func_800A54F4 {
    char unk_00[0x5E];
    s16 unk5E;
    s16 unk60;
    s16 unk62;
} unk_func_800A54F4; //sizeof ?

typedef struct unkBlackChameleon1 {
    char unk_00[0x38];
    s32 unk38;
} unkBlackChameleon1;

typedef struct unkBlackChameleon0 {
    char unk_00[0xAC];
    s32 unkAC;
    s32 unkB0;
} unkBlackChameleon0;


#endif
