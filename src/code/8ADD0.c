#include "8ADD0.h"

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AF9D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AFB2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AFB88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/MoveTheater.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B06B0.s")

s32 CountShotActors(void) {
    Actor* actor;
    s32 count = 0;
    s32 i;

    for (i = 0, actor = gActors; i < MAX_ACTORS; i++, actor++) {
        // If the actor is a pickup:
        if (IsNotPickup(actor) == FALSE) continue;
        if (actor->actorState != 3) continue;
            count++;
        
    }
    return count;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B07E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B088C.s")

void func_800B08C8(unkStructGlobal1* arg0) {
    s32 shotActors;

    switch (arg0->unkB4) {
    case 0:
        if (CountShotActors() == 1) {
            arg0->unkB4 = 1;
            func_800B35B0(arg0->unkAC);
        }
        break;
    case 1:
        shotActors = CountShotActors();
        if (shotActors >= 2) {
            arg0->unkB4 = 3;
        }
        if (shotActors == 0) {
            arg0->unkB4 = 2;
            arg0->unkB8 = gTimer + 150;
            return;
        }
       break;
    case 2:
        if (func_800B07E4() == 0) {
            arg0->unkB4 = 3;
            func_800B35B0(arg0->unkB0);
        }
        if (arg0->unkB8 < gTimer) {
            arg0->unkB4 = 3;
        }
        break;
    
    case 3:
        break;
    }
}

void func_800B09C0(s32 arg0, newStruct* arg1) {
    func_800B56D4(arg1->field1, arg1->field2);
}
//unsure of arg1 type
void func_800B09E8(unkStructGlobal1* arg0, unkBlackChameleon1* arg1) {
    arg0->unkAC = arg1->unk38;    
    if (func_800B34D0(arg0->unkAC) != 0) {
        arg0->unkB0 = 0;
        return;
    }
    arg0->unkB0 = 1;
}


void func_800B0A30(unkBlackChameleon0* arg0, unkBlackChameleon1* arg1) {
    gPlayerActors[1].active = gPlayerActors[1].exists = 1;

    gSelectedCharacters[1] = 4;
    arg0->unkAC = 0;
    arg0->unkB0 = arg1->unk38;
    if (func_800B34D0(arg0->unkB0) != 0) {
        gPlayerActors[1].active = gPlayerActors[1].exists = 0;
        arg0->unkAC = 2;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B0AA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B0B20.s")
//deals with "shutters"
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/RegistShutter.s")

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
    rect.max.z = D_8010FB50;
    vec.x = gPlayer->pos.x;
    vec.y = gPlayer->pos.y;
    vec.z = gPlayer->pos.z;
    
    // If the player is not in the bounding box, not squished, and not jumping, set the squish timer to 1
    if (((gPlayerActors->squishTimer == 0) && (gPlayerActors->canJump == 0)) && (IsPointInRect(vec, &rect) != 0)) {
        //D_80168E14 = 1;
        gPlayerActors->squishTimer = 1;
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
        ret = (1.0 - __cosf(arg0 * PI)) * 0.5;
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
    PlayerActor* player = &gPlayerActors[0];
    s32 ret = 0;
    s32 i;
    
    for (i = 0; i < PLAYERS_MAX; i++) {
        if (gPlayerActors[i].exists != 0 && gPlayerActors[i].power == 4) {
            ret = 1;
            break;
        }
    }
    return ret;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B255C.s")

Vec3f* func_800B2AB4(Vec3f* arg0, Vec3f arg1, temp_func_800B2AB4* arg4) {
    Collider* temp = &D_80236980[arg4->unk4];
    Vec3f sp20;

    func_800B255C(&sp20, arg1, temp);
    *arg0 = sp20;
    return arg0;
}

s32 func_800B2B50(s32 arg0, s32 arg1) {
    s32 ret = -1;
    s32 i;
    unkSpriteStruct5** temp;
    unkSpriteStruct5* temp2;

    for (i = 0, temp = &D_80240898; i < gFeildCount; i++, temp++) {
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
            pos.x = actors->pos.x; // Set x coordinate of pos to boss x coordinate
            pos.y = actors->pos.y; // Set y coordinate of pos to boss y coordinate
            pos.z = actors->pos.z; // Set z coordinate of pos to boss z coordinate
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
 * @brief Returns True iff the current stage is a boss stage.
 * 
 * @return (s32) 1 if the current stage is a boss stage, 0 otherwise. 
 */
s32 IsBossStage(void) {
    s32 ret;
    
    if ((gCurrentStage != 9) && (gCurrentStage != 0xA) && (gCurrentStage != 0xB) && (gCurrentStage != 0xC) && (gCurrentStage != 0xD) && (gCurrentStage != 0xE)) {
        ret = 0;
    } else {
        ret = 1;
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
    unkSpriteStruct5** temp_s0;
    unkSpriteStruct5* unkSpritePtr;

    for (i = 0, temp_s0 = &D_80240898; i < gFeildCount; i++, temp_s0++) {
        unkSpritePtr = *temp_s0;
        unkSpritePtr->unk_E4 = 0;
        if ((arg0 == 1) || (func_800B3FFC(unkSpritePtr, 4) != 0)) {
            func_800B2E40(unkSpritePtr);
        }
    }
}

//rains 7 month old bool checker
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
    return (var_v0 != 0) ? (s32*)gZoneCollisions[(u8)arg0].pad68 : &levelFlags[(u8)arg0];
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B3484.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B3D38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B3D9C.s")

// sprite.0 bool checker
s32 func_800B3DFC(unkSpriteStruct* sprite) {
    return (sprite->unk_00 == 0 ) ? 1 : 0;
}

s32 func_800B3E1C(unkSpriteStruct* arg0) {
    s32 i;
    
    if (arg0 == NULL) {
        return 0;
    }

    i = 0;
    while (func_800B3DFC(arg0) == NULL) {
        i++;
        arg0++;
    }

    return i;
}

s32 func_800B3E7C(unkSpriteStruct2* sprite) {
    return (sprite->unk_00 == 0 ) ? 1 : 0;
}

s32 func_800B3E9C(unkSpriteStruct2* arg0) {
    s32 i;
    
    if (arg0 == 0) {
        return 0;
    }

    i = 0;
    while (func_800B3E7C(arg0) == 0) {
        i++;
        arg0++;
    }

    return i;
}

s32 func_800B3EFC(unkSpriteStruct3* sprite) {
    return (sprite->unk_00 == 0 ) ? 1 : 0;
}

s32 func_800B3F1C(unkSpriteStruct3* arg0) {
    s32 i;
    
    if (arg0 == 0) {
        return 0;
    }

    i = 0;
    while (func_800B3EFC(arg0) == 0) {
        i++;
        arg0++;
    }

    return i;
}

s32 func_800B3F7C(unkSpriteStruct4* sprite) {
    return (sprite->unk_00 < 0 ) ? 1 : 0;
}

s32 func_800B3F9C(unkSpriteStruct4* arg0) {
    s32 i;
    
    if (arg0 == 0) {
        return 0;
    }

    i = 0;
    while (func_800B3F7C(arg0) == 0) {
        i++;
        arg0++;
    }

    return i;
}

//this struct pointer type for arg0 is wrong
s32 func_800B3FFC(unkSpriteStruct5 *arg0, s32 arg1) {
    Vec3w *new_var = &D_801087D8[arg1];
    int new_var2 = arg0->unk_14 & new_var->y;

    return new_var2 >> (*new_var).z;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B402C.s")

void func_800B4070(unkSpriteStruct* arg0) {
    s32 var_a2;

    if ((arg0->unk_4C != 0) && (func_800B3FFC(arg0->unk_4C, 4) == 1)) {
        var_a2 = 1;
        //no idea what's going on with arg0 here
    } else if ( func_800B3FFC((unkSpriteStruct5*)arg0, 0) == 2 || func_800B3FFC((unkSpriteStruct5*)arg0, 2) == 2) {
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
                gTotalCarrots += 1;
            }
        }        
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B4264.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B4408.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B4574.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B47DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B4884.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B4A3C.s")

void setCrownPositionsForRoom(s32 arg0) {
    s32 temp_s3;
    s32 i;
    unkStruct07* var_s0;
    unkItemStruct* new_var;
    
    temp_s3 = gZoneCollisions[arg0].unk18;
    var_s0 = &D_802019A8[gZoneCollisions[arg0].unk78];
    
    for (i = 0; i < temp_s3; i++, var_s0++) {
        new_var = var_s0->unk_00;
        if (var_s0->boolForSpawning == 1) {
            var_s0->unk_10 = func_800B4A3C(new_var);
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

extern s32 D_80202530[32];

void func_800B560C(s32 arg0) {
    if (D_802025B0 < 32) {
        D_802025B0[D_80202530] = arg0;
        D_802025B0++;
    }
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B5640.s")

void func_800B56D4(f32 arg0, f32 arg1) {
    D_8010881C = arg0;
    D_80108820 = arg1;
}
//find enemies in explosions' blast radius?
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B56E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B5878.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B5908.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B59F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B5A98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B5C60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B5D68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B5E40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B5ED0.s")

void func_800B602C(Collider* arg0, s32 arg1) {
    arg0->unk_AC = arg1 - 0x3C;
    arg0->unk_B0 = 1;
}

void func_800B6040(Collider* arg0) {
    arg0->unk_AC = 60;
    arg0->unk_B0 = 2;
}

void func_800B6054(Collider* arg0, s32 arg1) {
    func_800B5D68(arg0, 1);
}

void func_800B6078(Collider* arg0) {
    Vec3f_Zero(&arg0->unk_3C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B6098.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B61FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B67D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B691C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B6B14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B6B4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B6C34.s")

void func_800B6CD8(Collider* arg0, Camera* arg1) {
    func_800B5D68(arg0, 1);
    arg0->unk_8C = arg1->f4.x;
    arg0->unk_90 = arg1->f4.y;
    arg0->unk_94 = arg1->f4.z;
}

void func_800B6D24(tempStruct* arg0) {
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

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BA2D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BA35C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BA89C.s")

void func_800BA900(tempStruct* arg0) {
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

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BBC88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BBCE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BBF80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BC284.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BCC04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BCD10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BD1EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BD2AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BD55C.s")

void func_800BD608(tempStruct* arg0) {
    Vec3f_Zero(&arg0->unk_3C);
    func_800B5C60(arg0);
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BD634.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BD718.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BD938.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BDF2C.s")

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
    for (i = 0; i < PLAYERS_MAX; i++) {
        gTongues[i].amountOnTongue = 0;
        gTongues[i].amountInMouth = 0;
        gPlayerActors[i].amountToShoot = 0;
        gPlayerActors[i].amountLeftToShoot = 0;
        func_800BE474(&gTongues[i]);
    }
}

void func_800BE370(s32 arg0) {
    Rect3D* rectTemp = &gZoneCollisions[arg0].rect_30;
    Actor* actorList;
    s32 i;
    for (i = 0, actorList = gActors; i < MAX_ACTORS; i++, actorList++) {
        if (IsNotPickup(actorList) == 0) continue;
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

    for (i = 0; i < MAX_ACTORS; i++) {
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
    if (arg0->power == POWERUP_TIME) {
        arg0->power = POWERUP_NONE;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BE680.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BE714.s")

void func_800BE7BC(void) {
    s32 i;
    pole* var_v1;
    for(i=0,var_v1=D_80170968; i < 64; i++, var_v1++ ){
          var_v1->mode=0;        
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BE7F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BE87C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BE8D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/RegistField.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BEF6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/EraseField.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BF268.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/RegistDoor.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/RegistSwitchArea.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BF4AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BF524.s")

void func_800BF5A4(void) {
    func_8004BA5C(gZoneCollisions[gCurrentZone].unk8C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BF5E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BF84C.s")

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
    isChange.unk40 = (gCardinalDirections[currentDoor->direction].unk0 * currentDoor->toX) + isChange.unk4C;
    isChange.unk44 = isChange.unk50;
    isChange.unk48 = (gCardinalDirections[currentDoor->direction].unk4 * currentDoor->toZ) + isChange.unk54;
    func_800D34CC();
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C0AEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C0B74.s")

void func_800C0CDC(PlayerActor* arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (gZoneCollisions[arg1].unk7C != 0) {
        gGameModeState = 3;
        switch (gCurrentStage) {                    /* switch 1 */
        case 0:                                     /* switch 1 */
            D_80174878 = 8;
            return;
        case 1:                                     /* switch 1 */
            D_80174878 = 9;
            return;
        case 2:                                     /* switch 1 */
            D_80174878 = 0xA;
            return;
        case 3:                                     /* switch 1 */
            D_80174878 = 0xB;
            return;
        case 4:                                     /* switch 1 */
            D_80174878 = 0xC;
            return;
        case 5:                                     /* switch 1 */
            D_80174878 = 0xD;
            return;
        case 15:                                    /* switch 1 */
            switch (arg1) {                         /* switch 2 */
            case 1:                                 /* switch 2 */
                D_80174878 = 8;
                return;
            case 3:                                 /* switch 2 */
                D_80174878 = 9;
                return;
            case 2:                                 /* switch 2 */
                D_80174878 = 0xA;
                return;
            case 4:                                 /* switch 2 */
                D_80174878 = 0xB;
                return;
            case 5:                                 /* switch 2 */
                D_80174878 = 0xC;
                return;
            case 6:                                 /* switch 2 */
                D_80174878 = 0xD;
                return;
            }
            break;
        default:                                    /* switch 1 */
            gGameModeState = 2;
        }
    }
    func_800C0760(arg1);
    ChameleonFromDoor(arg0, arg1, arg2, arg3, arg4);
    func_800BFCD0();
}

void func_800C0E78(s32 arg0) {
    s32 i;
    s32 temp = arg0;

    if (gZoneCollisions[arg0].unk60 != 0) {
        temp = 1;
        for (i = 0; i < ARRAY_COUNT(gActors); i++) {
            if ((gActors[i].actorID != 0) && (gZoneCollisions[arg0].unk84 == gActors[i].actorID) && (gActors[i].actorState == 0)) {
                temp = 0;
                break;
            }
        }
        
        if (temp != 0) {
            gZoneCollisions[arg0].unk64 = 0;
        }
    }
    EraseRoomItem(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/CheckDoor.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C1204.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C1458.s")

void func_800C1510(s32 arg0, s32 arg1) {
    D_802039B4 = 1;
    func_800C1204(arg0, &gPlayerActors[0], 1,  arg1, 1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C1550.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C15AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/InitFieldSubScroll.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C198C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C1B70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C1BF0.s")

void func_800C1C64(s32 arg0) {
    if (func_800C1550() != 0) {
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

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C2A00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C2C34.s")
//referred to in US1.0 as "EnterBossRoom"
//TODO: fake match
void enterBossRoom(void) {
    int *new_var2;
    int new_var;
    func_800CFDC8(gPlayerActors);

    if (D_80236974 == 0) {
        func_800C2A00();
        return;
    }

    new_var = 3;
    new_var2 = &new_var;
    gGameModeState = *new_var2;
    D_80174878 = 0xB;
}
//referred to in US1.0 as "InitField"
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/InitField.s")
//referred to in US1.0 as "moveField"
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/MoveField.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C38E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C3958.s")

//draw collision
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C3B50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C3DCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C3E94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C4040.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C43AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C4594.s")


//alotta unks
//https://decomp.me/scratch/XCUmg
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C48B8.s")

//subroutine variables
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C4968.s")

//subroutine variables
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C4B1C.s")

//subroutine variables
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C4C48.s")

//really big wow
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C4CAC.s")

//jump table
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C4DF8.s")

//really big wow
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C5304.s")

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
    arg0->globalTimer = arg0->globalTimer + 0.800000000000000044;
}

void func_800C5564(PlayerActor* arg0) {
    arg0->canJump = FALSE;
    arg0->groundMovement = 0;
    arg0->globalTimer = arg0->globalTimer + 0.299999999999999989;
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

//jump table
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C56D4.s")

void func_800C88AC(void) {
    s32 var = 1;
    if (D_80108B68 == 0) {
        D_80108B68 = var;
    }
}

void func_800C88D0(void) {
    func_800C56D4(&gPlayerActors[0]);
}

const char D_8010FA44[] = "NO_DIR";
const char D_8010FA4C[] = "NORTH";
const char D_8010FA54[] = "EAST";
const char D_8010FA5C[] = "SOUTH";
const char D_8010FA64[] = "WEST";
