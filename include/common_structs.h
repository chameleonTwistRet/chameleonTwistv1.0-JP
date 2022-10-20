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
    /* 0x00 */ u32 playerID; //trust me thats what it is
    /* 0x04 */ f32 xPos;
    /* 0x08 */ f32 yPos;
    /* 0x0C */ f32 zPos;
    /* 0x10 */ f32 xPosAgain;
    /* 0x14 */ f32 yPosAgain;
    /* 0x18 */ f32 zPosAgain;
    /* 0x1C */ f32 yCounter; //counts around where the y is but not at. weird.
    /* 0x20 */ f32 waterGIMP; //how much to gimp you in water? idk but its correlated
    /* 0x24 */ f32 xVel;
    /* 0x28 */ f32 yVel;
    /* 0x2C */ f32 zVel;
    /* 0x30 */ f32 xVaultlocity;
    /* 0x34 */ f32 yVaultlocity;
    /* 0x38 */ f32 zVaultlocity;
    /* 0x3C */ f32 yAngle;
    /* 0x40 */ f32 forwardVel; //between 0 and 20.8. gets broken on slope jumps
    /* 0x44 */ f32 forwardImpulse;
    /* 0x48 */ f32 waterFactor; //gets effected in water again
    /* 0x4C */ f32 hitboxSize; //30 default
    /* 0x50 */ f32 hitboxYStretch; //unconfirmed. 150 default.
    //there is no reason to make these s32's
    /* 0x54 */ u32 canJump;    //0x00 = yes, 0x01 = no
    /* 0x58 */ u32 jumpReleasedInAir;    // 0x00 = no, 0x01 = yes
    /* 0x5C */ u32 jumpAnimFrame;
    /* 0x60 */ u32 hasTumbled;    //0x00 = no, 0x01 = yes. resets on jump.
    /* 0x64 */ u32 unk64;
    /* 0x68 */ u32 inWater;//0x00 = no, 0x01 = yes.
    /* 0x6C */ u32 squishTimer;
    /* 0x70 */ f32 yScale;
    /* 0x74 */ u32 locked; //0x00 = no, 0x16 = yes. when using lock to stand in place.
    /* 0x78 */ s32 amountToShoot; //number for machine gun shoot
    /* 0x7C */ s32 surface; //-1 when off ground, diff number when on diff surface. if 0 you slow to a crawl
    /* 0x80 */ s32 wSurface; //-1 when not in water, diff number when in diff water
    /* 0x84 */ s32 surfaceSlide; //1 if you slide on a slope while standing. 0 if else (not walkable slopes)
    /* 0x88 */ s32 surfaceFine; //more accurate
    /* 0x8C */ s32 vaulting; // 0 if not, 1 if
    /* 0x90 */ f32 xFromCenter; //from center of room (when on ground)
    /* 0x94 */ f32 yFromCenter;
    /* 0x98 */ f32 zFromCenter;
    /* 0xA8 */ f32 xShift; //override(?) when on moving objects (falling bridges, etc)
    /* 0xAC */ f32 yShift;
    /* 0xB0 */ f32 zShift;
    /* 0xA8 */ f32 xMove; //override when sliding on slopes or on poles
    /* 0xAC */ f32 yMove;
    /* 0xB0 */ f32 zMove;
    /* 0xB4 */ u32 groundMovement; //0x00 = standing, 0x01 = walking, 0x02 = running
    /* 0xB8 */ f32 globalTimer;
    /* 0xBC */ u32 unkBC;
    /* 0xC0 */ u32 shootLeft;
    /* 0xC4 */ u32 vaultFall;//timer for falling after vault
    /* 0xC8 */ u32 hp;
    /* 0xCC */ u32 playerHURTSTATE;
    /* 0xD0 */ u32 playerHURTTIMER;
    /* 0xD4 */ u32 playerHURTANIM;
    /* 0xD8 */ u32 playerHURTBY;
    /* 0xDC */ f32 useless1; //vec3's i have to assume
    /* 0xE0 */ f32 useless2;
    /* 0xE4 */ f32 useless3;
    /* 0xE8 */ f32 useless4;
    /* 0xEC */ f32 useless5;
    /* 0xF0 */ f32 useless6;
    /* 0xF4 */ f32 useless7;
    /* 0xF8 */ f32 useless8;
    /* 0xFC */ f32 useless9;
    /* 0x100*/ f32 useless10;
    /* 0x104*/ f32 useless11;
    /* 0x108*/ f32 useless12;
    /* 0x10C*/ f32 timerDown;
    /* 0x110*/ f32 reticleSize;
    /* 0x114*/ u32 active; //0x00 = no, 0x01 = yes
    /* 0x118*/ u32 exists; //0x00 = no, 0x01 = yes
    /* 0x11C*/ u32 power; //enum of power it has
    /* 0x120*/ u32 powerTimer; 
    /* 0x124*/ u32 powerTimerTill; 
    /* 0x128*/ f32 tongueYOffset; 
    /* 0x12C*/ f32 tongueSeperation; 
} playerActor;

typedef struct TonguePos{
    /* 0x00 */ f32 pos1;
    /* 0x04 */ f32 pos2;
    /* 0x08 */ f32 pos3;
    /* 0x0C */ f32 pos4;
    /* 0x10 */ f32 pos5;
    /* 0x14 */ f32 pos6;
    /* 0x18 */ f32 pos7;
    /* 0x1C */ f32 pos8;
    /* 0x20 */ f32 pos9;
    /* 0x24 */ f32 pos10;
    /* 0x28 */ f32 pos11;
    /* 0x2C */ f32 pos12;
    /* 0x30 */ f32 pos13;
    /* 0x34 */ f32 pos14;
    /* 0x38 */ f32 pos15;
    /* 0x3C */ f32 pos16;
    /* 0x40 */ f32 pos17;
    /* 0x44 */ f32 pos18;
    /* 0x48 */ f32 pos19;
    /* 0x4C */ f32 pos20;
    /* 0x50 */ f32 pos21;
    /* 0x54 */ f32 pos22;
    /* 0x58 */ f32 pos23;
    /* 0x5C */ f32 pos24;
    /* 0x60 */ f32 pos25;
    /* 0x64 */ f32 pos26;
    /* 0x68 */ f32 pos27;
    /* 0x6C */ f32 pos28;
    /* 0x70 */ f32 pos29;
    /* 0x74 */ f32 pos30;
    /* 0x78 */ f32 pos31;
    /* 0x7C */ f32 pos32;
} TonguePos;

typedef struct tongueSlot {
    /* 0x00 */ u32 slot1;
    /* 0x04 */ u32 slot2;
    /* 0x08 */ u32 slot3;
    /* 0x0C */ u32 slot4;
    /* 0x10 */ u32 slot5;
    /* 0x14 */ u32 slot6;
    /* 0x18 */ u32 slot7;
    /* 0x1C */ u32 slot8;
    /* 0x20 */ u32 slot9;
    /* 0x24 */ u32 slot10;
    /* 0x28 */ u32 slot11;
    /* 0x2C */ u32 slot12;
    /* 0x30 */ u32 slot13;
    /* 0x34 */ u32 slot14;
    /* 0x38 */ u32 slot15;
    /* 0x3C */ u32 slot16;
    /* 0x40 */ u32 slot17;
    /* 0x44 */ u32 slot18;
    /* 0x48 */ u32 slot19;
    /* 0x4C */ u32 slot20;
    /* 0x50 */ u32 slot21;
    /* 0x54 */ u32 slot22;
    /* 0x58 */ u32 slot23;
    /* 0x5C */ u32 slot24;
    /* 0x60 */ u32 slot25;
    /* 0x64 */ u32 slot26;
    /* 0x68 */ u32 slot27;
    /* 0x6C */ u32 slot28;
    /* 0x70 */ u32 slot29;
    /* 0x74 */ u32 slot30;
    /* 0x78 */ u32 slot31;
    /* 0x7C */ u32 slot32;
    /* 0x80 */ u32 slot33;
    /* 0x84 */ u32 slot34;
    /* 0x88 */ u32 slot35;
    /* 0x8C */ u32 slot36;
    /* 0x90 */ u32 slot37;
    /* 0x94 */ u32 slot38;
    /* 0x98 */ u32 slot39;
    /* 0x9C */ u32 slot40;
    /* 0xA0*/ u32 slot41;
    /* 0xA8*/ u32 slot42;
    /* 0xAC*/ u32 slot43;
    /* 0xB0*/ u32 slot44;
    /* 0xB4*/ u32 slot45;
    /* 0xB8*/ u32 slot46;
    /* 0xBC*/ u32 slot47;
    /* 0xC0*/ u32 slot48;
    /* 0xC4*/ u32 slot49;
    /* 0xC8*/ u32 slot50;
    /* 0xCC*/ u32 slot51;
    /* 0xD0*/ u32 slot52;
    /* 0xD4*/ u32 slot53;
    /* 0xD8*/ u32 slot54;
    /* 0xDC*/ u32 slot55;
    /* 0xE0*/ u32 slot56;
    /* 0xE4*/ u32 slot57;
    /* 0xE8*/ u32 slot58;
    /* 0xEC*/ u32 slot59;
    /* 0xF0*/ u32 slot60;
    /* 0xF4*/ u32 slot61;
    /* 0xF8*/ u32 slot62;
    /* 0xFC*/ u32 slot63;
    /* 0x100*/ u32 slot64;
} tongueSlot;


typedef struct tongue { // at 80169268 (for p1 at least lol)
    /* 0x00 */ u32 vaulting; //0x00 = no, 0x01 = yes
    /* 0x04 */ u32 tongueMode; //enum of tongue actions
    /* 0x08 */ s32 segments;
    /* 0x0C */ s32 poleSegmentAt;
    /* 0x10 */ u32 timer;
    /* 0x14 */ s32 cameraSegmentAt;//where to point the camera
    /* 0x18 */ TonguePos tongueXs;//all (including the rope model) positions
    // + 80
    /* 0x98 */ f32 xpos33;//the last piece is special to the positions and angle
    /* 0x9C */ TonguePos tongueYs;
    // + 80
    /* 0x11C*/ f32 ypos33;
    /* 0x120*/ TonguePos tongueZs;
    // + 80
    /* 0x1A0*/ f32 zpos33;
    /* 0x1A4*/ TonguePos tongueAngles;
    // + 80
    /* 0x224*/ f32 anglepos33;
    /* 0x228*/ TonguePos tongueForwards;//????? why
    // + 80
    /* 0x2A8*/ TonguePos tongueHalfX;// idk what this or the other one is doing but they are axiis so
    // + 80
    /* 0x328*/ TonguePos tongueHalfZ;
    // + 80
    /* 0x3A8*/ f32 controlAngle;
    /* 0x3AC*/ f32 length;
    /* 0x3B0*/ f32 trueAngle;
    /* 0x3B4*/ tongueSlot onTongue;
    // + 100
    /* 0x4B4*/ u32 amountTnTongue;
    /* 0x4B8*/ tongueSlot inMouth;
    // + 100
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
} tongue;


//camera 0x8016AA98
//camera copy 0x801768A0
typedef struct camera{//take these with a grain of salt
    /* 0x00 */ s32 unk0;
    /* 0x04 */ Vec3f f1;
    /* 0x10 */ Vec3f f2;
    /* 0x1C */ Vec3f f3;
    /* 0x28 */ Vec3f f4;
    /* 0x34 */ Vec3f f5;
    /* 0x40 */ s32 unk40;
    /* 0x44 */ f32 size1;
    /* 0x48 */ f32 size2;
    /* 0x4C */ u32 untouchedTimer; //timer that incs when the camera hasnt been used
    /* 0x50 */ f32 unk50;
    /* 0x54 */ s32 pushHoriz;//the impulse horizontally by the player

    /* 0x58 */ f32 unk58;
    /* 0x5C */ f32 unk5C;
    /* 0x60 */ f32 unk60;
    /* 0x64 */ f32 unk64;
    /* 0x68 */ f32 unk68;
    /* 0x6C */ f32 unk6C;
    /* 0x70 */ f32 unk70;

    /* 0x74 */ s32 unk74;

    /* 0x78 */ f32 unk78;
    /* 0x7C */ f32 unk7C;
    /* 0x80 */ f32 unk80;
    /* 0x84 */ f32 unk84;
    /* 0x88 */ f32 unk88;
    /* 0x8C */ f32 unk8C;
    /* 0x90 */ f32 unk90;
    /* 0x94 */ f32 unk94;
    /* 0x98 */ f32 unk98;
    /* 0x9C */ f32 unk9C;
    /* 0xA0 */ f32 unkA0;
    /* 0xA8 */ f32 unkA8;
    /* 0xAC */ f32 unkAC;
    /* 0xB0 */ f32 unkB0;
    /* 0xB4 */ f32 unkB4;

    /* 0xB8 */ s32 unkB8;

    /* 0xBC */ f32 unkBC;
    /* 0xC0 */ f32 unkC0;

    /* 0xC4 */ s32 unkC4;

    /* 0xC8 */ f32 unkC8;
    /* 0xCC */ f32 unkCC;
    /* 0xD0 */ f32 unkD0;
    /* 0xD4 */ f32 unkD4;
    /* 0xD8 */ f32 unkD8;
    /* 0xDC */ f32 unkDC;
    /* 0xE0 */ f32 unkE0;
    /* 0xE4 */ f32 unkE4;
    /* 0xE8 */ f32 unkE8;

    /* 0xEC */ s32 unkEC;

    /* 0xF0 */ f32 unkF0;
    /* 0xF4 */ f32 unkF4;
    /* 0xF8 */ f32 unkF8;
    /* 0xFC */ f32 unkFC;
    /* 0x100*/ f32 unk100;
    /* 0x104*/ f32 unk104;
    /* 0x108*/ f32 unk108;
    /* 0x10C*/ f32 unk10C;
    /* 0x110*/ f32 unk110;
    /* 0x114*/ f32 unk114;
    /* 0x118*/ f32 unk118;
    /* 0x11C*/ f32 unk11C;
    /* 0x120*/ f32 unk120;
    /* 0x124*/ f32 unk124;
    /* 0x128*/ f32 unk128;
    /* 0x12C*/ f32 unk12C;
    /* 0x130*/ f32 unk130;
    /* 0x134*/ f32 unk134;
    /* 0x138*/ f32 unk138;
    /* 0x13C*/ f32 unk13C;
    /* 0x140*/ f32 unk140;
    /* 0x144*/ f32 unk144;
    /* 0x148*/ f32 unk148;
    /* 0x14C*/ f32 unk14C;
    /* 0x150*/ f32 unk150;
    /* 0x154*/ f32 unk154;
    /* 0x158*/ f32 unk158;
    /* 0x15C*/ f32 unk15C;

    /* 0x160*/ s32 unk160;

    /* 0x164*/ f32 unk164;
    /* 0x168*/ f32 unk168;
    /* 0x16C*/ f32 unk16C;
    /* 0x170*/ f32 unk170;
    /* 0x174*/ f32 unk174;
    /* 0x178*/ f32 unk178;
    /* 0x17C*/ f32 unk17C;
    /* 0x180*/ f32 unk180;
    /* 0x184*/ f32 unk184;
    /* 0x188*/ f32 unk188;
    /* 0x18C*/ f32 unk18C;
    /* 0x190*/ f32 unk190;
    /* 0x194*/ f32 unk194;
    /* 0x198*/ f32 unk198;
    /* 0x19C*/ f32 unk19C;
    /* 0x1A0*/ f32 unk1A0;
    /* 0x1A4*/ f32 unk1A4;
    /* 0x1A8*/ f32 unk1A8;
    /* 0x1AC*/ f32 unk1AC;
    /* 0x1B0*/ f32 unk1B0;
    /* 0x1B4*/ f32 unk1B4;
    /* 0x1B8*/ f32 unk1B8;
    /* 0x1BC*/ f32 unk1BC;
    /* 0x1C0*/ f32 unk1C0;
    /* 0x1C4*/ f32 unk1C4;
    /* 0x1C8*/ f32 unk1C8;
    /* 0x1CC*/ f32 unk1CC;
    /* 0x1D0*/ f32 unk1D0;
}camera;//size 0x1D0



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
    /* 0x008 */ s32 actorState;//enum, 0 == idle, 1 == on tongue, 2 == in mouth, 3 == spit
    /* 0x00C */ s32 posOnTongue;//the segment iirc
    /* 0x010 */ s32 globalTimer;
    /* 0x014 */ s32 touched; //0 == false. 1 == true.
    /* 0x018 */ s32 hit; //triggered when hit
    /* 0x01C */ s32 tongueBumpSeg; //the segment at which the tongue twas bumped back
    /* 0x020 */ s32 eaten;//0 == false. 1 == true. does not reset.
    /* 0x024 */ f32 posX; //i WISH i could make these a Vec3f/Vec4f but it FAILS THE CHECKSUM GOD
    /* 0x028 */ f32 posY;
    /* 0x02C */ f32 posZ;
    /* 0x030 */ f32 direction;
    /* 0x034 */ f32 yVelocity;
    /* 0x038 */ f32 unk_38;// i genuinely have no idea. like, it SEEMS like its forward impulse, but it isnt used to
    //dictate literally anything. what the FUCK is this
    /* 0x03C */ f32 tScale;
    /* 0x040 */ f32 tYPos;
    /* 0x044 */ f32 tXOffset;
    /* 0x048 */ f32 tYOffset;
    /* 0x04C */ f32 tZOffset;
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

typedef struct unk_8002F960{
    char unk00[0x608];
    u32 unk608;


}unk_8002F960;

typedef struct huh{
    s32 unk0;
    s32 unk4;
}huh;


typedef struct arg{
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    s16 unk8;
    s16 unkA;
    f32 unkC;
}arg;



typedef struct arb{
    s32 unk0;
    s8 unk4;
    s8 unk5;
    s8 unk6;
    s8 unk7;
    s32 unk8;
    f32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    s32 unk30;
    s32 unk34;
    s32 unk38;
    s32 unk3C;
    s32 unk40;
    s32 unk44;
    s32 unk48;
    s32 unk4C;
}arb;

typedef struct aaaaa{
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    f32 unk1C;
}aaaaa;

typedef struct aa2{
    f32 unk0;
    f32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    s32 unk30;
}aa2;

typedef struct aa1{
    s32 unk0;
    s8 unk4;
    s8 unk5;
    s8 unk6;
    s8 unk7;
    s32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    f32 unk24;
    s32 unk28;
    s32 unk2C;
    f32 unk30;
    s32 unk34;
    aa2* unk38;
}aa1;

//same ^ V ?

typedef struct unk_8007A25C{
    s32 unk0;
    s32 unk4;
    s32 unk8;
    //padding ^
    f32 unkC;
    f32 unk10;
    f32 unk14;
    f32 unk18;
    f32 unk1C;
    //padding V
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    //padding ^
    f32 unk30;
}unk_8007A25C;




typedef struct d8006266c{
    s32 unk0;
    s32 unk4;
    s32 unk8;
    f32 unkC;
}d8006266c;

typedef struct argd8006266c{
    char unk0[0x38];
    d8006266c* unk38;
    
}argd8006266c;

typedef struct bf8{
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    s16 unk8;
}bf8;


typedef struct what{
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
}what;

typedef struct unkStruct {
/* 0x00 */ s32 unk_00;
/* 0x04 */ char unk_04[0x104];
} unkStruct;

typedef struct unk_func_800A1F3C {
    char unk_00[0x28];
} unk_func_800A1F3C;

typedef struct func_800AE8E4Compare{
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
}func_800AE8E4Compare;

typedef struct unkStruct_80175620 {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ void* unk_04; //unknown pointer type
} unkStruct_80175620;

typedef struct unk0 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ s16 unk20;
    /* 0x22 */ s16 unk22;                           /* inferred */
    /* 0x24 */ u8 unk24;                            /* inferred */
    /* 0x25 */ char pad25[0xD];                     /* maybe part of unk24[0xE]? */
    /* 0x32 */ s16 unk32;                           /* inferred */
    /* 0x34 */ char pad34[4];                       /* maybe part of unk32[3]? */
    /* 0x38 */ f32 unk38;                           /* inferred */
    /* 0x3C */ u8 unk3C;                            /* inferred */
    /* 0x3D */ u8 unk3D;                            /* inferred */
    /* 0x3E */ char pad3E[2];                       /* maybe part of unk3D[3]? */
    /* 0x40 */ s16 unk40;
    /* 0x42 */ s16 unk42;
    /* 0x44 */ s8 unk44;                            /* inferred */
    /* 0x45 */ char pad45[3];                       /* maybe part of unk44[4]? */
    /* 0x48 */ s32 unk48;                           /* inferred */
    /* 0x4C */ s32 unk4C;                           /* inferred */
    /* 0x50 */ struct unk0* unk50;
    /* 0x54 */ char pad54[4];
} unk0; 

#endif
