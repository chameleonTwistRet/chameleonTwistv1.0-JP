#ifndef COMMON_STRUCTS_H
#define COMMON_STRUCTS_H

#include "PR/ultratypes.h"

typedef struct Vec2f {
    f32 x;
    f32 y;
} Vec2f;

typedef struct Vec2w {
    s32 x;
    s32 y;
} Vec2w;

typedef struct Vec3f {
    f32 x;
    f32 y;
    f32 z;
} Vec3f;

typedef struct Vec3w {
    s32 x;
    s32 y;
    s32 z;
} Vec3w;

typedef struct Vec4f {
    f32 x;
    f32 y;
    f32 z;
    f32 yaw;
} Vec4f;

typedef struct RGBA32{
    u8 r;
    u8 g;
    u8 b;
    u8 a;
} RGBA32;

typedef struct Rect3D {
    Vec3f min;
    Vec3f max;
} Rect3D;

typedef struct unkIsChange {
    /* 0x00 */ s32 unk0;                            /* inferred */
    /* 0x04 */ s32 unk4;                            /* inferred */
    /* 0x08 */ s32 unk_08;
    /* 0x0C */ s32 unk_0C;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk18;
    /* 0x1C */ f32 unk1C;                           /* inferred */
    /* 0x20 */ f32 unk20;                           /* inferred */
    /* 0x24 */ f32 unk24;                           /* inferred */
    /* 0x28 */ char pad28[0x18];                    /* maybe part of unk24[7]? */
    /* 0x40 */ f32 unk40;
    /* 0x44 */ f32 unk44;
    /* 0x48 */ f32 unk48;
    /* 0x4C */ f32 unk4C;
    /* 0x50 */ f32 unk50;
    /* 0x54 */ f32 unk54;
    /* 0x58 */ char pad58[0xC];                     /* maybe part of unk54[4]? */
    /* 0x64 */ s32 unk64;                           /* inferred */
    /* 0x68 */ char pad68[0xC];                     /* maybe part of unk64[4]? */
    /* 0x74 */ s32 unk74;                           /* inferred */
    /* 0x78 */ s32 unk78;                           /* inferred */
    /* 0x7C */ char pad7C[0x50];                    /* maybe part of unk78[0x15]? */
    /* 0xCC */ s32 unkCC;                           /* inferred */
    /* 0xD0 */ s32 unkD0;                           /* inferred */
    /* 0xD4 */ s32 unk_D4;
    /* 0xD8 */ s32 unk_D8;
} unkIsChange;                                      /* size = 0xDC */

typedef struct PlayerActor {
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
    /* 0x05C */ s32 jumpAnimFrame;
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
    /* 0x0BC */ s32 unkBC;
    /* 0x0C0 */ u32 amountLeftToShoot;
    /* 0x0C4 */ u32 vaultFall;//timer for falling after vault
    /* 0x0C8 */ s32 hp;
    /* 0x0CC */ u32 playerHURTSTATE;
    /* 0x0D0 */ s32 playerHURTTIMER;
    /* 0x0D4 */ u32 playerHURTANIM;
    /* 0x0D8 */ u32 playerHURTBY;
    /* 0x0DC */ f32 unk_DC[6];
    /* 0x0F4 */ f32 unk_F4[6];
    /* 0x10C */ f32 timerDown;
    /* 0x110 */ f32 reticleSize;
    /* 0x114 */ s32 active; //0x00 = no, 0x01 = yes
    /* 0x118 */ s32 exists; //0x00 = no, 0x01 = yes
    /* 0x11C */ u32 power; //enum of power it has
    /* 0x120 */ s32 powerTimer; 
    /* 0x124 */ s32 powerTimerTill; 
    /* 0x128 */ f32 tongueYOffset; 
    /* 0x12C */ f32 tongueSeperation; 
} PlayerActor; //sizeof 0x130

typedef struct EffectTypeAQArg7 {
    /* 0x0 */ u8 unk_0;
    /* 0x1 */ u8 unk_1;
} EffectTypeAQArg7; //sizeof 0x2

typedef struct unk_80052094_8 {
    /* 0x00 */ f32 unk_00;
    /* 0x08 */ s32 unk_04;
} unk_80052094_8; //sizeof 0x8

typedef struct Struct_80076EA0 {
    /* 0x00 */ f32 unk_00;
    /* 0x04 */ f32 unk_04;
    /* 0x08 */ f32 unk_08;
    /* 0x0C */ s32 unk_0C;
    /* 0x10 */ char* unk_10;
    /* 0x14 */ s32 unk_14;
} Struct_80076EA0; // sizeof 0x18

typedef struct TonguePos{
    /* 0x00 */ f32 positions[32];
} TonguePos; //sizeof 0x80

typedef struct tongueSlot {
    /* 0x00 */ u32 slots[64];
} tongueSlot; //sizeof 0x100

typedef struct Tongue { // at 80169268 (for p1)
    /* 0x00 */ u32 vaulting; //0x00 = no, 0x01 = yes
    /* 0x04 */ u32 tongueMode; //enum of tongue actions
    /* 0x08 */ s32 segments;
    /* 0x0C */ s32 poleSegmentAt;
    /* 0x10 */ s32 timer;
    /* 0x14 */ s32 cameraSegmentAt;//where to point the camera
    /* 0x18 */ f32 tongueXs[33]; //all (including the rope model) positions
    /* 0x9C */ f32 tongueYs[33];
    /* 0x120*/ f32 tongueZs[33];
    /* 0x1A4*/ f32 tongueAngles[33];
    /* 0x228*/ f32 tongueForwards[32];
    /* 0x2A8*/ f32 tongueHalfX[32]; // unsure, axes related though
    /* 0x328*/ f32 tongueHalfZ[32];
    /* 0x3A8*/ f32 controlAngle;
    /* 0x3AC*/ f32 length;
    /* 0x3B0*/ f32 trueAngle;
    /* 0x3B4*/ u32 onTongue[64];
    /* 0x4B4*/ u32 amountOnTongue; //called "capture_num" in US 1.0
    /* 0x4B8*/ u32 inMouth[64];
    /* 0x5B8*/ s32 amountInMouth;
    //all of this has to do with vaulting
    /* 0x5BC*/ f32 reset1[1];
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
    /* 0x604*/ s32 tongueDir;//0x01 for counter clockwise. 0xFFFFFFFF for clockwise.
    //wall
    /* 0x608*/ u32 wallTime;//timer for tongue-touching a wall
} Tongue; //sizeof 0x60C


typedef struct CollisionData{
    s32 aOVerts;
    s32 aOTris;
    Vec3f* vertsStart; //segmented
    Vec3w* trisStart; //segmented
    Rect3D* settingsStart; //segmented
} CollisionData;


typedef struct Collider {
    /* 0x000 */ s32 unk_00;
    /* 0x004 */ s32 unk_04;
    /* 0x008 */ s32 unk_08;
    /* 0x00C */ s32 unk_0C;
    /* 0x010 */ s32 unk_10;
    /* 0x014 */ s32 unk_14;
    /* 0x018 */ Vec3f sfxPos;
    /* 0x024 */ f32 unk_24;
    /* 0x028 */ s32 UNK_28;
    /* 0x02C */ s32 unk_2C;
    /* 0x030 */ Vec3f unk_30;
    /* 0x03C */ Vec3f unk_3C;
    /* 0x048 */ f32 unk_48;
    /* 0x04C */ struct Collider* unk_4C;
    /* 0x050 */ f32 unk_50;
    /* 0x054 */ f32 unk_54;
    /* 0x058 */ f32 unk_58;
    /* 0x05C */ s32 unk_5C;
    /* 0x060 */ f32 unk60;
    /* 0x064 */ f32 unk64;
    /* 0x068 */ char pad68[0x18];                   /* maybe part of unk64[7]? */
    /* 0x080 */ s32 unk80;
    /* 0x084 */ char pad84[8];                      /* maybe part of unk80[3]? */
    /* 0x08C */ f32 unk_8C;
    /* 0x090 */ f32 unk_90;
    /* 0x094 */ f32 unk_94;
    /* 0x098 */ f32 unk_98;
    /* 0x09C */ f32 unk_9C;
    /* 0x0A0 */ f32 unk_A0;
    /* 0x0A4 */ f32 unkA4;
    /* 0x0A8 */ f32 unkA8;
    /* 0x0AC */ s32 unk_AC;
    /* 0x0B0 */ s32 unk_B0;
    /* 0x0B4 */ s32 unk_B4;
    /* 0x0B8 */ s32 unk_B8;
    /* 0x0BC */ s32 unk_BC;
    /* 0x0C0 */ s32 unk_C0;
    /* 0x0C4 */ s32 unkC4;
    /* 0x0C8 */ s32 unkC8;
    /* 0x0CC */ Rect3D unk_CC;
    /* 0x0E4 */ void* unk_E4;
    /* 0x0E8 */ CollisionData* collisionData;
    /* 0x0EC */ Gfx* gfx;
    /* 0x0F0 */ char padF0[4];
    /* 0x0F4 */ void* unkF4;                        /* inferred */
    /* 0x0F8 */ void (*function)(struct Collider*);
    /* 0x0FC */ void* unk_FC;
    /* 0x100 */ void* unk_100;
    /* 0x104 */ char pad104[8];                     /* maybe part of unk_100[3]? */
    /* 0x10C */ s32 unk10C;                         /* inferred */
    /* 0x110 */ s32 unk_110;
    /* 0x114 */ s32 unk_114;
    /* 0x118 */ s32 unk_118;
    /* 0x11C */ s32 unk_11C;
    /* 0x120 */ char pad120[4];
    /* 0x124 */ s32 unk_124;
    /* 0x128 */ s32 unk_128;
    /* 0x12C */ char pad12C[4];
} Collider;                                         /* size = 0x130 */

typedef struct unkSpriteStruct {
    /* 0x000 */ s32 unk_00;
    /* 0x004 */ s32 unk_04;
    /* 0x008 */ s32 unk_08;
    /* 0x00C */ s32 unk_0C;
    /* 0x010 */ s32 unk_10;
    /* 0x014 */ s32 unk_14;
    /* 0x018 */ Vec3f sfxPos;
    /* 0x024 */ f32 unk_24;
    /* 0x028 */ s32 UNK_28;
    /* 0x02C */ s32 unk_2C;
    /* 0x030 */ Vec3f unk_30;
    /* 0x03C */ Vec3f unk_3C;
    /* 0x048 */ f32 unk_48;
    /* 0x04C */ struct Collider* unk_4C;
    /* 0x050 */ f32 unk_50;
    /* 0x054 */ f32 unk_54;
    /* 0x058 */ f32 unk_58;
    /* 0x05C */ s32 unk_5C;
} unkSpriteStruct; //sizeof 0x60

typedef struct RoomObject {
    Vec3f position;
    Vec3f scale;
    s32 unk18;
    s32 damages;
    s32 unk20;
    s32 unk24;
    f32 unk28;
    f32 unk2C;
    f32 unk30;
    f32 unk34;
    s32 unk38;
    s32 unk3C;
    s32 unk40;
    s32 unk44;
    s32 unk48;
    s32 unk4C;
    s32 id; //id in levelData pointers
    s32 unk54;
    s32 unk58;
    s32 unk5C;
    void (*func1)(struct Collider*);
    void (*func2)(struct Collider*);
    s32 unk68;
    s32 unk6C;
    s32 unk70;
    s32 unk74;
    s32 unk78;
    s32 unk7C;
    s32 unk80;
    s32 unk84;
    s32 unk88;
} RoomObject;

typedef struct RoomActor {
    s32 id;
    Vec3f position;
    f32 unk10;
    f32 unk14;
    f32 unk18;
    s32 unk1C;
    f32 unk20;
    f32 unk24;
    f32 unk28;
    s32 unk2C;
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    s32 unk40;
    s32 unk44;
    s32 unk48;
    s32 unk4C;
    s32 unk50;
    s32 unk54;
    s32 unk58;
    s32 unk5C;
} RoomActor;

typedef struct Collectable {
    s32 id;
    Vec3f position;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
} Collectable;

typedef struct collectableWrapper {
    Collectable* levelDataCollectable;
    s32 unk_04;
    s32 unk_08;
    s32 bitfield;
    s32 actorIndex;
} collectableWrapper;

typedef struct Color128 {
    u32 r;
    u32 g;
    u32 b;
    u32 a;
} Color128;

typedef struct SpriteActor {
    s32 size;
    s32 spriteIndex;
    Vec3f position;
    Vec3f scale;
    s32 unk20;
    s32 unk24;
    f32 unk28;
    s32 damages;
    s32 unk30;
    s32 unk34;
    s32 unk38;
    s32 unk3C;
    Color128 color;
} SpriteActor;

//this isnt JUST collision, its also a variation of RoomSettings
//you can tell because of the 4 pointers at the start
typedef struct Collision {
    /* 0x00 */ RoomObject* roomObjects;
    //pointer of levelData roomObjects
    //0 for none
    /* 0x04 */ RoomActor* roomActors;
    //pointer of levelData roomActors
    //0 for none
    /* 0x08 */ Collectable* collectables; 
    //pointer of levelData collectables
    //0 for none
    /* 0x0C */ SpriteActor* spriteActors;
    //pointer of levelData spriteActors
    //0 for none
    /* 0x10 */ s32 rmObjCount;
    //how much to iterate in Collision.roomObjects
    /* 0x14 */ s32 rmActCount;
    //how much to iterate in Collision.roomActors
    /* 0x18 */ s32 clctCount;
    //how much to iterate in Collision.collectables
    /* 0x1C */ Vec2w exit;
    //where to send you relative on exit of the room
    //moves along a 2d grid of the rooms, can be found in the level data's map
    //usually must actually connect rooms, though some can be euclidian if you play your cards right (eg, one way doors)
    //(will usually crash any room going into it if it doesnt match)
    /* 0x24 */ s32 unk24;
    /* 0x28 */ s32 unk28;
    /* 0x2C */ s32 unk2C;
    /* 0x30 */ Rect3D roomBounds;
    /* 0x48 */ Rect3D rect_48;
    /* 0x60 */ s32 unk60;
    /* 0x64 */ s32 unk64;
    /* 0x68 */ s32 unk68;
    /* 0x6C */ char pad6C[4];
    /* 0x70 */ s32 unk70;                           /* inferred */
    /* 0x74 */ s32 unk74;                           /* inferred */
    /* 0x78 */ s32 unk78;
    /* 0x7C */ s32 unk7C; //boss flag?
    /* 0x80 */ s32 unk80;
    /* 0x84 */ s32 unk84;
    /* 0x88 */ s32 unk88;                           /* inferred */
    /* 0x8C */ s32 unk8C;
    /* 0x90 */ f32 unk90;                           /* inferred */
    /* 0x94 */ s32 cameraMode;
    //basically an enum, has a ton of different (usually dungeon based) angles
    //it feels like most of them can be seen in the credits, though this definitely needs more research
    /* 0x98 */ Vec3f cameraAnchor; 
    //the position the camera is anchored within the room
    /* 0xA4 */ f32 unkA4;
    /* 0xA8 */ f32 unkA8;
    /* 0xAC */ f32 unkAC;
    /* 0xB0 */ f32 unkB0;                           /* inferred */
    /* 0xB4 */ s16 unkB4;                           /* inferred */
    /* 0xB6 */ s16 unkB6;                           /* inferred */
    /* 0xB8 */ s16 unkB8;                           /* inferred */
    /* 0xBA */ char padBA[0x12];                    /* maybe part of unkB8[0xA]? */
    /* 0xCC */ f32 unkCC;                           /* inferred */
    /* 0xD0 */ f32 unkD0;
    /* 0xD4 */ char padD4[4];
} Collision;                                        /* size = 0xD8 */


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
    /* 0x04 */ Vec3f f1; //angle freecam will snap to
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
    PlayerActor actorInit;
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

typedef struct LevelPointer{
    Gfx* Graphics; //type Gfx*, but it throws 3000 errors. wtf???
    CollisionData* Collisions;
    char pad[0x28];
} LevelPointer;

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

// this is probably a Rect3D, but for whatever reason, replacing it causes a mismatch.
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

typedef struct unk80100F50 {
    /* 0x00 */ u32 base_address;
    /* 0x04*/ u32 unk4;
} unk80100F50; //sizeof 0x08

typedef struct frameBufferData {
    /* 0x00 */ char data[0x25800]; // h*W*colDepth
} frameBufferData; //sizeof 0x25800

typedef struct tempStruct {
    /* 0x00 */ char unk_00[60];
    /* 0x3C */ Vec3f unk_3C;
} tempStruct; //sizeof 0x48

typedef struct CTTask {
    /* 0x00 */ s16 runType;
    /* 0x02 */ s16 taskID;
    /* 0x04 */ s16 unk_04;
    /* 0x06 */ s8 unk06[2];
    /* 0x08 */ void (*function)(struct CTTask*);
    /* 0x0C */ struct CTTask* next;
    /* 0x10 */ struct CTTask* prev;
    /* 0x14 */ Vec3f pos;
    /* 0x20 */ f32 rotA;
    /* 0x24 */ Vec3f scale;
    /* 0x30 */ Vec3f rot;
    /* 0x3C */ f32 unk3C;
    /* 0x40 */ f32 unk40;
    /* 0x44 */ s16 unk44;
    /* 0x46 */ s16 unk46;
    /* 0x48 */ s16 unk48;
    /* 0x4A */ s16 unk4A;                           /* inferred */
    /* 0x4C */ s16 unk4C;
    /* 0x4E */ u16 unk4E;
    /* 0x50 */ Gfx* unk50;
    /* 0x54 */ u8 unk54;
    /* 0x55 */ u8 unk55;
    /* 0x56 */ char pad56[2];                       /* maybe part of unk54[4]? */
    /* 0x58 */ struct CTTask* unk58;
    /* 0x5C */ s16 unk_5C;
    /* 0x5E */ s16 unk5E;
    /* 0x60 */ s16 unk60;
    /* 0x62 */ s16 unk_62;
    /* 0x64 */ s16 unk_64;
    /* 0x66 */ s16 unk66;
    /* 0x68 */ s16 unk_68;
    /* 0x6A */ s16 unk6A;                           /* inferred */
    /* 0x6C */ s16 unk6C;
    /* 0x6E */ u16 unk6E;
    /* 0x70 */ s16 unk_70;
    /* 0x72 */ s16 unk72;
    /* 0x74 */ s16 unk74;
    /* 0x76 */ char unk76[0x4];
    /* 0x7A */ u16 unk7A;
    /* 0x7C */ f32 unk7C;
    /* 0x80 */ f32 unk80;
    /* 0x84 */ f32 unk84;
    /* 0x88 */ f32 unk88;
    /* 0x8C */ s32 unk8C;
    /* 0x90 */ f32 unk90;
    /* 0x94 */ u8 unk94[0x14];
} CTTask;                                           /* size = 0xA8 */

typedef struct BGMVolume {
    /* 0x00 */ s32 vol;
    /* 0x04 */ s32 unusedVol;
} BGMVolume; //sizeof 0x8

/* Real struct layout but could be fake match
typedef struct BGMVolume {
    union {
        s16 vol_s16[2];
        s32 vol_s32;
    } vol;
    /* 0x04  s32 unusedVol;
} BGMVolume; //sizeof 0x8
*/


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
    /* 0x2C */ Rect3D boundBox;
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
    /* 0x010 */ u32 globalTimer;
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
        // /* 0x054 */ f32 unk_54;//cos x used by FISH
        // /* 0x058 */ f32 unk_58;//presumably y
        // /* 0x05C */ f32 unk_5C;//sin z used by FISH
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
    /* 0x0F0 */ u32 unk_F0;
    /* 0x0F4 */ f32 unk_F4;
    /* 0x0F8 */ f32 unk_F8;
    /* 0x0FC */ f32 unk_FC;
    /* 0x100 */ f32 unk_100;
    /* 0x104 */ f32 unk_104;
    /* 0x108 */ f32 unk_108;
    /* 0x10C */ s32 userVariables[5];
    /* 0x120 */ s32 unk_120;
    /* 0x124 */ s32 unk_124;
    /* 0x128 */ s32 unk_128;
    /* 0x12C */ s32 unk_12C;
    /* 0x130 */ s32 unk_130;
    /* 0x134 */ f32 unk_134[8];
        /* 0x154 */ union {
        Vec2f _f32;
        Vec2w _s32;
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

typedef struct TimeVal {
    /* 0x00 */ u8 b0;
    /* 0x01 */ u8 b1;
    /* 0x02 */ u8 b2;
} TimeVal; //sizeof 0x3

typedef struct SaveFile {
    /* 0x00 */ u8 checksum;
    /* 0x01 */ u8 flags;
    /* 0x02 */ u8 unk2;
    /* 0x03 */ char unk3[1];
    /* 0x04 */ char unk_04[0x1E]; //room/stage flags?
    /* 0x22 */ s16 UNK_22;
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
    /* 0x45 */ TimeVal stageTimes[8];
    /* 0x5D */ u8 carrotBitfield; 
    /* 0x5E */ u8 UNK_5E[2]; //first also copies CARROT progress.
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

typedef struct ContMain {
    u16 buttons0;
    u16 buttons1;
    u16 buttons2;
    s16 stickX;
    s16 stickY;
    f32 stickAngle;
} ContMain; //sizeof 0x10

typedef struct ContDemo {
    u16 buttons;
    s8 x;
    s8 y;
} ContDemo; //sizeof 0x4

typedef struct EffectPart { 
    /* 0x00 */ Vec3f pos;
    /* 0x0C */ Vec3f vel;
    /* 0x18 */ f32 lifeTime;
    /* 0x1C */ f32 sizeX;
    /* 0x20 */ f32 sizeY;
    /* 0x24 */ u8 unk_24;
    /* 0x25 */ u8 unk_25;
    /* 0x26 */ char pad_26[2];
} EffectPart; //sizeof 0x28

typedef struct Effect {
    /* 0x00 */ s32 spriteID; // TODO union
    /* 0x04 */ u8 numParts; // TODO union
    /* 0x05 */ u8 unk5;
    /* 0x06 */ s8 unk6;
    /* 0x07 */ s8 unk7;
    /* 0x08 */ s32 unk8;
    /* 0x0C */ f32 lifeTime;
    /* 0x10 */ Vec3f pos; // TODO make union
    /* 0x1C */ Vec3f vel;
    /* 0x28 */ f32 sizeX;
    /* 0x2C */ f32 sizeY;
    /* 0x30 */ f32 duration;
    /* 0x34 */ void* fpUpdate;
    /* 0x38 */ void* data; // TODO make union maybe
    /* 0x3C */ EffectPart* parts;
    /* 0x40 */ struct Effect* previous;
    /* 0x44 */ struct Effect* next;
} Effect; //sizeof 0x48

typedef struct unkStruct16 {
    /* 0x00 */ void* unk0;
    /* 0x04 */ void* unk4;
    /* 0x08 */ u8* unk8;
    /* 0x0C */ s32 unkC;
    /* 0x10 */ f32 unk10;
} unkStruct16; // sizeof 0x14

typedef struct bf8{
    /* 0x00 */ s16 unk0;
    /* 0x02 */ s16 unk2;
    /* 0x04 */ s16 unk4;
    /* 0x06 */ s16 unk6;
    /* 0x08 */ s16 unk8;
} bf8; //sizeof 0xC


typedef struct unkStruct {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ char unk_04;
    /* 0x08 */ f32 unk_08[0x10];
    /* 0x48 */ f32 unk_48[0x10];
    /* 0x88 */ f32 unk_88[0x10];
    /* 0xC8 */ char unk_C8[0x40];
} unkStruct; //sizeof 0x108

// this struct seems to manage sound effects
typedef struct unk0 {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ s32 unk4;
    /* 0x08 */ s32 unk8;
    /* 0x0C */ f32 unkC;
    /* 0x10 */ f32 unk10;
    /* 0x14 */ f32 unk14;
    /* 0x18 */ f32 unk18;
    /* 0x1C */ f32 unk1C;
    /* 0x20 */ s16 unk20;
    /* 0x22 */ s16 unk22;
    /* 0x24 */ u8 unk24;
    /* 0x25 */ char pad25[7];                       /* maybe part of unk24[8]? */
    /* 0x2C */ f32 unk2C;
    /* 0x30 */ s16 unk30;
    /* 0x32 */ s16 unk32;
    /* 0x34 */ s16 unk34;
    /* 0x36 */ char pad36[2];
    /* 0x38 */ f32 unk38;
    /* 0x3C */ u8 unk3C;
    /* 0x3D */ u8 unk3D;
    /* 0x3E */ s16 unk3E;                           /* inferred */
    /* 0x40 */ s16 unk40;
    /* 0x42 */ s16 unk42;
    /* 0x44 */ s8 unk44;
    /* 0x45 */ char pad45[3];                       /* maybe part of unk44[4]? */
    /* 0x48 */ s32 unk48; // s16 unk4a????
    /* 0x4C */ s32 unk4C;
    /* 0x50 */ struct unk0* unk50;
    /* 0x54 */ struct unk0* unk54;
} unk0;                                             /* size = 0x58 */

typedef struct pole{
    /* 0x00 */ s32 mode;
    /* 0x04 */ Vec3f pos;
    /* 0x10 */ f32 yStretch;
} pole; //sizeof 0x14

struct UnkList {
    /* 0x00 */ struct UnkList* unk0;
    /* 0x04 */ s32 unk_04;
}; //sizeof 0x8

/*D_MTXSLOT1 = 0x80129730; // type:Mtx
D_MTXSLOT2 = 0x80129770; // type:Mtx
D_MTXSLOT3 = 0x801297B0; // type:Mtx
D_MTXSLOT4 = 0x801297F0; // type:Mtx
D_MTXSLOT5 = 0x80129830; // type:Mtx
D_MTXSLOT6 = 0x80129870; // type:Mtx
D_MTXSLOT7 = 0x801298B0; // type:Mtx
D_MTXSLOT8 = 0x801298F0; // type:Mtx
D_MTXSLOT9 = 0x80129930; // type:Mtx
D_MTXSLOTA = 0x80129970; // type:Mtx
D_MTXSLOTB = 0x801299B0; // type:Mtx
D_MTXSLOTC = 0x801299F0; // type:Mtx
D_MTXSLOTD = 0x80129A30; // type:Mtx*/

typedef struct GraphicStruct {
/*0x0*/         Gfx dlist[0x1000];
/*0x8000*/      Mtx perspective;
/*0x8040*/      Mtx lookAt;
/*0x8080*/      Mtx playerTranslate[4];
/*0x8180*/      Mtx playerRotate[4];
/*0x8280*/      Mtx playerScale[4];
/*0x8380*/      Mtx reticuleTranslate[4][6];
/*0x8980*/      Mtx reticuleRotate[4][6];
/*0x8F80*/      Mtx reticuleScale[4][6];
/*0x9580*/      Mtx tongueTranslate[4][33];
/*0xb680*/      Mtx tongueRotate[4][33];
/*0xD780*/      Mtx tongueScale[4][33];
/*0xf880*/      Mtx actorTranslate[64];
/*0x10880*/     Mtx actorRotate[64];
/*0x11880*/     Mtx actorScale[64];
/*0x12880*/     s8 unk12880[0x4000]; //mtx's for shadows?
/*0x16880*/     Mtx colliderTransforms[128][3]; // may be wrong.
/*0x1C880*/     s8 unk1c880[0x2000];
/*0x1E880*/     Mtx unk1e880[74]; //may be used for "CTTask"s
} GraphicStruct; //sizeof 0x1FB00

typedef struct Shadow {
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
} Shadow;

typedef struct Door {
    s32 index;
    s32 unk4; //not read?
    s32 inZone;
    Rect3D rect;
    Vec3f max;
    u32 direction; // index in gCardinalDirections
    s32 unk34; //not read?
    s32 unk38; 
    s32 unk3C; 
    s32 toZone;
    s32 unk44; 
    s32 unk48; 
} Door; //sizeof 0x4C (?)

/*Dupe of CollisionData???
typedef struct ModelData{
    s32 vertCount;
    s32 triCount;
    Vec3f* verts;
    Vec3f* tris;
    Rect3D* modelBox;
} ModelData; //sizeof 0x14*/
typedef struct UnkType1 {
    Vec3f unk0;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
} UnkType1;

typedef struct UnkType2 {
    f32 unk0;
    f32 unk4;
    s32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
} UnkType2;

typedef struct RoomSettings {
    RoomObject* RoomObjectsPointer;
    RoomActor* RoomActorPointer;
    Collectable* CollectablePointer;
    SpriteActor* SpriteActorPointer;
    s32 unk10;
    s32 unk14;
    s32 amountOfSpriteActors; //needs verification
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    f32 unk28;
    s32 unk2C;
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
    f32 unk48;
    s16 unk4C;
    s16 unk4E;
    s16 unk50;
    s16 unk52;
    s32 unk54;
    s32 unk58;
    s32 unk5C;
    s32 unk60;
    f32 unk64;
    f32 unk68;
} RoomSettings;

typedef struct LevelMap {
    //s32* rooms; //1 dimensional array that's actually 2 dimensional. the player navigates with axiis on doors that move them on the x or y.
    s32 width; // width for ^
    s32 height; // height for ^^
    RoomSettings* dungeonRooms; //pointer to the array of RoomSettings for the dungeon.
    s32* roomsPointer; //pointer to the array of rooms for this map. is usually directly above the width/this struct.
} LevelMap;

typedef struct LevelScope {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 renderDistance;
    s32 unk14;
} LevelScope;

typedef struct LevelHeader {
    LevelMap* Map;
    RoomSettings* OWRooms;
    LevelPointer* Pointers;
    u32 unkC;
    u32 RoomObjects;
    u32 unk14;
    u32 SpriteLib;
    LevelScope* Scope;
} LevelHeader;

typedef struct segTableEntry {
    char* name;
    void* romAddrStart;
    void* romAddrEnd;
    void* ramAddrStart;
    void* ramAddrEnd;
} segTableEntry;

typedef struct StageSegData {
    /* 0x00 */ void* baseAddress;
    /* 0x04 */ char unk04[0x10];
} StageSegData;

typedef struct Anim {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    s32 frames;
    s32 objects;
} Anim;

typedef struct AnimPointer {
    s32* unk1;
    s32* unk2;
    Mtx* animation;
} AnimPointer;

typedef struct unk80174880 {
/* 0x00 */ s32 unk_00[4];
/* 0x10 */ char unk_10[0x18];
/* 0x28 */ s32 UNK_28[4];
/* 0x38 */ char unk_38[0x18];
/* 0x50 */ s32 unk_50[4];
/* 0x60 */ char unk_60[0x18];
/* 0x78 */ s32 unk_78;
/* 0x7C */ s32 unk_7C;
} unk80174880;

//84E0 bss structs
typedef struct unk80174900 {
    char unk_00[0x80];
} unk80174900;

typedef struct unk801749B0 {
    s32 unk_00;
    s32 unk_04;
    char unk_08[0x20];
} unk801749B0;

typedef struct unk80174A50 {
    char unk_00[0xB40];
} unk80174A50;

typedef struct unk80175590 {
    char unk_00[0x08];
} unk80175590;

typedef struct unk80175598 {
    char unk_00[0x10];
} unk80175598;

typedef struct unk801755A8 {
    char unk_00[0x40];
} unk801755A8;

typedef struct unk801755E8 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk801755E8;

typedef struct unk801755F8 {
    char unk_00[0x10];
} unk801755F8;

typedef struct unk80175608 {
    char unk_00[0x18];
} unk80175608;

typedef struct unk80170E68 {
    s32 unk_00;
    char unk_04[0x804];
} unk80170E68;

extern unk80170E68 D_80170E68[];

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

typedef short Mtx_f[2][16];

#endif
