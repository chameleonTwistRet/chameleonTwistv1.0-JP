#ifndef _8ADD0_H_
#define _8ADD0_H_

#include "common.h"

/* Structs */
typedef struct unk801B3178 {
    /* 0x00 */ char pad0[8];
    /* 0x08 */ s32 unk8;                            /* inferred */
    /* 0x0C */ char padC[4];
    /* 0x10 */ s32 unk10;                           /* inferred */
    /* 0x14 */ char pad14[4];
    /* 0x18 */ s32 unk_18;
} unk801B3178;                                      /* size = 0x1C */

typedef struct unk8020D908 {
    s32 unk_00;
    char unk_04[0x54];
} unk8020D908;

typedef struct unkStruct20 {
    char unk_00[0x25];
    s8 unk25;
    char unk_26[2];
} unkStruct20;

/* Functions */
void func_800AF9D0(Collider* arg0, RoomObject* arg1);
void func_800AFB2C(Collider* arg0, s32 arg1);
void func_800B06B0(Collider* arg0);
s32 CountShotActors(void);
s32 func_800B07E4(void);
void func_800B088C(Collider* arg0, RoomObject* arg1);
void func_800B08C8(Collider* arg0);
void func_800B09C0(Collider* arg0, RoomObject* arg1);
void func_800B09E8(Collider* arg0, RoomObject* arg1);
void func_800B0A30(Collider* arg0, RoomObject* arg1);
void func_800B0AA4(Collider* collider);
void RegistShutter(Collider* arg0, RoomObject* arg1);
void func_800B1DA0(Collider* arg0, s32 arg1);
void func_800B2070(s32 arg0);
void func_800B2144(Collider* arg0, unkStruct14* arg1);
void func_800B216C(Collider* arg0);
void func_800B21CC(s32 arg0, s32 arg1);
void LimitInt(s32* integer, s32 a, s32 b);
void LimitFloat(f32* _float, f32 a, f32 b);
s32 IsNotPickup(Actor* actor);
s32 IsPickup(Actor* actor);
s32 IsBossID(s32 id);
s32 IsActorBoss(Actor* actor);
f32 func_800B2308(f32 arg0, s32 caseNum);
Vec3f* func_800B2470(Vec3f* vecA, Vec3f vecB, Vec3f vecC, f32 a, s32 b);
s32 func_800B2510(void);
void func_800B255C(Vec3f*, Vec3f, Collider*);
Vec3f* func_800B2AB4(Vec3f* arg0, Vec3f arg1, s32* arg4);
s32 func_800B2B50(s32 arg0, s32 arg1);
Vec3f* Vec3f_SetAtBossPos(Vec3f* arg0);
s32 IsBossPresent(void);
s32 IsBossStage(void);
s32 func_800B2D10(s32 arg0, s32* arg1);
void func_800B2D34(void);
void func_800B2E40(Collider*);
void func_800B3364(s32 arg0);
s32 IsntNegative(s32 value);
s32* func_800B3424(s32 arg0);
s32* func_800B3484(s32);
s32 func_800B3540(s32 arg0);
s32 func_800B3564(s32 arg0);
void func_800B35B0(s32 arg0);
void func_800B35FC(s32 arg0);
void func_800B3648(s32 arg0);
void ResetStageModels(void);
s32 func_800B3D38(RoomObject* obj);
s32 func_800B3D9C(RoomObject* obj);
s32 func_800B3DFC(unkSpriteStruct* sprite);
s32 func_800B3E1C(unkSpriteStruct* arg0);
s32 func_800B3E7C(unkSpriteStruct2* sprite);
s32 func_800B3E9C(unkSpriteStruct2* arg0);
s32 func_800B3EFC(unkSpriteStruct3* sprite);
s32 func_800B3F1C(unkSpriteStruct3* arg0);
s32 func_800B3F7C(unkSpriteStruct4* sprite);
s32 func_800B3F9C(unkSpriteStruct4* arg0);
s32 func_800B3FFC(Collider* arg0, s32 arg1);
void func_800B402C(Collider*, s32, s32);
void func_800B4070(Collider* arg0);
void func_800B40F4(unkSpriteStruct* arg0);
void func_800B40FC(void);
s32 StageCarrotAvailable(s32 stage);
void AddCarrot(s32 stage);
void func_800B4264(void);
s32 func_800B4A3C(Collectable*);
void setCrownPositionsForRoom(s32 arg0);
void EraseRoomItem(s32);
void func_800B4F14(s32, f32*, f32*, f32*);
void func_800B4FCC(void);
void func_800B5600(void);
void func_800B560C(s32 arg0);
void func_800B56D4(f32 arg0, f32 arg1);
s32 func_800B5878(Rect3D* arg0);
s32 func_800B5908(Collider* collider, f32 yMod);
void func_800B5A98(Collider*, RoomObject*);
void func_800B5C60(tempStruct*);
void func_800B5D68(Collider*, s32);
void func_800B602C(Collider* arg0, s32 arg1);
void func_800B6040(Collider* arg0);
void func_800B6054(Collider* arg0, s32 arg1);
void func_800B6078(Collider* arg0);
void func_800B6CD8(Collider* arg0, RoomObject* arg1);
void func_800B6D24(tempStruct* arg0);
void func_800BA2D0(Collider* arg0, RoomObject* arg1);
void func_800BA89C(Collider* arg0, RoomObject* arg1);
void func_800BA900(tempStruct* arg0);
void func_800BBC88(Collider* arg0, RoomObject* arg1);
void func_800BD608(tempStruct* arg0);
void func_800BDF2C(Collider* arg0, s32 arg1);
void func_800BE000(Collider* arg0);
void func_800BE24C(void);
void func_800BE2A4(s32 arg0);
void func_800BE2C0(void);
void func_800BE370(s32 arg0);
void func_800BE474(Tongue*);
void func_800BE550(Tongue* arg0);
void EraseToungeEatEnemy(Tongue* arg0);
void func_800BE664(PlayerActor * arg0);
void func_800BE7BC(void);
void EraseField(Collider*);
void func_800BF268(s32);
void RegistDoor(RoomObject* arg0, s32 arg1, s32 arg2);
void func_800BF4AC(Door*);
void func_800BF524(s32);
void func_800BF5A4(void);
void func_800BF5E8(RoomActor*);
void func_800BF84C(s32 collision);
const char* GetDirectionName(s32 arg0);
void ChameleonFromDoor(PlayerActor* player, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_800C0AEC(void);
void func_800C0CDC(PlayerActor* arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_800C0E78(s32 arg0);
void func_800C1204(s32, PlayerActor*, s32, s32, s32); 
void func_800C1458(s32 arg0);
s32 func_800C1550(s32 arg0);
void func_800C1510(s32 arg0, s32 arg1);
void InitFieldSubScroll(s32, Collision*, s32, s32);
void func_800C198C(s32, Collision*);
void func_800C1B70(void);
void func_800C1C64(s32 arg0);
void func_800C2670(s32, PlayerActor*, s32);
void func_800C2A00(void);
void enterBossRoom(void);
void func_800C3DCC(Camera* camera, Vec3f arg1, f32 arg4, f32 arg5, f32 arg6, f32 arg7);
void func_800C48B8(Vec3w arg0, Vec3w arg3, Vec3w arg6, Vec3w arg9, f32 argC);
void func_800C4C48(Vec3w arg0, f32 arg3, f32 arg4, f32 arg5, f32 arg6);
void func_800C54F8(Vec2w* arg0, s32* arg1);
void func_800C5508(PlayerActor* player);
void func_800C5538(PlayerActor* arg0);
void func_800C5564(PlayerActor* arg0);
void Player_SetFromBoss(PlayerActor* player, f32 distance);
void func_800C88AC(void);
void func_800C88D0(void);




/* Ext Variables */
extern collectableWrapper D_802019A8[];
extern CardinalDirection gCardinalDirections[5]; // including "NO_DIR"
extern s32 sBossIDs[6];
extern unk801B3178* D_801B3178;
extern unk8020D908 D_8020D908;
extern unkStruct20 D_802039B8[];
extern s32 D_80206CF4;
extern Collider* D_80240898;
extern f32 D_8010FB50;
//extern s32 D_80168DFC;
//extern s32 D_80168E14;
extern s32 D_802065B8[];
extern s32 D_80206958[];
extern s32 D_802039B4;
extern s32 D_802026A8;
extern Vec3f D_802032B0[];
extern s32 D_80202530[32];
extern s32 D_80206CF8[];
extern s32 D_80206D78[];
extern f32 D_80174994;
extern Vec3w D_8020A298;
extern Vec3w D_8020D2A8;
extern Vec3w D_8020D5B8;
extern Vec3w D_8020D848;
extern f32 D_8020D858;
extern Door* D_80240C98[];
extern s32 gSwitchAreaCount;
extern Vec3w D_8020D868;
extern f32 D_8020D874;
extern f32 D_8020D878;
extern f32 D_8020D87C;
extern f32 D_8020D880;
extern s32 D_80236978;
extern s32 D_802478E0;
extern Rect3D D_802026B0;
extern f32 D_80201908;
extern f32 D_80201910;
extern f32 D_80201918;
extern f32 D_80201920;
extern Vec3f D_80201940;
extern s32 D_80201964;
extern s32 D_80201970;
extern s32 D_80201974;
extern s32 D_80201978;
extern s32 D_8020197C;
extern u32 D_80201980;
extern s32 D_80201984;
extern s32 D_80201988;
extern s32 D_8020198C;
extern s32 D_80201990;
extern s32 D_80201998;
extern f32 D_8020199C;
extern s32 D_802019A0;
extern s32 D_802023AC;
extern s32 D_802023D4;
extern s32 D_802025B4;
extern Collider* D_802025B8[];

#endif // _8ADD0_H_
