#include "84E0.h"

/* Migrated BSS */
//TODO: type this data correctly

s32 D_801748A0;
s32 D_801748A4;
unk0 D_801748A8; //is size 0x58, struct is a guess
unk80174900 D_80174900;
s32 D_80174980; //game state???
//0 == menuing?
//1 == normal
//2 == ???
//3 == ending
//4 == dead
//5 == ???

s32 D_80174984;
s32 D_80174988; //makes you invincible? debug? also has a case for white
s32 D_8017498C;
s32 D_80174990;
f32 D_80174994; //death plane y?
s32 D_80174998; //fade?
s32 gTimer;
s32 D_801749A0; //actor & object timer (for keeping track of deltas) (the stop watch pauses this !)
s32 D_801749A4;
s32 D_801749A8;
s32 Battle_GameType;
s32 D_801749B0;
s32 gIsMultiplayerPaused;
char D_801749B8[24];
s32 D_801749D0;

//pob related
s32 D_801749D8[30];

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
    f32 c = NORM_2(a, b);

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
    case WHITE_BOMB:
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
        ActorInit_Explosion(actorInstance);
        return;
    case BLACK_CHAMELEON_PROJECTILE_SPAWNER:
        ActorInit_ChameleonBlackSpotSpawner(actorInstance);
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
        ActorInit_Armadillo(actorInstance);
        return;
    case POGO:
        ActorInit_Pogo(actorInstance);
        return;
    case UNK_23:
        ActorInit_Unk23(actorInstance);
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
        ActorInit_Unk2F(actorInstance);
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
        ActorInit_GhostBossArmSegment(actorInstance);
        return;
    case PILE_OF_BOOKS_ARM_SPITTER:
        ActorInit_GhostBossArmSpitter(actorInstance);
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
        ActorInit_Golem(actorInstance);
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
        ActorInit_GolemSpiderSpawner(actorInstance);
        return;
    case LIZARD_KONG_BUTTERFLY_SPAWNER:
        ActorInit_LizardKongButterflySpawner(actorInstance);
        return;
    case LIZARD_KONG_BOULDER:
        ActorInit_LizardKongBoulder(actorInstance);
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
        if (Poles[i].mode == 0) {
            Poles[i].mode = arg0;
            Poles[i].pos.x = arg1;
            Poles[i].pos.y = arg2;
            Poles[i].pos.z = arg3;
            Poles[i].yStretch = arg4;
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
    if (TRUE == isInOverworld) {
        sp2C = -1;
    }

    D_80174860->size1 = D_80174860->size1 + ((D_80174860->size2 - D_80174860->size1) * 0.200000003f);
    if (D_801749A8 == 0) {
        //if room is cycle 4 in kids land, or billiards in ghost castle, force free cam
        if (((gCurrentStage == STAGE_KIDS) && (gCurrentZone == ZONE_GLASS_WALL_2)) || ((gCurrentStage == STAGE_GHOST) && (gCurrentZone == ZONE_BILLIARDS))) {
            if (D_80174860->unk0 == 1) {
                PLAY_SFX(SFX_2C_unkSnd, 0, 0x10);
                D_80174860->unk0 = 0;
                if (D_80174860->unk40 == 2) {
                    PLAY_SFX(SFX_2C_unkSnd+1, 0, 0x10);
                    D_80174860->size2 /= 1.299999952f;
                    D_80174860->unk40 -= 1;
                }
                func_800D34CC();
            }
        } else if ((Battle_GameType == BATTLE_TYPE_NOTBATTLE) && (TRUE != isInOverworld) && (arg0.unk_02 & 0x20)) {
            PLAY_SFX(SFX_2C_unkSnd, 0, 0x10);
            if (D_80174860->unk0 == 0) {
                D_80174860->unk0 = 1;
            } else {
                D_80174860->unk0 = 0;
                if (D_80174860->unk40 == 2) {
                    PLAY_SFX(SFX_2C_unkSnd+1, 0, 0x10);
                    D_80174860->size2 /= 1.299999952f;
                    D_80174860->unk40 -= 1;
                }
            }
            func_800D34CC();
        }
        if ((arg0.unk_02 & 4) && (((D_80174860->unk0 == 1) && (D_80174860->unk40 < 2)) || (D_80174860->unk40 <= 0))) {
            PLAY_SFX(SFX_2C_unkSnd+1, 0, 0x10);
            D_80174860->size2 *= 1.299999952f;
            D_80174860->unk40 += 1;
        }
        if ((arg0.unk_02 & 8) && (sp2C < D_80174860->unk40)) {
            PLAY_SFX(SFX_2C_unkSnd+1, 0, 0x10);
            D_80174860->size2 /= 1.299999952f;
            D_80174860->unk40 -= 1;
        }
        if ((arg0.unk_02 & 1) && (D_80174860->pushHoriz < 9)) {
            PLAY_SFX(SFX_2C_unkSnd+1, 0, 0x10);
            D_80174860->pushHoriz += 9;
        }
        if ((arg0.unk_02 & 2) && (D_80174860->pushHoriz >= -8)) {
            PLAY_SFX(SFX_2C_unkSnd+1, 0, 0x10);
            D_80174860->pushHoriz -= 9;
        }
    }
}

//camera controller of sorts
//https://decomp.me/scratch/tpjwG
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8002E9F4.s")

void func_8002ECCC(s32 arg0) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 var_f18;
    s32 sp34;
    f32 var_f2;
    f32 temp;

    sp4C = D_80174860->size1 * 800.0f;
    sp48 = D_80174860->size1 * 600.0f;
    if (D_80174860->pushHoriz > 0) {
        D_80174860->pushHoriz = D_80174860->pushHoriz - 1;
        D_80174860->f1.x += 5.0f;
        WrapDegrees(&D_80174860->f1.x);
        arg0 = 1;
    } else if (D_80174860->pushHoriz < 0) {
        D_80174860->pushHoriz = D_80174860->pushHoriz + 1;
        D_80174860->f1.x -= 5.0f;
        WrapDegrees(&D_80174860->f1.x);
        arg0 = 1;
    }
    if (D_80174860->unk58 != 0) {
        D_80174860->f3.x = D_80174860->unk5C;
        D_80174860->f3.y = D_80174860->unk60;
        D_80174860->f3.z = D_80174860->unk64;
        func_8002E9F4();
    } else {
        if (arg0 != 0) {
            D_80174860->untouchedTimer = 0;
            if (gTongueOnePointer->tongueMode != 0) {
                sp44 = 180.0f - D_80174860->f1.x;
                WrapDegrees(&sp44);
                gTongueOnePointer->trueAngle = sp44 - gTongueOnePointer->controlAngle;
                WrapDegrees(&gTongueOnePointer->trueAngle);
                if (gTongueOnePointer->trueAngle > 180.0f) {
                    gTongueOnePointer->trueAngle = 360.0f - gTongueOnePointer->trueAngle;
                }
                func_8002E9F4();
                if (gTongueOnePointer->trueAngle > 90.0f) {
                    temp = -(90.0f - gTongueOnePointer->trueAngle);

                } else {
                    temp = (90.0f - gTongueOnePointer->trueAngle);
                }
                var_f18 = 90.0f - temp;
                sp4C = (sp4C * 1.0f) * (1.0f + ((gTongueOnePointer->length * (1.0f + ((var_f18 * var_f18) / 3000.0f))) / 10000.0f));
                sp48 *= 1.0f + ((gTongueOnePointer->length * (1.0f + ( SQ(var_f18) / 8000.0f))) / 10000.0f);
                D_80174860->f3.x = (cosf((((D_80174860->f1.x * 2) * PI) / 360.0)) * sp4C) + D_80174860->f1.z;
                D_80174860->f3.z = D_80174860->f2.y - (sinf((((D_80174860->f1.x * 2) * PI) / 360.0)) * sp4C);
            } else {
                func_8002E9F4();
                D_80174860->f3.x = (cosf((((D_80174860->f1.x * 2) * PI) / 360.0)) * sp4C) + D_80174860->f1.z;
                D_80174860->f3.z = D_80174860->f2.y - (sinf((((D_80174860->f1.x * 2) * PI) / 360.0)) * sp4C);
            }
        } else {
            sp3C = gCurrentActivePlayerPointer->yAngle + D_80174860->unk50;
            D_80174860->untouchedTimer++;
            sp34 = D_80174860->untouchedTimer;
            WrapDegrees(&sp3C);
            if (D_80174860->f1.x < 180.0f) {
                if ((D_80174860->f1.x + 180.0f) < sp3C) {
                    var_f2 = (-360.0f - D_80174860->f1.x) + sp3C;
                } else {
                    var_f2 = sp3C - D_80174860->f1.x;
                }
            } else if (sp3C < (D_80174860->f1.x - 180.0f)) {
                var_f2 = (360.0f - D_80174860->f1.x) + sp3C;
            } else {
                var_f2 = sp3C - D_80174860->f1.x;
            }
            if (sp34 >= 61) {
                sp34 = 0x3C;
            }
            if (sp34 >= 20) {
                D_80174860->f1.x = D_80174860->f1.x + (((var_f2 * (sp34 - 0x13)) / 41.0f) * 0.02999999933f);
            }
            WrapDegrees(&D_80174860->f1.x);
            func_8002E9F4();
            D_80174860->f3.x = (cosf( (((D_80174860->f1.x * 2) * PI) / 360.0)) * sp4C) + D_80174860->f1.z;
            D_80174860->f3.z = D_80174860->f2.y - (sinf((((D_80174860->f1.x * 2) * PI) / 360.0)) * sp4C);
        }
        if ((gTongueOnePointer->tongueMode == 4) || (gTongueOnePointer->tongueMode == 5) || (gTongueOnePointer->tongueMode == 0xB)) {
            D_80174860->f2.z = (D_80174860->f2.z + ((gCurrentActivePlayerPointer->pos2.y - D_80174860->f2.z) * 0.0500000000000000028));
        } else {
            D_80174860->f2.z = (D_80174860->f2.z + ((gCurrentActivePlayerPointer->yCounter - D_80174860->f2.z) * 0.0500000000000000028));
        }

        if (D_80174860->f2.z + sp48 < gCurrentActivePlayerPointer->pos2.y) {
            D_80174860->f3.y = gCurrentActivePlayerPointer->pos2.y;
        } else {
            D_80174860->f3.y = D_80174860->f2.z + sp48;
        }
        if (D_80174860->f3.y < D_80174994) {
            D_80174860->f3.y = D_80174994;
        }
    }

    SetCameraParameters();
    if (D_800FEA30 >= 2) {
        D_80174860->f4.x = D_80174860->f3.x;
        D_80174860->f4.y = D_80174860->f3.y;
        D_80174860->f4.z = D_80174860->f3.z;
        D_80174860->f5.x = D_80174860->f1.z;
        D_80174860->f5.y = D_80174860->f2.x;
        D_80174860->f5.z = D_80174860->f2.y;
    }

    D_80174860->f1.y = CalculateAngleOfVector(D_80174860->f4.x - D_80174860->f5.x, -(D_80174860->f4.z - D_80174860->f5.z));
}

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
    return (((((sinf(arg0 * 0x168 * arg3 / arg2 * 2 * PI / 360.0) * (arg2 - arg0)) / arg2) + 3.0) * arg0) / 4) / arg2;
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
    PLAY_SFX(SFX_TongueWall, 0, 0X10);
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

void func_800312FC(Actor* arg0, f32 arg1) {
    arg0->userVariables[0] = 0;
    arg0->userVariables[1] = 14;
    arg0->unk_134[3] = 76.80000305f;
    arg0->vel.x = cosf(DEGREES_TO_RADIANS_2PI(arg1)) * 16.0f;     //cosf(DEGREES_TO_RADIANS_2PI(arg1)) * 16.0f;
    arg0->vel.z = -sinf(DEGREES_TO_RADIANS_2PI(arg1)) * 16.0f;
    arg0->tongueCollision = 0;
    PLAY_SFX_AT(SFX_6D_unkSnd, arg0->pos, 0, 0);
}


void func_800313BC(s32 arg0, f32 arg1) {
    func_800311C8(gActors+arg0);
    gActors[arg0].actorState = 4;
    gActors[arg0].unk_C8 = 0;
    gActors[arg0].sizeScalar = 1.0f;
    func_800312B0(arg0);
    gActors[arg0].vel.y = 38.4f;
    gActors[arg0].vel.x = cosf(DEGREES_TO_RADIANS_2PI(arg1)) * 12.0f;
    gActors[arg0].vel.z = -sinf(DEGREES_TO_RADIANS_2PI(arg1)) * 12.0f;
    if (gActors[arg0].actorID == SPIDER_SPAWNER) {
        StageFlags[(s32)gActors[arg0].unk_164] = 1;
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

    for (i = gTongueOnePointer->poleSegmentAt; i < gTongueOnePointer->cameraSegmentAt; i++){
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

    angle = CalcAngleBetween2DPoints(arg1, arg2, Poles[gTongueOnePointer->poleID].pos.x, Poles[gTongueOnePointer->poleID].pos.z);
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
        PLAY_SFX(SFX_3A_unkSnd, 0, 0x10);
        var_s0 = 0x1E;
        break;
    case O_HEART:
        gCurrentActivePlayerPointer->hp += 3;
        if (gCurrentActivePlayerPointer->hp > 10) {
            gCurrentActivePlayerPointer->hp = 10;
        }
        PLAY_SFX(SFX_3A_unkSnd, 0, 0x10);
        var_s0 = 0x28;
        break;
    case Y_HEART:
        gCurrentActivePlayerPointer->hp = 10;
        PLAY_SFX(SFX_3A_unkSnd, 0, 0x10);
        var_s0 = 0x32;
        break;
    case CROWN:
        PLAY_SFX(SFX_39_unkSnd, 0, 0x10);
        var_s0 = 0x46;
        break;
    case CARROT:
        PLAY_SFX(SFX_39_unkSnd, 0, 0x10);
        var_s0 = 0x50;
        break;
    case UNK_65:
        PLAY_SFX(SFX_39_unkSnd, 0, 0x10);
        var_s0 = 0x5A;
        break;
    case TIME_STOP_POWER_UP:
        ClearPlayerPowerups(gCurrentActivePlayerPointer);
        gCurrentActivePlayerPointer->power = 4;
        gCurrentActivePlayerPointer->powerTimer = 0;
        gCurrentActivePlayerPointer->powerTimerTill = actor->unk_128;
        PLAY_SFX(SFX_3A_unkSnd, 0, 0x10);
        var_s0 = 0x32;
        break;
    case BIG_FEET_POWER_UP:
        ClearPlayerPowerups(gCurrentActivePlayerPointer);
        gCurrentActivePlayerPointer->power = 1;
        gCurrentActivePlayerPointer->powerTimer = 0;
        gCurrentActivePlayerPointer->powerTimerTill = actor->unk_128;
        PLAY_SFX(SFX_3A_unkSnd, 0, 0x10);
        var_s0 = 0x32;
        break;
    case BIG_HEAD_POWER_UP:
        ClearPlayerPowerups(gCurrentActivePlayerPointer);
        gCurrentActivePlayerPointer->power = 2;
        gCurrentActivePlayerPointer->powerTimer = 0;
        gCurrentActivePlayerPointer->powerTimerTill = actor->unk_128;
        PLAY_SFX(SFX_3A_unkSnd, 0, 0x10);
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
        PLAY_SFX(SFX_3A_unkSnd, 0, 0x10);
        break;
    case SHRINK_ENEMY_POWER_UP:
        ClearPlayerPowerups(gCurrentActivePlayerPointer);
        var_v1 = gCurrentActivePlayerPointer->playerID;
        for (i = 0; i < ARRAY_COUNT(gPlayerActors); i++) {
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
        PLAY_SFX(SFX_3A_unkSnd, 0, 0x10);
        var_s0 = 0x32;
        break;
    }

    actor->actorID = 0;

    if (var_s0 == 0) {
        Effect_PlayerEyes_Init(gSelectedCharacters[gCurrentActivePlayerPointer->playerID], 2, 50.0f, 0);
        return;
    }
    Effect_PlayerEyes_Init(gSelectedCharacters[gCurrentActivePlayerPointer->playerID], 1, var_s0, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80034104.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800343B4.s")

//spitActor?
void func_8003449C(void) {
    Actor* newActor;
    s32 i;

    if ((gCurrentActivePlayerPointer->amountToShoot != 0) && ((s32) gCurrentActivePlayerPointer->amountLeftToShoot < 6)) {
        i = gTongueOnePointer->amountInMouth - 1;
        gTongueOnePointer->amountInMouth = i;
        newActor = &gActors[gTongueOnePointer->inMouth[i]];
        newActor->unk_90 = gCurrentActivePlayerPointer->yAngle;
        newActor->actorState = 3;
        newActor->pos.x = gCurrentActivePlayerPointer->pos.x;
        newActor->pos.y = (gCurrentActivePlayerPointer->pos.y + gCurrentActivePlayerPointer->tongueYOffset) - (newActor->unknownPositionThings[0].unk_10 / 2);
        newActor->pos.z = gCurrentActivePlayerPointer->pos.z;
        newActor->vel.x = cosf(DEGREES_TO_RADIANS_2PI(newActor->unk_90)) * 80;
        newActor->vel.y = 0;
        newActor->vel.z = -sinf(DEGREES_TO_RADIANS_2PI(newActor->unk_90)) * 80;
        newActor->unk_C0 = 0;
        if (gCurrentActivePlayerPointer->power == 2) {
            newActor->unk_D0 = 2;
        } else if (gCurrentActivePlayerPointer->power == 3) {
            newActor->unk_D0 = 0.5f;
        } else {
            newActor->unk_D0 = 1;
        }
        newActor->unk_C4 = (gCurrentActivePlayerPointer->amountToShoot * 2) + 0x5A;
        newActor->sizeScalar = newActor->unk_D0 / 8;
        func_800312B0(newActor->actorIndex);
        if ((newActor->actorID == 1) || (newActor->actorID == 0x3C)) {
            gCurrentActivePlayerPointer->amountLeftToShoot = 0xC;
        } else {
            gCurrentActivePlayerPointer->amountLeftToShoot = (u32) (s32) (newActor->unk_D0 * 8);
        }
        gCurrentActivePlayerPointer->amountToShoot--;
        SetPlayerImpulse();
        PLAY_SFX(0xB, 0, 0x10);
        PLAY_SFX(0xCA, 0, 0x10);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80034744.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80034B10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80034FFC.s")

void func_80035374(Unk_func_80035374* arg0) {
    if ((arg0->unk6 == 0) && (arg0->unk8 == 0)) {
        AreAnglesWithin180Degrees(gCurrentActivePlayerPointer->yAngle, CalculateAngleOfVector((&Poles[gTongueOnePointer->poleID])->pos.x - gCurrentActivePlayerPointer->pos.x, -((&Poles[gTongueOnePointer->poleID])->pos.z - gCurrentActivePlayerPointer->pos.z)));
    } else {
        AreAnglesWithin180Degrees(arg0->unkC, CalcAngleBetween2DPoints(gCurrentActivePlayerPointer->pos.x, gCurrentActivePlayerPointer->pos.z, (&Poles[gTongueOnePointer->poleID])->pos.x, (&Poles[gTongueOnePointer->poleID])->pos.z));
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ControlTongue.s")

void func_800360E4(Actor* actor) {
    f32 pad, pad2;
    f32 angle;
    f32 xCalc = gCurrentActivePlayerPointer->pos.x - actor->pos.x, zCalc = gCurrentActivePlayerPointer->pos.z - actor->pos.z; //required

    if ((actor->pos.y < (gCurrentActivePlayerPointer->pos.y + gCurrentActivePlayerPointer->hitboxYStretch)) && (gCurrentActivePlayerPointer->pos.y < (actor->unknownPositionThings[0].unk_10 + actor->pos.y))) {
        if ((SQ(xCalc) + SQ(zCalc)) < SQ(actor->unknownPositionThings[0].unk_0C)) {
            angle = CalculateAngleOfVector(xCalc, -zCalc);
            gCurrentActivePlayerPointer->vel.x = ((actor->unknownPositionThings[0].unk_0C * cosf(DEGREES_TO_RADIANS_2PI(angle))) + actor->pos.x) - gCurrentActivePlayerPointer->pos.x;
            gCurrentActivePlayerPointer->vel.z = ((actor->unknownPositionThings[0].unk_0C * -sinf(DEGREES_TO_RADIANS_2PI(angle))) + actor->pos.z) - gCurrentActivePlayerPointer->pos.z;
            CalcNextPosition(gCurrentActivePlayerPointer, gTongueOnePointer, actor);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003624C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80036490.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80036900.s")

void func_80036D74(PlayerActor* arg0, Tongue* arg1) {
    if (arg0->playerHURTSTATE == 0) {
        func_8002F884(arg0->playerID, 5);
        Effect_TypeD_Create(arg0->pos.x, arg0->pos.y, arg0->pos.z);
        PLAY_SFX(SFX_ChameleonOw+1, 0, 0x10);
        if ((Battle_GameType == BATTLE_TYPE_NOTBATTLE) && (D_80174980 != 3) && (D_80174988 == 0)) {
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
        arg0->vel.x = -cosf(DEGREES_TO_RADIANS_2PI(arg0->yAngle)) * 32.0f;
        arg0->vel.z = sinf(DEGREES_TO_RADIANS_2PI(arg0->yAngle)) * 32.0f;
        func_8002F54C(48.0f, arg0, 1);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80036F30.s")

//why doesnt this pass an actor pointer??????
s32 IsExplodingActor(s32 actorIndex) {
    s32 actorID = gActors[actorIndex].actorID;
    if ((actorID == WHITE_BOMB) || (actorID == GRENADE) ||
        (actorID == MISSILE) || (actorID == CANNONBALL) || (actorID == BL_BOSS_BOMBS)) {
        return 1;
    }
    return 0;
}


s32 IsActiveExplosion(Actor* actor) {
    if (actor->actorID == EXPLOSION && (u32)actor->globalTimer >= 5) {
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
    arg0->vel.x = cosf(DEGREES_TO_RADIANS_2PI(arg0->unk_90)) * arg0->unk_94;
    arg0->vel.z = -sinf(DEGREES_TO_RADIANS_2PI(arg0->unk_90)) * arg0->unk_94;
}

void func_800383A0(Actor* actor) {
    CalcEnemyNextPosition(actor);
}

void ActorInit_GreyAntSpawner(Actor* greyAntSpawner) {
    if (greyAntSpawner->unk_12C != 0) {
        D_801748A0 = 0;
        greyAntSpawner->userVariables[1] = greyAntSpawner->unk_12C;
    }
}

void ActorTick_GreyAntSpawner(Actor* greyAntSpawner) {
    greyAntSpawner->userVariables[0] += 1;
    if (((greyAntSpawner->userVariables[0] %  greyAntSpawner->unk_128) == 1) && (Actor_Init(GREY_ANT, greyAntSpawner->pos.x, greyAntSpawner->pos.y, greyAntSpawner->pos.z, 0.0f, -50000.0f, 50000.0f, -50000.0f, 50000.0f, -50000.0f, 50000.0f, greyAntSpawner->position._f32.x, greyAntSpawner->position._f32.y, greyAntSpawner->unk_15C, greyAntSpawner->unk_160, greyAntSpawner->unk_164, greyAntSpawner->unk_168, greyAntSpawner->unk_16C, greyAntSpawner->unk_170, greyAntSpawner->unk_124, greyAntSpawner->unk_128, greyAntSpawner->unk_12C, greyAntSpawner->unk_130) != -1)) {
        greyAntSpawner->userVariables[1] -= 1;
        if (greyAntSpawner->userVariables[1] == 0) {
            greyAntSpawner->actorID = 0;
        }
    }
}

// Grey Ant Function
void ActorInit_GreyAnt(Actor* greyAnt) {
    greyAnt->unk_94 = greyAnt->unk_124;
    greyAnt->unk_90 = CalcAngleBetween2DPoints(greyAnt->pos.x, greyAnt->pos.z, greyAnt->position._f32.x, greyAnt->position._f32.y);
    greyAnt->userVariables[0] = 4;
    greyAnt->unk_134[0] = greyAnt->pos.y;
    greyAnt->pos.y = greyAnt->pos.y - greyAnt->unknownPositionThings[0].unk_10;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_GreyAnt.s")

// Bullet-Hell Ant Spawner
void ActorInit_BulletHellAntSpawner(Actor* bulletHellAntSpawner) {
    bulletHellAntSpawner->userVariables[1] = bulletHellAntSpawner->unk_128;
}

void ActorTick_BulletHellAntSpawner(Actor* bulletHellAntSpawner) {
    if (gCurrentActivePlayerPointer->pos.z > -500.0f) {
        bulletHellAntSpawner->userVariables[2] = 1;
    }
    if (bulletHellAntSpawner->userVariables[2] != 0) {
        bulletHellAntSpawner->userVariables[0] += 1;
        if (((bulletHellAntSpawner->userVariables[0] % (s32) bulletHellAntSpawner->unk_124) == 1) && (Actor_Init(BULLET_HELL_ANT, bulletHellAntSpawner->pos.x, bulletHellAntSpawner->pos.y, bulletHellAntSpawner->pos.z, 0.0f, -50000.0f, 50000.0f, -50000.0f, 50000.0f, -50000.0f, 50000.0f, bulletHellAntSpawner->position._f32.x, bulletHellAntSpawner->position._f32.y, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0) != -1)) {
            bulletHellAntSpawner->userVariables[1] -= 1;
            if (bulletHellAntSpawner->userVariables[1] == 0) {
                func_80031518(bulletHellAntSpawner);
            }
        }
    }
}

void ActorInit_AntBulletHell(Actor* bulletHellAnt) {
    f32 ang;
    f32 sine;
    bulletHellAnt->unk_94 = bulletHellAnt->position._f32.x;
    sine = sinf((6 * gTimer * PI) / 360.0);
    ang = CalcAngleBetween2DPoints(bulletHellAnt->pos.x, bulletHellAnt->pos.z, gCurrentActivePlayerPointer->pos.x, gCurrentActivePlayerPointer->pos.z);
    bulletHellAnt->unk_90 = bulletHellAnt->position._f32.y + (ang + 12 * sine);
    WrapDegrees(&bulletHellAnt->unk_90);
    func_800382F4(bulletHellAnt);
}

s32 ActorTick_BulletHellAnt(Actor* bulletHellAnt) {
    if (bulletHellAnt->unk_98 != 0) {
        bulletHellAnt->vel.y -= 3.200000048f;
        bulletHellAnt->vel.y -= bulletHellAnt->vel.y * 0.05000000075f;
    }
    if (gTimer % 8 == 0) {
        PLAY_SFX_AT(SFX_63_unkSnd+3, bulletHellAnt->pos, 1, 0);
    }
    else if (gTimer % 8 == 4) {
        PLAY_SFX_AT(SFX_63_unkSnd+2, bulletHellAnt->pos, 1, 0);
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_RedAntSpawner.s")

void ActorTick_AntTrioSpawner(Actor* antTrioSpawner) {
    antTrioSpawner->userVariables[0] += 1;
    if ((antTrioSpawner->userVariables[0] % antTrioSpawner->unk_128) == 1) {
        Actor_Init(ANT_TRIO, antTrioSpawner->pos.x, antTrioSpawner->pos.y, antTrioSpawner->pos.z, 0.0f, -50000.0f, 50000.0f, -50000.0f, 50000.0f, -50000.0f, 50000.0f, antTrioSpawner->position._f32.x, antTrioSpawner->position._f32.y, antTrioSpawner->unk_15C, antTrioSpawner->unk_160, antTrioSpawner->unk_164, antTrioSpawner->unk_168, antTrioSpawner->unk_16C, antTrioSpawner->unk_170, antTrioSpawner->unk_124, antTrioSpawner->unk_128, antTrioSpawner->unk_12C, antTrioSpawner->unk_130);
    }
}

// Ant Trio Function
void ActorInit_AntTrio(Actor* antTrio) {
    antTrio->unk_94 = (f32) antTrio->unk_124;
    antTrio->unk_90 = CalcAngleBetween2DPoints(antTrio->pos.x, antTrio->pos.z, antTrio->position._f32.x, antTrio->position._f32.y);
    antTrio->unk_98 = 1;
    func_800382F4(antTrio);
    antTrio->unk_F0 = Random(0, 0x100);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_AntTrio.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorInit_RedAnt.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_RedAnt.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800397DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorInit_YellowAnt.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_YellowAnt.s")

void ActorInit_GreenAnt(Actor* greenAnt) {
    greenAnt->unk_134[0] = 0.0f;
    greenAnt->userVariables[2] = greenAnt->unk_15C / greenAnt->position._f32.x;
    greenAnt->unk_F0 = Random(0, 256);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_GreenAnt.s")

void ActorInit_AntQueen(Actor* quintella) {
    quintella->unk_120 = (s32) quintella->unk_12C;
    quintella->tongueCollision = 3;
    quintella->unknownPositionThings[1].unk_0C = 150.0f;
    quintella->unknownPositionThings[1].unk_10 = (f32) D_8010A6D0[ANT_QUEEN].y;
    quintella->unknownPositionThings[2].unk_0C = 200.0f;
    quintella->unknownPositionThings[2].unk_10 = (f32) D_8010A6D0[ANT_QUEEN].y;
    quintella->unknownPositionThings[1].unk_04 = 150.0f;
    quintella->unknownPositionThings[2].unk_04 = 300.0f;
}

void QueenAnt_SpawnDrones(Actor* quintella) {
    Actor_Init(ANT_QUEEN_ANT, quintella->pos.x - (cosf(DEGREES_TO_RADIANS_2PI(quintella->unk_90)) * 300), quintella->pos.y + 100, (sinf(DEGREES_TO_RADIANS_2PI(quintella->unk_90)) * 300) + quintella->pos.z, quintella->unk_90 - 90, -10000, 10000, -1000, 1000, -10000, 10000, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    Actor_Init(ANT_QUEEN_ANT, quintella->pos.x - (cosf(DEGREES_TO_RADIANS_2PI(quintella->unk_90)) * 420), quintella->pos.y + 100, (sinf(DEGREES_TO_RADIANS_2PI(quintella->unk_90)) * 420) + quintella->pos.z, quintella->unk_90 - 90, -10000, 10000, -1000, 1000, -10000, 10000, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    Actor_Init(ANT_QUEEN_ANT, quintella->pos.x - (cosf(DEGREES_TO_RADIANS_2PI(quintella->unk_90)) * 540), quintella->pos.y + 100, (sinf(DEGREES_TO_RADIANS_2PI(quintella->unk_90)) * 540) + quintella->pos.z, quintella->unk_90 - 90, -10000, 10000, -1000, 1000, -10000, 10000, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    Actor_Init(ANT_QUEEN_ANT, quintella->pos.x - (cosf(DEGREES_TO_RADIANS_2PI(quintella->unk_90)) * 300), quintella->pos.y + 100, (sinf(DEGREES_TO_RADIANS_2PI(quintella->unk_90)) * 300) + quintella->pos.z, quintella->unk_90 + 90, -10000, 10000, -1000, 1000, -10000, 10000, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    Actor_Init(ANT_QUEEN_ANT, quintella->pos.x - (cosf(DEGREES_TO_RADIANS_2PI(quintella->unk_90)) * 420), quintella->pos.y + 100, (sinf(DEGREES_TO_RADIANS_2PI(quintella->unk_90)) * 420) + quintella->pos.z, quintella->unk_90 + 90, -10000, 10000, -1000, 1000, -10000, 10000, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    Actor_Init(ANT_QUEEN_ANT, quintella->pos.x - (cosf(DEGREES_TO_RADIANS_2PI(quintella->unk_90)) * 540), quintella->pos.y + 100, (sinf(DEGREES_TO_RADIANS_2PI(quintella->unk_90)) * 540) + quintella->pos.z, quintella->unk_90 + 90, -10000, 10000, -1000, 1000, -10000, 10000, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_AntQueen.s")

void ActorInit_AntQueenDrone(Actor* drone) {
    WrapDegrees(&drone->unk_90);
    drone->unk_94 = drone->position._f32.x;
    drone->vel.y = 38.4f;
    func_800382F4(drone);
}

void ActorTick_AntQueenDrone(Actor* drone) {
    f32 playerXMod;
    f32 playerZMod;

    if (drone->userVariables[0] == 0) {
        drone->vel.y -= 3.2f;
    }
    if ((drone->pos.y <= 0.0f) && (drone->vel.y < 0.0f)) {
        drone->userVariables[0] = 1;
        drone->pos.y = 0.0f;
        drone->vel.y = 0.0f;
    }
    if ((drone->pos.x < -1400.0f) || (drone->pos.x > 1400.0f) || (drone->pos.z < -1400.0f) || (drone->pos.z > 1400.0f)) {
        playerXMod = gCurrentActivePlayerPointer->pos.x;
        playerZMod = gCurrentActivePlayerPointer->pos.z;
        if (playerXMod < -1300.0f) playerXMod = -1300.0f;
        if (playerXMod > 1300.0f) playerXMod = 1300.0f;
        if (playerZMod < -1300.0f) playerZMod = -1300.0f;
        if (playerZMod > 1300.0f) playerZMod = 1300.0f;
        drone->unk_90 = CalcAngleBetween2DPoints(drone->pos.x, drone->pos.z, playerXMod, playerZMod);
    }
    func_800382F4(drone);
}

// White Bomb Snake Function
void ActorInit_WhiteBombSnake(Actor* whiteBombSnake) {
    whiteBombSnake->userVariables[0] = 4;
    whiteBombSnake->unk_134[0] = whiteBombSnake->pos.x;
    whiteBombSnake->unk_134[1] = whiteBombSnake->pos.z;
    whiteBombSnake->unk_90 = CalcAngleBetween2DPoints(whiteBombSnake->pos.x, whiteBombSnake->pos.z, whiteBombSnake->position._f32.x, whiteBombSnake->position._f32.y);
    whiteBombSnake->userVariables[3] = (s32) (180.0f / whiteBombSnake->unk_160);
    whiteBombSnake->unk_160 = (f32) (0xB4 / whiteBombSnake->userVariables[3]);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_WhiteBombSnake.s")

void ActorInit_Grenade(Actor* grenade) {
    grenade->unk_94 = grenade->position._f32.x;
}

void ActorTick_Grenade(Actor* grenade) {
    f32 angle = CalcAngleBetween2DPoints(grenade->pos.x, grenade->pos.z, gCurrentActivePlayerPointer->pos.x, gCurrentActivePlayerPointer->pos.z);
    grenade->userVariables[1]++;
    switch (grenade->userVariables[0]) {
    case 0:
        if (grenade->unk_124 == grenade->userVariables[1]) {
            grenade->userVariables[0] = 1;
            grenade->userVariables[1] = 0;
        }
        break;
    case 1:
        if (grenade->unk_128 == grenade->userVariables[1]) {
            grenade->userVariables[0] = 0;
            grenade->userVariables[1] = 0;
        }
        angle += 180.0f;
        WrapDegrees(&angle);
        break;
    }
    if (grenade->unk_12C < grenade->globalTimer) {
        func_8002D36C(&grenade->unk_90, angle, grenade->position._f32.y);
    }
    Actor_PlaySound(grenade, SFX_GrenadeWalk, 10, 4);
    func_800382F4(grenade);
}

void ActorInit_MissileSpawner(Actor* missileSpawner) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_MissileSpawner.s")

void ActorInit_Missile(Actor* missile) {
    missile->unk_134[0] = missile->pos.x;
    missile->unk_134[1] = missile->pos.y;
    missile->unk_134[2] = missile->pos.z;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_Missile.s")


void ActorInit_Cannon(Actor* cannon) {
    cannon->tongueCollision = 2;
    cannon->unknownPositionThings[0].unk_00 = cosf(DEGREES_TO_RADIANS_2PI(cannon->unk_90)) * 200.0f;
    cannon->unknownPositionThings[0].unk_04 = -cannon->unknownPositionThings[0].unk_10 / 2;
    cannon->unknownPositionThings[0].unk_08 = -sinf(DEGREES_TO_RADIANS_2PI(cannon->unk_90)) * 200.0f;
    cannon->unknownPositionThings[1].unk_10 = cannon->tYPos;
    cannon->unknownPositionThings[1].unk_00 = 0.0f;
    cannon->unknownPositionThings[1].unk_0C = cannon->tScale;
    cannon->unknownPositionThings[1].unk_04 = -cannon->tYPos / 2;
    cannon->unknownPositionThings[1].unk_08 = 0.0f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_Cannon.s")

// CANNONBALL Function
void ActorInit_Cannonball(Actor* cannonball) {
    f32 temp_f16 = cannonball->position._f32.x - cannonball->pos.x; f32 temp_f18 = cannonball->unk_15C - cannonball->pos.z;
    cannonball->unk_90 = CalcAngleBetween2DPoints(cannonball->pos.x, cannonball->pos.z, cannonball->position._f32.x, cannonball->unk_15C);
    cannonball->unk_94 = cannonball->unk_160;
    cannonball->userVariables[0] = (s32) (sqrtf(SUM_OF_SQUARES(temp_f16, temp_f18)) / cannonball->unk_94);
    cannonball->unk_134[0] = (cannonball->position._f32.y - cannonball->pos.y) / (f32) cannonball->userVariables[0];
    func_800382F4(cannonball);
    PLAY_SFX_AT(SFX_77_unkSnd, cannonball->pos, 0, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_Cannonball.s")

s32 func_8003C734(Actor* arg0, s32 arg1) {
    s32 passVar;
    s32 actorIndex;

    actorIndex = Actor_Init(arg0->actorID, arg0->pos.x, arg0->pos.y, arg0->pos.z, arg0->unk_90, arg0->unk_F4, arg0->unk_F8, arg0->unk_FC, arg0->unk_100, arg0->unk_104, arg0->unk_108, arg0->position._f32.x, arg0->position._f32.y, arg0->unk_15C, arg0->unk_160, arg0->unk_164, arg0->unk_168, arg0->unk_16C, arg0->unk_170, 0, arg0->unk_128, arg0->unk_12C, arg0->unk_130);

    if (actorIndex == -1) {
        return -1;
    }

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

void ActorInit_Explosion(Actor* explosion) {
    f32 xPos = explosion->position._f32.x;

    xPos *= 2;
    explosion->unknownPositionThings[0].unk_0C = explosion->position._f32.x;
    explosion->tScale = explosion->position._f32.x;
    explosion->unknownPositionThings[0].unk_10 = xPos;
    explosion->tYPos = xPos;
}

void ActorTick_Explosion(Actor* explosion) {
    if (explosion->unk_124 == explosion->globalTimer) {  //0x124 == 0x10
        func_80031518(explosion);
    }
}

void ActorTick_BombBossBomb(Actor* bsBomb) {
    f32 temp_f12;
    f32 temp_f2;

    if (bsBomb->unk_124 == bsBomb->globalTimer) {
        temp_f2 = -50000.0f;
        temp_f12 = 50000.0f;
        if (Actor_Init(EXPLOSION, bsBomb->pos.x, bsBomb->pos.y, bsBomb->pos.z, 0.0f, temp_f2, temp_f12, temp_f2, temp_f12, temp_f2, temp_f12, 200.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 10, 0, 0, 0) != -1) {
            Effect_TypeA_Init(bsBomb->pos.x, bsBomb->pos.y, bsBomb->pos.z, 3, 100);
        }
        func_80031518(bsBomb);
    }
}

// Black Chameleon Projectile Spawner
void ActorInit_ChameleonBlackSpotSpawner(Actor* blackChameleonProjectileSpawner){

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_ChameleonBlackSpotSpawner.s")

void ActorInit_ChameleonBlackSpot(Actor* blackSpot) {
    blackSpot->sizeScalar = 0.0f;
    func_800312B0(blackSpot->actorIndex);
}

void ActorTick_ChameleonBlackSpot(Actor* blackSpot) {
    if (blackSpot->sizeScalar < 1.0f) {
        blackSpot->sizeScalar += 0.05f;
        if (blackSpot->sizeScalar > 1.0f) {
            blackSpot->sizeScalar = 1.0f;
        }
        func_800312B0(blackSpot->actorIndex);
    }
}

void ActorInit_Chomper(Actor* chomper) {
    chomper->unk_134[0] = chomper->pos.y;
    chomper->pos.y -= 100.0f;
    chomper->unknownPositionThings[0].unk_0C = chomper->unk_164 * chomper->tScale;
    chomper->tScale *= chomper->unk_164;
    chomper->unknownPositionThings[0].unk_10 = chomper->unk_164 * chomper->tYPos;
    chomper->tYPos *= chomper->unk_164;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_Chomper.s")

void ActorInit_SandCrab(Actor* sandCrab) {
    sandCrab->unk_134[0] = sandCrab->pos.y;
    sandCrab->pos.y -= 150.0f;
    sandCrab->vel.y = 32.0f;
    sandCrab->unk_94 = sandCrab->position._f32.x;
    func_800382F4(sandCrab);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_SandCrab.s")

void ActorInit_Vulture(Actor* vulture) {
    vulture->unk_134[0] = vulture->pos.x;
    vulture->unk_134[1] = vulture->pos.y;
    vulture->unk_134[2] = vulture->pos.z;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_Vulture.s")

void ActorTick_ArrowSpawner(Actor* arrowSpawner) {
    arrowSpawner->userVariables[0]++;
    if (arrowSpawner->unk_124 == arrowSpawner->userVariables[0]) {
        arrowSpawner->userVariables[0] = 0;
        if (Actor_Init(ARROWS, arrowSpawner->pos.x, arrowSpawner->pos.y, arrowSpawner->pos.z, arrowSpawner->unk_90, -50000.0f, 50000.0f, -50000.0f, 50000.0f, -50000.0f, 50000.0f, arrowSpawner->position._f32.x, arrowSpawner->position._f32.y, arrowSpawner->unk_15C, arrowSpawner->unk_160, 0.0f, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0) != -1) {
            PLAY_SFX_AT(SFX_8B_unkSnd, arrowSpawner->pos, 0, 0);
        }
    }
}

void ActorInit_Arrows(Actor* arrows) {
    arrows->unk_94 = arrows->position._f32.x;
    arrows->userVariables[0] = (s32) (arrows->position._f32.y / arrows->position._f32.x);
}

void ActorTick_Arrow(Actor* arrows) {
    if (arrows->globalTimer == arrows->userVariables[0]) {
        func_80031518(arrows);
    }
    func_800382F4(arrows);
}

// BOULDER
void func_8003E368(Actor* boulder){

}

void BoulderCalculations(Actor* boulder) {
    f32 tempX = boulder->vel.x;
    f32 tempY = boulder->vel.y;
    f32 tempZ = boulder->vel.z;
    f32 tempB4 = boulder->unk_B4;
    f32 tempB8 = boulder->unk_B8;
    f32 tempBC = boulder->unk_BC;
    f32 calculation;
    f32 var = (((tempX * tempB4) + (tempY * tempB8) + (tempZ * tempBC)) * 2);

    calculation = var / ((tempB4 * tempB4) + (tempB8 * tempB8) + (tempBC * tempBC));

    boulder->unk_98 = 1;
    boulder->pos.y += boulder->unknownPositionThings[0].unk_10 * 0.5f;
    boulder->vel.x = (tempX - (calculation * tempB4)) * 0.8f;
    boulder->vel.y = tempY - (calculation * tempB8);
    boulder->vel.z = (tempZ - (calculation * tempBC)) * 0.8f;
    if ((boulder->vel.y < boulder->unk_160) && (boulder->globalTimer >= 17U)) {
        boulder->userVariables[0] = -1;
        boulder->vel.z = 0;
        boulder->vel.y = 0;
        boulder->vel.x = 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_Boulder.s")

void ActorInit_Armadillo(Actor* armadillo) {
    armadillo->unk_134[0] = armadillo->position._f32.y / armadillo->position._f32.x;
    armadillo->pos.y = -400.0f;
    armadillo->unk_134[4] = 100.0f;
    armadillo->userVariables[4] = armadillo->unk_130;
}

//used by ActorTick_Armadillo
void func_8003E660(Actor* armadillo) {
    f32 pad = armadillo->vel.y;
    f32 var1 = 3.2f;
    armadillo->vel.y -= var1;
    if (armadillo->vel.y < 0.0f) {
        armadillo->vel.y -= armadillo->vel.y * (var1 / armadillo->unk_16C);
        if (armadillo->pos.y < 1000.0f) {
            armadillo->userVariables[0] = 6;
        }
    }
}

//armadillo crab spawn
//used by ActorTick_Armadillo
void func_8003E6C4(Actor* armadillo) {
    f32 calc1;
    f32 rad;
    s32 i;

    for (i = 0; i < armadillo->unk_12C; i++){
        f32 a, b, c, d;
        calc1 = (i * 360.0f) / armadillo->unk_12C;
        rad = DEGREES_TO_RADIANS_2PI(calc1);
        a = cosf(rad);
        b = sinf(rad);
        c = cosf(rad);
        d = sinf(rad);
        Actor_Init(SAND_CRAB,
            a * 100.0f + armadillo->pos.x,
            0,
            armadillo->pos.z - b * 100.0f,
            calc1,
            -10000,
            10000.0f,
            -10000,
            20000,
            -10000,
            10000.0f,
            armadillo->unk_160,
            armadillo->unk_170 * c + armadillo->pos.x,
            armadillo->pos.z - armadillo->unk_170 * d,
            0.0f,
            0.0f,
            0.0f,
            0.0f,
            0.0f,
            0,
            0,
            0,
            0);
    }
}

//used by ActorTick_Armadillo
void func_8003E870(Actor* arg0, s32 arg1) {
    arg0->vel.x += -arg0->unk_134[0] * 2 * arg0->vel.x;
    arg0->vel.z += -arg0->unk_134[0] * 2 * arg0->vel.z;
    arg0->vel.y -= 3.2f + (arg0->vel.y * (3.2f / arg0->unk_16C));
    arg0->unk_134[3] += 40;
    if (arg0->pos.y + arg0->vel.y < 0) {
        arg0->vel.y = -arg0->vel.y * 0.95f;
        func_8006F8D8(arg0->pos.x, arg0->pos.y, arg0->pos.z);
        PLAY_SFX_AT(SFX_Standard_Bounce, arg0->pos, 0, 0);
        arg0->userVariables[0] = arg1;
    }
}

//used by ActorTick_Armadillo
void func_8003E968(Actor* armadillo, f32 arg1, f32 arg2) {
    f32 cos, sin;
    f32 angle = CalcAngleBetween2DPoints(armadillo->pos.x, armadillo->pos.z, arg1, arg2);
    cos = cosf(DEGREES_TO_RADIANS_2PI(angle)) * armadillo->unk_134[0];
    sin = -sinf(DEGREES_TO_RADIANS_2PI(angle)) * armadillo->unk_134[0];

    armadillo->vel.x += (cosf(DEGREES_TO_RADIANS_2PI(angle)) * armadillo->position._f32.y * 1.5f) -
        (((cos < 0.0f) ? -cos : cos) * armadillo->vel.x);
    armadillo->vel.z += ((-sinf(DEGREES_TO_RADIANS_2PI(angle)) * armadillo->position._f32.y * 1.5f) -
        (((sin < 0.0f) ? -sin : sin) * armadillo->vel.z));
    armadillo->vel.y -= 3.2f;
    if (armadillo->vel.y < 0.0f) {
        armadillo->vel.y -= armadillo->vel.y * (3.2f / armadillo->unk_16C);
    }
    armadillo->unk_134[3] += 30.0f;
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_Armadillo.s")

//used in ActorInit_Pogo
void func_8003FA38(Actor* pogo, f32 arg1, f32 arg2, f32 arg3) {
    f32 temp_f0;
    f32 temp_f2;
    s32 temp_f8;

    temp_f0 = arg1 - pogo->pos.x;
    temp_f2 = arg3 - pogo->pos.z;
    if (pogo->userVariables[0] >= 3) {
        pogo->unk_94 = (pogo->unk_16C / 1.5f);
    } else {
        pogo->unk_94 = pogo->unk_16C;
    }
    temp_f8 = (s32) (NORM_2(temp_f0,temp_f2) / pogo->unk_94);
    pogo->userVariables[1] = temp_f8;
    pogo->unk_134[3] = (f32) ((arg2 - pogo->pos.y) / (f32) temp_f8);
    pogo->unk_90 = CalculateAngleOfVector(temp_f0, -temp_f2);
}

void ActorInit_Pogo(Actor* pogo) {
    pogo->userVariables[0] = 1;
    pogo->unk_134[0] = pogo->pos.x;
    pogo->unk_134[1] = pogo->pos.y;
    pogo->unk_134[2] = pogo->pos.z;

    func_8003FA38(pogo, pogo->position._f32.x, pogo->position._f32.y, pogo->unk_15C);
}

//used in ActorTick_Pogo
void func_8003FB4C(Actor* pogo) {
    pogo->userVariables[3]++;
    if ((pogo->userVariables[3] % (s32) pogo->unk_124) == 0) {
        pogo->userVariables[0] += 3;
        func_8003FA38(pogo, gCurrentActivePlayerPointer->pos.x, gCurrentActivePlayerPointer->yCounter, gCurrentActivePlayerPointer->pos.z);
        return;
    }
    switch (pogo->userVariables[0]) {                              /* irregular */
    case 0:
        pogo->userVariables[0] = 1;
        func_8003FA38(pogo, pogo->position._f32.x, pogo->position._f32.y, pogo->unk_15C);
        return;
    case 1:
        pogo->userVariables[0] = 2;
        func_8003FA38(pogo, pogo->unk_160, pogo->unk_164, pogo->unk_168);
        return;
    case 2:
        pogo->userVariables[0] = 0;
        func_8003FA38(pogo, pogo->unk_134[0], pogo->unk_134[1], pogo->unk_134[2]);
        return;
    }
}

void ActorTick_Pogo(Actor* pogo) {
    f32 var_f2;

    if (pogo->userVariables[2] < pogo->userVariables[1]) {
        var_f2 = pogo->unk_170;
        if (pogo->userVariables[0] >= 3) {
            var_f2 /= 4;
        }
        pogo->pos.y += pogo->unk_134[3] + (var_f2 * sinf((((((pogo->userVariables[2] * 0xB4) + 0x5A) / pogo->userVariables[1]) * 2) + 0xB4) * PI / 360.0));
        pogo->userVariables[2] += 1;
    } else if (pogo->userVariables[4] == 0) {
        pogo->unk_F0++;
        pogo->unk_94 = 0;
        pogo->vel.y = 0;
        if (pogo->unk_F0 == 19) {
            pogo->userVariables[4] = 1;
        }
    } else {
        pogo->unk_F0 = 0;
        pogo->userVariables[4] = 0;
        pogo->userVariables[2] = 0;
        PLAY_SFX_AT(SFX_93_unkSnd, pogo->pos, 0, 0);
        switch (pogo->userVariables[0]) {
        case 0:
            pogo->pos.x = pogo->unk_134[0];
            pogo->pos.y = pogo->unk_134[1];
            pogo->pos.z = pogo->unk_134[2];
            func_8003FB4C(pogo);
            break;
        case 1:
            pogo->pos.x = pogo->position._f32.x;
            pogo->pos.y = pogo->position._f32.y;
            pogo->pos.z = pogo->unk_15C;
            func_8003FB4C(pogo);
            break;
        case 2:
            pogo->pos.x = pogo->unk_160;
            pogo->pos.y = pogo->unk_164;
            pogo->pos.z = pogo->unk_168;
            func_8003FB4C(pogo);
            break;
        case 3:
            func_8003FA38(pogo, pogo->unk_134[0], pogo->unk_134[1], pogo->unk_134[2]);
            pogo->userVariables[0] = 0;
            break;
        case 4:
            func_8003FA38(pogo, pogo->position._f32.x, pogo->position._f32.y, pogo->unk_15C);
            pogo->userVariables[0] = 1;
            break;
        case 5:
            func_8003FA38(pogo, pogo->unk_160, pogo->unk_164, pogo->unk_168);
            pogo->userVariables[0] = 2;
            break;
        }
    }
    func_800382F4(pogo);
}

void ActorTick_Unk22(Actor* unk_22) {
}

void ActorInit_Unk23(Actor* unk_23){

}

void ActorTick_Unk23(Actor* unk_23) {

}

void ActorInit_IceCreamSandwich(Actor* iceCreamSandwich) {
    iceCreamSandwich->unk_134[0] = iceCreamSandwich->pos.y;
    iceCreamSandwich->pos.y = iceCreamSandwich->pos.y + 2000.0f;
}

void ActorTick_IceCreamSandwich(Actor* iceCreamSandwich) {
    switch (iceCreamSandwich->userVariables[0]) {
    case 2: break;
    case 0:
        if (SQ(iceCreamSandwich->pos.x - gCurrentActivePlayerPointer->pos.x) + SQ(iceCreamSandwich->pos.z - gCurrentActivePlayerPointer->pos.z) < iceCreamSandwich->position._f32.x) {
            iceCreamSandwich->userVariables[0] = 1;
            iceCreamSandwich->pos.y = iceCreamSandwich->unk_134[0];
            iceCreamSandwich->vel.y = 25.6f;
            Effect_TypeC_Init(iceCreamSandwich->pos.x, iceCreamSandwich->unk_134[0], iceCreamSandwich->pos.z, iceCreamSandwich->pos.x, iceCreamSandwich->unk_134[0] + 300.0f, iceCreamSandwich->pos.z, 255, 255, 255, 128, 8, 74);
            PLAY_SFX_AT(SFX_98_unkSnd, iceCreamSandwich->pos, 0, 0);
        }
        break;
    case 1:
        iceCreamSandwich->vel.y -= 3.2f;
        if ((iceCreamSandwich->pos.y + iceCreamSandwich->vel.y) < iceCreamSandwich->unk_134[0]) {
            iceCreamSandwich->pos.y = iceCreamSandwich->unk_134[0];
            iceCreamSandwich->userVariables[0] = 2;
            iceCreamSandwich->vel.y = 0.0f;
        }
        Actor_PlaySound(iceCreamSandwich, SFX_97_unkSnd, 10, 4);
        break;
    }
    iceCreamSandwich->pos.y += iceCreamSandwich->vel.y;
}

void ActorInit_ChocoKid(Actor* chocoKid) {
    chocoKid->unk_134[1] = chocoKid->pos.z;
    chocoKid->unk_94 = chocoKid->position._f32.x;
    chocoKid->unk_134[0] = chocoKid->pos.x;
    Effect_TypeZ_Create(chocoKid->pos.x, chocoKid->pos.y + 50.0f, chocoKid->pos.z, 120.0f, 20.0f, 0xA);
}

void ActorTick_ChocoKid(Actor* chocoKid) {
    f32 angle = CalcAngleBetween2DPoints(chocoKid->pos.x, chocoKid->pos.z, chocoKid->unk_134[0], chocoKid->unk_134[1]);
    if (chocoKid->userVariables[0] != 0) {
        chocoKid->vel.y -= 3.2f;
        chocoKid->pos.y += chocoKid->vel.y;
        if (chocoKid->pos.y < 0.0f) {
            chocoKid->userVariables[0] = 0;
            chocoKid->pos.y = 0.0f;
            chocoKid->vel.y = 0.0f;
        }
    } else {
        chocoKid->unk_134[2] += chocoKid->position._f32.y * AreAnglesWithin180Degrees(chocoKid->unk_90, angle);
        func_800382B4(&chocoKid->unk_134[2], chocoKid->unk_15C);
        chocoKid->unk_90 += chocoKid->unk_134[2];
        WrapDegrees(&chocoKid->unk_90);
        if (Random(0, 29) == 15) {
            chocoKid->userVariables[0] = 1;
            chocoKid->vel.y = 19.2f;
        }
    }
    Actor_PlaySound(chocoKid, SFX_ChocoKidNoise, 30, 4);
    func_800382F4(chocoKid);
}

void ActorInit_Unk1F(Actor* unk_1F) {
    unk_1F->unk_134[0] = unk_1F->pos.y;
    unk_1F->unk_134[1] = unk_1F->pos.x;
    unk_1F->unk_134[2] = unk_1F->pos.z;
    unk_1F->pos.y += 1000.0f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_Unk1F.s")

void ActorInit_Popcorn(Actor* popcorn) {
    f32 s = cosf(DEGREES_TO_RADIANS_2PI(popcorn->unk_90));
    popcorn->vel.x = popcorn->position._f32.x * s;
    s = -sinf(DEGREES_TO_RADIANS_2PI(popcorn->unk_90));
    popcorn->vel.z = popcorn->position._f32.x * s;
    popcorn->vel.y = 64.0f;
}

void ActorTick_Popcorn(Actor* popcorn) {
    if ((popcorn->pos.y + popcorn->vel.y) < 0.0f) {
        popcorn->pos.y = popcorn->vel.x = popcorn->vel.z = popcorn->vel.y = 0.0f;
        popcorn->unk_A0.unk_04 = 0;
    }
    if (popcorn->pos.y > 0) {
        popcorn->vel.y -= 4.8f;
    }
}

// Cake Boss Strawberry Function
void func_800405F8(Actor* cakeBossStrawberry) {
    if (cakeBossStrawberry->unk_128 == 6) {
        cakeBossStrawberry->tScale *= 2.0f;
        cakeBossStrawberry->tYPos *= 2.0f;
        cakeBossStrawberry->unknownPositionThings[0].unk_0C = cakeBossStrawberry->tScale;
        cakeBossStrawberry->unknownPositionThings[0].unk_10 = cakeBossStrawberry->tYPos;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_CakeBossStrawberry.s")

// UNK_28
void func_80040CDC(Actor* unk_28){

}

void ActorTick_Unk28(Actor* unk_28) {

}

// Cake Boss Choco Kid
void func_80040CEC(Actor* cakeBossChocoKid){

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_CakeBossChocoKid.s")

void ActorInit_CakeBoss(Actor* cake) {
    cake->tongueCollision = 3;
    cake->userVariables[2] = 4;
    cake->unknownPositionThings[1].unk_0C = cake->tScale;
    cake->unknownPositionThings[1].unk_04 = 250;
    cake->unknownPositionThings[1].unk_10 = cake->tYPos;
    cake->unknownPositionThings[1].unk_08 = 0.0f;
    cake->unknownPositionThings[1].unk_00 = 0.0f;
    cake->unknownPositionThings[2].unk_08 = 0.0f;
    cake->unknownPositionThings[2].unk_04 = 0.0f;
    cake->unknownPositionThings[2].unk_00 = 0.0f;
    cake->unknownPositionThings[2].unk_0C = 200;
    cake->unknownPositionThings[2].unk_10 = cake->tYPos * 2;
}

void func_800410B4(Actor* arg0) {
    arg0->unknownPositionThings[1].unk_04 = (arg0->unk_F0 + 25) * 10;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_CakeBoss.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/MinigameActors_PhysicsTick.s")

void ActorTick_MinigameActor(Actor* arg0) {
    f32 temp_f16;
    f32 temp_f6;

    arg0->vel.x -= (arg0->vel.x * arg0->position._f32.y);
    arg0->vel.z -= (arg0->vel.z * arg0->position._f32.y);
    if (((arg0->vel.x * arg0->vel.x) + (arg0->vel.z * arg0->vel.z)) < 1.0f) {
        arg0->vel.x = arg0->vel.z = 0.0f;
    }
    if (arg0->unk_98 != 0) {
        if (arg0->vel.y == 0) {
            PLAY_SFX_AT(SFX_A9_unkSnd, arg0->pos, 0, 0);
        }
        if (arg0->pos.y > 0.0f) {
            arg0->vel.y -= 3.2f + (arg0->vel.y * 0.05f);
        } else {
            arg0->vel.y -= 6.4f;
        }
    } else if (arg0->vel.y != 0) {
        arg0->vel.y = 0;
        arg0->unk_A0.unk_08 = 1;
    }
    if (arg0->unk_9C != 0) {
        temp_f16 = (arg0->unk_B4 * arg0->unk_B4) + (arg0->unk_BC * arg0->unk_BC);
        temp_f6 = (arg0->vel.x * arg0->unk_B4) + (arg0->vel.z * arg0->unk_BC);
        arg0->vel.x -= ((2 * temp_f6 * arg0->unk_B4) / temp_f16);
        arg0->vel.z -= ((2 * temp_f6 * arg0->unk_BC) / temp_f16);
    }
    if (((arg0->vel.x * arg0->vel.x) + (arg0->vel.z * arg0->vel.z) > 8.0f) && (gTimer % 60 == 0)) {
        //null sound
        PLAY_SFX_AT(0xD9, arg0->pos, 0, 0);
    }
}

// Cue Ball Actor
void ActorInit_CueBall(Actor* cueBall) {
    cueBall->unk_134[0] = cueBall->pos.y;
}

void ActorTick_CueBall(Actor* cueBall) {
    f32 angle;

    if (cueBall->tongueBumpSeg != 0) {
        if ((gTongueOnePointer->segments == cueBall->tongueBumpSeg) || gTongueOnePointer->segments == (cueBall->tongueBumpSeg + 1)) {
            if (gTongueOnePointer->vaulting == 0) {
                angle = CalcAngleBetween2DPoints(gTongueOnePointer->tongueXs[gTongueOnePointer->segments - 1] + gCurrentActivePlayerPointer->pos.x, gTongueOnePointer->tongueZs[gTongueOnePointer->segments - 1] + gCurrentActivePlayerPointer->pos.z, cueBall->pos.x, cueBall->pos.z);
                cueBall->vel.x = cosf(DEGREES_TO_RADIANS_2PI(angle)) * cueBall->position._f32.x;
                cueBall->vel.z = -sinf(DEGREES_TO_RADIANS_2PI(angle)) * cueBall->position._f32.x;
                PLAY_SFX_AT(SFX_A7_unkSnd, cueBall->pos, 0, 0);
            }
        }
    }

    //super
    ActorTick_MinigameActor(cueBall);

    if (cueBall->pos.y < -cueBall->unknownPositionThings[0].unk_10) {
        cueBall->unk_98 = 1;
        cueBall->pos.x = gCurrentActivePlayerPointer->pos.x;
        cueBall->pos.y = cueBall->unk_134[0] + 1000.0f;
        cueBall->pos.z = gCurrentActivePlayerPointer->pos.z;
        cueBall->unk_A0.unk_08 = 0;
        if (cueBall->pos.x > 1800.0f) {
            cueBall->pos.x = 1800.0f;
        }
        if (cueBall->pos.x < -1800.0f) {
            cueBall->pos.x = -1800.0f;
        }
        if (cueBall->pos.z > 900.0f) {
            cueBall->pos.z = 900.0f;
        }
        if (cueBall->pos.z < -900.0f) {
            cueBall->pos.z = -900.0f;
        }
        cueBall->vel.z = 0.0f;
        cueBall->vel.y = 0.0f;
        cueBall->vel.x = 0.0f;
    }
}

// Billiards Ball
void ActorInit_BilliardBall(Actor* billiardBall){

}

void ActorTick_BilliardBall(Actor* billiardBall) {
    f32 temp_f0_2;

    //super
    ActorTick_MinigameActor(billiardBall);

    temp_f0_2 = NORM_2(billiardBall->vel.x,billiardBall->vel.z);
    billiardBall->unk_94 = temp_f0_2;
    billiardBall->unk_134[0] = ((180.0f * temp_f0_2) / ( billiardBall->unknownPositionThings[0].unk_0C * PI)) + billiardBall->unk_134[0];
    billiardBall->unk_90 = CalculateAngleOfVector(billiardBall->vel.x, -billiardBall->vel.z);
}

//(re)set bowling pins
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/Bowling_ResetPins.s")

// Bowling Ball Function
void ActorInit_BowlingBall(Actor* bowlingBall) {
    Bowling_ResetScore();
    Bowling_ResetPins();
    bowlingBall->userVariables[0] = 0;
    bowlingBall->unk_134[0] = bowlingBall->pos.y;
    bowlingBall->userVariables[3] = Rand() % 5;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_BowlingBall.s")

// Bowling Pins Function
void ActorInit_BowlingPin(Actor* bowlingPins) {
    bowlingPins->unk_90 = (f32) ((Rand() % 21) - 100);
    bowlingPins->userVariables[1] = (Rand() % 21) + 30;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_BowlingPin.s")

void ActorInit_Unk2E(Actor* unk_2E) {
    unk_2E->userVariables[0] = 10;
    unk_2E->unk_134[0] = unk_2E->pos.y;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_Unk2E.s")

void ActorInit_Unk2F(Actor* unk_2F){

}

void ActorTick_Unk2F(Actor* unk_2F) {

}

//base class for the ghost castle floating objects
void ActorInit_FloatingObjects(Actor* actor) {
    actor->userVariables[1] = actor->unk_12C * actor->unk_124 / actor->unk_128;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_FloatingObjects.s")

void ActorInit_Cup(Actor* cup) {
    ActorInit_FloatingObjects(cup);
}

void ActorTick_Cup(Actor* cup) {
    ActorTick_FloatingObjects(cup);
}

void ActorInit_Saucer(Actor* saucer) {
    ActorInit_FloatingObjects(saucer);
}

void ActorTick_Saucer(Actor* saucer) {
    ActorTick_FloatingObjects(saucer);
}

void ActorInit_MetalSheet(Actor* metalSheet) {
    ActorInit_FloatingObjects(metalSheet);
}

void ActorTick_MetalSheet(Actor* metalSheet) {
    ActorTick_FloatingObjects(metalSheet);
}

void ActorInit_Scroll(Actor* scroll) {
    ActorInit_FloatingObjects(scroll);
}

void ActorTick_Scroll(Actor* scroll) {
    ActorTick_FloatingObjects(scroll);
}

// RNG Room Spawner
void ActorInit_RNGRoomSpawner(Actor* rngRoomSpawner){

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_RNGRoomSpawner.s")

void ActorInit_Mirror(Actor* mirror) {
    if (gTimer % mirror->unk_128 == mirror->unk_124) {
        mirror->userVariables[1] = 1;
    } else {
        mirror->userVariables[1] = 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_Mirror.s")

void ActorInit_BarrelFireSpawner(Actor* barrelFireSpawner){

}

void ActorTick_BarrelFireSpawner(Actor* barrelFireSpawner) {
    if ((u32) barrelFireSpawner->unk_128 < (u32) barrelFireSpawner->globalTimer) {
        barrelFireSpawner->userVariables[0] += 1;
        if ((barrelFireSpawner->userVariables[0] % (s32) barrelFireSpawner->unk_124) == 0) {
            Actor_Init(BARREL_JUMP_FIRE, barrelFireSpawner->pos.x, barrelFireSpawner->pos.y, barrelFireSpawner->pos.z, 0.0f, barrelFireSpawner->unk_F4, barrelFireSpawner->unk_F8, barrelFireSpawner->unk_FC, barrelFireSpawner->unk_100, barrelFireSpawner->unk_104, barrelFireSpawner->unk_108, barrelFireSpawner->position._f32.x, barrelFireSpawner->position._f32.y, barrelFireSpawner->unk_15C, barrelFireSpawner->unk_160, 0.0f, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0);
        }
    }
}

void ActorInit_BarrelFire(Actor* barrelFire) {
    barrelFire->unk_134[0] = CalcAngleBetween2DPoints(barrelFire->position._f32.x, barrelFire->position._f32.y, barrelFire->pos.x, barrelFire->pos.z);
    barrelFire->userVariables[0] = (s32) (360.0f / barrelFire->unk_160) - 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_BarrelFire.s")

void ActorInit_FireSpitter(Actor* fireSpitter) {
    fireSpitter->userVariables[0] = fireSpitter->unk_124 - 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_FireSpitter.s")

void ActorInit_Candles(Actor* candles) {
    ActorInit_FireSpitter(candles);
}

void ActorTick_Candles(Actor* candles) {
    ActorTick_FireSpitter(candles);
}

void ActorInit_FireSpawner(Actor* fireSpawner) {
    ActorInit_Candles(fireSpawner);
}

void ActorTick_FireSpawner(Actor* fireSpawner) {
    ActorTick_Candles(fireSpawner);
}

void ActorInit_Fire(Actor* fire) {
    fire->unk_90 = CalcAngleBetween2DPoints(fire->pos.x, fire->pos.z, gCurrentActivePlayerPointer->pos.x, gCurrentActivePlayerPointer->pos.z);
    fire->userVariables[1] = fire->unk_128;
}

void ActorTick_Fire(Actor* fire) {
    f32 angle  = CalcAngleBetween2DPoints(fire->pos.x, fire->pos.z, gCurrentActivePlayerPointer->pos.x, gCurrentActivePlayerPointer->pos.z);

    if (fire->userVariables[0] == 0) {
        fire->unk_94 = fire->position._f32.x;
        func_8002D36C(&fire->unk_90, angle, fire->position._f32.y);
        if (fire->userVariables[1] == 0) {
            fire->userVariables[0] = 1;
            fire->userVariables[1] = Random(1, fire->unk_12C);
        } else {
            fire->userVariables[1]--;
        }
    } else {
        fire->unk_94 = 0.0f;
        func_8002D36C(&fire->unk_90, angle, fire->unk_160);
        if (fire->userVariables[1] == 0) {
            fire->userVariables[0] = 0;
            fire->userVariables[1] = Random(1, fire->unk_128);
        } else {
            fire->userVariables[1]--;
        }
    }
    if (fire->pos.y < (gCurrentActivePlayerPointer->pos.y - fire->unk_15C)) {
        fire->pos.y += fire->unk_15C;
    } else if ((fire->unk_15C + gCurrentActivePlayerPointer->pos.y) < fire->pos.y) {
        fire->pos.y = fire->pos.y - fire->unk_15C;
    }
    fire->unk_F0++;
    func_800382F4(fire);
}

void ActorInit_Sandal(Actor* sandal) {
    ActorInit_Unk2E(sandal);
}

void ActorTick_Sandal(Actor* sandal) {
    ActorTick_Unk2E(sandal);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/GhostBoss_SpawnArms.s")

void ActorInit_GhostBoss(Actor* pob) {
    pob->unk_EC = 0;
    pob->userVariables[3] = pob->unk_128 * 2;
    pob->unk_134[1] = pob->pos.z + -800.0f;
    pob->unk_134[2] = pob->unk_90;
    GhostBoss_SpawnArms(pob);    // Compiled as empty originally?
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800448C0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80044C30.s")
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80044D58.s")

s32 func_80044E80(Actor* arg0, s32 arg1) {
    return (arg0->userVariables[arg1] + 5) / 6;
}

//pob spin on one arm
//D_801749D8 array of 30 s32s, 15 for each (see also armsMaybe)
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80044EA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_GhostBoss.s")

void ActorInit_GhostBossArmSegment(Actor* armSeg) {
    if ((armSeg->unk_124 >= 2)) {
        if ((armSeg->unk_124 < gActors[armSeg->unk_128].unk_128 + 2)) {
            f32 scalar = 1.200000048f;
            armSeg->tScale *= scalar;
            armSeg->unknownPositionThings[0].unk_0C *= scalar;
        }
    }
}

void ActorTick_GhostBossArmSegment(Actor* armSeg) {
    if (armSeg->unk_124 >= 2) {
        Actor* temp_v1 = &gActors[armSeg->unk_128];
        if ((armSeg->unk_124 < (temp_v1->unk_128 + 2)) && (armSeg->userVariables[0] == 0) && (armSeg->tongueBumpSeg != 0) && (armSeg->eaten != 0) && (gCurrentActivePlayerPointer->canJump == 0) && (gTongueOnePointer->vaulting == 0)) {
            f32 temp_f0 = D_8010A6D0[0x3E].x;
            armSeg->userVariables[0] = 1;
            armSeg->tScale = temp_f0;
            armSeg->unknownPositionThings[0].unk_0C = temp_f0;
            temp_v1->userVariables[3] -= 1;
            if (gActors[armSeg->unk_128].userVariables[3] == 0) {
                PLAY_SFX_AT(SFX_B6_unkSnd, armSeg->pos, 0, 0);
                PLAY_SFX(SFX_B7_unkSnd, 0, 0x10);
                func_8008BFE0(0xF0);
            } else {
                PLAY_SFX_AT(SFX_B6_unkSnd, armSeg->pos, 0, 0);
            }
            armSeg->unk_F0 = 1;
        }
    }
}

void ActorInit_GhostBossArmSpitter(Actor* armSpit) {

}

void ActorTick_GhostBossArmSpitter(Actor* armSpit) {
    if (((armSpit->unk_12C == 0) && (gActors[armSpit->unk_128].userVariables[2] == 4)) || ((armSpit->unk_12C == 1) && (gActors[armSpit->unk_128].userVariables[2] == 5))) {
        if (armSpit->userVariables[0] == 0) {
            armSpit->unk_F0 += 1;
            if (armSpit->unk_F0 == 9) {
                armSpit->userVariables[0] = 1;
            }
        }
        else {
            armSpit->unk_F0 -= 1;
            if (armSpit->unk_F0  == 0) {
                armSpit->userVariables[0] = 0;
            }
        }
    }
    else {
        if (armSpit->unk_F0 != 0) {
            armSpit->unk_F0 -= 1;
            armSpit->userVariables[0] = 0;
        }
    }
}

void ActorInit_GhostBossShot(Actor* projectile) {
    projectile->unk_94 = projectile->position._f32.x;
    func_800382F4(projectile);
}

void ActorTick_GhostBossShot(Actor* projectile) {
    projectile->userVariables[0] += 1;
    if (projectile->userVariables[0] == 150) {
        Effect_TypeC_Init(projectile->pos.x, projectile->pos.y, projectile->pos.z, projectile->pos.x, projectile->pos.y + 300.0f, projectile->pos.z, 255, 255, 255, 128, 8, 74);
        func_80031518(projectile);
        return;
    }
    if (projectile->pos.y > 50.0f) {
        projectile->pos.y -= 10.0f;
    }
}

void ActorInit_SpiderSpawner(Actor* spiderSpawner){

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_SpiderSpawner.s")

void ActorInit_Spider(Actor* spider) {
    spider->unk_98 = 1;
    spider->vel.y = spider->unk_160;
    spider->unk_94 = spider->position._f32.x;
    func_800382F4(spider);    // Sometimes calls with a arg0, sometimes calls empty?
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_Spider.s")

void ActorInit_SpiderTrio(Actor* spiderTrio) {
    spiderTrio->unk_134[0] = spiderTrio->pos.x;
    spiderTrio->unk_134[1] = spiderTrio->pos.z;
    spiderTrio->unk_90 = CalcAngleBetween2DPoints(spiderTrio->pos.x, spiderTrio->pos.z, spiderTrio->position._f32.x, spiderTrio->position._f32.y);
    spiderTrio->unk_94 = spiderTrio->unk_15C;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_SpiderTrio.s")

// GOLEM Room SPIDER Spawner
void ActorInit_GolemSpiderSpawner(Actor* golemRoomSpiderSpawner){

}

void ActorTick_GolemSpiderSpawner(Actor* golemRoomSpiderSpawner) {
    if (StageFlags[golemRoomSpiderSpawner->unk_124] != 0) {
        if (gActorCount < (s32) golemRoomSpiderSpawner->unk_160) {
            golemRoomSpiderSpawner->userVariables[0] += 1;
            if (golemRoomSpiderSpawner->unk_130 < golemRoomSpiderSpawner->userVariables[0]) {
                golemRoomSpiderSpawner->userVariables[0] = 0;
                Actor_Init(SPIDER, golemRoomSpiderSpawner->pos.x, golemRoomSpiderSpawner->pos.y, golemRoomSpiderSpawner->pos.z, golemRoomSpiderSpawner->unk_90, golemRoomSpiderSpawner->unk_F4, golemRoomSpiderSpawner->unk_F8,
                golemRoomSpiderSpawner->unk_FC, golemRoomSpiderSpawner->unk_100, golemRoomSpiderSpawner->unk_104, golemRoomSpiderSpawner->unk_108, golemRoomSpiderSpawner->position._f32.x, golemRoomSpiderSpawner->position._f32.y,
                golemRoomSpiderSpawner->unk_15C, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0, golemRoomSpiderSpawner->unk_128, golemRoomSpiderSpawner->unk_12C, 0);
            }
        }
        func_800382F4(golemRoomSpiderSpawner);
    }
}

void ActorInit_Golem(Actor* golem) {

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_Golem.s")

void ActorInit_Hedgehog(Actor* hedgehog) {
    hedgehog->unk_134[0] = (f32) hedgehog->pos.x;
    hedgehog->unk_134[1] = (f32) hedgehog->pos.z;
    hedgehog->unk_134[2] = (f32) hedgehog->unk_90;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_Hedgehog.s")

void ActorInit_Fish(Actor* fish) {
    fish->unk_134[0] = fish->pos.x;
    fish->unk_134[1] = fish->pos.z;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_Fish.s")

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

void ActorInit_LizardKongButterflySpawner(Actor* lizardKongButterflySpawner){

}

void ActorTick_LizardKongButterflySpawner(Actor* lizardKongButterflySpawner) {
    if (gActorCount < lizardKongButterflySpawner->unk_128) {
        Actor_Init(LIZARD_KONG_BUTTERFLY, lizardKongButterflySpawner->pos.x, lizardKongButterflySpawner->pos.y, lizardKongButterflySpawner->pos.z, lizardKongButterflySpawner->unk_90, lizardKongButterflySpawner->unk_F4, lizardKongButterflySpawner->unk_F8, lizardKongButterflySpawner->unk_FC, lizardKongButterflySpawner->unk_100, lizardKongButterflySpawner->unk_104, lizardKongButterflySpawner->unk_108, lizardKongButterflySpawner->position._f32.x, lizardKongButterflySpawner->position._f32.y, lizardKongButterflySpawner->unk_15C, lizardKongButterflySpawner->unk_160, lizardKongButterflySpawner->unk_164, lizardKongButterflySpawner->unk_168, lizardKongButterflySpawner->unk_16C, lizardKongButterflySpawner->unk_170, lizardKongButterflySpawner->unk_124, -1, lizardKongButterflySpawner->unk_12C, 0);
    }
}

void ActorInit_LizardKongBoulder(Actor* lk_boulder) {
    lk_boulder->unk_98 = 1;
    lk_boulder->unk_94 = lk_boulder->position._f32.x;
    Actor_PlaySound(lk_boulder, SFX_RockTumble, 4, 4);
}

void ActorTick_LizardKongBoulder(Actor* lk_boulder) {
    lk_boulder->unk_134[3] += lk_boulder->unk_94;
    lk_boulder->vel.y -= 3.200000048f;

    if (lk_boulder->unk_98 == 0) {
        lk_boulder->unk_98 = 1;
        lk_boulder->pos.y = lk_boulder->unknownPositionThings[0].unk_10 / 2;
        lk_boulder->vel.y = lk_boulder->position._f32.y * -lk_boulder->vel.y;
        lk_boulder->unk_94 *= 0.8999999762f;
        PLAY_SFX_AT(SFX_RockTumble, lk_boulder->pos, 0, 0);
    }

    func_800382F4(lk_boulder);
}

//used in ActorInit_LizardKong
void func_800489B0(Actor* lizardKong) {
    lizardKong->pos.x = lizardKong->unk_134[0] + (lizardKong->unk_134[2] * cosf(DEGREES_TO_RADIANS_2PI(lizardKong->unk_134[3])));
    lizardKong->pos.z = lizardKong->unk_134[1] + (lizardKong->unk_134[2] * -sinf(DEGREES_TO_RADIANS_2PI(lizardKong->unk_134[3])));
}

void ActorInit_LizardKong(Actor* lizardKong) {
    lizardKong->unk_134[2] = lizardKong->unk_15C;
    lizardKong->unk_134[3] = lizardKong->unk_90 + 180.0f;
    WrapDegrees(&lizardKong->unk_134[3]);
    lizardKong->unk_134[4] = lizardKong->unk_134[3];
    lizardKong->userVariables[0] = 6;
    lizardKong->unk_134[0] = lizardKong->pos.x;
    lizardKong->unk_134[1] = lizardKong->pos.z;
    lizardKong->unk_134[5] = lizardKong->position._f32.x;
    lizardKong->pos.y += 1000.0f;
    func_800489B0(lizardKong);
    lizardKong->unk_EC = 5;
}

void PlayLizardKongSFX(Actor* arg0) {
    switch (arg0->unk_F0) {
    case 12:
        PLAY_SFX_AT(SFX_48_unkSnd, arg0->pos, 0, 0);
        return;
    case 34:
    case 42:
    case 50:
    case 58:
        PLAY_SFX_AT(SFX_4D_unkSnd, arg0->pos, 0, 0);
        /* fallthrough */
    default:
        return;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_LizardKong.s")

void ActorInit_PopcornBucketSpawner(Actor* popcornBucketSpawner){

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_PopcornBucketSpawner.s")

void ActorInit_PopcornBucket(Actor* popcornBucket) {
    ActorInit_Unk1F(popcornBucket);
}

void ActorTick_PopcornBucket(Actor* popcornBucket) {
    ActorTick_Unk1F(popcornBucket);
}

void ActorInit_Unk4E(Actor* unk_4e) {
    ActorInit_Popcorn(unk_4e);
}

void ActorTick_Unk4E(Actor* unk_4e) {
    ActorTick_Popcorn(unk_4e);
}

void ActorInit_ChocoKidSpawner(Actor* chocoKidSpawner){

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_ChocoKidSpawner.s")

void ActorInit_SpawnedChocoKid(Actor* chocoKid) {
    ActorInit_ChocoKid(chocoKid);
}

void ActorTick_SpawnedChocoKid(Actor* chocoKid) {
    ActorTick_ChocoKid(chocoKid);
}

void ActorInit_GreyAntSpawnerWrapper(Actor* greyAntSpawner) {
    ActorInit_GreyAntSpawner(greyAntSpawner);
}

void ActorTick_GreyAntSpawnerWrapper(Actor* greyAntSpawner) {
    ActorTick_GreyAntSpawner(greyAntSpawner);
}

void ActorInit_GreyAntWrapper(Actor* greyAntW) {
    ActorInit_GreyAnt(greyAntW);
}

void ActorTick_GreyAntWrapper(Actor* greyAntW) {
    ActorTick_GreyAnt(greyAntW);
}

void ActorInit_BattleModeSandCrabSpawner(Actor* bmSCS){

}

void ActorTick_BattleModeSandCrabSpawner(Actor* bmSCS) {
    f32 deg;
    bmSCS->userVariables[1] += 1;
    if (bmSCS->userVariables[1] % bmSCS->unk_124 == 0) {
        bmSCS->userVariables[2] += 1;
        deg = (bmSCS->userVariables[2] * 45) + ((bmSCS->userVariables[2] / 8) * 15);
        WrapDegrees(&deg);
        Actor_Init(BATTLE_MODE_SAND_CRAB, bmSCS->pos.x, bmSCS->position._f32.x, bmSCS->pos.z, deg, -50000.0f, 50000.0f, -50000.0f, 50000.0f, -50000.0f, 50000.0f, bmSCS->position._f32.y, bmSCS->unk_15C, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0);
    }
}

void ActorInit_BattleModeSandCrab(Actor* battleModeSandCrab) {
    battleModeSandCrab->unk_94 = battleModeSandCrab->position._f32.x;
    battleModeSandCrab->vel.y = 32.0f;
    func_800382F4(battleModeSandCrab);
}


void ActorTick_BattleModeSandCrab(Actor* battleModeSandCrab) {
    if (battleModeSandCrab->userVariables[1] == 0) {
        if ((battleModeSandCrab->unk_98 == 0) && (battleModeSandCrab->vel.y < 0.0f)) {
            battleModeSandCrab->vel.y = 0.0f;
            battleModeSandCrab->userVariables[1] = 1;
            return;
        }
        battleModeSandCrab->vel.y -= 3.200000048f;
        battleModeSandCrab->pos.y += battleModeSandCrab->vel.y;
        return;
    }
    if (battleModeSandCrab->unk_98 != 0) {
        battleModeSandCrab->vel.y -= 3.200000048f;
        battleModeSandCrab->vel.y -= battleModeSandCrab->vel.y * 0.05000000075f;
    }
}

void ActorInit_BattleModeFireSpawner(Actor* bmFireSpawner){

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_BattleModeFireSpawner.s")


void ActorInit_BattleModeFire(Actor* bmFire) {

}

void ActorTick_BattleModeFire(Actor* bmFire) {

}

void ActorInit_BattleModeSaucerSpawner(Actor* bmSaucerSpawner) {
    s32 i;
    for (i = 0; i < bmSaucerSpawner->unk_128; i++) {
        D_80174758[i] = -1;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_BattleModeSaucerSpawner.s")

void ActorInit_BattleModeSaucer(Actor* battleModeSaucer) {
    battleModeSaucer->unk_134[0] = battleModeSaucer->pos.y;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_BattleModeSaucer.s")

void ActorInit_Unk59(Actor* unk_59){

}

// Unk59 is a (Unk5A)_Spawner
void ActorTick_Unk59(Actor* unk_59) {
    f32 pos;
    f32 angle;

    if ((unk_59->globalTimer % unk_59->unk_124) == 0) {
        pos = Random(0, unk_59->position._f32.x);
        angle = Random(0, 360);
        Actor_Init(UNK_5A, (cosf(DEGREES_TO_RADIANS_2PI(angle)) * pos) + unk_59->pos.x, unk_59->pos.y, (-sinf(DEGREES_TO_RADIANS_2PI(angle)) * pos) + unk_59->pos.z, 0.0f, -10000.0f, 10000.0f, -10000.0f, 10000.0f, -10000.0f, 10000.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0);
    }
}

void ActorInit_Unk5A(Actor* unk_5A) {
    unk_5A->unk_98 = 1;
}

void ActorTick_Unk5A(Actor* unk_5A) {
    if (unk_5A->unk_98 != 0) {
        unk_5A->vel.y -= 3.200000048f;
        unk_5A->vel.y -= unk_5A->vel.y * 0.05000000075f;
        return;
    }
    func_800313BC(unk_5A->actorIndex, Random(0, 360));
}

void ActorInit_PowerUpSpawner(Actor* powerUpSpawner){

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_PowerUpSpawner.s")

void ActorInit_FallingGreyAntSpawner(Actor* fallingGreyAntSpawner){

}

void ActorTick_FallingGreyAntSpawner(Actor* fallingGreyAntSpawner) {
    fallingGreyAntSpawner->userVariables[0] += 1;
    if ((fallingGreyAntSpawner->userVariables[0] % fallingGreyAntSpawner->unk_128) == 1) {
        Actor_Init(FALLING_GREY_ANT, fallingGreyAntSpawner->pos.x, fallingGreyAntSpawner->pos.y, fallingGreyAntSpawner->pos.z, 0.0f, -50000.0f, 50000.0f, -50000.0f, 50000.0f, -50000.0f, 50000.0f, fallingGreyAntSpawner->position._f32.x, fallingGreyAntSpawner->position._f32.y, fallingGreyAntSpawner->unk_15C, fallingGreyAntSpawner->unk_160, fallingGreyAntSpawner->unk_164, fallingGreyAntSpawner->unk_168, fallingGreyAntSpawner->unk_16C, fallingGreyAntSpawner->unk_170, fallingGreyAntSpawner->unk_124, fallingGreyAntSpawner->unk_128, fallingGreyAntSpawner->unk_12C, fallingGreyAntSpawner->unk_130);
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

void ActorInit_UnkFireSpawner(Actor* unkFireSpawner){

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_UnkFireSpawner.s")

void ActorTick_PickupHeartFalling(Actor* fallingHeart) {
    f32 temp_f2;

    if (fallingHeart->userVariables[0] == 0) {
        fallingHeart->vel.y -= (3.200000048f + (fallingHeart->vel.y * 0.05000000075f));
        temp_f2 = fallingHeart->pos.y + fallingHeart->vel.y;
        if (temp_f2 < 0.0f) {
            fallingHeart->pos.y = 0.0f;
            fallingHeart->userVariables[0] = 1;
            return;
        }
        fallingHeart->pos.y = temp_f2;
    }
}

void ActorTick_Powerup(Actor* powerup) {
    if (powerup->userVariables[0] != 0) {
        powerup->userVariables[1] += 1;
        if (powerup->unk_124 == powerup->userVariables[1]) {
            func_80031518(powerup);
        }
    }
    else {
        powerup->vel.y -= (3.200000048f + (powerup->vel.y * 0.05000000075f));
        if (powerup->pos.y + powerup->vel.y < powerup->position._f32.x) {
            powerup->pos.y = powerup->position._f32.x;
            powerup->userVariables[0] = 1;
            return;
        }
        powerup->pos.y += powerup->vel.y;
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

void func_8004BAC0(void) {
    if (D_80174980 == 5) {
        if (1 == gTimer) { //required
            D_801749D0 = 0;
            gPlayerActors->tongueYOffset = 90.0f;
        } else if (gTimer == 0x41) {
            D_801749D0++;
            if (D_801749D0 == 0x3C) {
                D_801749D0 = 0;
            } else {
                gTimer--;
                D_801749A0--;
            }
        } else if (gTimer == 0xC8) {
            D_80174980 = 0;
            D_801749A0 = gTimer = 1; //required
            gPlayerActors->tongueYOffset = 60.0f;
        }
    }
    if ((gTimer >= 5) && (D_80174980 == 0)) {
        D_80174980 = 1;
        PlaySoundEffect(0xDF, NULL, NULL, NULL, 0, 0x10);
    }
    if ((D_80174980 == 0) || (D_80174980 == 2) || (D_80174980 == 3)) {
        D_801749A8 = 1;
    } else {
        D_801749A8 = 0;
    }
    if ((D_80174878 == 2) && (gCurrentZone == 0xF)) {
        D_801749B0 = 1;
    } else {
        D_801749B0 = 0;
    }
}

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

    var_s2 = 100000000;
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
    arg0[3] = cosf(DEGREES_TO_RADIANS_2PI(arg1)) * 65.0f;
    arg0[4] = sinf(DEGREES_TO_RADIANS_2PI(arg1)) * 65.0f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004C43C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004C600.s")

//only called in func_8004CD9C
//actually takes args, this is a fake match
//more along the lines of s32 func_8004CC6C(s32, s32, s32, PlayerActor*);     /* extern */
//^ taken from func_8004CD9C
//gCurrentZone is just the first arg
u8 func_8004CC6C(void) {
    switch (gCurrentZone) {
    case 15:
        return -1;
    case 5:
        return 1;
    case 1:
    case 2:
    case 3:
    case 6:
    case 7:
        return -1;
    default:
        return 8;
    }
}

//only called in func_8004CD9C
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004CCBC.s")

//battle actor manager?
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004CD9C.s")

//related to updating the screen
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004DDE0.s")

const Vec2f D_8010A6D0[0x6B] = {
{  0,   0},
{ 50, 100},
{ 60, 280},
{ 50, 140},
{ 50, 140},
{ 50, 140},
{ 70, 300},
{100, 250},
{ 50, 140},
{  0,   0},
{  0,   0},
{ 50, 100},
{ 50, 100},
{ 50, 140},
{ 50, 140},
{  0,   0},
{ 50, 140},
{100, 120},
{ 50, 100},
{ 50, 100},
{200, 400},
{ 50, 140},
{  0,   0},
{ 50, 100},
{150, 150},
{ 50, 100},
{ 50, 100},
{  0,   0},
{ 80,  80},
{120, 240},
{150, 250},
{100, 200},
{ 40,  80},
{120, 350},
{  0,   0},
{ 50, 100},
{ 50, 140},
{ 50, 140},
{350, 220},
{ 60, 100},
{  0,   0},
{ 80, 200},
{ 60, 156},
{ 60, 156},
{100, 260},
{ 80, 208},
{ 50, 100},
{ 50, 100},
{ 50, 140},
{ 60,  90},
{ 80, 200},
{ 50, 250},
{  0,   0},
{180, 360},
{  0,   0},
{ 50, 140},
{ 50, 140},
{ 50, 180},
{  0,   0},
{ 50, 140},
{ 75, 100},
{200, 450},
{ 60, 120},
{ 50, 250},
{ 60, 120},
{100, 100},
{ 50, 100},
{ 50, 100},
{170, 500},
{ 50, 100},
{ 50, 150},
{ 50, 100},
{ 50, 100},
{  0,   0},
{120, 240},
{150, 450},
{  0,   0},
{ 90, 110},
{ 50,  80},
{  0,   0},
{ 50, 140},
{  0,   0},
{ 50, 140},
{  0,   0},
{ 50, 100},
{  0,   0},
{ 50, 140},
{  0,   0},
{ 60,  50},
{  0,   0},
{ 50,  80},
{  0,   0},
{  0,   0},
{ 50, 140},
{  0,   0},
{ 55, 110},
{ 55, 110},
{ 65, 130},
{ 75, 150},
{ 75, 150},
{ 65, 130},
{ 70, 140},
{ 80, 140},
{ 80, 140},
{ 80, 140},
{ 80, 140},
{ 80, 140}
};

const unk_8010AA28 D_8010AA28[0x6B] = {
{0, 0, 0, 0},
{1, 1, 0, 0},
{0, 1, 0, 0},
{1, 1, 0, 0},
{1, 1, 0, 1},
{1, 1, 0, 1},
{2, 1, 0, 0},
{2, 1, 0, 0},
{1, 4, 0, 0},
{3, 0, 0, 0},
{3, 0, 0, 0},
{3, 0, 0, 0},
{3, 0, 0, 0},
{0, 1, 0, 0},
{0, 1, 1, 0},
{3, 0, 0, 0},
{1, 4, 2, 0},
{0, 0, 0, 0},
{1, 4, 2, 0},
{0, 1, 1, 0},
{0, 0, 0, 0},
{1, 0, 0, 0},
{3, 0, 0, 0},
{1, 0, 0, 0},
{0, 4, 0, 0},
{1, 3, 0, 0},
{1, 4, 0, 0},
{3, 0, 0, 0},
{1, 4, 0, 0},
{0, 3, 0, 1},
{0, 4, 0, 0},
{0, 4, 0, 0},
{1, 4, 0, 0},
{0, 4, 0, 0},
{3, 0, 0, 0},
{1, 1, 0, 0},
{1, 4, 0, 0},
{1, 4, 0, 0},
{0, 1, 0, 0},
{0, 4, 0, 0},
{0, 4, 0, 0},
{0, 4, 0, 0},
{0, 1, 1, 1},
{0, 1, 1, 1},
{0, 1, 1, 1},
{0, 1, 1, 1},
{1, 4, 0, 0},
{1, 1, 0, 0},
{0, 4, 0, 0},
{0, 4, 0, 0},
{0, 4, 0, 0},
{0, 4, 0, 0},
{3, 0, 0, 0},
{0, 0, 0, 0},
{3, 0, 0, 0},
{1, 4, 0, 0},
{0, 0, 0, 0},
{0, 0, 0, 0},
{3, 0, 0, 0},
{1, 4, 0, 0},
{1, 4, 0, 0},
{0, 1, 0, 0},
{0, 4, 0, 0},
{0, 4, 0, 0},
{1, 4, 0, 0},
{0, 0, 0, 0},
{1, 3, 1, 0},
{1, 1, 0, 0},
{0, 1, 1, 0},
//porcupine
{1, 1, 0, 0},
{1, 4, 0, 0},
{1, 4, 0, 0},
{3, 4, 0, 0},
{3, 0, 0, 0},
{0, 3, 0, 1},
{0, 4, 0, 0},
{3, 0, 0, 0},
{0, 4, 0, 0},
{1, 4, 0, 0},
{3, 0, 0, 0},
{1, 4, 0, 0},
{3, 0, 0, 0},
{1, 1, 0, 0},
{3, 0, 0, 0},
{1, 3, 0, 1},
{3, 0, 0, 0},
{1, 4, 0, 0},
{3, 0, 0, 0},
{1, 4, 0, 0},
{3, 0, 0, 0},
{1, 3, 0, 0},
{3, 0, 0, 0},
{3, 0, 0, 0},
{1, 3, 0, 0},
{3, 0, 0, 0},
{1, 0, 0, 0},
{1, 0, 0, 0},
{1, 0, 0, 0},
{1, 0, 0, 0},
{0, 0, 0, 0},
{0, 0, 0, 0},
{0, 0, 0, 0},
{1, 0, 0, 0},
{1, 0, 0, 0},
{1, 0, 0, 0},
{1, 0, 0, 0},
{1, 0, 0, 0}
};