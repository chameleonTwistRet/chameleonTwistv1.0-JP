#include "84E0.h"

/* Migrated BSS */
//TODO: type this data correctly

s32 D_801748A0;
s32 D_801748A4;
unk0 D_801748A8; //is size 0x58, struct is a guess
unk80174900 D_80174900;
s32 D_80174980;
s32 D_80174984;
s32 D_80174988;
s32 D_8017498C;
s32 D_80174990;
s32 D_80174994;
s32 D_80174998;
s32 gTimer;
s32 D_801749A0;
s32 D_801749A4;
s32 D_801749A8;
s32 Battle_GameType;
s32 D_801749B0;
s32 gIsMultiplayerPaused;
char D_801749B8[24];
s32 D_801749D0;


char D_801749D8[0x78];

unk80174A50 D_80174A50;
unk80175590 D_80175590;
unk80175598 D_80175598;
unk801755A8 D_801755A8;
unk801755E8 D_801755E8;
unk801755F8 D_801755F8;
unk80175608 D_80175608;

//const char padRodata[] = "\0\0\0\0\0\0\0";

/**
 * @brief Returns the result of the SUM_OF_SQUARES macro
 * 
 * @param x: first value 
 * @param y: second value
 * @return (f32) x^2 + y^2
 */
f32 SumOfSquaresWrapper(f32 x, f32 y) {
    return SUM_OF_SQUARES(x, y);
}

/**
 * @brief Wrap degrees to range [0-360)
 * 
 * @param theta_ptr: pointer to the angle to wrap
 * @return (ptr) altered angle
 */
void WrapDegrees(f32* theta_ptr) {
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

/**
 * @brief This function takes in a vector, (a,b) in the form of two floats, and a radius c. 
 * If the vector is outside the disk of radius c about (0,0), it is normalized to be on the boundary.
 * 
 * @param a: pointer to the x component of the vector
 * @param b: pointer to the y component of the vector
 * @param c: radius of a given disk
 */
void ClampPointToDisk(f32* a, f32* b, f32 radius) {
    f32 norm;
    f32 aSquaredPlusBSquared;

    aSquaredPlusBSquared = SUM_OF_SQUARES(*a, *b);
    if (!(aSquaredPlusBSquared <= SQ(radius))) {
        norm = sqrtf(aSquaredPlusBSquared);
        *a = (*a * radius) / norm;
        *b = (*b * radius) / norm;
    }
}

/**
 * @brief Calculate the counterclockwise angle between two 2D points relative to the positive x-axis.
 *
 * This function calculates the counterclockwise angle in radians between two 2D points (x1, y1) and (x2, y2)
 * relative to the positive x-axis. The angle is computed by CalculateAngleOfVector,
 * which uses a lookup table to determine the angle based on the provided 2D vector (x, y).
 *
 * @param x1 The x-coordinate of the first point.
 * @param y1 The y-coordinate of the first point.
 * @param x2 The x-coordinate of the second point.
 * @param y2 The y-coordinate of the second point.
 *
 * @return (f32) The counterclockwise angle between the two points in radians.
 */
f32 CalcAngleBetween2DPoints(f32 x1, f32 y1, f32 x2, f32 y2) {
    return CalculateAngleOfVector(x2 - x1, -(y2 - y1));
}

/**
 * @brief Reflect an angle about the x-axis to the first two quadrants (0 to 180 degrees).
 *
 * This function reflects an input angle about the x-axis, effectively mapping it to the first
 * two quadrants. The result is an angle within the range [0, 180] degrees.
 *
 * @param theta The input angle in degrees.
 * @return (f32) The reflected angle in the range [0, 180] degrees.
 */
f32 ReflectAngleToUpperQuadrants(f32 theta) {

    if (theta < 0.0f) {
        theta = -theta;
    }
    if (theta > 180.0f) {
        theta = 360.0f - theta;
    }
    return theta;
}

/**
 * @brief Check if one angle is within tolerance of another angle (degrees).
 *
 * This function determines whether the target angle is approximately equal to the reference angle within
 * the specified tolerance angle.
 *
 * @param targetAngle The angle to be checked.
 * @param refAngle The reference angle for comparison.
 * @param toleranceAngle The tolerance angle, within which the angles are considered approximately equal. [0, 180]
 *
 * @return (s32) 1 if target is within the specified tolerance of reference; otherwise, it returns 0.
 */
s32 IsAngleWithinTolerance(f32 targetAngle, f32 refAngle, f32 toleranceAngle) {

    if (ReflectAngleToUpperQuadrants(targetAngle - refAngle) <= toleranceAngle) {
        return 1;
    }
    return 0;
}

/**
 * @brief Compare two angles to determine their relative positioning within a 180-degree range.
 *
 * This function compares two angles, `refAngle` and `targetAngle`, to determine whether said target angle is within
 * a 180-degree range relative to the reference angle. It returns 1 if the target falls within this range,
 * and -1 if it does not.
 *
 * @param refAngle The reference angle, used to define the 180-degree range.
 * @param targetAngle The angle to be compared to `angleA`.
 *
 * @return (s32) 1 if target is within the 180-degree range relative to reference; otherwise, it returns -1.
 */
s32 AreAnglesWithin180Degrees(f32 refAngle, f32 targetAngle) {
    if (refAngle < 180.0f) {
        if ((refAngle < targetAngle) && (targetAngle <= (refAngle + 180.0f))) {
            return 1;
        }
        return -1;
    }
    if (((refAngle - 180.0f) < targetAngle) && (targetAngle <= refAngle)) {
        return -1;
    }
    return 1;
}

// Rotates angle one 90 degrees, then checks if angle two is within 180 degrees of it
s32 func_8002D328(f32 theta, f32 phi) {
    f32* theta_ptr;

    theta_ptr = &theta;
    theta = theta - 90.0f;
    WrapDegrees(theta_ptr);
    return AreAnglesWithin180Degrees(theta, phi);
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
        *arg0 += arg2 * (f32) AreAnglesWithin180Degrees(*arg0, arg1);
    } else {
        *arg0 = arg1;
        phi_v1 = 1;
    }
    sp1C = phi_v1;
    WrapDegrees(arg0);
    return sp1C;
}

void func_8002D434(f32 *vecX, f32 *vecY, f32 diffX, f32 diffY, f32 addAngle) {
    f32 newAngle;

    // find magnitude of vector (a,b) = vec - diff
    f32 a = *vecX - diffX;
    f32 b = *vecY - diffY;
    f32 c = sqrtf(SUM_OF_SQUARES(a, b));
    
    // If magnitude is not 0, calculate new angle and adjust vector
    if (c != 0.0f) {
        newAngle = CalculateAngleOfVector(a, -b) + addAngle;
        *vecX = cosf(DEGREES_TO_RADIANS_2PI(newAngle)) * c + diffX;
        *vecY = diffY + -(sinf(DEGREES_TO_RADIANS_2PI(newAngle)) * c);
    }
}

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

void Actors_Init(s32 actorIndex, s32 actorID, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, f32 argA, f32 argB, f32 argC, f32 argD, f32 argE, f32 argF, f32 arg10, f32 arg11, f32 arg12, f32 arg13, s32 arg14, s32 arg15, s32 arg16, s32 arg17) {
    Actor* actorInstance;
    s32 i;

    actorInstance = &gActors[actorIndex];

    for (i = 0; i < 6;) {
        actorInstance->userVariables[i] = 0;
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
    case RED_ANT:
        ActorInit_RedAnt(actorInstance);
        return;
    case GREEN_ANT:
        ActorInit_GreenAnt(actorInstance);
        return;
    case GREY_ANT:
        ActorInit_GreyAnt(actorInstance);
        return;
    case BULLET_HELL_ANT:
        ActorInit_AntBulletHell(actorInstance);
        return;
    case ANT_TRIO:
        ActorInit_AntTrio(actorInstance);
        return;
    case YELLOW_ANT:
        ActorInit_YellowAnt(actorInstance);
        return;
    case GREY_ANT_SPAWNER:
        ActorInit_GreyAntSpawner(actorInstance);
        return;
    case BULLET_HELL_ANT_SPAWNER:
        ActorInit_BulletHellAntSpawner(actorInstance);
        return;
    case ANT_QUEEN:
        ActorInit_AntQueen(actorInstance);
        return;
    case ANT_QUEEN_ANT:
        ActorInit_AntQueenDrone(actorInstance);
        return;
    case WHITE_BOMB_SNAKE:
        ActorInit_WhiteBombSnake(actorInstance);
        return;
    case GRENADE:
        ActorInit_Grenade(actorInstance);
        return;
    case MISSILE_SPAWNER:
        ActorInit_MissileSpawner(actorInstance);
        return;
    case MISSILE:
        ActorInit_Missile(actorInstance);
        return;
    case CANNON:
        ActorInit_Cannon(actorInstance);
        return;
    case CANNONBALL:
        ActorInit_Cannonball(actorInstance);
        return;
    case BL_BOSS_SEGMENT:
        func_8003C8AC(actorInstance);
        return;
    case EXPLOSION:
        func_8003D574(actorInstance);
        return;
    case BLACK_CHAMELEON_PROJECTILE_SPAWNER:
        ActorInit_ChameleonBlackSpotSpawnner(actorInstance);
        return;
    case BLACK_CHAMELEON_PROJECTILE:
        ActorInit_ChameleonBlackSpot(actorInstance);
        return;
    case CHOMPER:
        ActorInit_Chomper(actorInstance);
        return;
    case SAND_CRAB:
        ActorInit_SandCrab(actorInstance);
        return;
    case VULTURE:
        ActorInit_Vulture(actorInstance);
        return;
    case ARROWS:
        ActorInit_Arrows(actorInstance);
        return;
    case BOULDER:
        func_8003E368(actorInstance);
        return;
    case ARMADILLO:
        func_8003E62C(actorInstance);
        return;
    case POGO:
        func_8003FB04(actorInstance);
        return;
    case UNK_23:
        func_8003FEB4(actorInstance);
        return;
    case ICE_CREAM_SANDWICH:
        ActorInit_IceCreamSandwich(actorInstance);
        return;
    case CHOCO_KID:
        ActorInit_ChocoKid(actorInstance);
        return;
    case UNK_1F:
        ActorInit_Unk1F(actorInstance);
        return;
    case POPCORN:
        ActorInit_Popcorn(actorInstance);
        return;
    case CAKE_BOSS:
        ActorInit_CakeBoss(actorInstance);
        return;
    case CAKE_BOSS_STRAWBERRY:
        func_800405F8(actorInstance);
        return;
    case UNK_28:
        func_80040CDC(actorInstance);
        return;
    case CAKE_BOSS_CHOCO_KID:
        func_80040CEC(actorInstance);
        return;
    case BOWLING_BALL:
        ActorInit_BowlingBall(actorInstance);
        return;
    case BOWLING_PINS:
        ActorInit_BowlingPin(actorInstance);
        return;
    case CUE_BALL:
        ActorInit_CueBall(actorInstance);
        return;
    case BILLIARDS_BALL:
        ActorInit_BilliardBall(actorInstance);
        return;
    case UNK_2E:
        ActorInit_Unk2E(actorInstance);
        return;
    case UNK_2F:
        func_800434F4(actorInstance);
        return;
    case CUP:
        ActorInit_Cup(actorInstance);
        return;
    case SAUCER:
        ActorInit_Saucer(actorInstance);
        return;
    case METAL_SHEET:
        ActorInit_MetalSheet(actorInstance);
        return;
    case SCROLL:
        ActorInit_Scroll(actorInstance);
        return;
    case RNG_ROOM_SPAWNER:
        ActorInit_RNGRoomSpawner(actorInstance);
        return;
    case MIRROR:
        ActorInit_Mirror(actorInstance);
        return;
    case BARREL_JUMP_FIRE_SPAWNER:
        ActorInit_BarrelFireSpawner(actorInstance);
        return;
    case BARREL_JUMP_FIRE:
        ActorInit_BarrelFire(actorInstance);
        return;
    case FIRE_SPITTER:
        ActorInit_FireSpitter(actorInstance);
        return;
    case CANDLES:
        ActorInit_Candles(actorInstance);
        return;
    case FIRE_SPAWNER:
        ActorInit_FireSpawner(actorInstance);
        return;
    case FIRE:
        ActorInit_Fire(actorInstance);
        return;
    case SANDAL:
        ActorInit_Sandal(actorInstance);
        return;
    case PILE_OF_BOOKS:
        ActorInit_GhostBoss(actorInstance);
        return;
    case PILE_OF_BOOKS_ARM_SEGMENTS:
        func_80046DDC(actorInstance);
        return;
    case PILE_OF_BOOKS_ARM_SPITTER:
        func_80046FB0(actorInstance);
        return;
    case PILE_OF_BOOKS_PROJECTILE:
        ActorInit_GhostBossShot(actorInstance);
        return;
    case SPIDER_SPAWNER:
        ActorInit_SpiderSpawner(actorInstance);
        return;
    case SPIDER:
        ActorInit_Spider(actorInstance);
        return;
    case SPIDER_TRIO:
        ActorInit_SpiderTrio(actorInstance);
        return;
    case GOLEM:
        func_800477C4(actorInstance);
        return;
    case HEDGEHOG:
        ActorInit_Hedgehog(actorInstance);
        return;
    case FISH:
        ActorInit_Fish(actorInstance);
        return;
    case LIZARD_KONG_BUTTERFLY:
        func_800480EC(actorInstance);
        return;
    case GOLEM_ROOM_SPIDER_SPAWNER:
        func_8004769C(actorInstance);
        return;
    case LIZARD_KONG_BUTTERFLY_SPAWNER:
        func_800487D8(actorInstance);
        return;
    case LIZARD_KONG_BOULDER:
        func_800488C4(actorInstance);
        return;
    case LIZARD_KONG:
        ActorInit_LizardKong(actorInstance);
        return;
    case POPCORN_BUCKET_SPAWNER:
        ActorInit_PopcornBucketSpawner(actorInstance);
        return;
    case POPCORN_BUCKET:
        ActorInit_PopcornBucket(actorInstance);
        return;
    case UNK_4E:
        ActorInit_Unk4E(actorInstance);
        return;
    case CHOCO_KID_SPAWNER:
        ActorInit_ChocoKidSpawner(actorInstance);
        return;
    case SPAWNED_CHOCO_KID:
        ActorInit_SpawnedChocoKid(actorInstance);
        return;
    case GREY_ANT_SPAWNER_WRAPPER:
        ActorInit_GreyAntSpawnerWrapper(actorInstance);
        return;
    case UNK_52:
        ActorInit_GreyAntWrapper(actorInstance);
        return;
    case BATTLE_MODE_SAND_CRAB_SPAWNER:
        ActorInit_BattleModeSandCrabSpawner(actorInstance);
        return;
    case BATTLE_MODE_SAND_CRAB:
        ActorInit_BattleModeSandCrab(actorInstance);
        return;
    case BATTLE_MODE_FIRE_SPAWNER:
        ActorInit_BattleModeFireSpawner(actorInstance);
        return;
    case BATTLE_MODE_FIRE:
        ActorInit_BattleModeFire(actorInstance);
        return;
    case BATTLE_MODE_SAUCER_SPAWNER:
        ActorInit_BattleModeSaucerSpawner(actorInstance);
        return;
    case BATTLE_MODE_SAUCER:
        ActorInit_BattleModeSaucer(actorInstance);
        return;
    case UNK_59:
        ActorInit_Unk59(actorInstance);
        return;
    case UNK_5A:
        ActorInit_Unk5A(actorInstance);
        return;
    case POWER_UP_SPAWNER:
        ActorInit_PowerUpSpawner(actorInstance);
        return;
    case FALLING_GREY_ANT_SPAWNER:
        ActorInit_FallingGreyAntSpawner(actorInstance);
        return;
    case FALLING_GREY_ANT:
        ActorInit_FallingGreyAnt(actorInstance);
        return;
    case UNK_FIRE_SPAWNER:
        ActorInit_UnkFireSpawner(actorInstance);
    }
}

s32 Actor_Init(s32 id, f32 posX, f32 posY, f32 posZ, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, f32 argA, f32 argB, f32 argC, f32 argD, f32 argE, f32 argF, f32 arg10, f32 arg11, f32 arg12, s32 arg13, s32 arg14, s32 arg15, s32 arg16) {
    s32 i;
    Actor* curActor = gActors;

    for (i = 0; i < ARRAY_COUNT(gActors); i++, curActor++) {
        if (curActor->actorID == 0) {
            Actors_Init(i, id, posX, posY, posZ, arg4, arg5, arg6, arg7, arg8, arg9, argA, argB, argC, argD, argE, argF, arg10, arg11, arg12, arg13, arg14, arg15, arg16);
            gActorCount++;
            return i;
        }
    }
    return -1;
}

s32 func_8002DF5C(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gActors); i++) {
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

s32 Actor_SpawnAt(s32 actorID, f32 posX, f32 posY, f32 posZ) {
    Actor_Init(actorID, posX, posY, posZ, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0);
}

//https://decomp.me/scratch/kvqhf
//init script
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8002E0CC.s")

void func_8002E5DC(UnkTempStruct arg0) {
    s32 sp2C;

    sp2C = -2;
    if (1 == D_80236974) {
        sp2C = -1;
    }

    D_80174860->size1 = D_80174860->size1 + ((D_80174860->size2 - D_80174860->size1) * 0.200000003f);
    if (D_801749A8 == 0) {
        if (((gCurrentStage == 4) && (gCurrentZone == 0xF)) || ((gCurrentStage == 5) && (gCurrentZone == 0xE))) {
            if (D_80174860->unk0 == 1) {
                PlaySoundEffect(0x2C, 0, 0, 0, 0, 0x10);
                D_80174860->unk0 = 0;
                if (D_80174860->unk40 == 2) {
                    PlaySoundEffect(0x2D, 0, 0, 0, 0, 0x10);
                    D_80174860->size2 /= 1.299999952f;
                    D_80174860->unk40 -= 1;
                }
                func_800D34CC();
            }
        } else if ((Battle_GameType == 0) && (1 != D_80236974) && (arg0.unk_02 & 0x20)) {
            PlaySoundEffect(0x2C, 0, 0, 0, 0, 0x10);
            if (D_80174860->unk0 == 0) {
                D_80174860->unk0 = 1;
            } else {
                D_80174860->unk0 = 0;
                if (D_80174860->unk40 == 2) {
                    PlaySoundEffect(0x2D, 0, 0, 0, 0, 0x10);
                    D_80174860->size2 /= 1.299999952f;
                    D_80174860->unk40 -= 1;
                }
            }
            func_800D34CC();
        }
        if ((arg0.unk_02 & 4) && (((D_80174860->unk0 == 1) && (D_80174860->unk40 < 2)) || (D_80174860->unk40 <= 0))) {
            PlaySoundEffect(0x2D, 0, 0, 0, 0, 0x10);
            D_80174860->size2 *= 1.299999952f;
            D_80174860->unk40 += 1;
        }
        if ((arg0.unk_02 & 8) && (sp2C < D_80174860->unk40)) {
            PlaySoundEffect(0x2D, 0, 0, 0, 0, 0x10);
            D_80174860->size2 /= 1.299999952f;
            D_80174860->unk40 -= 1;
        }
        if ((arg0.unk_02 & 1) && (D_80174860->pushHoriz < 9)) {
            PlaySoundEffect(0x2D, 0, 0, 0, 0, 0x10);
            D_80174860->pushHoriz += 9;
        }
        if ((arg0.unk_02 & 2) && (D_80174860->pushHoriz >= -8)) {
            PlaySoundEffect(0x2D, 0, 0, 0, 0, 0x10);
            D_80174860->pushHoriz -= 9;
        }
    }
}

//camera controller of sorts
//https://decomp.me/scratch/tpjwG
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8002E9F4.s")

//camera follow player
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8002ECCC.s")

//related to animation
void func_8002F3D4(void) {
    if (gCurrentActivePlayerPointer->amountLeftToShoot != 0) {
        gCurrentActivePlayerPointer->amountLeftToShoot--;
    }
    if (gCurrentActivePlayerPointer->vaultFall != 0) {
        gCurrentActivePlayerPointer->vaultFall--;
    }
    if (gCurrentActivePlayerPointer->canJump == 0) {
        gCurrentActivePlayerPointer->vaultFall = 0;
    }
    if (gCurrentActivePlayerPointer->canJump == 0) {
        if (gCurrentActivePlayerPointer->forwardVel == 0.0f) {
            gCurrentActivePlayerPointer->groundMovement = 0;
            gCurrentActivePlayerPointer->globalTimer = (gCurrentActivePlayerPointer->globalTimer + 0.3000000119f);
            return;
        }
        if (gCurrentActivePlayerPointer->forwardVel < (65.0f * gCurrentActivePlayerPointer->forwardImpulse)) {
            gCurrentActivePlayerPointer->groundMovement = 1;
            gCurrentActivePlayerPointer->globalTimer = (gCurrentActivePlayerPointer->globalTimer + (((2.0f + (((gCurrentActivePlayerPointer->forwardVel / ((65.0f * gCurrentActivePlayerPointer->forwardImpulse) / 10.0f)) * gCurrentActivePlayerPointer->forwardImpulse) / 0.3200000226f)) / 4.5f) / 1.799999952f));
            return;
        }
        gCurrentActivePlayerPointer->groundMovement = 2;
        gCurrentActivePlayerPointer->globalTimer = gCurrentActivePlayerPointer->globalTimer + 1.5f * gCurrentActivePlayerPointer->forwardImpulse / 0.3200000226f;
    }
}


void func_8002F528(s32 arg0) {
    gCurrentActivePlayerPointer->playerHURTSTATE = 3;
    gCurrentActivePlayerPointer->playerHURTTIMER = 0;
}


void func_8002F54C(f32 arg0, PlayerActor* PlayerP, s32 arg2) {
    PlayerP->vel.y = arg0;
    PlayerP->canJump = 1;
    PlayerP->hasTumbled = arg2;
    PlayerP->jumpReleasedInAir = 0;
    PlayerP->jumpAnimFrame = 0;
}



void func_8002F568(void) {
    gCurrentActivePlayerPointer->vel.x = gCurrentActivePlayerPointer->vaultlocity.x * 0.25f;
    gCurrentActivePlayerPointer->vel.z = gCurrentActivePlayerPointer->vaultlocity.z * 0.25f;
    if (gTongueOnePointer->segments >= 4) {
        gCurrentActivePlayerPointer->vaultFall = 12;
    }
}

f32 func_8002F5C4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0 = arg1 - arg0;
    if (arg2 < arg0) {
        arg0 = arg2;
    }
    return ((( ((__sinf(arg0 * 0x168 * arg3 / arg2 * 2 * PI / 360.0) * (arg2 - arg0)) / arg2) + 3.0) * arg0) / 4) / arg2;
}

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
        var_f2 = (var_f0 / 1.607142806f) + 2.0f;
    }
    
    if (var_f2 <= var_f0) {
        *arg0 += var_f2 * AreAnglesWithin180Degrees(*arg0, arg1);
    } else {
        *arg0 = arg1;
    }
    
    WrapDegrees(arg0);
    
    if (var_f0 > 135.0f) {
        return 1;
    } else {
        return 0;
    }
}

/**
 * @brief Sets the player's forward impulse (xz speed)
 */
void SetPlayerImpulse(void) {
    s32 amountInMouth;

    amountInMouth = gTongueOnePointer->amountInMouth;
    if (amountInMouth < 6) {
        // set impulse between 0.93 and 1.0
        gCurrentActivePlayerPointer->forwardImpulse = (((24.0f - amountInMouth) * 0.3200000226f) / 24.0f);
    } else {
        gCurrentActivePlayerPointer->forwardImpulse = 0.2400000095f;
    }
    if (gCurrentActivePlayerPointer->power == POWERUP_MINI) {
        gCurrentActivePlayerPointer->forwardImpulse = (gCurrentActivePlayerPointer->forwardImpulse * 0.5f);
    }
}

void func_8002F884(s32 arg0, s32 arg1) {
    if (((D_801749B0 == 0) || (gCurrentActivePlayerPointer->playerID != 1)) && (D_80168D78[arg0] == 0)) {
        if (gGameModeCurrent == GAME_MODE_BATTLE_MENU) {
            Rumble_AddTime(arg0, ((arg1 * 100) / 6.0f));
        } else {
            Rumble_AddTime(arg0, ((arg1 * 100) * 0.5f));
        }
    }
}

void func_8002F960(Tongue* arg0) {
    func_8002F884(gCurrentActivePlayerPointer->playerID, 2);
    PLAYSFX(16, 0, 0X10);
    arg0->wallTime = 10;
}

void ClearPlayerPowerups(PlayerActor* arg0) {
    gCurrentActivePlayerPointer->power = POWERUP_NONE;
    SetPlayerImpulse();
    gCurrentActivePlayerPointer->tongueYOffset = 60.0f;
    gCurrentActivePlayerPointer->tongueSeperation = 50.0f;
    gCurrentActivePlayerPointer->hitboxSize = 30.0f;
    gCurrentActivePlayerPointer->hitboxYStretch = 150.0f;
}

//very long
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8002FA34.s")

//
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80030DCC.s")

//https://decomp.me/scratch/BeR2b
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80030F3C.s")

void func_800311C8(Actor* arg0) {
    Actor* curActor;
    s32 i;

    if ((arg0->actorState == 0) && (arg0->actorID == 0x47)) {
        if (arg0->userVariables[3] == 0) {
            D_80170E68[arg0->unk_128].unk_00 = 0;
            for (i = 0; i < MAX_ACTORS; i++, curActor++) {
                if ((gActors[i].actorID == 0x47) && (arg0->unk_128 == gActors[i].unk_128)) {
                    gActors[i].userVariables[3] = -1;
                }                
            }
        }
    }
}

void func_800312B0(s32 id) {
    Actor* currActor = &gActors[id];
    currActor->unknownPositionThings[0].unk_0C = currActor->sizeScalar * currActor->tScale;
    currActor->unknownPositionThings[0].unk_10 = currActor->sizeScalar * currActor->tYPos;
}


//? - Nathan R.
void func_800312FC(Actor* arg0, f32 arg1) {
    arg0->userVariables[0] = 0;
    arg0->userVariables[1] = 14;
    arg0->unk_134[3] = 76.80000305f;
    arg0->vel.x = __cosf(DEGREES_TO_RADIANS_2PI(arg1)) * 16.0f;     //cosf(DEGREES_TO_RADIANS_2PI(arg1)) * 16.0f;
    arg0->vel.z = -__sinf(DEGREES_TO_RADIANS_2PI(arg1)) * 16.0f;
    arg0->tongueCollision = 0;
    PlaySoundEffect(109, &arg0->pos.x, &arg0->pos.y, &arg0->pos.z, 0, 0);
}


void func_800313BC(s32 arg0, f32 arg1) {
    func_800311C8(gActors+arg0);
    gActors[arg0].actorState = 4;
    gActors[arg0].unk_C8 = 0;
    gActors[arg0].sizeScalar = 1.0f;
    func_800312B0(arg0);
    gActors[arg0].vel.y = 38.4f;
    gActors[arg0].vel.x = __cosf(DEGREES_TO_RADIANS_2PI(arg1)) * 12.0f;
    gActors[arg0].vel.z = -__sinf(DEGREES_TO_RADIANS_2PI(arg1)) * 12.0f;
    if (gActors[arg0].actorID == SPIDER_SPAWNER) {
        levelFlags[(s32)gActors[arg0].unk_164] = 1;
    }
}

void func_800314E4(Actor* arg0) {
    if (arg0->actorID == 1) {
        D_80172E88[arg0->userVariables[0]].unk_00 = 0;
    }
    arg0->actorID = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80031518.s")

//has to do with tonguing poles and camera stuff?
void func_800317A0(void) {
    s32 i;
    gTongueOnePointer->controlAngle = gCurrentActivePlayerPointer->yAngle;
    gTongueOnePointer->length = 0;
    
    for(i = gTongueOnePointer->poleSegmentAt; i < gTongueOnePointer->cameraSegmentAt; i++){
        if (((gTongueOnePointer->tongueXs[i] != 0.0f) || (gTongueOnePointer->tongueZs[i] != 0.0f)) && (gTongueOnePointer->length < gTongueOnePointer->tongueForwards[i])) {
            gTongueOnePointer->controlAngle = CalculateAngleOfVector(gTongueOnePointer->tongueXs[i], gTongueOnePointer->tongueZs[i]);
            gTongueOnePointer->length = gTongueOnePointer->tongueForwards[i];
        }
    }
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80031898.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80031DB0.s")

s32 func_80032074(s32 arg0) {
    Actor* actor = &gActors[arg0];
    if ((actor->actorState != 0) && (actor->actorState != 3)) {
        return 1;
    }
    if ((actor->actorID == 0) || (actor->unk_A0.unk_00 == 3)) {
        return 1;
    }
    return 0;
}


void func_800320EC(s32 arg0, f32 arg1, f32 arg2) {
    f32 angle;

    angle = CalcAngleBetween2DPoints(arg1, arg2, D_80170968[gTongueOnePointer->poleID].pos.x, D_80170968[gTongueOnePointer->poleID].pos.z);
    if (gActors[arg0].userVariables[0] == 0) {
        if (gTimer != (gActors[arg0].userVariables[3] + 1)) {
            gActors[arg0].userVariables[3] = gTimer;
            return;
        }
        angle += gTongueOnePointer->tongueDir * 90.0f;
        WrapDegrees(&angle);
        
        gActors[arg0].unk_134[2] = angle;
        gActors[arg0].userVariables[0] = 1;
        gActors[arg0].unk_134[0] = angle;
        gActors[arg0].unk_134[1] = 0.0f;
        gActors[arg0].unk_134[3] = 0.0f;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800321F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80032720.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80032A0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80033048.s")

void pickup_collide_func(s32 actorIndex) {
    Actor* actor;
    s32 var_s0;
    s32 var_v1;
    s32 i;

    actor = &gActors[actorIndex];
    var_s0 = 0;

    switch (actor->actorID) {
    case R_HEART:
    case FALLING_R_HEART:
        if (gCurrentActivePlayerPointer->hp < 10) {
            gCurrentActivePlayerPointer->hp++;
        }
        PlaySoundEffect(0x3A, NULL, NULL, NULL, 0, 0x10);
        var_s0 = 0x1E;
        break;
    case O_HEART:
        gCurrentActivePlayerPointer->hp += 3;
        if (gCurrentActivePlayerPointer->hp > 10) {
            gCurrentActivePlayerPointer->hp = 10;
        }
        PlaySoundEffect(0x3A, NULL, NULL, NULL, 0, 0x10);
        var_s0 = 0x28;
        break;
    case Y_HEART:
        gCurrentActivePlayerPointer->hp = 10;
        PlaySoundEffect(0x3A, NULL, NULL, NULL, 0, 0x10);
        var_s0 = 0x32;
        break;
    case CROWN:
        PlaySoundEffect(0x39, NULL, NULL, NULL, 0, 0x10);
        var_s0 = 0x46;
        break;
    case CARROT:
        PlaySoundEffect(0x39, NULL, NULL, NULL, 0, 0x10);
        var_s0 = 0x50;
        break;
    case UNK_65:
        PlaySoundEffect(0x39, NULL, NULL, NULL, 0, 0x10);
        var_s0 = 0x5A;
        break;
    case TIME_STOP_POWER_UP:
        ClearPlayerPowerups(gCurrentActivePlayerPointer);
        gCurrentActivePlayerPointer->power = 4;
        gCurrentActivePlayerPointer->powerTimer = 0;
        gCurrentActivePlayerPointer->powerTimerTill = actor->unk_128;
        PlaySoundEffect(0x3A, NULL, NULL, NULL, 0, 0x10);
        var_s0 = 0x32;
        break;
    case BIG_FEET_POWER_UP:
        ClearPlayerPowerups(gCurrentActivePlayerPointer);
        gCurrentActivePlayerPointer->power = 1;
        gCurrentActivePlayerPointer->powerTimer = 0;
        gCurrentActivePlayerPointer->powerTimerTill = actor->unk_128;
        PlaySoundEffect(0x3A, NULL, NULL, NULL, 0, 0x10);
        var_s0 = 0x32;
        break;
    case BIG_HEAD_POWER_UP:
        ClearPlayerPowerups(gCurrentActivePlayerPointer);
        gCurrentActivePlayerPointer->power = 2;
        gCurrentActivePlayerPointer->powerTimer = 0;
        gCurrentActivePlayerPointer->powerTimerTill = actor->unk_128;
        PlaySoundEffect(0x3A, NULL, NULL, NULL, 0, 0x10);
        var_s0 = 0x32;
        break;
    case SHRINK_POWER_UP:
        ClearPlayerPowerups(gCurrentActivePlayerPointer);
        gCurrentActivePlayerPointer->power = 3;
        gCurrentActivePlayerPointer->powerTimer = 0;
        gCurrentActivePlayerPointer->powerTimerTill = actor->unk_128;
        gCurrentActivePlayerPointer->tongueYOffset = 30.0f;
        gCurrentActivePlayerPointer->tongueSeperation = 25.0f;
        gCurrentActivePlayerPointer->hitboxSize *= 0.5f;
        gCurrentActivePlayerPointer->hitboxYStretch *= 0.5f;
        SetPlayerImpulse();
        PlaySoundEffect(0x3A, NULL, NULL, NULL, 0, 0x10);
        break;
    case SHRINK_ENEMY_POWER_UP:
        ClearPlayerPowerups(gCurrentActivePlayerPointer);
        var_v1 = gCurrentActivePlayerPointer->playerID;
        for (i = 0; i < PLAYERS_MAX; i++) {
            if (var_v1 == i) {
                continue;
            }

            gCurrentActivePlayerPointer = &gPlayerActors[i];
            gCurrentActivePlayerPointer->power = 3;
            gCurrentActivePlayerPointer->powerTimer = 0;
            gCurrentActivePlayerPointer->powerTimerTill = actor->unk_128;
            gCurrentActivePlayerPointer->tongueYOffset = 30.0f;
            gCurrentActivePlayerPointer->tongueSeperation = 25.0f; 
            gCurrentActivePlayerPointer->hitboxSize *= 0.5f;
            gCurrentActivePlayerPointer->hitboxYStretch *= 0.5f;
            SetPlayerImpulse();
        }
        gCurrentActivePlayerPointer = &gPlayerActors[var_v1];
        PlaySoundEffect(0x3A, NULL, NULL, NULL, 0, 0x10);
        var_s0 = 0x32;
        break;
    }
    
    actor->actorID = 0;
    
    if (var_s0 == 0) {
        InitPlayerEyeController(gSelectedCharacters[gCurrentActivePlayerPointer->playerID], 2, 50.0f, 0);
        return;
    }
    InitPlayerEyeController(gSelectedCharacters[gCurrentActivePlayerPointer->playerID], 1, var_s0, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80034104.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800343B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003449C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80034744.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80034B10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80034FFC.s")

void func_80035374(Unk_func_80035374* arg0) {
    if ((arg0->unk6 == 0) && (arg0->unk8 == 0)) {
        AreAnglesWithin180Degrees(gCurrentActivePlayerPointer->yAngle, CalculateAngleOfVector((&D_80170968[gTongueOnePointer->poleID])->pos.x - gCurrentActivePlayerPointer->pos.x, -((&D_80170968[gTongueOnePointer->poleID])->pos.z - gCurrentActivePlayerPointer->pos.z)));
    } else {
        AreAnglesWithin180Degrees(arg0->unkC, CalcAngleBetween2DPoints(gCurrentActivePlayerPointer->pos.x, gCurrentActivePlayerPointer->pos.z, (&D_80170968[gTongueOnePointer->poleID])->pos.x, (&D_80170968[gTongueOnePointer->poleID])->pos.z));
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ControlTongue.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800360E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003624C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80036490.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80036900.s")

void func_80036D74(PlayerActor* arg0, Tongue* arg1) {
    if (arg0->playerHURTSTATE == 0) {
        func_8002F884(arg0->playerID, 5);
        func_80064BFC(arg0->pos.x, arg0->pos.y, arg0->pos.z);
        PlaySoundEffect(0x17, NULL, NULL, NULL, 0, 0x10);
        if ((Battle_GameType == 0) && (D_80174980 != 3) && (D_80174988 == 0)) {
            gNoHit = 0;
            if (--arg0->hp <= 0) {
                D_80174980 = 4;
                D_80174860->unk50 = 0.0f;
                D_80174860->size2 = 0.4551661909f;
            }
        }
        arg0->playerHURTSTATE = 1;
        arg0->playerHURTTIMER = 0;
        arg0->playerHURTANIM = 0;
        arg0->playerHURTBY = 0;
        func_80031DB0(arg0, arg1, 0);
        arg0->yAngle = CalculateAngleOfVector(-arg0->vel.x, arg0->vel.z);;
        arg0->vel.x = -__cosf(DEGREES_TO_RADIANS_2PI(arg0->yAngle)) * 32.0f;
        arg0->vel.z = __sinf(DEGREES_TO_RADIANS_2PI(arg0->yAngle)) * 32.0f;
        func_8002F54C(48.0f, arg0, 1);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80036F30.s")

s32 isExplodingActor(s32 actorIndex) {
    s32 actorID = gActors[actorIndex].actorID;
    if ((actorID == WHITE_BOMB_SNAKE) || (actorID == GRENADE) ||
        (actorID == MISSILE) || (actorID == CANNONBALL) || (actorID == BL_BOSS_BOMBS)) {
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

s32 func_80037538(Actor* actor) {
    if ((actor->actorID == BL_BOSS_SEGMENT) || (actor->actorID == CANNON) ||
        (actor->actorID == CANNONBALL) || (actor->actorID == CAKE_BOSS_STRAWBERRY) ||
        (actor->actorID == CAKE_BOSS_CHOCO_KID) || (actor->actorID == CAKE_BOSS)) {
        return 1;
    }
    return 0;
}

s32 func_80037584(s32 actorIndex) {
    s32 actorID = gActors[actorIndex].actorID;
    if ((actorID == EXPLOSION) || (actorID == LIZARD_KONG) || (actorID == ANT_QUEEN) ||
        (actorID == BL_BOSS_SEGMENT) || (actorID == ARMADILLO) || (actorID == CAKE_BOSS) ||
        (actorID == PILE_OF_BOOKS) || (actorID == GOLEM) || (actorID == POGO)) {
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
    arg0->vel.x = __cosf(DEGREES_TO_RADIANS_2PI(arg0->unk_90)) * arg0->unk_94;
    arg0->vel.z = -__sinf(DEGREES_TO_RADIANS_2PI(arg0->unk_90)) * arg0->unk_94;
}

void func_800383A0(Actor* actor) {
    CalcEnemyNextPosition(actor);
}

void ActorInit_GreyAntSpawner(Actor* greyAntSpawnerActor) {
    if (greyAntSpawnerActor->unk_12C != 0) {
        D_801748A0 = 0;
        greyAntSpawnerActor->userVariables[1] = greyAntSpawnerActor->unk_12C;
    }
}

void ActorTick_GreyAntSpawner(Actor* arg0) {
    arg0->userVariables[0] += 1;
    if (((arg0->userVariables[0] %  arg0->unk_128) == 1) && (Actor_Init(GREY_ANT, arg0->pos.x, arg0->pos.y, arg0->pos.z, 0.0f, -50000.0f, 50000.0f, -50000.0f, 50000.0f, -50000.0f, 50000.0f, arg0->position._f32.x, arg0->position._f32.y, arg0->unk_15C, arg0->unk_160, arg0->unk_164, arg0->unk_168, arg0->unk_16C, arg0->unk_170, arg0->unk_124, arg0->unk_128, arg0->unk_12C, arg0->unk_130) != -1)) {
        arg0->userVariables[1] -= 1;
        if (arg0->userVariables[1] == 0) {
            arg0->actorID = 0;
        }
    }
}

// Grey Ant Function
void ActorInit_GreyAnt(Actor* actor) {
    actor->unk_94 = actor->unk_124;
    actor->unk_90 = CalcAngleBetween2DPoints(actor->pos.x, actor->pos.z, actor->position._f32.x, actor->position._f32.y);
    actor->userVariables[0] = 4;
    actor->unk_134[0] = actor->pos.y;
    actor->pos.y = actor->pos.y - actor->unknownPositionThings[0].unk_10;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_GreyAnt.s")

// Bullet-Hell Ant Spawner
void ActorInit_BulletHellAntSpawner(Actor* bulletHellAntSpawnerActor) {
    bulletHellAntSpawnerActor->userVariables[1] = bulletHellAntSpawnerActor->unk_128;
}
// ???: Nathan R.
void ActorTick_BulletHellAntSpawner(Actor* arg0) {
    if (gCurrentActivePlayerPointer->pos.z > -500.0f) {
        arg0->userVariables[2] = 1;
    }
    if (arg0->userVariables[2] != 0) {
        arg0->userVariables[0] += 1;
        if (((arg0->userVariables[0] % (s32) arg0->unk_124) == 1) && (Actor_Init(BULLET_HELL_ANT, arg0->pos.x, arg0->pos.y, arg0->pos.z, 0.0f, -50000.0f, 50000.0f, -50000.0f, 50000.0f, -50000.0f, 50000.0f, arg0->position._f32.x, arg0->position._f32.y, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0) != -1)) {
            arg0->userVariables[1] -= 1;
            if (arg0->userVariables[1] == 0) {
                func_80031518(arg0);
            }
        }
    }
}

void ActorInit_AntBulletHell(Actor* arg0) {
    f32 ang;
    f32 sine;
    arg0->unk_94 = arg0->position._f32.x;
    sine = __sinf((6 * gTimer * PI) / 360.0);
    ang = CalcAngleBetween2DPoints(arg0->pos.x, arg0->pos.z, gCurrentActivePlayerPointer->pos.x, gCurrentActivePlayerPointer->pos.z);
    arg0->unk_90 = arg0->position._f32.y + (ang + 12 * sine);
    WrapDegrees(&arg0->unk_90);
    func_800382F4(arg0);
}
 
s32 ActorTick_BulletHellAnt(Actor* arg0) {
    if (arg0->unk_98 != 0) {
        arg0->vel.y -= 3.200000048f;
        arg0->vel.y -= arg0->vel.y * 0.05000000075f;
    }
    if (gTimer % 8 == 0) {
        PLAYSFXAT(102, arg0->pos, 1, 0);
    } 
    else if (gTimer % 8 == 4) {
        PLAYSFXAT(101, arg0->pos, 1, 0);
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_RedAntSpawner.s")

// ???: Nathan R. (similar to unk_5C)
void ActorTick_AntTrioSpawner(Actor* arg0) {
    arg0->userVariables[0] += 1;
    if ((arg0->userVariables[0] % arg0->unk_128) == 1) {
        Actor_Init(5, arg0->pos.x, arg0->pos.y, arg0->pos.z, 0.0f, -50000.0f, 50000.0f, -50000.0f, 50000.0f, -50000.0f, 50000.0f, arg0->position._f32.x, arg0->position._f32.y, arg0->unk_15C, arg0->unk_160, arg0->unk_164, arg0->unk_168, arg0->unk_16C, arg0->unk_170, arg0->unk_124, arg0->unk_128, arg0->unk_12C, arg0->unk_130);
    }
}

// Ant Trio Function
void ActorInit_AntTrio(Actor* antTrioActor) {
    antTrioActor->unk_94 = (f32) antTrioActor->unk_124;
    antTrioActor->unk_90 = CalcAngleBetween2DPoints(antTrioActor->pos.x, antTrioActor->pos.z, antTrioActor->position._f32.x, antTrioActor->position._f32.y);
    antTrioActor->unk_98 = 1;
    func_800382F4(antTrioActor); 
    antTrioActor->unk_F0 = Random(0, 0x100);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_AntTrio.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorInit_RedAnt.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_RedAnt.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800397DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorInit_YellowAnt.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_YellowAnt.s")

void ActorInit_GreenAnt(Actor* greenAntActor) {
    greenAntActor->unk_134[0] = 0.0f;
    greenAntActor->userVariables[2] = greenAntActor->unk_15C / greenAntActor->position._f32.x;
    greenAntActor->unk_F0 = Random(0, 0x100/*, greenAntActor*/);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_GreenAnt.s")

void ActorInit_AntQueen(Actor* antQueenActor) {
    antQueenActor->unk_120 = (s32) antQueenActor->unk_12C;
    antQueenActor->tongueCollision = 3;
    antQueenActor->unknownPositionThings[1].unk_0C = 150.0f;
    antQueenActor->unknownPositionThings[1].unk_10 = (f32) D_8010A6D0[ANT_QUEEN].y;
    antQueenActor->unknownPositionThings[2].unk_0C = 200.0f;
    antQueenActor->unknownPositionThings[2].unk_10 = (f32) D_8010A6D0[ANT_QUEEN].y;
    antQueenActor->unknownPositionThings[1].unk_04 = 150.0f;
    antQueenActor->unknownPositionThings[2].unk_04 = 300.0f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/QueenAnt_SpawnDrones.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_AntQueen.s")

void ActorInit_AntQueenDrone(Actor* arg0) {
    WrapDegrees(&arg0->unk_90);
    arg0->unk_94 = arg0->position._f32.x;
    arg0->vel.y = 38.40000153f;
    func_800382F4(arg0);
}

void ActorTick_AntQueenDrone(Actor* arg0) {
    f32 playerXMod;
    f32 playerZMod;

    if (arg0->userVariables[0] == 0) {
        arg0->vel.y -= 3.2f;
    }
    if ((arg0->pos.y <= 0.0f) && (arg0->vel.y < 0.0f)) {
        arg0->userVariables[0] = 1;
        arg0->pos.y = 0.0f;
        arg0->vel.y = 0.0f;
    }
    if ((arg0->pos.x < -1400.0f) || (arg0->pos.x > 1400.0f) || (arg0->pos.z < -1400.0f) || (arg0->pos.z > 1400.0f)) {
        playerXMod = gCurrentActivePlayerPointer->pos.x;
        playerZMod = gCurrentActivePlayerPointer->pos.z;
        if (playerXMod < -1300.0f) playerXMod = -1300.0f;
        if (playerXMod > 1300.0f) playerXMod = 1300.0f;
        if (playerZMod < -1300.0f) playerZMod = -1300.0f;
        if (playerZMod > 1300.0f) playerZMod = 1300.0f;
        arg0->unk_90 = CalcAngleBetween2DPoints(arg0->pos.x, arg0->pos.z, playerXMod, playerZMod);
    }
    func_800382F4(arg0);
}

// White Bomb Snake Function
void ActorInit_WhiteBombSnake(Actor* whiteBombSnakeActor) {
    s32 temp_f10;

    whiteBombSnakeActor->userVariables[0] = 4;
    whiteBombSnakeActor->unk_134[0] = whiteBombSnakeActor->pos.x;
    whiteBombSnakeActor->unk_134[1] = whiteBombSnakeActor->pos.z;
    whiteBombSnakeActor->unk_90 = CalcAngleBetween2DPoints(whiteBombSnakeActor->pos.x, whiteBombSnakeActor->pos.z, whiteBombSnakeActor->position._f32.x, whiteBombSnakeActor->position._f32.y);
    temp_f10 = (s32) (180.0f / whiteBombSnakeActor->unk_160);
    whiteBombSnakeActor->userVariables[3] = temp_f10;
    whiteBombSnakeActor->unk_160 = (f32) (0xB4 / temp_f10);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_WhiteBombSnake.s")

void ActorInit_Grenade(Actor* grenadeActor) {
    grenadeActor->unk_94 = grenadeActor->position._f32.x;
}

void ActorTick_Grenade(Actor* arg0) {
    f32 angle = CalcAngleBetween2DPoints(arg0->pos.x, arg0->pos.z, gCurrentActivePlayerPointer->pos.x, gCurrentActivePlayerPointer->pos.z);
    arg0->userVariables[1] += 1;
    switch (arg0->userVariables[0]) {
    case 0:
        if (arg0->unk_124 == arg0->userVariables[1]) {
            arg0->userVariables[0] = 1;
            arg0->userVariables[1] = 0;
        }
        break;
    case 1:
        if (arg0->unk_128 == arg0->userVariables[1]) {
            arg0->userVariables[0] = 0;
            arg0->userVariables[1] = 0;
        }
        angle += 180.0f;
        WrapDegrees(&angle);
        break;
    }
    if (arg0->unk_12C < (u32) arg0->globalTimer) {
        func_8002D36C(&arg0->unk_90, angle, arg0->position._f32.y);
    }
    Actor_PlaySound(arg0, 0x75, 0xA, 4);
    func_800382F4(arg0);
}

void ActorInit_MissileSpawner(Actor* missileSpawnerActor) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_MissileSpawner.s")

void ActorInit_Missile(Actor* missileActor) {
    missileActor->unk_134[0] = missileActor->pos.x;
    missileActor->unk_134[1] = missileActor->pos.y;
    missileActor->unk_134[2] = missileActor->pos.z;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_Missile.s")


void ActorInit_Cannon(Actor* cannonActor) {
    cannonActor->tongueCollision = 2;
    cannonActor->unknownPositionThings[0].unk_00 = __cosf(DEGREES_TO_RADIANS_2PI(cannonActor->unk_90)) * 200.0f;
    cannonActor->unknownPositionThings[0].unk_04 = -cannonActor->unknownPositionThings[0].unk_10 / 2;
    cannonActor->unknownPositionThings[0].unk_08 = -__sinf(DEGREES_TO_RADIANS_2PI(cannonActor->unk_90)) * 200.0f;
    cannonActor->unknownPositionThings[1].unk_10 = cannonActor->tYPos;
    cannonActor->unknownPositionThings[1].unk_00 = 0.0f;
    cannonActor->unknownPositionThings[1].unk_0C = cannonActor->tScale;
    cannonActor->unknownPositionThings[1].unk_04 = -cannonActor->tYPos / 2;
    cannonActor->unknownPositionThings[1].unk_08 = 0.0f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_Cannon.s")

// CANNONBALL Function
void ActorInit_Cannonball(Actor* cbActor) {
    f32 temp_f16 = cbActor->position._f32.x - cbActor->pos.x; f32 temp_f18 = cbActor->unk_15C - cbActor->pos.z;
    cbActor->unk_90 = CalcAngleBetween2DPoints(cbActor->pos.x, cbActor->pos.z, cbActor->position._f32.x, cbActor->unk_15C);
    cbActor->unk_94 = cbActor->unk_160;
    cbActor->userVariables[0] = (s32) (__sqrtf(SQ(temp_f16) + SQ(temp_f18)) / cbActor->unk_94);
    cbActor->unk_134[0] = (cbActor->position._f32.y - cbActor->pos.y) / (f32) cbActor->userVariables[0];
    func_800382F4(cbActor);
    PlaySoundEffect(119, &cbActor->pos.x, &cbActor->pos.y, &cbActor->pos.z, 0, 0);
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_Cannonball.s")

// ???: Nathan R.
s32 func_8003C734(Actor* arg0, s32 arg1) {
    s32 passVar;
    s32 actorIndex;

    actorIndex = Actor_Init(arg0->actorID, arg0->pos.x, arg0->pos.y, arg0->pos.z, arg0->unk_90, arg0->unk_F4, arg0->unk_F8, arg0->unk_FC, arg0->unk_100, arg0->unk_104, arg0->unk_108, arg0->position._f32.x, arg0->position._f32.y, arg0->unk_15C, arg0->unk_160, arg0->unk_164, arg0->unk_168, arg0->unk_16C, arg0->unk_170, 0, arg0->unk_128, arg0->unk_12C, arg0->unk_130);
    if (actorIndex == -1) return -1;
    if (arg1 == 1) {
        passVar = 12;
        gActors[actorIndex].userVariables[2] = passVar;
        gActors[actorIndex].userVariables[1] = passVar;
    } else {
        passVar = (arg1 * 8) + 8;
        gActors[actorIndex].userVariables[2] = passVar;
        gActors[actorIndex].userVariables[1] = passVar;
    }
    if ((arg1 == 2) || (arg1 == 10)) {
        gActors[actorIndex].unk_A0.unk_00 = 3;
    }
    gActors[actorIndex].userVariables[3] = arg1;
    gActors[actorIndex].unk_124 = arg0->actorIndex;
    return actorIndex;
}

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
        temp_f2 = -50000.0f;
        temp_f12 = 50000.0f;
        if (Actor_Init(20, arg0->pos.x, arg0->pos.y, arg0->pos.z, 0.0f, temp_f2, temp_f12, temp_f2, temp_f12, temp_f2, temp_f12, 200.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 10, 0, 0, 0) != -1) {
            func_800619F8(arg0->pos.x, arg0->pos.y, arg0->pos.z, 3, 100);
        }
        func_80031518(arg0);
    }
}
 

// Black Chameleon Projectile Spawner
void ActorInit_ChameleonBlackSpotSpawnner(Actor* blackChameleonProjectileSpawnerActor){
    
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_ChameleonBlackSpotSpawnner.s")

void ActorInit_ChameleonBlackSpot(Actor* arg0) {
    arg0->sizeScalar = 0.0f;
    func_800312B0(arg0->actorIndex);
}

void ActorTick_ChameleonBlackSpot(Actor* arg0) {
    if (arg0->sizeScalar < 1.0f) {
        arg0->sizeScalar += 0.05000000075f;
        if (arg0->sizeScalar > 1.0f) {
            arg0->sizeScalar = 1.0f;
        }
        func_800312B0(arg0->actorIndex);
    }
}

void ActorInit_Chomper(Actor* arg0) {
    arg0->unk_134[0] = arg0->pos.y;
    arg0->pos.y -= 100.0f;
    arg0->unknownPositionThings[0].unk_0C = arg0->unk_164 * arg0->tScale;
    arg0->tScale *= arg0->unk_164;
    arg0->unknownPositionThings[0].unk_10 = arg0->unk_164 * arg0->tYPos;
    arg0->tYPos *= arg0->unk_164;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_Chomper.s")

void ActorInit_SandCrab(Actor* actor) {
    actor->unk_134[0] = actor->pos.y;
    actor->pos.y -= 150.0f;
    actor->vel.y = 32.0f;
    actor->unk_94 = actor->position._f32.x;
    func_800382F4(actor);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_SandCrab.s")

void ActorInit_Vulture(Actor* vultureActor) {
    vultureActor->unk_134[0] = vultureActor->pos.x;
    vultureActor->unk_134[1] = vultureActor->pos.y;
    vultureActor->unk_134[2] = vultureActor->pos.z;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_Vulture.s")

void ActorTick_ArrowSpawner(Actor* arg0) {
    arg0->userVariables[0]++;
    if (arg0->unk_124 == arg0->userVariables[0]) {
        arg0->userVariables[0] = 0;
        if (Actor_Init(28, arg0->pos.x, arg0->pos.y, arg0->pos.z, arg0->unk_90, -50000.0f, 50000.0f, -50000.0f, 50000.0f, -50000.0f, 50000.0f, arg0->position._f32.x, arg0->position._f32.y, arg0->unk_15C, arg0->unk_160, 0.0f, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0) != -1) {
            PlaySoundEffect(139, &arg0->pos.x, &arg0->pos.y, &arg0->pos.z, 0, 0);
        }
    }
}

void ActorInit_Arrows(Actor* arrowsActor) {
    arrowsActor->unk_94 = arrowsActor->position._f32.x;
    arrowsActor->userVariables[0] = (s32) (arrowsActor->position._f32.y / arrowsActor->position._f32.x);
}

void ActorTick_Arrow(Actor* arrowActor) {
    if (arrowActor->globalTimer == arrowActor->userVariables[0]) {
        func_80031518(arrowActor);
    }
    func_800382F4(arrowActor);
}

// BOULDER
void func_8003E368(Actor* boulderActor){

}

// ???: EstexNT, Rainchu & Nathan R.
void BoulderCalculations(Actor* arg0) {
    f32 tempX = arg0->vel.x;
    f32 tempY = arg0->vel.y;
    f32 tempZ = arg0->vel.z;
    f32 tempB4 = arg0->unk_B4;
    f32 tempB8 = arg0->unk_B8;
    f32 tempBC = arg0->unk_BC;
    f32 calculation;
    f32 var = (((tempX * tempB4) + (tempY * tempB8) + (tempZ * tempBC)) * 2);
    
    calculation = var / ((tempB4 * tempB4) + (tempB8 * tempB8) + (tempBC * tempBC));
    
    arg0->unk_98 = 1;
    arg0->pos.y += arg0->unknownPositionThings[0].unk_10 * 0.5f;
    arg0->vel.x = (tempX - (calculation * tempB4)) * 0.8f;
    arg0->vel.y = tempY - (calculation * tempB8);
    arg0->vel.z = (tempZ - (calculation * tempBC)) * 0.8f;
    if ((arg0->vel.y < arg0->unk_160) && (arg0->globalTimer >= 17U)) {
        arg0->userVariables[0] = -1;
        arg0->vel.z = 0;
        arg0->vel.y = 0;
        arg0->vel.x = 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_Boulder.s")

void func_8003E62C(Actor* armadilloActor) {
    armadilloActor->unk_134[0] = armadilloActor->position._f32.y / armadilloActor->position._f32.x;
    armadilloActor->pos.y = -400.0f;
    armadilloActor->unk_134[4] = 100.0f;
    armadilloActor->userVariables[4] = armadilloActor->unk_130;
}

void func_8003E660(Actor* actor) {
    f32 pad = actor->vel.y;
    f32 var1 = 3.200000048f;
    actor->vel.y -= var1;
    if (actor->vel.y < 0.0f) {
        actor->vel.y -= actor->vel.y * (var1 / actor->unk_16C);
        if (actor->pos.y < 1000.0f) {
            actor->userVariables[0] = 6;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003E6C4.s")

void func_8003E870(Actor* arg0, s32 arg1) {
    arg0->vel.x += -arg0->unk_134[0] * 2 * arg0->vel.x;
    arg0->vel.z += -arg0->unk_134[0] * 2 * arg0->vel.z;
    arg0->vel.y -= 3.2f + (arg0->vel.y * (3.2f / arg0->unk_16C));
    arg0->unk_134[3] += 40;
    if (arg0->pos.y + arg0->vel.y < 0) {
        arg0->vel.y = -arg0->vel.y * 0.95f;
        func_8006F8D8(arg0->pos.x, arg0->pos.y, arg0->pos.z);
        PlaySoundEffect(132, &arg0->pos.x, &arg0->pos.y, &arg0->pos.z, 0, 0);
        arg0->userVariables[0] = arg1;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003E968.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_Armadillo.s")

void func_8003FA38(Actor* arg0, f32 arg1, f32 arg2, f32 arg3) {
    f32 temp_f0;
    f32 temp_f2;
    s32 temp_f8;

    temp_f0 = arg1 - arg0->pos.x;
    temp_f2 = arg3 - arg0->pos.z;
    if (arg0->userVariables[0] >= 3) {
        arg0->unk_94 = (f32) (arg0->unk_16C / 1.5f);
    } else {
        arg0->unk_94 = (f32) arg0->unk_16C;
    }
    temp_f8 = (s32) (NORM_2(temp_f0,temp_f2) / arg0->unk_94);
    arg0->userVariables[1] = temp_f8;
    arg0->unk_134[3] = (f32) ((arg2 - arg0->pos.y) / (f32) temp_f8);
    arg0->unk_90 = CalculateAngleOfVector(temp_f0, -temp_f2);
}

// POGO Function
void func_8003FB04(Actor* pogoActor) {
    pogoActor->userVariables[0] = 1;
    pogoActor->unk_134[0] = pogoActor->pos.x;
    pogoActor->unk_134[1] = pogoActor->pos.y;
    pogoActor->unk_134[2] = pogoActor->pos.z;
    
    func_8003FA38(pogoActor, pogoActor->position._f32.x, pogoActor->position._f32.y, pogoActor->unk_15C);
}

void func_8003FB4C(Actor* arg0) {
    arg0->userVariables[3] += 1;
    if ((arg0->userVariables[3] % (s32) arg0->unk_124) == 0) {
        arg0->userVariables[0] += 3;
        func_8003FA38(arg0, gCurrentActivePlayerPointer->pos.x, gCurrentActivePlayerPointer->yCounter, gCurrentActivePlayerPointer->pos.z);
        return;
    }
    switch (arg0->userVariables[0]) {                              /* irregular */
    case 0:
        arg0->userVariables[0] = 1;
        func_8003FA38(arg0, arg0->position._f32.x, arg0->position._f32.y, arg0->unk_15C);
        return;
    case 1:
        arg0->userVariables[0] = 2;
        func_8003FA38(arg0, arg0->unk_160, arg0->unk_164, arg0->unk_168);
        return;
    case 2:
        arg0->userVariables[0] = 0;
        func_8003FA38(arg0, arg0->unk_134[0], arg0->unk_134[1], arg0->unk_134[2]);
        return;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_Pogo.s")

void ActorTick_Unk22(s32 arg0) {
}

void func_8003FEB4(Actor* unk_23Actor){

}

void ActorTick_Unk23(s32 arg0) {

}

void ActorInit_IceCreamSandwich(Actor* iceCreamSandwichActor) {
    iceCreamSandwichActor->unk_134[0] = iceCreamSandwichActor->pos.y;
    iceCreamSandwichActor->pos.y = iceCreamSandwichActor->pos.y + 2000.0f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_IceCreamSandwich.s")

void ActorInit_ChocoKid(Actor* trainingRoomChocoKidActor) {
    trainingRoomChocoKidActor->unk_134[1] = trainingRoomChocoKidActor->pos.z;
    trainingRoomChocoKidActor->unk_94 = trainingRoomChocoKidActor->position._f32.x;
    trainingRoomChocoKidActor->unk_134[0] = trainingRoomChocoKidActor->pos.x;
    func_8006E16C(trainingRoomChocoKidActor->pos.x, trainingRoomChocoKidActor->pos.y + 50.0f, trainingRoomChocoKidActor->pos.z, 120.0f, 20.0f, 0xA);
}

void ActorTick_ChocoKid(Actor* chocoKid) {
    f32 temp_f14;

    temp_f14 = CalcAngleBetween2DPoints(chocoKid->pos.x, chocoKid->pos.z, chocoKid->unk_134[0], chocoKid->unk_134[1]);
    if (chocoKid->userVariables[0] != 0) {
        chocoKid->vel.y -= 3.200000048f;
        chocoKid->pos.y += chocoKid->vel.y;
        if (chocoKid->pos.y < 0.0f) {
            chocoKid->userVariables[0] = 0;
            chocoKid->pos.y = 0.0f;
            chocoKid->vel.y = 0.0f;
        }
    } else {
        chocoKid->unk_134[2] += chocoKid->position._f32.y * (f32) AreAnglesWithin180Degrees(chocoKid->unk_90, temp_f14);
        func_800382B4(&chocoKid->unk_134[2], chocoKid->unk_15C);
        chocoKid->unk_90 += chocoKid->unk_134[2];
        WrapDegrees(&chocoKid->unk_90);
        if (Random(0, 29) == 15) {
            chocoKid->userVariables[0] = 1;
            chocoKid->vel.y = 19.20000076f;
        }
    }
    Actor_PlaySound(chocoKid, 0x99, 0x1E, 4);
    func_800382F4(chocoKid);
}

void ActorInit_Unk1F(Actor* unk_1FActor) {
    unk_1FActor->unk_134[0] = unk_1FActor->pos.y;
    unk_1FActor->unk_134[1] = unk_1FActor->pos.x;
    unk_1FActor->unk_134[2] = unk_1FActor->pos.z;
    unk_1FActor->pos.y = unk_1FActor->pos.y + 1000.0f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_Unk1F.s")

//? - Nathan R.
void ActorInit_Popcorn(Actor* arg0) {
    f32 s = __cosf(DEGREES_TO_RADIANS_2PI(arg0->unk_90));
    arg0->vel.x = arg0->position._f32.x * s;
    s = -__sinf(DEGREES_TO_RADIANS_2PI(arg0->unk_90));
    arg0->vel.z = arg0->position._f32.x * s;
    arg0->vel.y = 64.0f;
}

void ActorTick_Popcorn(Actor* arg0) {
    if ((arg0->pos.y + arg0->vel.y) < 0.0f) {
        arg0->pos.y = arg0->vel.x = arg0->vel.z = arg0->vel.y = 0.0f;
        arg0->unk_A0.unk_04 = 0;
    }
    if (arg0->pos.y > 0) arg0->vel.y -= 4.8f;
}

// Cake Boss Strawberry Function
void func_800405F8(Actor* cakeBossStrawberryActor) {
    if (cakeBossStrawberryActor->unk_128 == 6) {
        cakeBossStrawberryActor->tScale *= 2.0f;
        cakeBossStrawberryActor->tYPos *= 2.0f;
        cakeBossStrawberryActor->unknownPositionThings[0].unk_0C = cakeBossStrawberryActor->tScale;
        cakeBossStrawberryActor->unknownPositionThings[0].unk_10 = cakeBossStrawberryActor->tYPos;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_CakeBossStrawberry.s")

// UNK_28
void func_80040CDC(Actor* unk_28Actor){

}

void ActorTick_Unk28(s32 arg0) {

}

// Cake Boss Choco Kid
void func_80040CEC(Actor* cakeBossChocoKidActor){

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_CakeBossChocoKid.s")

void ActorInit_CakeBoss(Actor* actor) {
    actor->tongueCollision = 3;
    actor->userVariables[2] = 4; 
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

// Cue Ball Actor
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
    arg0->unk_134[0] = ((180.0f * temp_f0_2) / ( arg0->unknownPositionThings[0].unk_0C * PI)) + arg0->unk_134[0];
    arg0->unk_90 = CalculateAngleOfVector(arg0->vel.x, -arg0->vel.z);
}

//(re)set bowling pins
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/Bowling_ResetPins.s")

// Bowling Ball Function
void ActorInit_BowlingBall(Actor* bowlingBallActor) {
    Bowling_ResetScore();
    Bowling_ResetPins();
    bowlingBallActor->userVariables[0] = 0;
    bowlingBallActor->unk_134[0] = bowlingBallActor->pos.y;
    bowlingBallActor->userVariables[3] = Rand() % 5;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_BowlingBall.s")

// Bowling Pins Function
void ActorInit_BowlingPin(Actor* bowlingPinsActor) {
    bowlingPinsActor->unk_90 = (f32) ((Rand() % 21) - 100);
    bowlingPinsActor->userVariables[1] = (Rand() % 21) + 30;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_BowlingPin.s")

void ActorInit_Unk2E(Actor* arg0) {
    arg0->userVariables[0] = 0xA;
    arg0->unk_134[0] = arg0->pos.y;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_Unk2E.s")

// UNK_2F
void func_800434F4(Actor* unk_2FActor){

}

void ActorTick_Unk2F(s32 arg0) {

}

void ActorInit_FloatingObjects(Actor* arg0) {
    arg0->userVariables[1] = arg0->unk_12C * arg0->unk_124 / arg0->unk_128;
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_FloatingObjects.s")

void ActorInit_Cup(Actor* cupActor) {
    ActorInit_FloatingObjects(cupActor);
}

void ActorTick_Cup(void) {
    ActorTick_FloatingObjects();
}

void ActorInit_Saucer(Actor* saucerActor) {
    ActorInit_FloatingObjects(saucerActor);
}

void ActorTick_Saucer(void) {
    ActorTick_FloatingObjects();
}

void ActorInit_MetalSheet(Actor* metalSheetActor) {
    ActorInit_FloatingObjects(metalSheetActor);
}

void ActorTick_MetalSheet(void) {
    ActorTick_FloatingObjects();
}

void ActorInit_Scroll(Actor* scrollActor) {
    ActorInit_FloatingObjects(scrollActor);
}

void ActorTick_Scroll(void) {
    ActorTick_FloatingObjects();
}

// RNG Room Spawner
void ActorInit_RNGRoomSpawner(Actor* rngRoomSpawnerActor){

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_RNGRoomSpawner.s")

void ActorInit_Mirror(Actor* arg0) {
    if (gTimer % arg0->unk_128 == arg0->unk_124) {
        arg0->userVariables[1] = 1;
        return;
    }
    arg0->userVariables[1] = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_Mirror.s")

void ActorInit_BarrelFireSpawner(Actor* barrelJumpFireSpawnerActor){

}

void ActorTick_BarrelFireSpawner(Actor* arg0) {
    if ((u32) arg0->unk_128 < (u32) arg0->globalTimer) {
        arg0->userVariables[0] += 1;
        if ((arg0->userVariables[0] % (s32) arg0->unk_124) == 0) {
            Actor_Init(0x37, arg0->pos.x, arg0->pos.y, arg0->pos.z, 0.0f, arg0->unk_F4, arg0->unk_F8, arg0->unk_FC, arg0->unk_100, arg0->unk_104, arg0->unk_108, arg0->position._f32.x, arg0->position._f32.y, arg0->unk_15C, arg0->unk_160, 0.0f, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0);
        }
    }
}

void ActorInit_BarrelFire(Actor* barrelJumpFireActor) {
    barrelJumpFireActor->unk_134[0] = CalcAngleBetween2DPoints(barrelJumpFireActor->position._f32.x, barrelJumpFireActor->position._f32.y, barrelJumpFireActor->pos.x, barrelJumpFireActor->pos.z);
    barrelJumpFireActor->userVariables[0] = (s32) (360.0f / barrelJumpFireActor->unk_160) - 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_BarrelFire.s")

void ActorInit_FireSpitter(Actor* fireSpitterActor) {
    fireSpitterActor->userVariables[0] = fireSpitterActor->unk_124 - 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_FireSpitter.s")

void ActorInit_Candles(Actor* candlesActor) {
    ActorInit_FireSpitter(candlesActor);
}

void ActorTick_Candles(void) {
    ActorTick_FireSpitter();
}

void ActorInit_FireSpawner(Actor* fireSpawnerActor) {
    ActorInit_Candles(fireSpawnerActor);
}

void ActorTick_FireSpawner(void) {
    ActorTick_Candles();
}

void ActorInit_Fire(Actor* arg0) {
    arg0->unk_90 = CalcAngleBetween2DPoints(arg0->pos.x, arg0->pos.z, gCurrentActivePlayerPointer->pos.x, gCurrentActivePlayerPointer->pos.z);
    arg0->userVariables[1] = arg0->unk_128;
}

void ActorTick_Fire(Actor* fireActor) {
    f32 angle;

    angle = CalcAngleBetween2DPoints(fireActor->pos.x, fireActor->pos.z, gCurrentActivePlayerPointer->pos.x, gCurrentActivePlayerPointer->pos.z);
    if (fireActor->userVariables[0] == 0) {
        fireActor->unk_94 = fireActor->position._f32.x;
        func_8002D36C(&fireActor->unk_90, angle, fireActor->position._f32.y);
        if (fireActor->userVariables[1] == 0) {
            fireActor->userVariables[0] = 1;
            fireActor->userVariables[1] = Random(1, fireActor->unk_12C);
        } else {
            fireActor->userVariables[1]--;
        }
    } else {
        fireActor->unk_94 = 0.0f;
        func_8002D36C(&fireActor->unk_90, angle, fireActor->unk_160);
        if (fireActor->userVariables[1] == 0) {
            fireActor->userVariables[0] = 0;
            fireActor->userVariables[1] = Random(1, fireActor->unk_128);
        } else {
            fireActor->userVariables[1]--;
        }
    }
    if (fireActor->pos.y < (gCurrentActivePlayerPointer->pos.y - fireActor->unk_15C)) {
        fireActor->pos.y += fireActor->unk_15C;
    } else if ((fireActor->unk_15C + gCurrentActivePlayerPointer->pos.y) < fireActor->pos.y) {
        fireActor->pos.y = fireActor->pos.y - fireActor->unk_15C;
    }
    fireActor->unk_F0++;
    func_800382F4(fireActor);
}

void ActorInit_Sandal(Actor* sandalActor) {
    ActorInit_Unk2E(sandalActor);
}

void ActorTick_Sandal(void) {
    ActorTick_Unk2E();
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/GhostBoss_SpawnArms.s")

void ActorInit_GhostBoss(Actor* pileOfBooksActor) {
    pileOfBooksActor->unk_EC = 0;
    pileOfBooksActor->userVariables[3] = pileOfBooksActor->unk_128 * 2;
    pileOfBooksActor->unk_134[1] = pileOfBooksActor->pos.z + -800.0f;
    pileOfBooksActor->unk_134[2] = pileOfBooksActor->unk_90;
    GhostBoss_SpawnArms(pileOfBooksActor);    // Compiled as empty originally?
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800448C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80044C30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80044D58.s")

s32 func_80044E80(Actor* arg0, s32 arg1) {
    return (arg0->userVariables[arg1] + 5) / 6;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80044EA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_GhostBoss.s")

void func_80046DDC(Actor* arg0) {
    f32 temp_f0;
    if ((arg0->unk_124 >= 2)) {
        if ((arg0->unk_124 < gActors[arg0->unk_128].unk_128 + 2)) {
            temp_f0 = 1.200000048f;
            arg0->tScale *= temp_f0;
            arg0->unknownPositionThings[0].unk_0C *= temp_f0;            
        }
    }
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_GhostBossArmSegment.s")

void func_80046FB0(Actor* arg0) {

}

void func_80046FB8(Actor* arg0) {
    if (((arg0->unk_12C == 0) && (gActors[arg0->unk_128].userVariables[2] == 4)) || ((arg0->unk_12C == 1) && (gActors[arg0->unk_128].userVariables[2] == 5))) {
        if (arg0->userVariables[0] == 0) {
            arg0->unk_F0 += 1;
            if (arg0->unk_F0 == 9) {
                arg0->userVariables[0] = 1;
            }
        } 
        else {
            arg0->unk_F0 -= 1;
            if (arg0->unk_F0  == 0) {
                arg0->userVariables[0] = 0;
            }
        }
    } 
    else {
        if (arg0->unk_F0 != 0) {
            arg0->unk_F0 -= 1;
            arg0->userVariables[0] = 0;
        }
    }
}

void ActorInit_GhostBossShot(Actor* arg0) {
    arg0->unk_94 = arg0->position._f32.x;
    func_800382F4(arg0);
}

void ActorTick_GhostBossShot(Actor* arg0) {
    arg0->userVariables[0] += 1;
    if (arg0->userVariables[0] == 150) {
        func_800638AC(arg0->pos.x, arg0->pos.y, arg0->pos.z, arg0->pos.x, arg0->pos.y + 300.0f, arg0->pos.z, 255, 255, 255, 128, 8, 74);
        func_80031518(arg0);
        return;
    }
    if (arg0->pos.y > 50.0f) {
        arg0->pos.y -= 10.0f;
    }
}

void ActorInit_SpiderSpawner(Actor* spiderSpawnerActor){

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_SpiderSpawner.s")

void ActorInit_Spider(Actor* spiderActor) {
    spiderActor->unk_98 = 1;
    spiderActor->vel.y = spiderActor->unk_160;
    spiderActor->unk_94 = spiderActor->position._f32.x;
    func_800382F4(spiderActor);    // Sometimes calls with a arg0, sometimes calls empty?
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_Spider.s")

void ActorInit_SpiderTrio(Actor* arg0) {
    arg0->unk_134[0] = arg0->pos.x;
    arg0->unk_134[1] = arg0->pos.z;
    arg0->unk_90 = CalcAngleBetween2DPoints(arg0->pos.x, arg0->pos.z, arg0->position._f32.x, arg0->position._f32.y);
    arg0->unk_94 = arg0->unk_15C;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_SpiderTrio.s")

// GOLEM Room SPIDER Spawner
void func_8004769C(Actor* golemRoomSpiderSpawnerActor){

}

void ActorTick_GolemSpiderSpawner(Actor* Actor) {
    if (levelFlags[Actor->unk_124] != 0) {
        if (gActorCount < (s32) Actor->unk_160) {
            Actor->userVariables[0] += 1;
            if (Actor->unk_130 < Actor->userVariables[0]) {
                Actor->userVariables[0] = 0;
                Actor_Init(SPIDER, Actor->pos.x, Actor->pos.y, Actor->pos.z, Actor->unk_90, Actor->unk_F4, Actor->unk_F8,
                Actor->unk_FC, Actor->unk_100, Actor->unk_104, Actor->unk_108, Actor->position._f32.x, Actor->position._f32.y,
                Actor->unk_15C, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0, Actor->unk_128, Actor->unk_12C, 0);
            }
        }
        func_800382F4(Actor);
    }
}

// GOLEM?: Auto-Decompile
void func_800477C4(Actor* golem) {

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_Golem.s")

void ActorInit_Hedgehog(Actor* hedgehogActor) {
    hedgehogActor->unk_134[0] = (f32) hedgehogActor->pos.x;
    hedgehogActor->unk_134[1] = (f32) hedgehogActor->pos.z;
    hedgehogActor->unk_134[2] = (f32) hedgehogActor->unk_90;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_Hedgehog.s")

void ActorInit_Fish(Actor* fishActor) {
    fishActor->unk_134[0] = fishActor->pos.x;
    fishActor->unk_134[1] = fishActor->pos.z;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_Fish.s")

// ??? Function: Auto-Decompile
s32 func_80047FC0(Actor* arg0, s32 arg1) {
    Actor* temp_v1;
    s32 temp_v0;

    temp_v0 = Actor_Init(arg0->actorID, arg0->pos.x, arg0->pos.y, arg0->pos.z, arg0->unk_90, arg0->unk_F4, arg0->unk_F8, arg0->unk_FC, arg0->unk_100, arg0->unk_104, arg0->unk_108, arg0->position._f32.x, arg0->position._f32.y, arg0->unk_15C, arg0->unk_160, arg0->unk_164, arg0->unk_168, arg0->unk_16C, arg0->unk_170, arg0->unk_124, arg0->unk_128, arg0->unk_12C, arg0->unk_130);
    if (temp_v0 == -1) {
        return -1;
    }
    temp_v1 = &gActors[temp_v0];
    temp_v1->userVariables[0] = arg1 * 0x3C;
    temp_v1->userVariables[3] = arg1;
    return temp_v0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800480EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80048284.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_LizardKongButterfly.s")

void func_800487D8(Actor* lizardKongButterflySpawnerActor){

}

void ActorTick_LizardKongButterflySpawner(Actor* arg0) {
    if (gActorCount < arg0->unk_128) {
        Actor_Init(LIZARD_KONG_BUTTERFLY, arg0->pos.x, arg0->pos.y, arg0->pos.z, arg0->unk_90, arg0->unk_F4, arg0->unk_F8, arg0->unk_FC, arg0->unk_100, arg0->unk_104, arg0->unk_108, arg0->position._f32.x, arg0->position._f32.y, arg0->unk_15C, arg0->unk_160, arg0->unk_164, arg0->unk_168, arg0->unk_16C, arg0->unk_170, arg0->unk_124, -1, arg0->unk_12C, 0);
    }
}

// ????: Auto-Decompile
void func_800488C4(Actor* arg0) {
    arg0->unk_98 = 1;
    arg0->unk_94 = arg0->position._f32.x;
    Actor_PlaySound(arg0, 143, 4, 4);
}

void ActorTick_LizardKongBoulder(Actor* arg0) {
    arg0->unk_134[3] += arg0->unk_94;
    arg0->vel.y -= 3.200000048f;
    
    if (arg0->unk_98 == 0) {
        arg0->unk_98 = 1;
        arg0->pos.y = arg0->unknownPositionThings[0].unk_10 / 2;
        arg0->vel.y = arg0->position._f32.y * -arg0->vel.y;
        arg0->unk_94 *= 0.8999999762f;
        PLAYSFXAT(0x8F, arg0->pos, 0, 0);
    }
    
    func_800382F4(arg0);
} 

//? - Nathan R.
void func_800489B0(Actor* arg0) {
    arg0->pos.x = arg0->unk_134[0] + (arg0->unk_134[2] * __cosf(DEGREES_TO_RADIANS_2PI(arg0->unk_134[3])));
    arg0->pos.z = arg0->unk_134[1] + (arg0->unk_134[2] * -__sinf(DEGREES_TO_RADIANS_2PI(arg0->unk_134[3])));
}



// Lizard Kong
void ActorInit_LizardKong(Actor* arg0) {
    arg0->unk_134[2] = arg0->unk_15C;
    arg0->unk_134[3] = arg0->unk_90 + 180.0f;
    WrapDegrees(&arg0->unk_134[3]);
    arg0->unk_134[4] = arg0->unk_134[3];
    arg0->userVariables[0] = 6;
    arg0->unk_134[0] = arg0->pos.x;
    arg0->unk_134[1] = arg0->pos.z;
    arg0->unk_134[5] = arg0->position._f32.x;
    arg0->pos.y += 1000.0f;
    func_800489B0(arg0);
    arg0->unk_EC = 5;
}

void PlayLizardKongSFX(Actor* arg0) {
    switch (arg0->unk_F0) {
    case 12:
        PlaySoundEffect(72, &arg0->pos.x, &arg0->pos.y, &arg0->pos.z, 0, 0);
        return;
    case 34:
    case 42:
    case 50:
    case 58:
        PlaySoundEffect(77, &arg0->pos.x, &arg0->pos.y, &arg0->pos.z, 0, 0);
        /* fallthrough */
    default:
        return;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_LizardKong.s")

void ActorInit_PopcornBucketSpawner(Actor* popcornBucketSpawnerActor){

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_PopcornBucketSpawner.s")

void ActorInit_PopcornBucket(Actor* popcornBucketActor) {
    ActorInit_Unk1F(popcornBucketActor);
}

void ActorTick_PopcornBucket(void) {
    ActorTick_Unk1F();
}

void ActorInit_Unk4E(Actor* arg0) {
    ActorInit_Popcorn(arg0);
}

void ActorTick_Unk4E(Actor* arg0) {
    ActorTick_Popcorn(arg0);
}

void ActorInit_ChocoKidSpawner(Actor* chocoKidSpawnerActor){

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_ChocoKidSpawner.s")

void ActorInit_SpawnedChocoKid(Actor* chocoKidActor) {
    ActorInit_ChocoKid(chocoKidActor);
}

void ActorTick_SpawnedChocoKid(Actor* chocoKidActor) {
    ActorTick_ChocoKid(chocoKidActor);
}

void ActorInit_GreyAntSpawnerWrapper(Actor* unk_51Actor) {
    ActorInit_GreyAntSpawner(unk_51Actor);
}

void ActorTick_GreyAntSpawnerWrapper(Actor* arg0) {
    ActorTick_GreyAntSpawner(arg0);
}

void ActorInit_GreyAntWrapper(Actor* unk_52Actor) {
    ActorInit_GreyAnt(unk_52Actor);
}

void ActorTick_GreyAntWrapper(void) {
    ActorTick_GreyAnt();
}

void ActorInit_BattleModeSandCrabSpawner(Actor* battleModeSandCrabSpawnerActor){

}

void ActorTick_BattleModeSandCrabSpawner(Actor* arg0) {
    f32 deg;
    arg0->userVariables[1] += 1;
    if (arg0->userVariables[1] % arg0->unk_124 == 0) {
        arg0->userVariables[2] += 1;
        deg = (arg0->userVariables[2] * 45) + ((arg0->userVariables[2] / 8) * 15);
        WrapDegrees(&deg);
        Actor_Init(BATTLE_MODE_SAND_CRAB, arg0->pos.x, arg0->position._f32.x, arg0->pos.z, deg, -50000.0f, 50000.0f, -50000.0f, 50000.0f, -50000.0f, 50000.0f, arg0->position._f32.y, arg0->unk_15C, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0);
    }
}

void ActorInit_BattleModeSandCrab(Actor* battleModeSandCrabActor) {
    battleModeSandCrabActor->unk_94 = battleModeSandCrabActor->position._f32.x;
    battleModeSandCrabActor->vel.y = 32.0f;
    func_800382F4(battleModeSandCrabActor);
}


void ActorTick_BattleModeSandCrab(Actor* arg0) {
    if (arg0->userVariables[1] == 0) {
        if ((arg0->unk_98 == 0) && (arg0->vel.y < 0.0f)) {
            arg0->vel.y = 0.0f;
            arg0->userVariables[1] = 1;
            return;
        }
        arg0->vel.y -= 3.200000048f;
        arg0->pos.y += arg0->vel.y;
        return;
    }
    if (arg0->unk_98 != 0) {
        arg0->vel.y -= 3.200000048f;
        arg0->vel.y -= arg0->vel.y * 0.05000000075f;
    }
}

void ActorInit_BattleModeFireSpawner(Actor* actor){

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_BattleModeFireSpawner.s")


void ActorInit_BattleModeFire(Actor* arg0) {

}

void ActorTick_BattleModeFire(Actor* arg0) {

}

void ActorInit_BattleModeSaucerSpawner(Actor* arg0) {
    s32 i;
    for (i = 0; i < arg0->unk_128; i++) {
        D_80174758[i] = -1;
    }
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_BattleModeSaucerSpawner.s")

void ActorInit_BattleModeSaucer(Actor* battleModeSaucerActor) {
    battleModeSaucerActor->unk_134[0] = battleModeSaucerActor->pos.y;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_BattleModeSaucer.s")

void ActorInit_Unk59(Actor* unk_59Actor){

}

// Unk59 is a (Unk5A)_Spawner
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_Unk59.s")


void ActorInit_Unk5A(Actor* unk_5AActor) {
    unk_5AActor->unk_98 = 1;
}

void ActorTick_Unk5A(Actor* arg0) {
    if (arg0->unk_98 != 0) {
        arg0->vel.y -= 3.200000048f;
        arg0->vel.y -= arg0->vel.y * 0.05000000075f;
        return;
    }
    func_800313BC(arg0->actorIndex, Random(0, 360));
}

void ActorInit_PowerUpSpawner(Actor* powerUpSpawnerActor){
    
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_PowerUpSpawner.s")

void ActorInit_FallingGreyAntSpawner(Actor* fallingGreyAntSpawnerActor){
    
}

void ActorTick_FallingGreyAntSpawner(Actor* arg0) {
    arg0->userVariables[0] += 1;
    if ((arg0->userVariables[0] % arg0->unk_128) == 1) {
        Actor_Init(FALLING_GREY_ANT, arg0->pos.x, arg0->pos.y, arg0->pos.z, 0.0f, -50000.0f, 50000.0f, -50000.0f, 50000.0f, -50000.0f, 50000.0f, arg0->position._f32.x, arg0->position._f32.y, arg0->unk_15C, arg0->unk_160, arg0->unk_164, arg0->unk_168, arg0->unk_16C, arg0->unk_170, arg0->unk_124, arg0->unk_128, arg0->unk_12C, arg0->unk_130);
    }
}

void ActorInit_FallingGreyAnt(Actor* fallingGreyAntActor) {
    fallingGreyAntActor->unk_94 = (f32) fallingGreyAntActor->unk_124;
    fallingGreyAntActor->unk_90 = CalcAngleBetween2DPoints(fallingGreyAntActor->pos.x, fallingGreyAntActor->pos.z, fallingGreyAntActor->position._f32.x, fallingGreyAntActor->position._f32.y);
    fallingGreyAntActor->unk_98 = 1;
    func_800382F4(fallingGreyAntActor);
    fallingGreyAntActor->unk_F0 = Random(0, 0x100);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_FallingGreyAnt.s")

void ActorInit_UnkFireSpawner(Actor* unk_5EActor){
    
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_UnkFireSpawner.s")

// unk_60
void ActorTick_PickupHeartFalling(Actor* arg0) {
    f32 temp_f2;

    if (arg0->userVariables[0] == 0) {
        arg0->vel.y -= (3.200000048f + (arg0->vel.y * 0.05000000075f));
        temp_f2 = arg0->pos.y + arg0->vel.y;
        if (temp_f2 < 0.0f) {
            arg0->pos.y = 0.0f;
            arg0->userVariables[0] = 1;
            return;
        }
        arg0->pos.y = temp_f2;
    }
}

void ActorTick_Powerup(Actor* arg0) {
    if (arg0->userVariables[0] != 0) {
        arg0->userVariables[1] += 1;
        if (arg0->unk_124 == arg0->userVariables[1]) {
            func_80031518(arg0);
        }
    }
    else {
        arg0->vel.y -= (3.200000048f + (arg0->vel.y * 0.05000000075f));
        if (arg0->pos.y + arg0->vel.y < arg0->position._f32.x) {
            arg0->pos.y = arg0->position._f32.x;
            arg0->userVariables[0] = 1;
            return;
        }
        arg0->pos.y += arg0->vel.y;
    }
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/Actors_Tick.s")

//related to spawning collsion pieces
void func_8004BA5C(s32 arg0) {
    s32 i;
    gCurrentActivePlayerPointer = &gPlayerActors[0];
    gTongueOnePointer = &gTongues[0];
    
    for (i = 0; i < arg0; i++) {
        Actors_Tick();
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004BAC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004BC48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004BD7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004BE90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004BF88.s")

s32 func_8004C110(s32 arg0, f32 arg1, f32 arg2) {
    Actor* actorArray;
    s32 temp_v0;
    s32 var_s2;
    s32 actorIndex;
    s32 i;

    var_s2 = 0x05F5E100; //??
    actorIndex = -1;
    actorArray = gActors;
    for (i = 0; i < ARRAY_COUNT(gActors); i++, actorArray++) {
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
    arg0[3] = __cosf(DEGREES_TO_RADIANS_2PI(arg1)) * 65.0f;
    arg0[4] = __sinf(DEGREES_TO_RADIANS_2PI(arg1)) * 65.0f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004C43C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004C600.s")

u8 func_8004CC6C(void) {
    switch (gCurrentZone) {
    case 15:
        return 255;
    case 5:
        return 1;
    case 1:
    case 2:
    case 3:
    case 6:
    case 7:
        return 255;
    default:
        return 8;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004CCBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004CD9C.s")

//related to updating the screen
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004DDE0.s") 

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/D_8010A6D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/D_8010A774.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/D_8010A8C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/D_8010AA28.s")
