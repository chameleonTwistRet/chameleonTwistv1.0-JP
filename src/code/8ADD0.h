#ifndef _8ADD0_H_
#define _8ADD0_H_

#include "common.h"

/* Structs */
typedef struct temp_func_800B2AB4 {
    char unk0[0x4];
    s32 unk4;
} temp_func_800B2AB4;

typedef struct unk801B3178 {
    char unk_00[0x18];
    s32 unk_18;
} unk801B3178;

typedef struct unk8020D908 {
    s32 unk_00;
    char unk_04[0x54];
} unk8020D908;

typedef struct newStruct {
    s32 dummy0[10]; // Placeholder for the first 10 elements
    f32 field1;
    f32 field2;
} newStruct;

typedef struct unkStruct20 {
    char unk_00[0x25];
    s8 unk25;
    char unk_26[2];
} unkStruct20;

typedef struct unkStructGlobal1 {
    char unk_00[0xAC];
    s32 unkAC;
    s32 unkB0;
    s32 unkB4;
    s32 unkB8;
} unkStructGlobal1;

/* Functions */
void func_800BE2A4(s32);
void func_800BE370(s32);
void func_800BF268(s32);
void func_800BF524(s32);
s32 func_800C1550(void);
s32* func_800B3424(s32);
void func_800B5C60(tempStruct*);
void func_800C2670(s32, PlayerActor*, s32);
s32* func_800B3484(s32);
void func_800314E4(Actor*);
void func_800B35B0(s32);
void func_800B255C(Vec3f*, Vec3f, Collider*);
void func_800C2A00(void);
void func_800CFDC8(PlayerActor*);
s32 func_800B4A3C(unkItemStruct*);
void func_800BE474(Tongue*);
s32 IsPickup(Actor*);
void pickup_collide_func(s32);
void func_800B5D68(Collider*, s32);
s32 IsNotPickup(Actor* actor);
s32 func_800B07E4(void);
void func_800B5D68(Collider*, s32);  
void func_800B2E40(unkSpriteStruct5*);
void EraseRoomItem(s32);
void func_800C1204(s32, PlayerActor*, s32, s32, s32); 
void func_800C3DCC(Camera*, Vec3f, Vec3f, f32);
void func_800D69D0(s32, PlayerActor*, Tongue*, Camera*, Vec3f*, Vec3f*, s32);
void func_800D3854(PlayerActor*, Tongue*, Camera*, Vec3f*, Vec3f*, s32);


/* Ext Variables */
extern PlayerActor gPlayerActors[4];
extern unkStruct07 D_802019A8[];
extern Collision gZoneCollisions[];
extern CardinalDirection gCardinalDirections[5]; // including "NO_DIR"
extern s32 sBossIDs[6];
extern unk801B3178* D_801B3178;
extern unk8020D908 D_8020D908;
extern unkStruct20 D_802039B8[];
extern s32 D_80206CF4;
extern unkSpriteStruct5* D_80240898;
extern f32 D_8010FB50;
//extern s32 D_80168DFC;
//extern s32 D_80168E14;
extern s32 D_802065B8[];
extern s32 D_80206958[];
extern s32 D_802039B4;


#endif // _8ADD0_H_
