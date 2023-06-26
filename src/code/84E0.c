#include "common.h"
#ifndef _RODATA_
#define _RODATA_

extern f32 D_8010B348;
//const char padRodata[] = "\0\0\0\0\0\0\0";

/**
 * @brief Returns the result of the SUM_OF_SQUARES macro
 * 
 * @param x: first value 
 * @param y: second value
 * @return (f32) x^2 + y^2
 */
f32 func_8002D0E0(f32 x, f32 y) {
    return SUM_OF_SQUARES(x, y);
}

/**
 * @brief Wrap degrees to 0-360
 * 
 * @param theta_ptr: pointer to the angle to wrap
 */
void wrapDegrees(f32* theta_ptr) {
    while(1){
        f32 theta = *theta_ptr;

        if (theta >= 360.0f) {
            *theta_ptr = theta - 360.0f;
            continue;
        } else if (theta < 0.0f) {
            *theta_ptr = theta + 360.0f;
            continue;
        } else {
            break;
        }
    }
}

// if a^2+b^2 > c^2 -> set a and b st. a^2+b^2=c^2 : Elisiah
// If point is outside circle (radius c), set norm st point is on the boundary
void func_8002D148(f32* a, f32* b, f32 c) {
    f32 norm;
    f32 aSquaredPlusBSquared;

    aSquaredPlusBSquared = SUM_OF_SQUARES(*a, *b);
    if (!(aSquaredPlusBSquared <= SQ(c))) {
        norm = sqrtf(aSquaredPlusBSquared);
        *a = (*a * c) / norm;
        *b = (*b * c) / norm;
    }
}

// Unknown Function: Elisiah 
f32 CalcAngleBetween2DPoints(f32 x1, f32 y1, f32 x2, f32 y2) {
    return CalculateAngleOfVector(x2 - x1, -(y2 - y1));
}

// Mirror the lower semicircle onto the top
f32 ReflectAngleToUpperSemicircle(f32 theta) {

    if (theta < 0.0f) {
        theta = -theta;
    }
    if (theta > 180.0f) {
        theta = 360.0f - theta;
    }
    return theta;
}

// 1 or 0 depending on unk func: Elisiah
s32 IsAngleWithinTolerance(f32 arg0, f32 arg1, f32 arg2) {   // Usually called as unk_90, arg1, unk_15C

    if (ReflectAngleToUpperSemicircle(arg0 - arg1) <= arg2) {
        return 1;
    }
    return 0;
}

// : Elisiah
s32 func_8002D2A0(f32 arg0, f32 arg1) {
    if (arg0 < 180.0f) {
        if ((arg0 < arg1) && (arg1 <= (arg0 + 180.0f))) {
            return 1;
        }
        return -1;
    }
    if (((arg0 - 180.0f) < arg1) && (arg1 <= arg0)) {
        return -1;
    }
    return 1;
}

// Unknown Angle Function: Elisiah
s32 func_8002D328(f32 theta, f32 phi) { // used to be void and still built
    f32* theta_ptr;

    theta_ptr = &theta;
    theta = theta - 90.0f;
    wrapDegrees(theta_ptr);
    return func_8002D2A0(theta, phi);   // used to not return and still built
}

// Unkown Function: Elisiah
s32 func_8002D36C(f32* arg0, f32 arg1, f32 arg2) {
    s32 phi_v1;
    f32 phi_f0;
    s32 sp1C;

    phi_v1 = 0;
    if (*arg0 < arg1) {
        phi_f0 = -(*arg0 - arg1);
    } else {
        phi_f0 = *arg0 - arg1;
    }
    if (phi_f0 > 180.0f) {
        phi_f0 = 360.0f - phi_f0;
    }
    if (arg2 <= phi_f0) {
        sp1C = 0;
        *arg0 += arg2 * (f32) func_8002D2A0(*arg0, arg1);
    } else {
        *arg0 = arg1;
        phi_v1 = 1;
    }
    sp1C = phi_v1;
    wrapDegrees(arg0);
    return sp1C;
}

#ifndef _RODATA_
void func_8002D434(f32 *arg0, f32 *arg1, f32 arg2, f32 arg3, f32 arg4) {
    f32 temp_f10;
    f32 a = *arg0 - arg2;
    f32 b = *arg1 - arg3;
    f32 c = sqrtf(SUM_OF_SQUARES(a, b));
    
    if (c != 0.0f) {
        temp_f10 = CalculateAngleOfVector(a, -b) + arg4;
        *arg0 = cosf(DEGREES_TO_RADIANS_2PI(temp_f10)) * c + arg2;
        *arg1 = arg3 + -(sinf(DEGREES_TO_RADIANS_2PI(temp_f10)) * c);
    }
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8002D434.s")
#endif

#ifndef _RODATA_
//TODO: fake match (only here to match rodata)
void func_8002D550(f32 *arg0, f32 *arg1, f32 arg2, f32 arg3, f32 arg4) {
    f32 temp_f12;
    f32 *new_var;
    f32 temp_f2;
    f32 temp_f12_2 = CalcAngleBetween2DPoints(arg2, arg3, *arg0, *arg1);
    temp_f2 = (*arg0) - arg2;
    temp_f12 = (*arg1) - arg3;
    if (SUM_OF_SQUARES(temp_f2, temp_f12) < SQ(arg4)) {
        temp_f12_2 = DEGREES_TO_RADIANS_2PI(temp_f12_2);
        if (temp_f12) {

        }
        *arg0 = (cosf(temp_f12_2) * arg4) + arg2;
        *arg1 = ((-sinf(temp_f12_2)) * arg4) + arg3;
    }
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8002D550.s")
#endif


#ifndef _RODATA_
void Actors_Init(s32 actorIndex, s32 actorID, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, f32 argA, f32 argB, f32 argC, f32 argD, f32 argE, f32 argF, f32 arg10, f32 arg11, f32 arg12, f32 arg13, s32 arg14, s32 arg15, s32 arg16, s32 arg17) {
    Actor* actorInstance;
    s32 i;

    actorInstance = &gActors[actorIndex];

    for (i = 0; i < 6;) {
        actorInstance->unk_10C[i] = 0;
        i++;
    }

    for (i = 0; i < 8; ) {
        actorInstance->unk_134[i] = 0;
        i++;
    }

    actorInstance->actorIndex = actorIndex;
    actorInstance->actorID = actorID;
    actorInstance->globalTimer = 0;
    actorInstance->pos.x = arg2;
    actorInstance->pos.y = arg3;
    actorInstance->pos.z = arg4;
    actorInstance->unk_90 = arg5;

    for (i = 0; i < 3; i++) {
        actorInstance->unknownPositionThings[i].unk_08 = 0.0f;
        actorInstance->unknownPositionThings[i].unk_04 = 0.0f;
        actorInstance->unknownPositionThings[i].unk_00 = 0.0f;
        actorInstance->unknownPositionThings[i].unk_10 = 0.0f;
        actorInstance->unknownPositionThings[i].unk_0C = 0.0f;
    }
    actorInstance->tScale = actorInstance->unknownPositionThings[0].unk_0C = D_8010A6D0[actorID].x;
    actorInstance->tYPos = actorInstance->unknownPositionThings[0].unk_10 = D_8010A6D0[actorID].y;
    actorInstance->tongueCollision = 1;

    actorInstance->unk_F4 = arg6;
    actorInstance->unk_F8 = arg7;
    actorInstance->unk_FC = arg8;
    actorInstance->unk_100 = arg9;
    actorInstance->unk_104 = argA;
    actorInstance->unk_108 = argB;
    actorInstance->position._f32.x = argC;
    actorInstance->position._f32.y = argD;
    actorInstance->unk_15C = argE;
    actorInstance->unk_160 = argF;
    actorInstance->unk_164 = arg10;
    actorInstance->unk_168 = arg11;
    actorInstance->unk_16C = arg12;
    actorInstance->unk_170 = arg13;
    actorInstance->unk_124 = arg14;
    actorInstance->unk_128 = arg15;
    actorInstance->unk_12C = arg16;
    actorInstance->unk_130 = arg17;
    actorInstance->actorState = 0;
    actorInstance->vel.x = 0.0f;
    actorInstance->vel.y = 0.0f;
    actorInstance->vel.z = 0.0f;
    actorInstance->tOffset.x = 0.0f;
    actorInstance->tOffset.y = 0.0f;
    actorInstance->tOffset.z = 0.0f;
    actorInstance->unk_94 = 0.0f;
    actorInstance->posOnTongue = 0;
    actorInstance->touched = 0;
    actorInstance->hit = 0;
    actorInstance->tongueBumpSeg = 0;
    actorInstance->unk_98 = 0;
    actorInstance->unk_9C = 0;
    actorInstance->unk_B0 = 0.0f;
    
    actorInstance->unk_A0.unk_00 = D_8010AA28[actorID].unk_00;
    actorInstance->unk_A0.unk_04 = D_8010AA28[actorID].unk_04;
    actorInstance->unk_A0.unk_08 = D_8010AA28[actorID].unk_08;
    actorInstance->unk_A0.unk_0C = D_8010AA28[actorID].unk_0C;
    

    actorInstance->unk_C4 = 0;
    actorInstance->unk_C8 = 0;
    actorInstance->unk_C0 = 0.0f;

    actorInstance->unk_D0 = actorInstance->sizeScalar = 1.0f;
    actorInstance->unk_EC = 0;
    actorInstance->unk_F0 = 0;
    actorInstance->unk_D4 = 0.0f;
    actorInstance->unk_D8 = 0.0f;
    actorInstance->unk_DC = 0.0f;
    actorInstance->unk_E0 = -1;
    actorInstance->unk_E4 = -1;

    switch (actorID) {
    case Red_Ant:
        ActorInit_AntRed(actorInstance);
        return;
    case Green_Ant:
        ActorInit_AntGreen(actorInstance);
        return;
    case Grey_Ant:
        ActorInit_AntGrey(actorInstance);
        return;
    case Bullet_Hell_Ant:
        ActorInit_AntBulletHell(actorInstance);
        return;
    case Ant_Trio:
        func_80038F70(actorInstance);
        return;
    case Yellow_Ant:
        ActorInit_AntYellow(actorInstance);
        return;
    case Grey_Ant_Spawner:
        func_800383C0(actorInstance);
        return;
    case Bullet_Hell_Ant_Spawner:
        func_80038990(actorInstance);
        return;
    case Ant_Queen:
        ActorInit_AntQueen(actorInstance);
        return;
    case Ant_Queen_Ant:
        ActorInit_AntQueenDrone(actorInstance);
        return;
    case White_Bomb_Snake:
        func_8003BA38(actorInstance);
        return;
    case Grenade:
        func_8003BC8C(actorInstance);
        return;
    case Missile_Spawner:
        func_8003BD98(actorInstance);
        return;
    case Missile:
        func_8003BEE8(actorInstance);
        return;
    case Cannon:
        func_8003C20C(actorInstance);
        return;
    case Cannonball:
        func_8003C4B8(actorInstance);
        return;
    case BL_Boss_Segment:
        func_8003C8AC(actorInstance);
        return;
    case Explosion:
        func_8003D574(actorInstance);
        return;
    case Black_Chameleon_Projectile_Spawner:
        ActorInit_ChameleonBlackSpotSpawnner(actorInstance);
        return;
    case Black_Chameleon_Projectile:
        ActorInit_ChameleonBlackSpot(actorInstance);
        return;
    case Chomper:
        func_8003D998(actorInstance);
        return;
    case Sand_Crab:
        func_8003DE04(actorInstance);
        return;
    case Vulture:
        func_8003DFB4(actorInstance);
        return;
    case Arrows:
        func_8003E30C(actorInstance);
        return;
    case Boulder:
        func_8003E368(actorInstance);
        return;
    case Armadillo:
        func_8003E62C(actorInstance);
        return;
    case Pogo:
        func_8003FB04(actorInstance);
        return;
    case unk_23:
        func_8003FEB4(actorInstance);
        return;
    case Ice_Cream_Sandwich:
        func_8003FEC4(actorInstance);
        return;
    case Training_Room_Choco_Kid:
        func_80040068(actorInstance);
        return;
    case unk_1F:
        func_800401E8(actorInstance);
        return;
    case Popcorn:
        func_800404D8(actorInstance);
        return;
    case Cake_Boss:
        ActorInit_CakeBoss(actorInstance);
        return;
    case Cake_Boss_Strawberry:
        func_800405F8(actorInstance);
        return;
    case unk_28:
        func_80040CDC(actorInstance);
        return;
    case Cake_Boss_Choco_Kid:
        func_80040CEC(actorInstance);
        return;
    case Bowling_Ball:
        ActorInit_BowlingBall(actorInstance);
        return;
    case Bowling_Pins:
        ActorInit_BowlingPin(actorInstance);
        return;
    case Cue_Ball:
        ActorInit_CueBall(actorInstance);
        return;
    case Billiards_Ball:
        ActorInit_BilliardBall(actorInstance);
        return;
    case unk_2E:
        func_800431E8(actorInstance);
        return;
    case unk_2F:
        func_800434F4(actorInstance);
        return;
    case Cup:
        func_80043998(actorInstance);
        return;
    case Saucer:
        func_800439D8(actorInstance);
        return;
    case Metal_Sheet:
        func_80043A18(actorInstance);
        return;
    case Scroll:
        func_80043A58(actorInstance);
        return;
    case RNG_Room_Spawner:
        func_80043A98(actorInstance);
        return;
    case Mirror:
        func_80043C80(actorInstance);
        return;
    case Barrel_Jump_Fire_Spawner:
        func_80043FE8(actorInstance);
        return;
    case Barrel_Jump_Fire:
        func_800440FC(actorInstance);
        return;
    case Fire_Spitter:
        func_800442E0(actorInstance);
        return;
    case Candles:
        func_80044504(actorInstance);
        return;
    case Fire_Spawner:
        func_80044544(actorInstance);
        return;
    case Fire:
        func_80044584(actorInstance);
        return;
    case Sandal:
        func_80044708(actorInstance);
        return;
    case Pile_of_Books:
        ActtorInit_GhostBoss(actorInstance);
        return;
    case Pile_of_Books_Arm_Segments:
        func_80046DDC(actorInstance);
        return;
    case Pile_of_Books_Arm_Spitter:
        func_80046FB0(actorInstance);
        return;
    case Pile_of_Books_Projectile:
        ActorInit_GhostBossShot(actorInstance);
        return;
    case Spider_Spawner:
        func_8004718C(actorInstance);
        return;
    case Spider:
        func_80047350(actorInstance);
        return;
    case Spider_Trio:
        func_80047520(actorInstance);
        return;
    case Golem:
        func_800477C4(actorInstance);
        return;
    case Hedgehog:
        func_800479CC(actorInstance);
        return;
    case Fish:
        func_80047C04(actorInstance);
        return;
    case Lizard_Kong_Butterfly:
        func_800480EC(actorInstance);
        return;
    case Golem_Room_Spider_Spawner:
        func_8004769C(actorInstance);
        return;
    case Lizard_Kong_Butterfly_Spawner:
        func_800487D8(actorInstance);
        return;
    case Lizard_Kong_Boulder:
        func_800488C4(actorInstance);
        return;
    case Lizard_Kong:
        ActorInit_LizardKong(actorInstance);
        return;
    case Popcorn_Bucket_Spawner:
        func_80049780(actorInstance);
        return;
    case Popcorn_Bucket:
        func_800498B4(actorInstance);
        return;
    case unk_4E:
        func_800498F4(actorInstance);
        return;
    case Choco_Kid_Spawner:
        func_80049934(actorInstance);
        return;
    case Choco_Kid:
        func_80049A24(actorInstance);
        return;
    case unk_51:
        func_80049A64(actorInstance);
        return;
    case unk_52:
        func_80049AA4(actorInstance);
        return;
    case Battle_Mode_Sand_Crab_Spawner:
        func_80049AE4(actorInstance);
        return;
    case Battle_Mode_Sand_Crab:
        func_80049C34(actorInstance);
        return;
    case unk_55:
        func_80049D0C(actorInstance);
        return;
    case Battle_Mode_Fire:
        func_80049F04(actorInstance);
        return;
    case Battle_Mode_Saucer_Spawner:
        func_80049F14(actorInstance);
        return;
    case Battle_Mode_Saucer:
        func_8004A0A0(actorInstance);
        return;
    case unk_59:
        func_8004A184(actorInstance);
        return;
    case unk_5A:
        func_8004A310(actorInstance);
        return;
    case Power_Up_Spawner:
        ActorInit_PowerUpSpawner(actorInstance);
        return;
    case Falling_Grey_Ant_Spawner:
        func_8004A544(actorInstance);
        return;
    case Falling_Grey_Ant:
        func_8004A658(actorInstance);
        return;
    case unk_5E:
        func_8004AB00(actorInstance);
    }
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/Actors_Init.s")
#endif

//needs proper match
s32 Actor_Init(s32 type, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, f32 argA, f32 argB, f32 argC, f32 argD, f32 argE, f32 argF, f32 arg10, f32 arg11, f32 arg12, s32 arg13, s32 arg14, s32 arg15, s32 arg16) {
    s32 index;
    s32* pointer;

    pointer = &gActors->actorID;
    index = 0;
    while(1){
        if (*pointer == Actor_Null) {
            Actors_Init(index, type, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, argA, argB, argC, argD, argE, argF, arg10, arg11, arg12, arg13, arg14, arg15, arg16);
            gActorCount += 1;
            return index;
        }
        index++;
        pointer += 93;
        if (index == 64) {
            return -1;
        }
    }
}

s32 func_8002DF5C(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    s32 i;
    for (i = 0; i < 64; i++) {
        if (D_80170968[i].mode == 0) {
            D_80170968[i].mode = arg0;
            D_80170968[i].pos.x = arg1;
            D_80170968[i].pos.y = arg2;
            D_80170968[i].pos.z = arg3;
            D_80170968[i].yStretch = arg4; 
            return i;            
        }
    }
    return -1;
}

s32 Actor_SpawnAt(s32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    Actor_Init(arg1, arg2, arg3, arg4, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0);
}

//https://decomp.me/scratch/kvqhf
//init script
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8002E0CC.s")

//very close outside of args and registers
//https://decomp.me/scratch/hTq0d
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8002E5DC.s")

//camera controller of sorts.
//all of the context is ready though, as far as i'm aware
//https://decomp.me/scratch/tpjwG
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8002E9F4.s")

//camera follow player
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8002ECCC.s")

//related to animation
void func_8002F3D4(void) {
    if (PlayerPointer->shootLeft != 0) {
        PlayerPointer->shootLeft--;
    }
    if (PlayerPointer->vaultFall != 0) {
        PlayerPointer->vaultFall--;
    }
    if (PlayerPointer->canJump == 0) {
        PlayerPointer->vaultFall = 0;
    }
    if (PlayerPointer->canJump == 0) {
        if (PlayerPointer->forwardVel == 0.0f) {
            PlayerPointer->groundMovement = 0;
            PlayerPointer->globalTimer = (PlayerPointer->globalTimer + D_8010B328);
            return;
        }
        if (PlayerPointer->forwardVel < (65.0f * PlayerPointer->forwardImpulse)) {
            PlayerPointer->groundMovement = 1;
            PlayerPointer->globalTimer = (PlayerPointer->globalTimer + (((2.0f + (((PlayerPointer->forwardVel / ((65.0f * PlayerPointer->forwardImpulse) / 10.0f)) * PlayerPointer->forwardImpulse) / D_8010B32C)) / 4.5f) / D_8010B330));
            return;
        }
        PlayerPointer->groundMovement = 2;
        PlayerPointer->globalTimer = PlayerPointer->globalTimer + 1.5f * PlayerPointer->forwardImpulse / D_8010B334;
    }
}


void func_8002F528(s32 arg0) {
    PlayerPointer->playerHURTSTATE = 3;
    PlayerPointer->playerHURTTIMER = 0;
}


void func_8002F54C(f32 arg0, playerActor* PlayerP, s32 arg2) {
    PlayerP->vel.y = arg0;
    PlayerP->canJump = 1;
    PlayerP->hasTumbled = arg2;
    PlayerP->jumpReleasedInAir = 0;
    PlayerP->jumpAnimFrame = 0;
}



void func_8002F568(void) {
    PlayerPointer->vel.x = PlayerPointer->vaultlocity.x * 0.25f;
    PlayerPointer->vel.z = PlayerPointer->vaultlocity.z * 0.25f;
    if (TonguePointer->segments >= 4) {
        PlayerPointer->vaultFall = 12;
    }
}

//really long return
//https://decomp.me/scratch/IBzc9
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8002F5C4.s")

s32 func_8002F6DC(f32* arg0, f32 arg1) {
    f32 var_f0;
    f32 var_f2;

    var_f2 = 30.0f;
    
    if (*arg0 < arg1) {
        var_f0 = -(*arg0 - arg1);
    } else {
        var_f0 = *arg0 - arg1;
    }
    
    if (var_f0 > 180.0f) {
        var_f0 = 360.0f - var_f0;
    }
    
    if (var_f0 < 45.0f) {
        var_f2 = (var_f0 / D_8010B348) + 2.0f;
    }
    
    if (var_f2 <= var_f0) {
        *arg0 += var_f2 * (f32) func_8002D2A0(*arg0, arg1);
    } else {
        *arg0 = arg1;
    }
    
    wrapDegrees(arg0);
    
    if (var_f0 > 135.0f) {
        return 1;
    } else {
        return 0;
    }
}


void func_8002F7F0(void) {
    s32 aIM;

    aIM = TonguePointer->amountInMouth;
    if (aIM < 6) {
        PlayerPointer->forwardImpulse = (((24.0f - aIM) * D_8010B34C) / 24.0f);
    } else {
        PlayerPointer->forwardImpulse = D_8010B350;
    }
    if (PlayerPointer->power == POWERUP_MINI) {
        PlayerPointer->forwardImpulse = (PlayerPointer->forwardImpulse * 0.5f);
    }
}

void func_8002F884(s32 arg0, s32 arg1) {
    if (((D_801749B0 == 0) || (PlayerPointer->playerID != 1)) && (D_80168D78[arg0] == 0)) {
        if (gameModeCurrent == GAME_MODE_BATTLE_MENU) {
            Rumble_AddTime(arg0, ((arg1 * 100) / 6.0f), arg1);
        } else {
            Rumble_AddTime(arg0, ((arg1 * 100) * 0.5f), arg1);
        }
    }
}

void func_8002F960(Tongue* arg0) {
    func_8002F884(PlayerPointer->playerID, 2);
    PLAYSFX(16, 0, 0X10);
    arg0->wallTime = 10;
}

void func_8002F9BC(s32 arg0) {
    PlayerPointer->power = POWERUP_NONE;
    func_8002F7F0();
    PlayerPointer->tongueYOffset = 60.0f;
    PlayerPointer->tongueSeperation = 50.0f;
    PlayerPointer->hitboxSize = 30.0f;
    PlayerPointer->hitboxYStretch = 150.0f;
}

//very long
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8002FA34.s")

//
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80030DCC.s")

//https://decomp.me/scratch/BeR2b
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80030F3C.s")

//some kind of actor check (and set)
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800311C8.s")

void func_800312B0(s32 id) {
    Actor* currActor = &gActors[id];
    currActor->unknownPositionThings[0].unk_0C = currActor->sizeScalar * currActor->tScale;
    currActor->unknownPositionThings[0].unk_10 = currActor->sizeScalar * currActor->tYPos;
}


//? - Nathan R.
void func_800312FC(Actor* arg0, f32 arg1) {
    f32 temp_f12;
    arg0->unk_10C[0] = 0;
    arg0->unk_10C[1] = 14;
    arg0->unk_134[3] = D_8010B4C0;
    temp_f12 = (arg1 * 2 * D_8010B4C8) / D_8010B4D0;
    arg0->vel.x = __cosf(temp_f12) * 16.0f;
    arg0->vel.z = -__sinf(temp_f12) * 16.0f;
    arg0->tongueCollision = 0;
    playSoundEffect(109, &arg0->pos.x, &arg0->pos.y, &arg0->pos.z, 0, 0);
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800313BC.s")

void func_800314E4(Actor* arg0) {
    if (arg0->actorID == 1) {
        D_80172E88[arg0->unk_10C[0]].unk_00 = 0;
    }
    arg0->actorID = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80031518.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800317A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80031898.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80031DB0.s")

s32 func_80032074(s32 arg0) {
    Actor* temp_v0 = &gActors[arg0];
    if ((temp_v0->actorState != 0) && (temp_v0->actorState != 3)) {
        return 1;
    }
    if ((temp_v0->actorID == 0) || (temp_v0->unk_A0.unk_00 == 3)) {
        return 1;
    }
    return 0;
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800320EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800321F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80032720.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80032A0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80033048.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/pickup_collide_func.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80034104.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800343B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003449C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80034744.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80034B10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80034FFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80035374.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ControlTongue.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800360E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003624C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80036490.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80036900.s")

void func_80064BFC(f32, f32, f32);
extern f32 D_8010B748;
extern f64 D_8010B750;
extern f64 D_8010B758;
extern f64 D_8010B760;
extern f64 D_8010B768;
extern s32 D_80174980;
extern s32 D_80174988;
extern s32 D_801749AC;
void func_80036D74(playerActor* arg0, Tongue* arg1) {
    if (arg0->playerHURTSTATE == 0) {
        func_8002F884(arg0->playerID, 5);
        func_80064BFC(arg0->pos.x, arg0->pos.y, arg0->pos.z);
        playSoundEffect(0x17, NULL, NULL, NULL, 0, 0x10);
        if ((D_801749AC == 0) && (D_80174980 != 3) && (D_80174988 == 0)) {
            gNoHit = 0;
            if (--arg0->hp <= 0) {
                D_80174980 = 4;
                D_80174860->unk50 = 0.0f;
                D_80174860->size2 = D_8010B748;
            }
        }
        arg0->playerHURTSTATE = 1;
        arg0->playerHURTTIMER = 0;
        arg0->playerHURTANIM = 0;
        arg0->playerHURTBY = 0;
        func_80031DB0(arg0, arg1, 0);
        arg0->yAngle = CalculateAngleOfVector(-arg0->vel.x, arg0->vel.z);;
        arg0->vel.x = -__cosf(arg0->yAngle * 2 * D_8010B750 / D_8010B758) * 32.0f;
        arg0->vel.z = __sinf(arg0->yAngle * 2 * D_8010B760 / D_8010B768) * 32.0f;
        func_8002F54C(48.0f, arg0, 1);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80036F30.s")

s32 isExplodingActor(s32 arg0) {
    s32 temp_v0 = gActors[arg0].actorID;
    if ((temp_v0 == 13) || (temp_v0 == 14) || (temp_v0 == 16) || (temp_v0 == 18) || (temp_v0 == 21)) {
        return 1;
    }
    return 0;
}


s32 isActiveExplosion(Actor* actor) {
    if (actor->actorID == 20 && (u32)actor->globalTimer >= 5) {
        return 1;
    }
    return 0;
}

s32 func_80037538(s32* arg0) {
    if ((*arg0 == 19) || (*arg0 == 17) || (*arg0 == 18) || (*arg0 == 39) || (*arg0 == 41) || (*arg0 == 38)) {
        return 1;
    }
    return 0;
}

s32 func_80037584(s32 arg0) {
    s32 temp_v0 = gActors[arg0].actorID;
    if ((temp_v0 == 20) || (temp_v0 == 75) || (temp_v0 == 7) || (temp_v0 == 19) || (temp_v0 == 30) || (temp_v0 == 38) || (temp_v0 == 61) || (temp_v0 == 68) || (temp_v0 == 33)) {
        return 1;
    }
    return 0;
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003760C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80037D14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80037F98.s")

void func_800382B4(f32* arg0, f32 arg1) {
    if (*arg0 > arg1) {
        *arg0 = arg1;
    }
    if (*arg0 < -arg1) {
        *arg0 = -arg1;
    }
}

void func_800382F4(Actor* arg0) {
    arg0->vel.x = __cosf((arg0->unk_90 * 2 * D_8010B7A0) / D_8010B7A8) * arg0->unk_94;
    arg0->vel.z = -__sinf((arg0->unk_90 * 2 * D_8010B7B0) / D_8010B7B8) * arg0->unk_94;
}

void func_800383A0(Actor* actor) {
    CalcEnemyNextPosition(actor);
}


// Grey Ant Spawner: Elisiah
void func_800383C0(Actor* greyAntSpawnerActor) {
    if (greyAntSpawnerActor->unk_12C != 0) {
        D_801748A0 = 0;
        greyAntSpawnerActor->unk_10C[1] = greyAntSpawnerActor->unk_12C;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800383E4.s")

// Grey Ant Function: Rainchu and Elisiah
void ActorInit_AntGrey(Actor* actor) {
    actor->unk_94 = actor->unk_124;
    actor->unk_90 = CalcAngleBetween2DPoints(actor->pos.x, actor->pos.z, actor->position._f32.x, actor->position._f32.y);
    actor->unk_10C[0] = 4;
    actor->unk_134[0] = actor->pos.y;
    actor->pos.y = actor->pos.y - actor->unknownPositionThings[0].unk_10;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80038574.s")

// Bullet-Hell Ant Spawner: Elisiah
void func_80038990(Actor* bulletHellAntSpawnerActor) {
    bulletHellAntSpawnerActor->unk_10C[1] = bulletHellAntSpawnerActor->unk_128;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003899C.s")

//ActorInit_AntBulletHell: Nathan R.
void ActorInit_AntBulletHell(Actor* arg0) {
    f32 ang;
    f32 sine;
    arg0->unk_94 = arg0->position._f32.x;
    sine = __sinf((6 * D_8017499C * D_8010B7E8) / D_8010B7F0);
    ang = CalcAngleBetween2DPoints(arg0->pos.x, arg0->pos.z, PlayerPointer->pos.x, PlayerPointer->pos.z);
    arg0->unk_90 = arg0->position._f32.y + (ang + 12 * sine);
    wrapDegrees(&arg0->unk_90);
    func_800382F4(arg0);
}
 

s32 func_80038B98(Actor* arg0) {
    if (arg0->unk_98 != 0) {
        arg0->vel.y -= D_8010B7F8;
        arg0->vel.y -= arg0->vel.y * D_8010B7FC;
    }
    if (D_8017499C % 8 == 0) {
        PLAYSFXAT(102, arg0->pos, 1, 0);
    } 
    else if (D_8017499C % 8 == 4) {
        PLAYSFXAT(101, arg0->pos, 1, 0);
    }
    return 0;
}



#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80038C64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80038E64.s")

// Ant Trio Function: Elisiah
void func_80038F70(Actor* antTrioActor) {
    antTrioActor->unk_94 = (f32) antTrioActor->unk_124;
    antTrioActor->unk_90 = CalcAngleBetween2DPoints(antTrioActor->pos.x, antTrioActor->pos.z, antTrioActor->position._f32.x, antTrioActor->position._f32.y);
    antTrioActor->unk_98 = 1;
    func_800382F4(antTrioActor); 
    antTrioActor->unk_F0 = Random(0, 0x100);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80038FDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorInit_AntRed.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_AntRed.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800397DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorInit_AntYellow.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80039B0C.s")

// Green Ant Function: Rainchu and Elisiah
void ActorInit_AntGreen(Actor* greenAntActor) {
    greenAntActor->unk_134[0] = 0.0f;
    greenAntActor->unk_10C[2] = greenAntActor->unk_15C / greenAntActor->position._f32.x;
    greenAntActor->unk_F0 = Random(0, 0x100/*, greenAntActor*/);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003A208.s")

// Ant Queen Function: Elisiah
void ActorInit_AntQueen(Actor* antQueenActor) {
    antQueenActor->unk_120 = (s32) antQueenActor->unk_12C;
    antQueenActor->tongueCollision = 3;
    antQueenActor->unknownPositionThings[1].unk_0C = 150.0f;
    antQueenActor->unknownPositionThings[1].unk_10 = (f32) D_8010A6D0[Ant_Queen].y;
    antQueenActor->unknownPositionThings[2].unk_0C = 200.0f;
    antQueenActor->unknownPositionThings[2].unk_10 = (f32) D_8010A6D0[Ant_Queen].y;
    antQueenActor->unknownPositionThings[1].unk_04 = 150.0f;
    antQueenActor->unknownPositionThings[2].unk_04 = 300.0f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/QueenAnt_SpawnDrones.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_AntQueen.s")

// Ant Queen-Ant: Auto-Decompile
void ActorInit_AntQueenDrone(Actor* arg0) {
    wrapDegrees(&arg0->unk_90);
    arg0->unk_94 = arg0->position._f32.x;
    arg0->vel.y = D_8010B9E8;
    func_800382F4(arg0);
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_AntQueenDrone.s")

// White Bomb Snake Function: Elisiah
void func_8003BA38(Actor* whiteBombSnakeActor) {
    s32 temp_f10;

    whiteBombSnakeActor->unk_10C[0] = 4;
    whiteBombSnakeActor->unk_134[0] = whiteBombSnakeActor->pos.x;
    whiteBombSnakeActor->unk_134[1] = whiteBombSnakeActor->pos.z;
    whiteBombSnakeActor->unk_90 = CalcAngleBetween2DPoints(whiteBombSnakeActor->pos.x, whiteBombSnakeActor->pos.z, whiteBombSnakeActor->position._f32.x, whiteBombSnakeActor->position._f32.y);
    temp_f10 = (s32) (180.0f / whiteBombSnakeActor->unk_160);
    whiteBombSnakeActor->unk_10C[3] = temp_f10;
    whiteBombSnakeActor->unk_160 = (f32) (0xB4 / temp_f10);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003BADC.s")

// Grenade Function: Elisiah
void func_8003BC8C(Actor* grenadeActor) {
    grenadeActor->unk_94 = grenadeActor->position._f32.x;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003BC98.s")

// Missile Spawner: Auto-Decompile
void func_8003BD98(Actor* missileSpawnerActor) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003BDA0.s")

// Missile Function: Elisiah
void func_8003BEE8(Actor* missileActor) {
    missileActor->unk_134[0] = missileActor->pos.x;
    missileActor->unk_134[1] = missileActor->pos.y;
    missileActor->unk_134[2] = missileActor->pos.z;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003BF04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003C20C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003C308.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003C4B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003C584.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003C734.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003C8AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003CAD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_BombBossSegment.s")

void func_8003D574(Actor* actor) {
    f32 auigh = actor->position._f32.x;
    auigh *= 2;
    actor->unknownPositionThings[0].unk_0C = actor->position._f32.x;
    actor->tScale = actor->position._f32.x;
    actor->unknownPositionThings[0].unk_10 = auigh;
    actor->tYPos = auigh;
}

void ActorTick_Explosion(Actor* arg0) {               //Unsure if struct is actor
    if (arg0->unk_124 == arg0->globalTimer) {  //0x124 == 0x10
        func_80031518(arg0);
    }
}

//????: Nathan R.
void ActorTick_BombBossBomb(Actor* arg0) {
    f32 temp_f12;
    f32 temp_f2;

    if (arg0->unk_124 == arg0->globalTimer) {
        temp_f2 = D_8010BA90;
        temp_f12 = D_8010BA94;
        if (Actor_Init(20, arg0->pos.x, arg0->pos.y, arg0->pos.z, 0.0f, temp_f2, temp_f12, temp_f2, temp_f12, temp_f2, temp_f12, 200.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 10, 0, 0, 0) != -1) {
            func_800619F8(arg0->pos.x, arg0->pos.y, arg0->pos.z, 3, 100);
        }
        func_80031518(arg0);
    }
}
 

// Black Chameleon Projectile Spawner: Auto-Decompile
void ActorInit_ChameleonBlackSpotSpawnner(Actor* blackChameleonProjectileSpawnerActor){
    
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_ChameleonBlackSpotSpawnner.s")


void ActorInit_ChameleonBlackSpot(Actor* arg0) {
    arg0->sizeScalar = 0.0f;
    func_800312B0(arg0->actorIndex);
}

void ActorTick_ChameleonBlackSpot(Actor* arg0) {
    if (arg0->sizeScalar < 1.0f) {
        arg0->sizeScalar += D_8010BAA4;
        if (arg0->sizeScalar > 1.0f) {
            arg0->sizeScalar = 1.0f;
        }
        func_800312B0(arg0->actorIndex);
    }
}

void func_8003D998(Actor* arg0) {
    arg0->unk_134[0] = arg0->pos.y;
    arg0->pos.y -= 100.0f;
    arg0->unknownPositionThings[0].unk_0C = arg0->unk_164 * arg0->tScale;
    arg0->tScale *= arg0->unk_164;
    arg0->unknownPositionThings[0].unk_10 = arg0->unk_164 * arg0->tYPos;
    arg0->tYPos *= arg0->unk_164;
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003D9D8.s")

void func_8003DE04(Actor* actor) {
    actor->unk_134[0] = actor->pos.y;
    actor->pos.y -= 150.0f;
    actor->vel.y = 32.0f;
    actor->unk_94 = actor->position._f32.x;
    func_800382F4(actor);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003DE4C.s")

// Vulture Function: Elisiah
void func_8003DFB4(Actor* vultureActor) {
    vultureActor->unk_134[0] = vultureActor->pos.x;
    vultureActor->unk_134[1] = vultureActor->pos.y;
    vultureActor->unk_134[2] = vultureActor->pos.z;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorInit_Vulture.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003E224.s")

// Arrows Function: Elisiah
void func_8003E30C(Actor* arrowsActor) {
    arrowsActor->unk_94 = arrowsActor->position._f32.x;
    arrowsActor->unk_10C[0] = (s32) (arrowsActor->position._f32.y / arrowsActor->position._f32.x);
}


// Elisiah
void ActorTick_Arrow(Actor* arg0) {                   // unsure if struct is actor
    if (arg0->globalTimer == arg0->unk_10C[0]) {
        func_80031518(arg0);
    }
    func_800382F4(arg0);
}

// boulder
void func_8003E368(Actor* boulderActor){

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003E370.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003E48C.s")

// Armadillo Function: Elisiah
void func_8003E62C(Actor* armadilloActor) {
    armadilloActor->unk_134[0] = armadilloActor->position._f32.y / armadilloActor->position._f32.x;
    armadilloActor->pos.y = -400.0f;
    armadilloActor->unk_134[4] = 100.0f;
    armadilloActor->unk_10C[4] = armadilloActor->unk_130;
}

void func_8003E660(Actor* actor) {
    f32 pad = actor->vel.y;
    f32 var1 = D_8010BB30;
    actor->vel.y -= var1;
    if (actor->vel.y < 0.0f) {
        actor->vel.y -= actor->vel.y * (var1 / actor->unk_16C);
        if (actor->pos.y < 1000.0f) {
            actor->unk_10C[0] = 6;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003E6C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003E870.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003E968.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003EB38.s")

void func_8003FA38(Actor* arg0, f32 arg1, f32 arg2, f32 arg3) {
    f32 temp_f0;
    f32 temp_f2;
    s32 temp_f8;

    temp_f0 = arg1 - arg0->pos.x;
    temp_f2 = arg3 - arg0->pos.z;
    if (arg0->unk_10C[0] >= 3) {
        arg0->unk_94 = (f32) (arg0->unk_16C / 1.5f);
    } else {
        arg0->unk_94 = (f32) arg0->unk_16C;
    }
    temp_f8 = (s32) (NORM_2(temp_f0,temp_f2) / arg0->unk_94);
    arg0->unk_10C[1] = temp_f8;
    arg0->unk_134[3] = (f32) ((arg2 - arg0->pos.y) / (f32) temp_f8);
    arg0->unk_90 = CalculateAngleOfVector(temp_f0, -temp_f2);
}

// Pogo Function: Elisiah
void func_8003FB04(Actor* pogoActor) {
    pogoActor->unk_10C[0] = 1;
    pogoActor->unk_134[0] = pogoActor->pos.x;
    pogoActor->unk_134[1] = pogoActor->pos.y;
    pogoActor->unk_134[2] = pogoActor->pos.z;
    
    func_8003FA38(pogoActor, pogoActor->position._f32.x, pogoActor->position._f32.y, pogoActor->unk_15C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003FB4C.s")

// 0x21
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003FC54.s")

// 0x22
void func_8003FEAC(s32 arg0) {
}

// unk_23
void func_8003FEB4(Actor* unk_23Actor){

}

void func_8003FEBC(s32 arg0) {

}

// Ice Cream Sandwich Function: Elisiah
void func_8003FEC4(Actor* iceCreamSandwichActor) {
    iceCreamSandwichActor->unk_134[0] = iceCreamSandwichActor->pos.y;
    iceCreamSandwichActor->pos.y = iceCreamSandwichActor->pos.y + 2000.0f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_IceCreamSandwich.s")

// Training Room Choco Kid Function: Elisiah
void func_80040068(Actor* trainingRoomChocoKidActor) {
    trainingRoomChocoKidActor->unk_134[1] = trainingRoomChocoKidActor->pos.z;
    trainingRoomChocoKidActor->unk_94 = trainingRoomChocoKidActor->position._f32.x;
    trainingRoomChocoKidActor->unk_134[0] = trainingRoomChocoKidActor->pos.x;
    func_8006E16C(trainingRoomChocoKidActor->pos.x, trainingRoomChocoKidActor->pos.y + 50.0f, trainingRoomChocoKidActor->pos.z, 0x42F00000, 20.0f, 0xA);
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800400C8.s")

// unk_1F Function: Elisiah
void func_800401E8(Actor* unk_1FActor) {
    unk_1FActor->unk_134[0] = unk_1FActor->pos.y;
    unk_1FActor->unk_134[1] = unk_1FActor->pos.x;
    unk_1FActor->unk_134[2] = unk_1FActor->pos.z;
    unk_1FActor->pos.y = unk_1FActor->pos.y + 1000.0f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80040214.s")

//? - Nathan R.
void func_800404D8(Actor* arg0) {
    f32 s = __cosf(((arg0->unk_90 * 2 * D_8010BC80) / D_8010BC88));
    arg0->vel.x = arg0->position._f32.x * s;
    s = -__sinf(((arg0->unk_90 * 2 * D_8010BC90) / D_8010BC98));
    arg0->vel.z = arg0->position._f32.x * s;
    arg0->vel.y = 64.0f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80040590.s")

// Cake Boss Strawberry Function: Elisiah
void func_800405F8(Actor* cakeBossStrawberryActor) {
    if (cakeBossStrawberryActor->unk_128 == 6) {
        cakeBossStrawberryActor->tScale *= 2.0f;
        cakeBossStrawberryActor->tYPos *= 2.0f;
        cakeBossStrawberryActor->unknownPositionThings[0].unk_0C = cakeBossStrawberryActor->tScale;
        cakeBossStrawberryActor->unknownPositionThings[0].unk_10 = cakeBossStrawberryActor->tYPos;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_CakeBossStrawberry.s")

// unk_28
void func_80040CDC(Actor* unk_28Actor){

}

void ActorTick_28(s32 arg0) {

}

// Cake Boss Choco Kid: Auto-Decompile
void func_80040CEC(Actor* cakeBossChocoKidActor){

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_CakeBossChocoKid.s")

void ActorInit_CakeBoss(Actor* actor) {
    actor->tongueCollision = 3;
    actor->unk_10C[2] = 4; 
    actor->unknownPositionThings[1].unk_0C = actor->tScale;
    actor->unknownPositionThings[1].unk_04 = 250;
    actor->unknownPositionThings[1].unk_10 = actor->tYPos;
    actor->unknownPositionThings[1].unk_08 = 0.0f;
    actor->unknownPositionThings[1].unk_00 = 0.0f;
    actor->unknownPositionThings[2].unk_08 = 0.0f;
    actor->unknownPositionThings[2].unk_04 = 0.0f;
    actor->unknownPositionThings[2].unk_00 = 0.0f;
    actor->unknownPositionThings[2].unk_0C = 200;
    actor->unknownPositionThings[2].unk_10 = actor->tYPos * 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800410B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_CakeBoss.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/MinigameActors_PhysicsTick.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_MinigameActor.s")

// Cue Ball Actor: Elisiah
void ActorInit_CueBall(Actor* cueBallActor) {
    cueBallActor->unk_134[0] = cueBallActor->pos.y;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_CueBall.s")

// Billiards Ball
void ActorInit_BilliardBall(Actor* billiardsBallActor){

}

void ActorTick_BilliardBall(Actor* arg0) {
    f32 temp_f0_2;

    ActorTick_MinigameActor(arg0);
    temp_f0_2 = NORM_2(arg0->vel.x,arg0->vel.z);
    arg0->unk_94 = temp_f0_2;
    arg0->unk_134[0] = ((180.0f * temp_f0_2) / ( arg0->unknownPositionThings[0].unk_0C * D_8010BE30)) + arg0->unk_134[0];
    arg0->unk_90 = CalculateAngleOfVector(arg0->vel.x, -arg0->vel.z);
}

//(re)set bowling pins
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/Bowling_ResetPins.s")

// Bowling Ball Function: Elisiah
void ActorInit_BowlingBall(Actor* bowlingBallActor) {
    Bowling_ResetScore();
    Bowling_ResetPins();
    bowlingBallActor->unk_10C[0] = 0;
    bowlingBallActor->unk_134[0] = bowlingBallActor->pos.y;
    bowlingBallActor->unk_10C[3] = Rand() % 5;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_BowlingBall.s")

// Bowling Pins Function: Elisiah
void ActorInit_BowlingPin(Actor* bowlingPinsActor) {
    bowlingPinsActor->unk_90 = (f32) ((Rand() % 21) - 100);
    bowlingPinsActor->unk_10C[1] = (Rand() % 21) + 30;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_BowlingPin.s")

void func_800431E8(Actor* arg0) {
    arg0->unk_10C[0] = 0xA;
    arg0->unk_134[0] = arg0->pos.y;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800431FC.s")

// unk_2F
void func_800434F4(Actor* unk_2FActor){

}

void func_800434FC(s32 arg0) {

}

void func_80043504(Actor* arg0) {
    arg0->unk_10C[1] = arg0->unk_12C * arg0->unk_124 / arg0->unk_128;
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80043558.s")

// Cup Function: Elisiah
void func_80043998(Actor* cupActor) {
    func_80043504(cupActor);
}

void func_800439B8(void) {
    func_80043558();
}

// Saucer Function: Elisiah
void func_800439D8(Actor* saucerActor) {
    func_80043504(saucerActor);
}

void func_800439F8(void) {
    func_80043558();
}

// Metal Sheet Function: Elisiah
void func_80043A18(Actor* metalSheetActor) {
    func_80043504(metalSheetActor);
}

void func_80043A38(void) {
    func_80043558();
}

// Scroll Function: Elisiah
void func_80043A58(Actor* scrollActor) {
    func_80043504(scrollActor);
}

void func_80043A78(void) {
    func_80043558();
}

// RNG Room Spawner: Auto-Decompile
void func_80043A98(Actor* rngRoomSpawnerActor){

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80043AA0.s")

void func_80043C80(Actor* arg0) {
    if (D_8017499C % arg0->unk_128 == arg0->unk_124) {
        arg0->unk_10C[1] = 1;
        return;
    }
    arg0->unk_10C[1] = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80043CDC.s")

// Barrel Jump Fire Spawner: Auto-Decompile
void func_80043FE8(Actor* barrelJumpFireSpawnerActor){

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80043FF0.s")

// Barrel Jump Fire Actor: Elisiah
void func_800440FC(Actor* barrelJumpFireActor) {
    barrelJumpFireActor->unk_134[0] = CalcAngleBetween2DPoints(barrelJumpFireActor->position._f32.x, barrelJumpFireActor->position._f32.y, barrelJumpFireActor->pos.x, barrelJumpFireActor->pos.z);
    barrelJumpFireActor->unk_10C[0] = (s32) (360.0f / barrelJumpFireActor->unk_160) - 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80044158.s")

// Fire Spitter Function: Elisiah
void func_800442E0(Actor* fireSpitterActor) {
    fireSpitterActor->unk_10C[0] = fireSpitterActor->unk_124 - 1;
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800442F0.s")

// Candles Function: Elisiah
void func_80044504(Actor* candlesActor) {
    func_800442E0(candlesActor);
}

void func_80044524(void) {
    func_800442F0();
}

// Fire Spawner: Elisiah
void func_80044544(Actor* fireSpawnerActor) {
    func_80044504(fireSpawnerActor);
}

void func_80044564(void) {
    func_80044524();
}

//Fire: Auto-Decompile
void func_80044584(Actor* arg0) {
    arg0->unk_90 = CalcAngleBetween2DPoints(arg0->pos.x, arg0->pos.z, PlayerPointer->pos.x, PlayerPointer->pos.z);
    arg0->unk_10C[1] = arg0->unk_128;
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800445CC.s")

// Sandal Function: Elisiah
void func_80044708(Actor* sandalActor) {
    func_800431E8(sandalActor);
}


void func_80044728(void) {
    func_800431FC();
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/GhostBoss_SpawnArms.s")

// Pile of Books Function: Elisiah
void ActtorInit_GhostBoss(Actor* pileOfBooksActor) {
    pileOfBooksActor->unk_EC = 0;
    pileOfBooksActor->unk_10C[3] = pileOfBooksActor->unk_128 * 2;
    pileOfBooksActor->unk_134[1] = pileOfBooksActor->pos.z + -800.0f;
    pileOfBooksActor->unk_134[2] = pileOfBooksActor->unk_90;
    GhostBoss_SpawnArms(pileOfBooksActor);    // Compiled as empty originally?
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800448C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80044C30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80044D58.s")

s32 func_80044E80(s32* arg0, s32 arg1) {
    return (s32) ((arg0 + arg1)[67] + 5) / 6;
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80044EA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_GhostBoss.s")

//POB Arm Segments: Nathan R. & Rain (mostly rain)
void func_80046DDC(Actor* arg0) {
    f32 temp_f0;
    if ((arg0->unk_124 >= 2)) {
        if ((arg0->unk_124 < gActors[arg0->unk_128].unk_128 + 2)) {
            temp_f0 = D_8010C098;
            arg0->tScale *= temp_f0;
            arg0->unknownPositionThings[0].unk_0C *= temp_f0;            
        }
    }
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_GhostBossArmSegment.s")

void func_80046FB0(Actor* arg0) {

}

void func_80046FB8(Actor* arg0) {
    if (((arg0->unk_12C == 0) && (gActors[arg0->unk_128].unk_10C[2] == 4)) || ((arg0->unk_12C == 1) && (gActors[arg0->unk_128].unk_10C[2] == 5))) {
        if (arg0->unk_10C[0] == 0) {
            arg0->unk_F0 += 1;
            if (arg0->unk_F0 == 9) {
                arg0->unk_10C[0] = 1;
            }
        } 
        else {
            arg0->unk_F0 -= 1;
            if (arg0->unk_F0  == 0) {
                arg0->unk_10C[0] = 0;
            }
        }
    } 
    else {
        if (arg0->unk_F0 != 0) {
            arg0->unk_F0 -= 1;
            arg0->unk_10C[0] = 0;
        }
    }
}

void ActorInit_GhostBossShot(Actor* arg0) {
    arg0->unk_94 = arg0->position._f32.x;
    func_800382F4(arg0);
}

//ActorTick_GhostBossShot: Nathan R.
void ActorTick_GhostBossShot(Actor* arg0) {
    arg0->unk_10C[0] += 1;
    if (arg0->unk_10C[0] == 150) {
        func_800638AC(arg0->pos.x, arg0->pos.y, arg0->pos.z, arg0->pos.x, arg0->pos.y + 300.0f, arg0->pos.z, 255, 255, 255, 128, 8, 74);
        func_80031518(arg0);
        return;
    }
    if (arg0->pos.y > 50.0f) {
        arg0->pos.y -= 10.0f;
    }
}


// Spider Spawner: Auto-Decompile
void func_8004718C(Actor* spiderSpawnerActor){

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80047194.s")

// Spider Function: Elisiah
void func_80047350(Actor* spiderActor) {
    spiderActor->unk_98 = 1;
    spiderActor->vel.y = spiderActor->unk_160;
    spiderActor->unk_94 = spiderActor->position._f32.x;
    func_800382F4(spiderActor);    // Sometimes calls with a arg0, sometimes calls empty?
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80047384.s")

void func_80047520(Actor* arg0) {
    arg0->unk_134[0] = arg0->pos.x;
    arg0->unk_134[1] = arg0->pos.z;
    arg0->unk_90 = CalcAngleBetween2DPoints(arg0->pos.x, arg0->pos.z, arg0->position._f32.x, arg0->position._f32.y);
    arg0->unk_94 = arg0->unk_15C;
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80047568.s")

// Golem Room Spider Spawner: Auto-Decompile
void func_8004769C(Actor* golemRoomSpiderSpawnerActor){

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800476A4.s")

// Golem?: Auto-Decompile
void func_800477C4(Actor* golem) {

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800477CC.s")

// Hedgehog Function: Elisiah
void func_800479CC(Actor* hedgehogActor) {
    hedgehogActor->unk_134[0] = (f32) hedgehogActor->pos.x;
    hedgehogActor->unk_134[1] = (f32) hedgehogActor->pos.z;
    hedgehogActor->unk_134[2] = (f32) hedgehogActor->unk_90;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800479E8.s")

// Fish Function: Elisiah
void func_80047C04(Actor* fishActor) {
    fishActor->unk_134[0] = fishActor->pos.x;
    fishActor->unk_134[1] = fishActor->pos.z;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80047C18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80047FC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800480EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80048284.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800486E0.s")

// Lizard Kong Butterfly Spawner: Auto-Decompile
void func_800487D8(Actor* lizardKongButterflySpawnerActor){

}

// ????: Auto-Decompile
void func_800487E0(Actor* arg0) {
    if (gActorCount < arg0->unk_128) {
        Actor_Init(71, arg0->pos.x, arg0->pos.y, arg0->pos.z, arg0->unk_90, arg0->unk_F4, arg0->unk_F8, arg0->unk_FC, arg0->unk_100, arg0->unk_104, arg0->unk_108, arg0->position._f32.x, arg0->position._f32.y, arg0->unk_15C, arg0->unk_160, arg0->unk_164, arg0->unk_168, arg0->unk_16C, arg0->unk_170, arg0->unk_124, -1, arg0->unk_12C, 0);
    }
}

// ????: Auto-Decompile
void func_800488C4(Actor* arg0) {
    arg0->unk_98 = 1;
    arg0->unk_94 = arg0->position._f32.x;
    Actor_PlaySound(arg0, 143, 4, 4);
}

void func_800488FC(Actor* arg0) {
    arg0->unk_134[3] += arg0->unk_94;
    arg0->vel.y -= D_8010C0F4;
    
    if (arg0->unk_98 == 0) {
        arg0->unk_98 = 1;
        arg0->pos.y = arg0->unknownPositionThings[0].unk_10 / 2;
        arg0->vel.y = arg0->position._f32.y * -arg0->vel.y;
        arg0->unk_94 *= D_8010C0F8;
        PLAYSFXAT(0x8F, arg0->pos, 0, 0);
    }
    
    func_800382F4(arg0);
} 

//? - Nathan R.
void func_800489B0(Actor* arg0) {
    arg0->pos.x = arg0->unk_134[0] + (arg0->unk_134[2] * __cosf((arg0->unk_134[3] * 2 * D_8010C100) / D_8010C108));
    arg0->pos.z = arg0->unk_134[1] + (arg0->unk_134[2] * -__sinf((arg0->unk_134[3] * 2 * D_8010C110) / D_8010C118));
}



//Lizard Kong: Auto-Decompile + Nathan R. (it didnt like the placement of the 1000.0f set lol)
void ActorInit_LizardKong(Actor* arg0) {
    arg0->unk_134[2] = arg0->unk_15C;
    arg0->unk_134[3] = arg0->unk_90 + 180.0f;
    wrapDegrees(&arg0->unk_134[3]);
    arg0->unk_134[4] = arg0->unk_134[3];
    arg0->unk_10C[0] = 6;
    arg0->unk_134[0] = arg0->pos.x;
    arg0->unk_134[1] = arg0->pos.z;
    arg0->unk_134[5] = arg0->position._f32.x;
    arg0->pos.y += 1000.0f;
    func_800489B0(arg0);
    arg0->unk_EC = 5;
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80048AFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_LizardKong.s")

// Popcorn Bucket Spawner: Auto-Decompile
void func_80049780(Actor* popcornBucketSpawnerActor){

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80049788.s")

// Popcorn Bucket Function: Elisiah
void func_800498B4(Actor* popcornBucketActor) {
    func_800401E8(popcornBucketActor);
}

void func_800498D4(void) {
    func_80040214();
}


void func_800498F4(Actor* arg0) {
    func_800404D8(arg0);
}


void func_80049914(Actor* arg0) {
    func_80040590(arg0);
}


// Choco Kid Spawner: Auto-Decompile
void func_80049934(Actor* chocoKidSpawnerActor){

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004993C.s")

// Choco Kid Function: Elisiah
void func_80049A24(Actor* chocoKidActor) {
    func_80040068(chocoKidActor);
}

void func_80049A44(void) {
    func_800400C8();
}

// unk_51 Function: Elisiah
void func_80049A64(Actor* unk_51Actor) {
    func_800383C0(unk_51Actor);
}

void func_80049A84(void) {
    func_800383E4();
}

// unk_52 Function: Elisiah
void func_80049AA4(Actor* unk_52Actor) {
    ActorInit_AntGrey(unk_52Actor);
}

void func_80049AC4(void) {
    func_80038574();
}

// Battle Mode Sand Crab Spawner: Auto-Decompile
void func_80049AE4(Actor* battleModeSandCrabSpawnerActor){

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80049AEC.s")

// Battle Mode Sand Crab Function: Elisiah
void func_80049C34(Actor* battleModeSandCrabActor) {
    battleModeSandCrabActor->unk_94 = battleModeSandCrabActor->position._f32.x;
    battleModeSandCrabActor->vel.y = 32.0f;
    func_800382F4(battleModeSandCrabActor);
}


void func_80049C64(Actor* arg0) {
    if (arg0->unk_10C[1] == 0) {
        if ((arg0->unk_98 == 0) && (arg0->vel.y < 0.0f)) {
            arg0->vel.y = 0.0f;
            arg0->unk_10C[1] = 1;
            return;
        }
        arg0->vel.y -= D_8010C26C;
        arg0->pos.y += arg0->vel.y;
        return;
    }
    if (arg0->unk_98 != 0) {
        arg0->vel.y -= D_8010C270;
        arg0->vel.y -= arg0->vel.y * D_8010C274;
    }
}


// unk_55
void func_80049D0C(Actor* unk_55Actor){

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80049D14.s")


void func_80049F04(Actor* arg0) {

}

void func_80049F0C(s32 arg0) {

}

void func_80049F14(Actor* arg0) {
    s32 i;
    for (i = 0; i < arg0->unk_128; i++) {
        D_80174758[i] = -1;
    }
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80049F50.s")

// Battle Mode Saucer Function: Elisiah
void func_8004A0A0(Actor* battleModeSaucerActor) {
    battleModeSaucerActor->unk_134[0] = battleModeSaucerActor->pos.y;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004A0AC.s")

// unk_59
void func_8004A184(Actor* unk_59Actor){

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004A18C.s")

// unk_5A Function: Elisiah
void func_8004A310(Actor* unk_5AActor) {
    unk_5AActor->unk_98 = 1;
}

// unk_5C: Auto-Decomp/Nathan R.
void func_8004A31C(Actor* arg0) {
    if (arg0->unk_98 != 0) {
        arg0->vel.y -= D_8010C2B8;
        arg0->vel.y -= arg0->vel.y * D_8010C2BC;
        return;
    }
    func_800313BC(arg0->actorIndex, Random(0, 360));
}


// Power Up Spawner: Auto-Decompile
void ActorInit_PowerUpSpawner(Actor* powerUpSpawnerActor){
    
}

// unk_5B
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_PowerUpSpawner.s")

// Falling Grey Ant Spawner Auto-Decompile
void func_8004A544(Actor* fallingGreyAntSpawnerActor){
    
}

// unk_5C
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004A54C.s")

// Falling Grey Ant Function: Elisiah
void func_8004A658(Actor* fallingGreyAntActor) {
    fallingGreyAntActor->unk_94 = (f32) fallingGreyAntActor->unk_124;
    fallingGreyAntActor->unk_90 = CalcAngleBetween2DPoints(fallingGreyAntActor->pos.x, fallingGreyAntActor->pos.z, fallingGreyAntActor->position._f32.x, fallingGreyAntActor->position._f32.y);
    fallingGreyAntActor->unk_98 = 1;
    func_800382F4(fallingGreyAntActor);
    fallingGreyAntActor->unk_F0 = Random(0, 0x100);
}

// unk_5D
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004A6C4.s")

// unk_??
void func_8004AB00(Actor* unk_5EActor){
}

// unk_5E
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004AB08.s")

// unk_60
void ActorTick_PickupHeartFalling(Actor* arg0) {
    f32 temp_f2;

    if (arg0->unk_10C[0] == 0) {
        arg0->vel.y -= (D_8010C318 + (arg0->vel.y * D_8010C31C));
        temp_f2 = arg0->pos.y + arg0->vel.y;
        if (temp_f2 < 0.0f) {
            arg0->pos.y = 0.0f;
            arg0->unk_10C[0] = 1;
            return;
        }
        arg0->pos.y = temp_f2;
    }
}

void ActorTick_Powerup(Actor* arg0) {
    if (arg0->unk_10C[0] != 0) {
        arg0->unk_10C[1] += 1;
        if (arg0->unk_124 == arg0->unk_10C[1]) {
            func_80031518(arg0);
        }
    }
    else {
        arg0->vel.y -= (D_8010C320 + (arg0->vel.y * D_8010C324));
        if (arg0->pos.y + arg0->vel.y < arg0->position._f32.x) {
            arg0->pos.y = arg0->position._f32.x;
            arg0->unk_10C[0] = 1;
            return;
        }
        arg0->pos.y += arg0->vel.y;
    }
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/Actors_Tick.s")

//related to spawning collsion pieces
void func_8004BA5C(s32 arg0) {
    s32 i;
    PlayerPointer = &gPlayerActors[0];
    TonguePointer = gTongues;
    
    for (i = 0; i < arg0; i++) {
        Actors_Tick();
    }
}

s32 func_8004BF88(Actor*, s32, f32, f32);

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004BAC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004BC48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004BD7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004BE90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004BF88.s")

s32 func_8004BF88(Actor*, s32, f32, f32);

s32 func_8004C110(s32 arg0, f32 arg1, f32 arg2) {
    Actor* actorArray;
    s32 temp_v0;
    s32 var_s2;
    s32 actorIndex;
    s32 i;

    var_s2 = 0x05F5E100; //??
    actorIndex = -1;
    actorArray = gActors;
    for (i = 0; i < 64; i++, actorArray++) {
        temp_v0 = func_8004BF88(actorArray, arg0, arg1, arg2);
        //fake match
        do {
            if ((temp_v0 >= 0) && (temp_v0 < var_s2)) {
                var_s2 = temp_v0;
                actorIndex = i;
            }
        } while (0);
    }
    return actorIndex;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004C1C8.s")

s32 func_8004C374(u16* arg0, u16* arg1, s32 arg2) {
    if ((*arg1 & arg2) == 0) {
        *arg0 |= arg2;
        return 1;
    }
    return 0;
}

void func_8004C3A4(s16* arg0, f32 arg1) {
    f32 temp_f12 = (arg1 * 2 * D_8010C510) / D_8010C518;
    arg0[3] = __cosf(temp_f12) * 65.0f;
    arg0[4] = __sinf(temp_f12) * 65.0f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004C43C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004C600.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004CC6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004CCBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004CD9C.s")

//related to updating the screen
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004DDE0.s") 

#endif