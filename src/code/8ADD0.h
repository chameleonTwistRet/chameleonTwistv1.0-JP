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
s32 CountShotActors(void);
s32 func_800B07E4(void);
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
void func_800B3698(PlayerActor*);
void ResetStageModels(void);
s32 IsRoomObjInvalid(RoomObject* obj);
s32 GetRoomObjCount(RoomObject* obj);
s32 IsRoomActInvalid(RoomActor* actor);
s32 GetRoomActCount(RoomActor* actor);
s32 IsCollectableInvalid(Collectable* clct);
s32 GetCollectableCount(Collectable* clct);
s32 IsRoomInvalid(RoomSettings* room);
s32 GetRoomCount(RoomSettings* room);
s32 IsSpriteActInvalid(SpriteActor* sprite);
s32 GetSpriteActCount(SpriteActor* arg0);
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
void checkRoomItem(s32);
void EraseRoomItem(s32);
void func_800B4F14(s32, f32*, f32*, f32*);
void func_800B4FCC(void);
void func_800B5314(void);
void func_800B5600(void);
void func_800B560C(s32 arg0);
void func_800B5640(void);
void func_800B56D4(f32 arg0, f32 arg1);
void func_800B56E8(void);
s32 func_800B5878(Rect3D* arg0);
s32 func_800B5908(Collider* collider, f32 yMod);
void func_800B5A98(Collider*, RoomObject*);
void func_800B5C60(tempStruct*);
void func_800B5D68(Collider*, s32);
void func_800B602C(Collider* arg0, s32 arg1);
void func_800B6040(Collider* arg0);
void func_800B6054(Collider* arg0, RoomObject* arg1);
void func_800B6078(Collider* arg0);
void func_800B6098(Collider* arg0, RoomObject* arg1);
void func_800B61FC(Collider* arg0);
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
void func_800C0B74(void);
void func_800C0CDC(PlayerActor* arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_800C0E78(s32 arg0);
void CheckDoor(PlayerActor*);
void func_800C1204(s32, PlayerActor*, s32, s32, s32); 
void func_800C1458(s32 arg0);
void func_800C1510(s32 arg0, s32 arg1);
s32 func_800C1550(s32 arg0);
void func_800C15AC(RoomSettings* arg0, s32 arg1);
void InitFieldSubScroll(s32, Collision*, s32, s32);
void func_800C198C(s32, Collision*);
void func_800C1B70(void);
void func_800C1C64(s32 arg0);
void func_800C1CE0(PlayerActor*);
void func_800C2670(s32, PlayerActor*, s32);
void func_800C2A00(void);
void func_800C2C34(void);
void enterBossRoom(void);
void func_800C38E0(SpriteActor*);
s32 func_800C3958(s32, s32*, s32, Collider*);
s32 func_800C3B50(s32 arg0, s32 arg1);
void func_800C3DCC(Camera* camera, Vec3f arg1, Vec3f arg4, f32 arg7);
void func_800C3E94(PlayerActor* arg0, Tongue* arg1, Camera* arg2, f32 arg3, f32 arg4);
void func_800C4040(PlayerActor* arg0, Tongue* arg1, Camera* arg2, f32 arg3, f32 arg4);
void func_800C43AC(PlayerActor* arg0, Tongue* arg1, Camera* arg2, f32 arg3, f32 arg4, f32 arg5);
void func_800C4594(PlayerActor* arg0, Tongue* arg1, Camera* arg2, f32 arg3, f32 arg4, f32 arg5);
void func_800C48B8(Vec3f arg0, Vec3f arg3, Vec3f arg6, Vec3f arg9, f32 argC, s32 zero);
void func_800C4968(Vec3f arg0, Vec3f arg3, f32 arg6, f32 arg7, f32 arg8);
void func_800C4B1C(Camera* arg0, f32 arg1);
void func_800C4C48(Vec3f arg0, f32 arg3, f32 arg4, f32 arg5, f32 arg6);
void func_800C4CAC(Camera* arg0, f32 arg1);
void func_800C4DF8(Vec3w arg0, Vec3w arg3, Vec3f arg6, Vec3f arg9, f32 argC, u32 argD);
void func_800C5304(Camera* camera, f32 weight);
void func_800C54F8(Vec2w* arg0, s32* arg1);
void func_800C5508(PlayerActor* player);
void func_800C5538(PlayerActor* arg0);
void func_800C5564(PlayerActor* arg0);
void Player_SetFromBoss(PlayerActor* player, f32 distance);
void func_800C88AC(void);
void func_800C88D0(void);
void func_800CFDC8(PlayerActor*);
void pickup_collide_func(s32);
void func_800D69D0(s32, PlayerActor*, Tongue*, Camera*, Vec3f*, Vec3f*, s32);
void func_800D3854(PlayerActor*, Tongue*, Camera*, Vec3f*, Vec3f*, s32);

/* Ext Variables */
extern collectableWrapper D_802019A8[];
extern CardinalDirection gCardinalDirections[5]; // including "NO_DIR"
extern s32 sBossIDs[6];
extern unk801B3178* D_801B3178;
extern unk8020D908 D_8020D908;
extern unkStruct20 D_802039B8[];
extern s32 D_80206CF4;
extern Collider* D_80240898;
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
extern Vec3f D_8020A298;
extern Vec3f D_8020D2A8;
extern Vec3f D_8020D5B8;
extern Vec3f D_8020D848;
extern f32 D_8020D858;
extern Door* D_80240C98[];
extern s32 gSwitchAreaCount;
extern Vec3f D_8020D868;
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
extern s32 D_80236970;
s32 func_80083F18(SpriteActor*);                      /* extern */
s32 func_800AF604(f32, f32, f32, f32);              /* extern */

void func_800B5224(f32, s32*, s32*);                   /* extern */
void func_800BE714(void);                                  /* extern */
extern s32 Battle_Stage;
extern f32 D_80202510;
extern f32 D_80202514;
extern f32 D_80202518;
extern s32 D_8020251C;
extern s32 D_80202520;
extern s32 D_80202524;
extern s32 D_80202528;
extern s32 D_8020252C;

typedef struct colliderFuncStruct{
    void (*function)(Collider*);
    s32 id;
    void (*function2)(Collider*, RoomObject*);
}colliderFuncStruct;
extern colliderFuncStruct D_8010889C[];
extern s32 D_801749A0;

void func_800B4574(u8*, s16*);                         /* extern */
void func_800C1BF0(s32);                          /* extern */
s32 func_800C250C(PlayerActor*);                    /* extern */


extern u8 D_802023B0;
extern s16 D_802023D8;
extern s32 D_8020D8A4;
extern f32 D_8020D8DC;
extern f32 D_8020D8E0;
extern f32 D_8020D8E4;
extern s32 D_8020D960;
extern s32 D_8020D964;
extern s32 gNextZone;
extern s32 isFirstZone;

s32 func_800B47DC(s32);                             /* extern */
void func_800B4884(RoomSettings*);                     /* extern */
void func_800BE7F0(void);                                  /* extern */
extern RoomSettings* D_802478F0;
extern s32 D_80247904;

extern Vec3f D_80201930;
extern Vec3f D_80201950;

extern f32 D_80201900;
extern f32 D_80201904;
extern f32 D_8020190C;
extern f32 D_80201914;
extern f32 D_8020191C;
extern f32 D_80201924;
extern f32 D_80201960;

#endif // _8ADD0_H_
