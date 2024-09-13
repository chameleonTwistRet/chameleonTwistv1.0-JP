#include "8ADD0.h"
//bss
/*f32 D_80201900;
f32 D_80201904;
f32 D_8020190C;

f32 D_80201914;
f32 D_8020191C;
f32 D_80201924;

Vec3f D_80201930;

Vec3f D_80201950;

f32 D_80201960;*/

extern CardinalDirection gCardinalDirections[5];

typedef struct UnkFunctionStructs {
    s32 id;
    void* func1;
    void* func2;
} UnkFunctionStructs;

typedef struct UnkData {
    s32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
} UnkData;


s32 D_801087A0[] = {0, 1, 2, 3, 4, 5, 6, 7};
s32 sBossIDs[] = {0x4B, 7, 0x13, 0x1E, 0x26, 0x3D};
Vec3w D_801087D8[] = {{0, 3, 0}, {1, 0xC, 2}, {2, 0x30, 4}, {3, 0x40, 6}, {4, 0x80, 7}};
s32 D_80108814 = 0; //?
s32 D_80108818 = 0;
f32 D_8010881C = 1.0f;
f32 D_80108820 = 1.0f;
s32 D_80108824[] = {-1, 0x30, 0x32, 0x34, 0x36};
s32 D_80108838[] = {-1, 0x31, 0x33, 0x35, 0x37};
s32 D_8010884C[] = {2, 5, 8, 0xB, 0xE, 0x11, 0x14, 0x17};
s32 D_8010886C[] = {-1, 0x30, 0x32, 0x34, 0x36};
s32 D_80108880[] = {-1, 0x31, 0x33, 0x35, 0x37};

UnkFunctionStructs D_80108894[] = {
{0x00000000, func_800B6054, func_800B6078},
{0x00000001, func_800B6054, func_800B6078},
{0x00000002, func_800B6054, func_800B6078},
{0x00000003, func_800B6054, func_800B6078},
{0x00000004, func_800B6054, func_800B6078},
{0x00000005, func_800B6098, func_800B61FC},
{0x00000006, func_800B67D8, func_800B691C},
{0x00000007, func_800B6B14, func_800B6078},
{0x00000008, func_800B6B4C, func_800B6C34},
{0x00000009, func_800B6CD8, func_800B6D24},
{0x0000000A, func_800B6D44, func_800B6DF4},
{0x0000000B, func_800B7208, func_800B7328},
{0x0000000C, func_800B7860, func_800B78F8},
{0x0000000D, func_800B81B4, func_800B81FC},
{0x0000000E, func_800B8634, func_800B87A0},
{0x0000000F, func_800B9298, func_800B9390},
{0x00000010, func_800B942C, func_800B9514},
{0x00000011, func_800B9750, func_800B97F0},
{0x00000012, func_800B9E8C, func_800B9FA8},
{0x00000013, func_800BA2D0, func_800BA35C},
{0x00000014, func_800BA89C, func_800BA900},
{0x00000015, func_800BA89C, func_800BA900},
{0x00000016, func_800BA89C, func_800BA900},
{0x00000017, func_800BA92C, func_800BAA28},
{0x00000018, func_800B6054, func_800B6078},
{0x00000019, func_800BB038, func_800BB178},
{0x0000001A, func_800BB254, func_800BB5DC},
{0x0000001B, func_800BB988, func_800BBA80},
{0x0000001C, func_800BBC88, func_800BBCE4},
{0x0000001D, func_800BBF80, func_800BC284},
{0x0000001E, func_800BCC04, func_800BCD10},
{0x0000001F, func_800BD1EC, func_800BD2AC},
{0x00000020, func_800BD55C, func_800BD608},
{0x00000021, func_800B6054, func_800B6078},
{0x00000022, func_800BD718, func_800BD938},
{0x00000023, func_800BDF2C, func_800BE000},
{0x00000024, func_800BE0D4, func_800BE1C4},
{0x00000025, func_800B6054, func_800B6078},
};

UnkData D_80108A5C[] = {
    {0, 1.0f, 0.0f, 0.0f},
    {25, 1.0f, 0.0f, 0.0f},
    {0, 1.0f, 0.0f, 0.0f},
    {0, 1.0f, 0.0f, 0.0f},
    {0, 1.0f, 0.0f, 0.0f},
    {48, 1.0f, 0.0f, 0.0f},
    {0, 1.0f, 0.0f, 0.0f},
    {0, 1.0f, 0.0f, 0.0f},
    {0, 1.0f, 0.0f, 0.0f}
};

void func_800AF9D0(Collider* arg0, RoomObject* arg1) {
    arg0->unk_5C = 2;
    D_80201910 = 0.0f;
    D_80201920 = DEGREES_TO_RADIANS_PI(arg1->unk28);
    D_80201908 = 0.0f;
    D_80201918 = 0.0f;
    D_80201940.x = arg1->unk2C;
    D_80201940.y = arg1->unk30;
    D_80201940.z = arg1->unk34;
    D_80201964 = 0;
    D_80201970 = 50;
    D_80201974 = 10;
    D_80201978 = 1;
    D_8020197C = 3;
    D_80201980 = arg1->unk4C;
    D_80201984 = arg1->unk44;
    D_80201988 = arg1->unk48;
    D_8020198C = arg1->unk40;
    D_80201990 = 1000;
    D_80201998 = 0;
    D_8020199C = 0.5f;
    D_802019A0 = 1;
    D_802023AC = 0;
    func_800B402C(arg0, 0, 0);
    func_800B402C(arg0, 1, 2);
    func_800B402C(arg0, 2, 1);
    D_802023D4 = -1;
}

void func_800AFB2C(Collider* arg0, RoomObject* arg1) {
    arg0->unk_5C = 2;
    arg0->unkA4 = 0;
    func_800B402C(arg0, 0, 2);
    func_800B402C(arg0, 1, 2);
    func_800B402C(arg0, 2, 1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AFB88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/MoveTheater.s")

void func_800B06B0(Collider* arg0) {
    Vec3f coord;
    if ((D_80201964 == 1) && (arg0->unkC8 == 1) && (arg0->unk_110 < 0) && (arg0->unkA4 == 0)) {
        coord.x = arg0->unk_4C->sfxPos.x + arg0->unk_30.x;
        coord.y = arg0->unk_4C->sfxPos.y + arg0->unk_30.y;
        coord.z = arg0->unk_4C->sfxPos.z + arg0->unk_30.z;
        arg0->unkA4 = 1;
        func_8007633C(coord.x, coord.y, coord.z, CalculateAngleOfVector(-coord.x, coord.z));
    }
}

s32 CountShotActors(void) {
    Actor* actor;
    s32 count = 0;
    s32 i;

    for (i = 0, actor = gActors; i < MAX_ACTORS; i++, actor++) {
        // If the actor is a pickup:
        if (IsNotPickup(actor) == FALSE) {
            continue;
        }
        if (actor->actorState != 3) {
            continue;
        }
        count++;
    }
    return count;
}

s32 func_800B07E4(void) {
    s32 i;
    Actor* actor;
    s32 count = 0;

    for (i = 0, actor = gActors; i != ARRAY_COUNT(gActors); actor++, i++){
        if ((actor->actorID == WHITE_BOMB) && (actor->actorState == 0)) {
            count++;
        }
    }
    return count;
}

void func_800B088C(Collider* arg0, RoomObject* arg1) {
    arg0->unk_AC = arg1->keyframes.temp;
    arg0->unk_B0 = arg1->noKeyframes;
    arg0->unk_B4 = 0;
    arg0->unk_B8 = -1;
    func_800B35FC(arg0->unk_AC);
}

void func_800B08C8(Collider* arg0) {
    s32 shotActors;

    switch (arg0->unk_B4) {
    case 0:
        if (CountShotActors() == 1) {
            arg0->unk_B4 = 1;
            func_800B35B0(arg0->unk_AC);
        }
        break;
    case 1:
        shotActors = CountShotActors();
        if (shotActors >= 2) {
            arg0->unk_B4 = 3;
        }
        if (shotActors == 0) {
            arg0->unk_B4 = 2;
            arg0->unk_B8 = gTimer + 150;
            return;
        }
       break;
    case 2:
        if (func_800B07E4() == 0) {
            arg0->unk_B4 = 3;
            func_800B35B0(arg0->unk_B0);
        }
        if (arg0->unk_B8 < gTimer) {
            arg0->unk_B4 = 3;
        }
        break;
    
    case 3:
        break;
    }
}

void func_800B09C0(Collider* arg0, RoomObject* arg1) {
    func_800B56D4(arg1->unk28, arg1->unk2C);
}

void func_800B09E8(Collider* arg0, RoomObject* arg1) {
    arg0->unk_AC = arg1->keyframes.temp;    
    if (func_800B34D0(arg0->unk_AC) != 0) {
        arg0->unk_B0 = 0;
    } else {
        arg0->unk_B0 = 1;
    }
}

//inits black?
void func_800B0A30(Collider* arg0, RoomObject* arg1) {
    gPlayerActors[1].active = gPlayerActors[1].exists = 1;

    gSelectedCharacters[1] = CHARA_BLACK;
    arg0->unk_AC = 0;
    arg0->unk_B0 = arg1->keyframes.temp;
    if (func_800B34D0(arg0->unk_B0) != 0) {
        gPlayerActors[1].active = gPlayerActors[1].exists = 0;
        arg0->unk_AC = 2;
    }
}

void func_800B0AA4(Collider* collider) {
    switch (collider->unk_AC) {
    case 0:
        if (!gPlayerActors[1].exists) {
            func_800B4FCC();
            func_800B40FC();
            func_800B35B0(collider->unk_B0);
            collider->unk_AC = 2;
        }
    //why even have case 1 or 2 at that point?? nulled code???
    case 1:
    case 2:
        break;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B0B20.s")

//deals with "shutters"
//very literal. manages the grenade shutters in Bomb Land
void RegistShutter(Collider* arg0, RoomObject* arg1) {
    Collider* realCollider;
    Collider** colliderArray;
    s32 i;

    arg0->unk_8C = arg1->unk28;
    arg0->unk_AC = arg1->keyframes.temp;
    arg0->unk_B0 = arg1->noKeyframes;
    arg0->unk_B4 = arg1->unk40;
    arg0->unk_B8 = arg1->unk44;
    arg0->unk_BC = arg1->unk48;
    arg0->unk_C0 = arg1->unk4C;
    arg0->unkC4 = arg1->unk2C;
    D_802025B4 = 0;
    for (i = 0, colliderArray = &D_80240898;
        i < gFieldCount; i++, colliderArray++){
        realCollider = *colliderArray;
        if (realCollider->unk_10 == 28) {
            if (D_802025B4 >= 25) {
                DummiedPrintf3("Too Many Shutter\n");
            }
            D_802025B8[D_802025B4] = realCollider;
            D_802025B4++;
            realCollider->unk_98 = realCollider->unk_8C;
            realCollider->unk_9C = arg0->unk_8C + realCollider->unk_90;
            realCollider->unk_A0 = realCollider->unk_94;
            realCollider->unk_B4 = arg0->unk_B0;
            realCollider->unk_B8 = arg0->unk_B4;
            realCollider->unk_BC = arg0->unk_B8;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B118C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B12B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B1538.s")

void func_800B1DA0(Collider* arg0, s32 arg1) {
    func_800B5D68(arg0, 2);
    arg0->unk_8C = 0.0f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B1DD4.s")

#ifdef NON_MATCHING
// TODO: D_80168E14 migration

// Squish player if they are in the squish zone (given by coords not args)
void func_800B2070(s32 arg0) {
    PlayerActor* gPlayer = &gPlayerActors[0];       // Player One
    Rect3D rect;
    Vec3f vec;

    rect.min.x = -172.0f;
    rect.max.x = 100.0f;
    rect.min.y = -155.0f;
    rect.max.y = -145.0f;
    rect.min.z = 450.0f;
    rect.max.z = 1650.0f;
    vec.x = gPlayer->pos.x;
    vec.y = gPlayer->pos.y;
    vec.z = gPlayer->pos.z;
    
    // If the player is not in the bounding box, not squished, and not jumping, set the squish timer to 1
    if (((gPlayer->squishTimer == 0) && (gPlayer->canJump == 0)) && (IsPointInRect(vec, &rect) != 0)) {
        //D_80168E14 = 1;
        gPlayer->squishTimer = 1;
    }

    //(((gPlayerActors->squishTimer == 0) && (gPlayerActors->canJump == 0)) && (IsPointInRect(vec, &rect) != 0)) ? (gPlayerActors->squishTimer = 0) : (gPlayerActors->squishTimer = 1);
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B2070.s")
#endif

void func_800B2144(Collider* arg0, unkStruct14* arg1) {
    arg0->unk_AC = arg1->unk_38;
    func_800B35FC(arg0->unk_AC);
}

// If there are no billiards balls left, call func_800B35B0
void func_800B216C(Collider* arg0) {
    Actor* actorList;
    s32 ballCount = 0;
    s32 i;

    for (i = 0, actorList = gActors; i < ARRAY_COUNT(gActors); i++, actorList++) {
        if (actorList->actorID == BILLIARDS_BALL) {
            ballCount++;
        }
    }

    if (ballCount == 0) {
        func_800B35B0(arg0->unk_AC);
    }
}

void func_800B21CC(s32 arg0, s32 arg1) {
    func_800BE2C0();
}

// referred to in US1.0 as "feild.c - LimitInt"

/**
 * @brief Limits an integer to be in an inclusive range [a, b].
 *      
 * @param integer: The integer to limit.
 * @param a: The lower bound of the range.
 * @param b: The upper bound of the range.
 */
void LimitInt(s32* integer, s32 a, s32 b) {
    if (*integer < a) {
        *integer = a;
        return;
    }
    if (b < *integer) {
        *integer = b;
    }
}

/**
 * @brief Limits a float to be in an inclusive range [a, b].
 *      
 * @param _float: The float to limit.
 * @param a: The lower bound of the range.
 * @param b: The upper bound of the range.
 */
void LimitFloat(f32* _float, f32 a, f32 b) {
    if (*_float < a) {
        *_float = a;
        return;
    }
    if (b < *_float) {
        *_float = b;
    }
}

/**
 * @brief Checks if an actor is not a pickup.
 *      
 * @param actor: The actor to check.
 * 
 * @return: 1 if the actor is not a pickup, 0 otherwise.
 */
s32 IsNotPickup(Actor* actor) {
    return (actor->actorID != 0 && actor->actorID < R_HEART) ? 1 : 0;
}

/**
 * @brief Checks if an actor is a pickup.
 *      
 * @param actor: The actor to check.
 *      
 * @return: 1 if the actor is a pickup, 0 otherwise.
 */
s32 IsPickup(Actor* actor) {
    return (actor->actorID >= R_HEART ) ? 1 : 0;
}

/**
 * @brief Checks a given ID against the array of Boss IDs
 * 
 * @param id 
 * @return (s32) 1 if the ID is a Boss ID, 0 otherwise.
 */
s32 IsBossID(s32 id) {
    int i;
    int ret = 0;
    
    for (i = 0; i < ARRAY_COUNT(sBossIDs); i++) {
        if (id == sBossIDs[i]) {
            ret = 1;
            break;
        }
    }
    return ret;
}

/**
 * @brief Determines if an actor is a boss by checking its ID.
 * 
 * @param actor 
 * @return (s32) 1 if the actor is a boss, 0 otherwise. 
 */
s32 IsActorBoss(Actor* actor) {
    return IsBossID(actor->actorID);
}

f32 func_800B2308(f32 arg0, s32 caseNum) {
    f32 ret;

    switch (caseNum) {
    case 0:
        if (arg0 < 0.1) {
            ret = SQ(arg0) / 0.18;
        } else if (arg0 < 0.9) {
            ret = (arg0 * 0.2 - 0.01) / 0.18;
        } else {
            ret = 1.0 - (SQ(1.0 - arg0) / 0.18);
        }
        break;
    case 1:
        // Range(f) = [0, 1]
        ret = (1.0 - cosf(arg0 * PI)) * 0.5;
        break;
    case 2:
        ret = arg0;
        break;
    case 3:
        ret = SQ(arg0);
        break;
    case 4:
        ret = (-arg0 * arg0) + (2.0 * arg0);
        break;
    default:
        ret = arg0;
        break;
    }
    return ret;
}

// lerp 2 vec3f's by a scalar computed by func_800B2308
Vec3f* func_800B2470(Vec3f* vecA, Vec3f vecB, Vec3f vecC, f32 a, s32 b) {
    f32 pad;
    Vec3f tempVec;
    
    Vec3f_Lerp(&tempVec, vecB, vecC, func_800B2308(a, b));
    *vecA = tempVec;
    return vecA;
}

s32 func_800B2510(void) {
    s32 ret = 0;
    s32 i;
    
    for (i = 0; i < ARRAY_COUNT(gPlayerActors); i++) {
        if (gPlayerActors[i].exists != 0 && gPlayerActors[i].power == 4) {
            ret = 1;
            break;
        }
    }
    return ret;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B255C.s")

Vec3f* func_800B2AB4(Vec3f* arg0, Vec3f arg1, s32* arg4) { //TODO: fix arg4 type
    Collider* temp = &D_80236980[arg4[1]];
    Vec3f sp20;

    func_800B255C(&sp20, arg1, temp);
    *arg0 = sp20;
    return arg0;
}

s32 func_800B2B50(s32 arg0, s32 arg1) {
    s32 ret = -1;
    s32 i;
    Collider** temp;
    Collider* temp2;

    for (i = 0, temp = &D_80240898; i < gFieldCount; i++, temp++) {
        temp2 = *temp;
        if ((arg0 == temp2->unk_04) && (arg1 == temp2->unk_08)) {
            ret = temp2->unk_00;
            break;
        }
        
    }
    return ret;
}

Vec3f* Vec3f_SetAtBossPos(Vec3f* arg0) {
    Actor* actors;
    s32 numActors;
    Vec3f pos;
    s32 i;

    Vec3f_Zero(&pos); // Call Vec3f_Zero with the passed in pointer

    actors = gActors;
    for (i = 0; i < ARRAY_COUNT(gActors); i++, actors++) {
        if (IsActorBoss(actors)) { // Check if the current actor is a boss
            //Set coordinates of pos to boss coordinates
            pos.x = actors->pos.x;
            pos.y = actors->pos.y;
            pos.z = actors->pos.z;
            break; // Break out of the loop since we found a boss actor
        }        
    }
    *arg0 = pos;
    return arg0;
}

/**
 * @brief If the boss is in the list of currently active actors.
 * 
 * @return (s32) 1 if the boss is in the list of currently active actors, 0 otherwise.
 */
s32 IsBossPresent(void) {
    s32 i;
    Actor* curActor;
    s32 isBoss = FALSE;
    
    for (i = 0, curActor = gActors; i < MAX_ACTORS; i++, curActor++) {
        if (IsActorBoss(curActor) != 0) {
            isBoss = TRUE;
            break;
        }
    }
    return isBoss;
}

/**
 * @brief Returns True if the current stage is a boss stage.
 * 
 * @return (s32) 1 if the current stage is a boss stage, 0 otherwise. 
 */
s32 IsBossStage(void) {
    s32 ret;
    
    if ((gCurrentStage != STAGE_JUNGLEBOSS) &&
        (gCurrentStage != STAGE_ANTBOSS) &&
        (gCurrentStage != STAGE_BOMBBOSS) &&
        (gCurrentStage != STAGE_DESERTBOSS) &&
        (gCurrentStage != STAGE_KIDSBOSS) &&
        (gCurrentStage != STAGE_GHOSTBOSS)) {
        ret = FALSE;
    } else {
        ret = TRUE;
    }
    return ret;
}

s32 func_800B2D10(s32 arg0, s32* arg1) {
    *arg1 = D_802065B8[arg0];
    return D_80206958[arg0];
}

void func_800B2D34(void) {
    unkStruct20* temp;
    s32 i;

    for (i = 0, temp = D_802039B8; i < D_80206CF4; i++, temp++) {
        temp->unk25 = 1;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B2D78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B2E40.s")

void func_800B3364(s32 arg0) {
    s32 i;
    Collider** temp_s0;
    Collider* unkSpritePtr;

    for (i = 0, temp_s0 = &D_80240898; i < gFieldCount; i++, temp_s0++) {
        unkSpritePtr = *temp_s0;
        unkSpritePtr->unk_E4 = 0;
        if ((arg0 == 1) || (func_800B3FFC(unkSpritePtr, 4) != 0)) {
            func_800B2E40(unkSpritePtr);
        }
    }
}

s32 IsntNegative(s32 value) {
    return ( value >= 0 ) ? 1 : 0;
}

s32* func_800B3424(s32 arg0) {
    s32 var_v0;
    if (arg0 & 0x100) {
        var_v0 = 1;
    } else {
        var_v0 = 0;
    }
    return (var_v0 != 0) ? &gZoneFields[(u8)arg0].unk68 : &StageFlags[(u8)arg0];
}

s32* func_800B3484(s32 arg0) {
    return ((arg0 & 0x100) ? 1 : 0) ? &D_80206D78[arg0 & 0xFF] : &D_80206CF8[arg0 & 0xFF];
}

s32 func_800B34D0(s32 arg0) {
    s32 temp_v1;
    s32 var_v0;
    s32 var_v1;

    temp_v1 = *func_800B3424(arg0);
    if (arg0 & 0x200) {
        var_v0 = 1;
    } else {
        var_v0 = 0;
    }
    if (var_v0 != 0) {
        if (temp_v1 == 0) {
            var_v1 = 1;
        } else {
            var_v1 = 0;
        }
    } else if (temp_v1 != 0) {
        var_v1 = 1;
    } else {
        var_v1 = 0;
    }
    return var_v1;
}

s32 func_800B3540(s32 arg0) {
    return 1 - func_800B34D0(arg0);
}

s32 func_800B3564(s32 arg0) {
    s32 sp1C;
    s32 var_v1;
    s32 var2;

    sp1C = *func_800B3424(arg0);
    var2 = *func_800B3484(arg0);
    if (sp1C != var2) {
        var_v1 = 1;
    } else {
        var_v1 = 0;
    }
    return var_v1;
}

void func_800B35B0(s32 arg0) {
    s32 sp1C;
    s32 var_v0;
    s32 var_v1;

    if (arg0 & 0x200) {
        var_v0 = 1;
    } else {
        var_v0 = 0;
    }
    
    if (var_v0 != 0) {
        sp1C = 0;
    } else {
        sp1C = 1;
    }
    *func_800B3424(arg0) = sp1C;
}

void func_800B35FC(s32 arg0) {
    s32 sp1C;
    s32 var_v0;
    s32 var_v1;

    if (arg0 & 0x200) {
        var_v0 = 1;
    } else {
        var_v0 = 0;
    }
    
    if (var_v0 != 0) {
        sp1C = 1;
    } else {
        sp1C = 0;
    }
    
    *func_800B3424(arg0) = sp1C;
}


void func_800B3648(s32 arg0) {
    s32 var = *func_800B3424(arg0);
    if (var == 0) {
        *func_800B3424(arg0) = 1;
        return;
    }
    *func_800B3424(arg0) = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B3698.s")

void ResetStageModels(void) {
    VertextBufferCount = 0;
    TriangleBufferCount = 0;
    ModelBufferCount = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/RegistModel.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/moveModel.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/ScaleModel.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/RotateModel.s")

/**
 * @brief This function returns a boolean value based on whether the RoomObject passed is valid.
 * 
 * @param obj: The RoomObject to check if valid.
 * @return true if the obj is invalid, false otherwise.
 */
s32 IsRoomObjInvalid(RoomObject* obj) {
    return obj->scale.x == 0.0 && obj->scale.y == 0.0 && obj->scale.z == 0.0 ? TRUE : FALSE;
}

/**
 * @brief This function returns a int value of how many RoomObjects are in an array.
 * 
 * @param obj: The RoomObject to start iterating from.
 * @return the amount of valid RoomObjects in the array.
 */
s32 GetRoomObjCount(RoomObject* obj) {
    s32 end;

    if (!obj) {
        return 0;
    }

    end = 0;

    while(IsRoomObjInvalid(obj) == FALSE){
        end++;
        obj++;
    }
    return end;
}

/**
 * @brief This function returns a boolean value based on whether the RoomActor passed is valid.
 * 
 * @param actor: The RoomActor to check if valid.
 * @return true if the actor is invalid, false otherwise.
 */
s32 IsRoomActInvalid(RoomActor* actor) {
    return (actor->id == 0) ? TRUE : FALSE;
}

/**
 * @brief This function returns a int value of how many RoomActors are in an array.
 * 
 * @param actor: The RoomActor to start iterating from.
 * @return the amount of valid RoomActors in the array.
 */
s32 GetRoomActCount(RoomActor* actor) {
    s32 i;
    if (actor == NULL) {
        return 0;
    }
    i = 0;
    while (IsRoomActInvalid(actor) == FALSE) {
        i++;
        actor++;
    }
    return i;
}

/**
 * @brief This function returns a boolean value based on whether the Collectable passed is valid.
 * 
 * @param collectable: The Collectable to check if valid.
 * @return true if the clct is invalid, false otherwise.
 */
s32 IsCollectableInvalid(Collectable* collectable) {
    return (collectable->id == 0) ? TRUE : FALSE;
}

/**
 * @brief This function returns a int value of how many Collectables are in an array.
 * 
 * @param collectable: The Collectable to start iterating from.
 * @return the amount of valid Collectables in the array.
 */
s32 GetCollectableCount(Collectable* collectable) {
    s32 i;

    if (collectable == NULL) {
        return 0;
    }

    i = 0;

    while (IsCollectableInvalid(collectable) == FALSE) {
        i++;
        collectable++;
    }

    return i;
}

/**
 * @brief This function returns a boolean value based on whether the RoomInstance passed is valid.
 * 
 * @param room: The RoomInstance to check if valid.
 * @return true if the room is invalid, false otherwise.
 */
s32 IsRoomInvalid(RoomInstance* room) {
    return (room->objects == NULL) ? TRUE : FALSE;
}

/**
 * @brief This function returns a int value of how many RoomInstance are in an array.
 * 
 * @param room: The RoomInstance to start iterating from.
 * @return the amount of valid RoomInstance in the array.
 */
s32 GetRoomCount(RoomInstance* room) {
    s32 i;

    if (room == NULL) {
        return 0;
    }

    i = 0;

    while (IsRoomInvalid(room) == FALSE) {
        i++;
        room++;
    }

    return i;
}

/**
 * @brief This function returns a boolean value based on whether the SpriteActor passed is valid.
 * 
 * @param sprite: The SpriteActor to check if valid.
 * @return true if the sprite is invalid, false otherwise.
 */
s32 IsSpriteActInvalid(SpriteActor* sprite) {
    return (sprite->size < 0) ? TRUE : FALSE;
}

/**
 * @brief This function returns a int value of how many SpriteActors are in an array.
 * 
 * @param sprite: The SpriteActor to start iterating from.
 * @return the amount of valid SpriteActors in the array.
 */
s32 GetSpriteActCount(SpriteActor* sprite) {
    s32 i;

    if (sprite == 0) {
        return 0;
    }

    i = 0;

    while (IsSpriteActInvalid(sprite) == FALSE) {
        i++;
        sprite++;
    }

    return i;
}

//TODO: fix this
s32 func_800B3FFC(Collider *arg0, s32 arg1) {
    Vec3w* new_var = &D_801087D8[arg1];
    int new_var2 = arg0->unk_14 & new_var->y;

    return new_var2 >> (*new_var).z;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B402C.s")

void func_800B4070(Collider* arg0) {
    s32 var_a2;

    if ((arg0->unk_4C != 0) && (func_800B3FFC(arg0->unk_4C, 4) == 1)) {
        var_a2 = 1;
    } else if (func_800B3FFC(arg0, 0) == 2 || func_800B3FFC(arg0, 2) == 2) {
        var_a2 = 1;
    } else {
        var_a2 = 0;
    }
    func_800B402C(arg0, 4, var_a2);
}

void func_800B40F4(unkSpriteStruct* arg0) {
    arg0->unk_14 = 0;
}

void func_800B40FC(void) {
    D_801B313D = 1;
    if (!(gGameRecords.flags[1] & 8)) {
        gGameRecords.flags[1] |= 8;
        SaveData_UpdateRecords();
    }
}

/**
 * @brief This function returns a boolean value based on whether the CARROT item is available in the stage passed in as an argument.
 * 
 * @param stage: The stage to check for the CARROT item. 
 * @return true if the CARROT item is available in the stage passed in as an argument, false otherwise.
 */
s32 StageCarrotAvailable(s32 stage) {
    if (stage > STAGE_GHOST) { //not a stage with a CARROT
        return FALSE;
    }
    if (gCarrotBitfield & (1 << stage)) { //CARROT already collected
        return FALSE;
    }
    return TRUE;
}

/**
 * @brief Adds a CARROT to the global bitfield and increments the total number of carrots collected.
 * 
 * @param stage: the index of the bitfield to add the CARROT to. 
 */
void AddCarrot(s32 stage) {
    s32 i;

    if (stage <= STAGE_GHOST) {
        gCarrotBitfield |= (1 << stage);        // add the bit corresponding to the stage
        gTotalCarrots = 0;                      // reset the counter

        // iterate through the bitfield and count the number of bits set
        for (i = 0; i < 6; i++) {
            if (gCarrotBitfield & (1 << i)) {
                gTotalCarrots++;
            }
        }        
    }
}

void func_800B4264(void) {
    CollectableWrapper* collectableWrapper;
    s32 ifJL = StageCarrotAvailable(gCurrentStage) != STAGE_JUNGLE ? 1 : 2;
    s32 i;

    for (i = 0,  collectableWrapper = D_802019A8; i != 0x80; i++, collectableWrapper++){
        if ((collectableWrapper->levelDataCollectable != NULL) && (collectableWrapper->levelDataCollectable->id == 0x64) && (ifJL != collectableWrapper->bitfield)) {
            collectableWrapper->bitfield = ifJL;
            if (ifJL == 2) {
                if (collectableWrapper->actorIndex >= 0) {
                    gActors[collectableWrapper->actorIndex].actorID = 0;
                    collectableWrapper->actorIndex = -1;
                }
            }
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B4408.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B4574.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B47DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B4884.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B4A3C.s")

void setCrownPositionsForRoom(s32 arg0) {
    s32 limit;
    s32 i;
    CollectableWrapper* var_s0;
    Collectable* new_var;
    
    limit = gZoneFields[arg0].clctCount;
    var_s0 = &D_802019A8[gZoneFields[arg0].unk78];
    
    for (i = 0; i < limit; i++, var_s0++) {
        new_var = var_s0->levelDataCollectable;
        if (var_s0->bitfield == 1) {
            var_s0->actorIndex = func_800B4A3C(new_var);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/checkRoomItem.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/EraseRoomItem.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B4F14.s")

void func_800B4FCC(void) {
    s32 i;
    
    for (i = 0; i < ARRAY_COUNT(gActors); i++) {
        if ((IsNotPickup(&gActors[i]) != 0) && (gActors[i].actorState == 0)) {
            func_800311C8(&gActors[i]);
            func_800313BC(i, Random(0, 0x168));
        }        
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B505C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B5224.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B5314.s")

void func_800B5600(void) {
    D_802025B0 = 0;
}

void func_800B560C(s32 arg0) {
    if (D_802025B0 < ARRAY_COUNT(D_80202530)) {
        D_80202530[D_802025B0++] = arg0;
    }
}

void func_800B5640() {
    s32 i;
    for (i = 0; i < D_802025B0; i++){
        EraseField(&D_80236980[D_80202530[i]]);
    }
}

void func_800B56D4(f32 arg0, f32 arg1) {
    D_8010881C = arg0;
    D_80108820 = arg1;
}

//find enemies in explosions' blast radius?
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B56E8.s")

s32 func_800B5878(Rect3D* arg0) {
    s32 flag = FALSE;
    Rect3D* rect;
    s32 i;

    for (i = 0, rect = &D_802026B0; i < D_802026A8; i++, rect++) {
        if (IfRectsIntersect(arg0, rect)) {
            flag = TRUE;
            break;
        }
    }
    return flag;
}

s32 func_800B5908(Collider* collider, f32 yMod) {
    s32 flag, i;
    Rect3D rect = collider->unk_CC;

    rect.min.y = rect.max.y;
    rect.max.y += yMod;
    flag = 0;

    for (i = 0; i < D_802026A8; i++) {
        if (IsPointInRect(D_802032B0[i], &rect) != 0) {
            flag = 1;
            break;
        }
    }
    return flag;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B59F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B5A98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B5C60.s")

void func_800B5D68(Collider* arg0, s32 arg1) {
    func_800B402C(arg0, 0, arg1);
    if (arg0->unk_5C != 0) {
        func_800B402C(arg0, 1, 1);
    } else {
        func_800B402C(arg0, 1, 0);
    }
    if (arg0->unk_50 != 1.0 || arg0->unk_54 != 1.0 || arg0->unk_58 != 1.0) {
        func_800B402C(arg0, 2, 1);
    } else {
        func_800B402C(arg0, 2, 0);
    }
}

void func_800B5E40(Collider* arg0, RoomObject* arg1) {
    func_800B402C(arg0, 0, 1);
    if (arg0->unk_5C != 0) {
        func_800B402C(arg0, 1, 1);
    } else {
        func_800B402C(arg0, 1, 0);
    }
    func_800B402C(arg0, 2, 2);
    arg0->unk_8C = arg1->unk28;
    arg0->unk_AC = arg1->keyframes.temp - 0x3C;
    arg0->unk_B0 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B5ED0.s")

void func_800B602C(Collider* arg0, s32 arg1) {
    arg0->unk_AC = arg1 - 60;
    arg0->unk_B0 = 1;
}

void func_800B6040(Collider* arg0) {
    arg0->unk_AC = 60;
    arg0->unk_B0 = 2;
}

void func_800B6054(Collider* arg0, RoomObject* arg1) {
    func_800B5D68(arg0, 1);
}

void func_800B6078(Collider* arg0) {
    Vec3f_Zero(&arg0->unk_3C);
}

void func_800B6098(Collider* arg0, RoomObject* arg1) {
    s32 b4;
    func_800B5D68(arg0, 2);
    arg0->unk_8C = arg0->unk_30.x;
    arg0->unk_90 = arg0->unk_30.y;
    arg0->unk_94 = arg0->unk_30.z;
    arg0->unk_98 = arg1->unk28;
    arg0->unk_9C = arg1->unk2C;
    arg0->unk_A0 = arg1->unk30;
    arg0->unk_AC = arg1->keyframes.temp;
    arg0->unk_B0 = arg1->noKeyframes;
    arg0->unk_B4 = arg1->unk40;
    arg0->unk_B8 = arg1->unk44;
    arg0->unk_BC = arg1->unk48;
    arg0->unk_C0 = arg1->unk4C;
    arg0->unkC4 = 0;
    arg0->unkC8 = 0;
    if (arg0->unk_AC < 0 && arg0->unk_B4 < 0) {
        arg0->unkC4 = arg0->unkC8 = StageFlags[arg0->unk10C];
        if (StageFlags[arg0->unk10C]) {
            arg0->unk_30.x = arg0->unk_98;
            arg0->unk_30.y = arg0->unk_9C;
            arg0->unk_30.z = arg0->unk_A0;
        }
    }
    if (IsBossStage()) {
        b4 = arg0->unk_B4;
        if (b4 < 0 && arg0->unk_B8 == 0 && D_802039B4 == 2) {
            arg0->unk_10 = 0;
            arg0->unk10C = -1;
            arg0->unk_110 = 0;
            arg0->unk_30.x = arg0->unk_98;
            arg0->unk_30.y = arg0->unk_9C;
            arg0->unk_30.z = arg0->unk_A0;
            func_800B5D68(arg0, 1);
            func_800B2E40(arg0);            
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B61FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B67D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B691C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B6B14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B6B4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B6C34.s")

void func_800B6CD8(Collider* arg0, RoomObject* arg1) {
    func_800B5D68(arg0, 1);
    arg0->unk_8C = arg1->unk28;
    arg0->unk_90 = arg1->unk2C;
    arg0->unk_94 = arg1->unk30;
}

void func_800B6D24(Collider* arg0) {
    Vec3f_Zero(&arg0->unk_3C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B6D44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B6DF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B7208.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B7328.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B7860.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B78F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B80A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B81B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B81FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B83D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B8634.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B87A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B9078.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B9298.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B9390.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B942C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B9514.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B9750.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B97F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B9E8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B9FA8.s")

void func_800BA2D0(Collider* arg0, RoomObject* arg1) {
    func_800B5D68(arg0, 2);
    arg0->unk_8C = arg0->unk_30.x;
    arg0->unk_90 = arg0->unk_30.y;
    arg0->unk_94 = arg0->unk_30.z;
    arg0->unk_98 = arg1->unk28;
    arg0->unk_9C = arg1->unk2C;
    arg0->unk_A0 = arg1->unk30;
    arg0->unkA4 = 0;
    arg0->unk_AC = arg1->keyframes.temp;
    arg0->unk_B0 = arg1->noKeyframes;
    arg0->unk_B4 = arg1->unk40;
    arg0->unk_B8 = 0;
    arg0->unk_BC = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BA35C.s")

void func_800BA89C(Collider* arg0, RoomObject* arg1) {
    func_800B5D68(arg0, 1);
    arg0->unk_8C = arg1->unk28;
    arg0->unk_90 = arg1->unk2C;
    arg0->unk_94 = arg1->unk30;
    arg0->unk_98 = arg1->unk34;
    func_800B5A98(arg0, arg1);
    arg0->unk_114 = 16;
}

void func_800BA900(Collider* arg0) {
    Vec3f_Zero(&arg0->unk_3C);
    func_800B5C60(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BA92C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BAA28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BAC44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BAFA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BB038.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BB178.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BB254.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BB354.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BB4A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BB5DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BB64C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BB988.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BBA80.s")

void func_800BBC88(Collider* arg0, RoomObject* arg1) {
    func_800B5D68(arg0, 2);
    arg0->unk_8C = arg0->unk_30.x;
    arg0->unk_90 = arg0->unk_30.y;
    arg0->unk_94 = arg0->unk_30.z;
    arg0->unkA4 = arg1->unk28;
    arg0->unk_AC = 0;
    arg0->unk_B0 = 0;
    arg0->unk_C0 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BBCE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BBF80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BC284.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BCC04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BCD10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BD1EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BD2AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BD55C.s")

void func_800BD608(Collider* arg0) {
    Vec3f_Zero(&arg0->unk_3C);
    func_800B5C60(arg0);
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BD634.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BD718.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BD938.s")

void func_800BDF2C(Collider* arg0, RoomObject* arg1) {
    func_800B402C(arg0, 0, 2);
    func_800B402C(arg0, 1, 2);
    if (arg0->unk_50 != 1.0 || arg0->unk_54 != 1.0 || arg0->unk_58 != 1.0) {
        func_800B402C(arg0, 2, 1);
    } else {
        func_800B402C(arg0, 2, 0);
    }
    arg0->unk_8C = arg0->unk_30.x;
    arg0->unk_90 = arg0->unk_30.y;
    arg0->unk_94 = arg0->unk_30.z;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BE000.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BE0D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BE1C4.s")

void func_800BE24C(void) {
    s32 temp = D_801B3178->unk_18;
    D_8020D908.unk_00 = temp;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BE264.s")

void func_800BE2A4(s32 arg0) {
    s32 temp = D_801B3178->unk_18;
    D_8020D908.unk_00 = temp;
}

void func_800BE2C0(void) {
    Actor* actorList = gActors;
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gActors); i++, actorList++) {
        if ((IsNotPickup(actorList) != 0) && (actorList->actorState != 0)) {
            func_800311C8(actorList);
            func_800314E4(actorList);
        }
    }
    
    // For all players reset bullet mechanisms
    for (i = 0; i < ARRAY_COUNT(gTongues); i++) {
        gTongues[i].amountOnTongue = 0;
        gTongues[i].amountInMouth = 0;
        gPlayerActors[i].amountToShoot = 0;
        gPlayerActors[i].amountLeftToShoot = 0;
        func_800BE474(&gTongues[i]);
    }
}

void func_800BE370(s32 room) {
    Rect3D* rectTemp = &gZoneFields[room].roomBounds;
    Actor* actorList;
    s32 i;

    for (i = 0, actorList = gActors; i < MAX_ACTORS; i++, actorList++) {
        if (IsNotPickup(actorList) == 0) {
            continue;
        }
        if (actorList->actorState == 0) {
            if ((rectTemp->min.x <= actorList->pos.x)  && (rectTemp->max.x >= actorList->pos.x)) {
                if ((rectTemp->min.z <= actorList->pos.z) && (rectTemp->max.z >= actorList->pos.z)) {
                    func_800311C8(actorList);
                    func_800314E4(actorList);
                }
            }
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BE474.s")

void func_800BE550(Tongue* arg0) {
    arg0->vaulting = 0;
    arg0->tongueMode = 0;
    arg0->segments = 0;
    arg0->amountOnTongue = 0;
    arg0->amountInMouth = 0;
    func_800BE474(arg0);
}

void EraseToungeEatEnemy(Tongue* arg0) {
    s32 i;

    arg0->vaulting = 0;
    arg0->tongueMode = 0;
    arg0->segments = 0;

    for (i = 0; i < ARRAY_COUNT(gActors); i++) {
        if (gActors[i].actorID == 0) 
            continue;
        if (gActors[i].actorState != 1)
            continue;
            if (IsPickup(&gActors[i]) != 0) {
                pickup_collide_func(i);
            } else {
                gActors[i].actorState = 2;
                arg0->inMouth[arg0->amountInMouth] = i;
                arg0->amountInMouth += 1;
            }
            arg0->amountOnTongue -= 1;      
        
    }
    func_800BE474(arg0);
}

void func_800BE664(PlayerActor * arg0) {
    if (arg0->power == POWERUP_TIMER) {
        arg0->power = POWERUP_NONE;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BE680.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BE714.s")

void func_800BE7BC(void) {
    s32 i;
    Pole* pole;

    for (i = 0, pole = Poles; i < ARRAY_COUNT(Poles); i++, pole++) {
        pole->mode = 0;        
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BE7F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BE87C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BE8D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/RegistField.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BEF6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/EraseField.s")

void func_800BF268(s32 arg0) {
    Collider** currentCollider;
    s32 i;

    for (i = 0, currentCollider = &D_80240898; i < gFieldCount; i++, currentCollider++){
        if (arg0 == (*currentCollider)->unk_08) {
            EraseField(*currentCollider);
            //must be this way
            i--; currentCollider--;
        }
    }
}

//uses a pointer to a roomObject in levelData to generate a door
void RegistDoor(RoomObject* obj, s32 arg1, s32 arg2) {
    Door* door;

    if (gDoorCount < ARRAY_COUNT(gDoors)) {
        door = &gDoors[gDoorCount];
        door->index = gDoorCount;
        door->unk4 = arg2;
        door->inZone = arg1;
        door->max.x = obj->position.x;
        door->max.y = obj->position.y;
        door->max.z = obj->position.z;
        door->rect.max.y = obj->unk28;
        door->rect.max.z = obj->unk2C;
        door->direction = obj->keyframes.temp;
        door->unk34 = obj->noKeyframes;
        gDoorCount++;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/RegistSwitchArea.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BF4AC.s")

void func_800BF524(s32 inzone) {
    Door** var_s1;
    s32 i;

    for (i = 0, var_s1 = &D_80240C98[i];
        i < gSwitchAreaCount; i++, var_s1++){
        if (inzone == (*var_s1)->inZone) {
            func_800BF4AC(*var_s1);
            //must be like this
            i--; var_s1--;
        }
    }
}

void func_800BF5A4(void) {
    func_8004BA5C(gZoneFields[gCurrentZone].unk8C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BF5E8.s")

void func_800BF84C(s32 room) {
    s32 i;
    Field* zone = &gZoneFields[room];
    s32 limit = zone->rmActCount;
    RoomActor* actor = zone->actors;
    
    for (i = 0; i < limit; i++, actor++){
        if (actor->id == 13 || actor->id == 45 || zone->unk68 == 0 || actor->id != zone->unk84){
            if(!IsBossStage() || !IsBossID(actor->id)) {
                func_800BF5E8(actor);
            }
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/InitFieldSub.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BFCD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BFD64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/CalcRoomInfo.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C0274.s")

const char* GetDirectionName(s32 arg0) {
    return gCardinalDirections[arg0].name;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/CalcDoorInfo.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C0760.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C08B8.s")

void ChameleonFromDoor(PlayerActor* player, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    Door* currentDoor;
    Door* door;
    s32 i;
    s32 pad[3];
    Vec3f sp24;
    
    currentDoor = NULL;
    door = gDoors;
    for (i = 0; i < gDoorCount; i++, door++) {
        if (arg4 == door->direction && arg2 == door->unk38 && arg3 == door->unk3C) {
            currentDoor = door;
            break;
        }
    }
    
    isChange.unk18 = i;
    func_800C08B8(&sp24, player, currentDoor);
    
    isChange.unk4C = sp24.x;
    isChange.unk50 = sp24.y;
    isChange.unk54 = sp24.z;
    isChange.unk40 = (gCardinalDirections[currentDoor->direction].unk0 * currentDoor->rect.max.y) + isChange.unk4C;
    isChange.unk44 = isChange.unk50;
    isChange.unk48 = (gCardinalDirections[currentDoor->direction].unk4 * currentDoor->rect.max.z) + isChange.unk54;
    func_800D34CC();
}

void func_800C0AEC(void) {
    Actor* currentActor = gActors;
    s32 i = 0;
    while (i != ARRAY_COUNT(gActors)){
        if ((IsNotPickup(currentActor) == 0) || (currentActor->actorState != 2)) {
            func_800311C8(currentActor);
            func_800314E4(currentActor);
        }
        i++;
        currentActor++;
    }
    func_800BE7BC();
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C0B74.s")

void func_800C0CDC(PlayerActor* arg0, s32 zone, s32 arg2, s32 arg3, s32 arg4) {
    if (gZoneFields[zone].unk7C != 0) {
        gGameModeState = 3;
        switch (gCurrentStage) {                    /* switch 1 */
        case STAGE_JUNGLE:                                     /* switch 1 */
            D_80174878 = 8;
            return;
        case STAGE_ANT:                                     /* switch 1 */
            D_80174878 = 9;
            return;
        case STAGE_BOMB:                                     /* switch 1 */
            D_80174878 = 10;
            return;
        case STAGE_DESERT:                                     /* switch 1 */
            D_80174878 = 11;
            return;
        case STAGE_KIDS:                                     /* switch 1 */
            D_80174878 = 12;
            return;
        case STAGE_GHOST:                                     /* switch 1 */
            D_80174878 = 13;
            return;
        case STAGE_BOSSRUSH:                                    /* switch 1 */
            switch (zone) {                         /* switch 2 */
            case 1:                                 /* switch 2 */
                D_80174878 = 8;
                return;
            case 3:                                 /* switch 2 */
                D_80174878 = 9;
                return;
            case 2:                                 /* switch 2 */
                D_80174878 = 10;
                return;
            case 4:                                 /* switch 2 */
                D_80174878 = 11;
                return;
            case 5:                                 /* switch 2 */
                D_80174878 = 12;
                return;
            case 6:                                 /* switch 2 */
                D_80174878 = 13;
                return;
            }
            break;
        default:                                    /* switch 1 */
            gGameModeState = 2;
        }
    }
    func_800C0760(zone);
    ChameleonFromDoor(arg0, zone, arg2, arg3, arg4);
    func_800BFCD0();
}

void func_800C0E78(s32 arg0) {
    s32 i;
    s32 temp = arg0;

    if (gZoneFields[arg0].unk60 != 0) {
        temp = 1;
        for (i = 0; i < ARRAY_COUNT(gActors); i++) {
            if ((gActors[i].actorID != 0) && (gZoneFields[arg0].unk84 == gActors[i].actorID) && (gActors[i].actorState == 0)) {
                temp = 0;
                break;
            }
        }
        
        if (temp != 0) {
            gZoneFields[arg0].unk64 = 0;
        }
    }
    EraseRoomItem(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/CheckDoor.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C1204.s")

//multiplayer load?
void func_800C1458(s32 arg0) {
    s32 i;
    D_802039B4 = 0;
    func_800C1204(arg0, gPlayerActors, 1, 0, 1);

    if (gCurrentStage != STAGE_VS) {
        return;
    }

    for (i = 0; i != ARRAY_COUNT(gPlayerActors); i++){
        if ((gPlayerActors[i].active != 0) && (gPlayerActors[i].exists != 0)) {
            func_800B4F14(i, &gPlayerActors[i].pos.x, &gPlayerActors[i].pos.y, &gPlayerActors[i].pos.z);
            gPlayerActors[i].yAngle = CalculateAngleOfVector(-gPlayerActors[i].pos.x, gPlayerActors[i].pos.z);
        }
    }
}

//TODO: check if this should be &gPlayerActors[0] or gPlayerActors
void func_800C1510(s32 arg0, s32 arg1) {
    D_802039B4 = 1;
    func_800C1204(arg0, &gPlayerActors[0], 1,  arg1, 1);
}

s32 func_800C1550(s32 arg0) {
    s32 result = TRUE;
    if (D_80236978) {
        if (arg0 < 0 || arg0 >= D_802478E0) {
            result = FALSE;
        }
    } else {
        if (arg0 < 0 || arg0 >= (D_802478E0 - 1)) {
            result = FALSE;
        }
        
    }
    return result;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C15AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/InitFieldSubScroll.s")

void func_800C198C(s32 arg0, Field* room) {
    s32 flag;
    Collider** var_a2;
    s32 i;
    Collider* temp_a0;
    Rect3D sp10;

    flag = 1;
    for (i = 0, var_a2 = &D_80240898; i < gFieldCount; i++){
        temp_a0 = *var_a2;
        if (arg0 == temp_a0->unk_08) {
            if (flag != 0) {
                flag = 0;
                sp10 = temp_a0->unk_CC;
            } else {
                if (sp10.min.x > temp_a0->unk_CC.min.x) {
                    sp10.min.x = temp_a0->unk_CC.min.x;
                }
                if (sp10.max.x < temp_a0->unk_CC.max.x) {
                    sp10.max.x = temp_a0->unk_CC.max.x;
                }
                if (sp10.min.y > temp_a0->unk_CC.min.y) {
                    sp10.min.y = temp_a0->unk_CC.min.y;
                }
                if (sp10.max.y < temp_a0->unk_CC.max.y) {
                    sp10.max.y = temp_a0->unk_CC.max.y;
                }
                if (sp10.min.z > temp_a0->unk_CC.min.z) {
                    sp10.min.z = temp_a0->unk_CC.min.z;
                }
                if (sp10.max.z < temp_a0->unk_CC.max.z) {
                    sp10.max.z = temp_a0->unk_CC.max.z;
                }
            }
        }
        var_a2++;
    }
    room->roomBounds = sp10;
    room->rect_48.min.x = sp10.max.x - sp10.min.x;
    room->rect_48.min.y = sp10.max.y - sp10.min.y;
    room->rect_48.min.z = sp10.max.z - sp10.min.z;
    room->rect_48.max.x = (sp10.min.x + sp10.max.x) / 2;
    room->rect_48.max.y = (sp10.min.y + sp10.max.y) / 2;
    room->rect_48.max.z = (sp10.min.z + sp10.max.z) / 2;
}

void func_800C1B70(void) {
    if (gZoneFields[gCurrentZone].unkCC != -1.0) {
        D_80174994 = gZoneFields[gCurrentZone].unkCC;
    } else {
        D_80174994 = gZoneFields[gCurrentZone].roomBounds.min.y - 500.0;
    }
}

void func_800C1BF0(s32 arg0) {
    s8 pad;
    if (func_800C1550(arg0)) {
        InitFieldSubScroll(arg0, &gZoneFields[arg0], D_801B3178->unk8, D_801B3178->unk10);
        func_800B3364(1);
        func_800C198C(arg0, &gZoneFields[arg0]);
    }
}

void func_800C1C64(s32 arg0) {
    if (func_800C1550(arg0)) {
        if ((gDoorCount > 0) && (arg0 == gDoors->inZone)) {
            gDoorCount = 0;
        }
        func_800BF268(arg0);
        func_800BF524(arg0);
        func_800BE370(arg0);
        func_800BE2A4(arg0);
        EraseRoomItem(arg0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C1CE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C250C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C2670.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C2820.s")

void func_800C29D8(s32 arg0) {
    func_800C2670(arg0, &gPlayerActors[0], 1);
}

void func_800C2A00(void) {
    Field* pad;
    Field* pad2;
    s32 sp24;
    s32 var_v1;

    func_800CFDC8(gPlayerActors);
    if (D_80236978 != 0) {
        isInOverworld = FALSE;
        isChange.unk4C = gPlayerActors->pos.x;
        isChange.unk50 = gPlayerActors->pos.y;
        isChange.unk54 = gPlayerActors->pos.z;
        sp24 = currentStageCrowns;
        func_800C1204(0, gPlayerActors, 1, 0, 1);
        currentStageCrowns += sp24;
        isChange.unk78 = D_801B3178->unk_18 + (isChange.unkCC << 6);
        isChange.unk0 = 1;
        isChange.unk4 = 1;
        gNextZone = 0;
        if (isChange.unk40 < isChange.unk4C) {
            isChange.unk1C = 1.0f;
        } else {
            if (isChange.unk4C < isChange.unk40) {
                var_v1 = -1;
            } else {
                var_v1 = 0;
            }
            isChange.unk1C = var_v1;
        }
        if (isChange.unk44 < isChange.unk50) {
            isChange.unk20 = 1.0f;
        } else {
            if (isChange.unk50 < isChange.unk44) {
                var_v1 = -1;
            } else {
                var_v1 = 0;
            }
            isChange.unk20 = var_v1;
        }
        if (isChange.unk48 < isChange.unk54) {
            isChange.unk24 = 1.0f;
        } else {
            if (isChange.unk54 < isChange.unk48) {
                var_v1 = -1;
            } else {
                var_v1 = 0;
            }
            isChange.unk24 = var_v1;
        }
        isChange.unk64 = gZoneFields[gCurrentZone].unk7C;
        isChange.unk74 = 1;
        isChange.unkCC = gZoneFields[gCurrentZone].unk80;
        D_80236978 = 0;
    } else {
        func_800C0E78(isChange.unk_08);
        func_800C0CDC(gPlayerActors, isChange.unk_0C, isChange.unkD0, isChange.unk_D4, isChange.unk_14);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C2C34.s")

//referred to in US1.0 as "EnterBossRoom"
//TODO: fake match
void enterBossRoom(void) {
    int *new_var2;
    int new_var;
    func_800CFDC8(gPlayerActors);

    if (isInOverworld == FALSE) {
        func_800C2A00();
    } else {
        new_var = 3;
        new_var2 = &new_var;
        gGameModeState = *new_var2;
        D_80174878 = 0xB;
    }
}

//referred to in US1.0 as "InitField"
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/InitField.s")

//referred to in US1.0 as "moveField"
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/MoveField.s")

void func_800C38E0(SpriteActor* arg0) {
    SpriteActor* curSpAct;

    if (arg0 == NULL) {
        return;
    }

    curSpAct = arg0;

    while (curSpAct->size >= 0){
        curSpAct->unk20 = func_800AF604(curSpAct->position.x, curSpAct->position.y, curSpAct->position.z, 6000);
        curSpAct++;
    }
    
    func_80083F18(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C3958.s")

//draw collision
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C3B50.s")

void func_800C3DCC(Camera* camera, Vec3f arg1, Vec3f arg4, f32 arg7) {
    camera->f5.x = camera->f1.z = arg1.x;
    camera->f2.x = camera->f5.y = arg1.y;
    camera->f2.z = arg7;
    camera->f2.y = arg1.z;
    camera->f5.z = arg1.z;
    camera->f3.x = arg4.x;
    camera->f4.x = arg4.x;
    camera->f3.y = arg4.y;
    camera->f4.y = camera->f3.y;
    camera->f3.z = arg4.z;
    camera->f4.z = arg4.z;
    camera->f2.x -= gZoneFields[gCurrentZone].unkD0 * camera->size1;
    camera->f3.y -= gZoneFields[gCurrentZone].unkD0 * camera->size1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C3E94.s")

void func_800C4040(PlayerActor* arg0, Tongue* arg1, Camera* camera, f32 arg3, f32 arg4) {
    Vec3f sp54;
    Vec3f sp48;
    Field* temp_v0;
    f32 temp_f0_8;
    f32 temp_f12;

    temp_v0 = &gZoneFields[gCurrentZone];

    if (arg3 == 0.0 && arg4 == 0.0) {
        arg3 = 1;
    }

    //these MUST be formatted like this
    camera->f5.x = camera->f1.z = arg0->pos.x;
    camera->f5.y = camera->f2.x = arg0->pos.y + (60.0 / camera->size1);
    camera->f2.z = arg0->pos.y;
    camera->f5.z = camera->f2.y = arg0->pos.z;
    camera->f4.x = camera->f3.x = camera->f1.z;
    camera->f4.y = camera->f3.y = arg0->pos.y + 600 * camera->size1;
    camera->f4.z = camera->f3.z = camera->f2.y;
    camera->f5.y += gZoneFields[gCurrentZone].unkD0 * camera->size1;
    camera->f4.y += gZoneFields[gCurrentZone].unkD0 * camera->size1;

    if (isInOverworld == TRUE) {
        camera->f4.z += 800 * camera->size1;
        camera->f3.z += 800 * camera->size1;
        func_800D3854(arg0, arg1, camera, &sp54, &sp48, 1);
        func_800C3DCC(camera, sp54, sp48, arg0->pos.y);
        return;
    }

    temp_f0_8 = temp_v0->rect_48.min.x;
    temp_f12 = temp_v0->rect_48.min.z;
    arg3 *= 800 * camera->size1;
    arg4 *= 800 * camera->size1;
    LimitFloat(&arg3, -temp_f0_8, temp_f0_8);
    LimitFloat(&arg4, -temp_f12, temp_f12);
    camera->f4.x += arg3;
    camera->f3.x += arg3;
    camera->f4.z += arg4;
    camera->f3.z += arg4;

    if (camera->unk0 == 1) {
        func_800D69D0(gZoneFields[gCurrentZone].cameraMode, arg0, arg1, camera, &sp54, &sp48, 1);
        func_800C3DCC(camera, sp54, sp48, arg0->pos.y);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C43AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C4594.s")

void func_800C48B8(Vec3f arg0, Vec3f arg3, Vec3f arg6, Vec3f arg9, f32 argC, s32 zero) {
    D_8020A298 = arg0;
    D_8020D2A8 = arg3;
    D_8020D5B8 = arg6;
    D_8020D848 = arg9;
    D_8020D858 = argC;
}

void func_800C4968(Vec3f arg0, Vec3f arg3, f32 arg6, f32 arg7, f32 arg8) {
    Vec3f sp7C;
    Vec3f sp70;
    f32 pad;
    f32 pad3;
    Vec3f sp5C;

    SphericalToCartesian(&sp5C, 1000, arg6, 180);
    sp7C.x = arg0.x - sp5C.x;
    SphericalToCartesian(&sp5C, 1000, arg6, 180);
    sp7C.y = arg0.y - sp5C.y;
    SphericalToCartesian(&sp5C, 1000, arg6, 180);
    sp7C.z = arg0.z - sp5C.z;
    SphericalToCartesian(&sp5C, 1000, arg7, 180);
    sp70.x = arg3.x - sp5C.x;
    SphericalToCartesian(&sp5C, 1000, arg7, 180);
    sp70.y = arg3.y - sp5C.y;
    SphericalToCartesian(&sp5C, 1000, arg7, 180);
    sp70.z = arg3.z - sp5C.z;
    func_800C48B8(sp7C, sp70, arg0, arg3, arg8, 0);
}

void func_800C4B1C(Camera* arg0, f32 arg1) {
    Vec3f lerp1;
    Vec3f lerp2;

    arg1 = func_800B2308(arg1, 0);
    Vec3f_Lerp(&lerp1, D_8020A298, D_8020D2A8, arg1);
    Vec3f_Lerp(&lerp2, D_8020D5B8, D_8020D848, arg1);
    func_800C3DCC(arg0, lerp1, lerp2, D_8020D858);
}

void func_800C4C48(Vec3f arg0, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    D_8020D868 = arg0;
    D_8020D874 = arg3;
    D_8020D878 = arg4;
    D_8020D87C = arg5;
    D_8020D880 = arg6;
}

//sphereicalToCartesian calcs
//https://decomp.me/scratch/crsmT
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C4CAC.s")

//angle stuff with actors
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C4DF8.s")

//animates camera pans
void func_800C5304(Camera* camera, f32 weight) {
    Vec3f sp54;
    Vec3f sp48;
    f32 radius;
    f32 theta;
    f32 phi;
    Vec3f sp30;

    weight = func_800B2308(weight, 0);
    radius = ((1.0 - weight) * D_80201900) + (weight * D_80201914);
    theta = ((1.0 - weight) * D_80201904) + (weight * D_8020191C);
    phi = ((1.0 - weight) * D_8020190C) + (weight * D_80201924);
    WrapAngle(&phi);
    Vec3f_Lerp(&sp30, D_80201930, D_80201950, weight);
    SphericalToCartesian(&sp48, radius, theta, phi);
    sp54.x = sp30.x + sp48.x;
    sp54.y = sp30.y + sp48.y; sp54.z = sp30.z + sp48.z;
    sp30.y += gZoneFields[gCurrentZone].unkD0 * camera->size1;
    func_800C3DCC(camera, sp30, sp54, D_80201960);
}


// why would this ever need to zero Vec2w and arg1? (This surely is zeroing a Vec3w? (this is already a function?))
void func_800C54F8(Vec2w* arg0, s32* arg1) {
    arg0->x = 0;
    arg0->y = 0;
    *arg1 = 0;
}

void func_800C5508(PlayerActor* player) {
    player->canJump = FALSE;
    player->groundMovement = 2;
    player->globalTimer = player->globalTimer + 1.5;
}

void func_800C5538(PlayerActor* arg0) {
    arg0->canJump = FALSE;
    arg0->groundMovement = 1;
    arg0->globalTimer = arg0->globalTimer + 0.8;
}

void func_800C5564(PlayerActor* arg0) {
    arg0->canJump = FALSE;
    arg0->groundMovement = 0;
    arg0->globalTimer = arg0->globalTimer + 0.3;
}

/**
 * @brief Position the player at a fixed distance from the boss either on the X or Z axis depending on which is more significant.
 *
 * @param player Pointer to the player's actor structure.
 * @param distance Distance to place the player from the boss.
 */
void Player_SetFromBoss(PlayerActor* player, f32 distance) {
    Vec3f bossPos;
    f32 absX;
    f32 absZ;
    s32 sgnX;
    s32 tempSgn;
    s32 sgnZ;

    Vec3f_SetAtBossPos(&bossPos);
    
    if (bossPos.x > 0.0f) {
        sgnX = 1;
    } else {
        if (bossPos.x < 0.0f) {
            tempSgn = -1;
        } else {
            tempSgn = 0;
        }
        sgnX = tempSgn;
    }
    
    if (bossPos.z > 0.0f) {
        sgnZ = 1;
    } else {
        if (bossPos.z < 0.0f) {
            tempSgn = -1;
        } else {
            tempSgn = 0;
        }
        sgnZ = tempSgn;
    }
    
    if (bossPos.x < 0.0f) {
        absX = -bossPos.x;
    } else {
        absX = bossPos.x;
    }
    if (bossPos.z < 0.0f) {
        absZ = -bossPos.z;
    } else {
        absZ = bossPos.z;
    }

    if (sgnX == 0) {
        sgnX = 1;
    }
    if (sgnZ == 0) {
        sgnZ = 1;
    }
    if (absZ < absX) {
        sgnZ = 0;
    } else {
        sgnX = 0;
    }

    player->pos.x = -sgnX * distance;
    player->pos.y = 400.0f;
    player->pos.z = -sgnZ * distance;
}

//camera pan controller
//BIG jump table
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C56D4.s")

void func_800C88AC(void) {
    s32 var = 1;
    if (D_80108B68 == 0) {
        D_80108B68 = var;
    }
}

//TODO: check if this should be &gPlayerActors[0] or gPlayerActors
void func_800C88D0(void) {
    func_800C56D4(&gPlayerActors[0]);
}



CardinalDirection gCardinalDirections[] = {
    {0, 0, 0, "NO_DIR", 0},
    {0, -1, 3, "NORTH", 180.0f},
    {1, 0, 4, "EAST", 90.0f},
    {0, 1, 1, "SOUTH", 0.0f},
    {-1, 0, 2, "WEST", 270.0f},
};

f32 unused_data[] = {
    292.5f, 247.5f, 202.5f, 157.5f, 112.5f, 67.5f
};

s32 D_80108B68 = 0;