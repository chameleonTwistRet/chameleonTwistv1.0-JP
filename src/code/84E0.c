#include "84E0.h"

// defined as `stuff D_801003DC` in 5FF30.c; only its first s16 is read here
extern s16 D_801003DC[];

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
s32 D_801749D8[2][15];

unk80174A50 D_80174A50;
unk80175590 D_80175590;
s32 D_80175598[4];
ContMain D_801755A8[4];
s32 D_801755E8[4];
s32 D_801755F8[4];
s32 D_80175608[6];

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
    while (1) {
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
 * relative to the positive x-axis. The angle is computed by ArcTan2Deg,
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
    return ArcTan2Deg(x2 - x1, -(y2 - y1));
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
 * @param targetAngle The angle to be compared to `refAngle`.
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

/**
 * @brief Checks if an angle is within 90 degrees either side of a reference angle.
 *
 * Rotates `refAngle` back by 90 degrees, wraps it, then checks whether `targetAngle`
 * falls within the 180-degree range starting there, covering the half circle
 * centered on `refAngle`.
 *
 * @param refAngle The reference angle at the center of the range.
 * @param targetAngle The angle to be compared to `refAngle`.
 *
 * @return (s32) 1 if target is within 90 degrees of reference; otherwise, it returns -1.
 */
s32 IsAngleWithin90Degrees(f32 refAngle, f32 targetAngle) {
    f32* refAnglePtr;

    refAnglePtr = &refAngle;
    refAngle = refAngle - 90.0f;
    WrapDegrees(refAnglePtr);
    return AreAnglesWithin180Degrees(refAngle, targetAngle);
}

/**
 * @brief Rotates an angle towards a target angle by at most one step.
 *
 * Takes the shortest way around the circle. If the target is within one step
 * it is snapped to exactly, otherwise the angle moves one step in the
 * direction given by `AreAnglesWithin180Degrees`. The result is wrapped.
 *
 * @param [in,out] angle The angle to rotate, in degrees.
 * @param targetAngle The angle to rotate towards.
 * @param step The maximum number of degrees to rotate by.
 *
 * @return (s32) 1 if the angle reached the target; otherwise, it returns 0.
 */
s32 RotateAngleTowards(f32* angle, f32 targetAngle, f32 step) {
    s32 reached;
    f32 diff;

    reached = 0;
    if (*angle < targetAngle) {
        diff = -(*angle - targetAngle);
    } else {
        diff = *angle - targetAngle;
    }
    if (diff > 180.0f) {
        diff = 360.0f - diff;
    }
    if (step <= diff) {
        *angle += step * (f32) AreAnglesWithin180Degrees(*angle, targetAngle);
    } else {
        *angle = targetAngle;
        reached = 1;
    }
    WrapDegrees(angle);
    return reached;
}

/**
 * @brief Rotates a 2D point around a pivot point by the given angle.
 *
 * Keeps the point at its current distance from the pivot. Does nothing when
 * the point sits exactly on the pivot.
 *
 * @param [in,out] pointX The X coordinate of the point to rotate.
 * @param [in,out] pointY The Y coordinate of the point to rotate.
 * @param pivotX The X coordinate of the pivot.
 * @param pivotY The Y coordinate of the pivot.
 * @param angle The number of degrees to rotate by.
 */
void RotatePointAroundPivot(f32 *pointX, f32 *pointY, f32 pivotX, f32 pivotY, f32 angle) {
    f32 newAngle;
    f32 dx = *pointX - pivotX;
    f32 dy = *pointY - pivotY;
    f32 dist = NORM_2(dx, dy);

    if (dist != 0.0f) {
        newAngle = ArcTan2Deg(dx, -dy) + angle;
        *pointX = cosf(DEGREES_TO_RADIANS_2PI(newAngle)) * dist + pivotX;
        *pointY = pivotY + -(sinf(DEGREES_TO_RADIANS_2PI(newAngle)) * dist);
    }
}

/**
 * @brief Pushes a 2D point out to a minimum distance from a center point.
 *
 * If the point is closer to the center than `radius`, it is moved outwards
 * onto the circle of that radius, keeping its direction from the center.
 * Points already at or beyond the radius are left alone.
 *
 * @param [in,out] pointX The X coordinate of the point to push.
 * @param [in,out] pointY The Y coordinate of the point to push.
 * @param centerX The X coordinate of the circle center.
 * @param centerY The Y coordinate of the circle center.
 * @param radius The minimum distance to enforce.
 */
void PushPointOutOfCircle(f32 *pointX, f32 *pointY, f32 centerX, f32 centerY, f32 radius) {
    f32 dy;
    f32 *unusedPtr; //unused, but required for match
    f32 dx;
    f32 angle = CalcAngleBetween2DPoints(centerX, centerY, *pointX, *pointY);
    dx = (*pointX) - centerX;
    dy = (*pointY) - centerY;
    if (SUM_OF_SQUARES(dx, dy) < SQ(radius)) {
        angle = DEGREES_TO_RADIANS_2PI(angle);
        *pointX = (cosf(angle) * radius) + centerX;
        *pointY = ((-sinf(angle)) * radius) + centerY;
    }
}

/**
 * @brief Fills in a freshly claimed actor slot and runs its type-specific init.
 *
 * Zeroes the actor's user variables, velocities, tongue state, and general
 * fields, stores the position and the pass-through parameters to their fields,
 * copies the type defaults from `D_8010A6D0` (tongue scale and Y offset) and
 * `D_8010AA28`, then dispatches to the matching `ActorInit_` function for
 * `actorID`. Called by `Actor_Init` after it finds a free slot.
 *
 * @param actorIndex The slot in `gActors` to initialise.
 * @param actorID The actor ID to spawn, from `enum actorIDs`.
 * @param posX The X coordinate to spawn at.
 * @param posY The Y coordinate to spawn at.
 * @param posZ The Z coordinate to spawn at.
 * @param arg90 The initial heading in degrees, stored to `unk_90`.
 * @param argF4 Stored to `unk_F4`. This and the parameters after it are
 * per-type values; see `Actor_Init` for the field each one lands in.
 */
void Actors_Init(s32 actorIndex, s32 actorID, f32 posX, f32 posY, f32 posZ, f32 arg90,
                  f32 argF4, f32 argF8, f32 argFC, f32 arg100, f32 arg104, f32 arg108,
                  f32 argPosition0, f32 argPosition1,
                  f32 arg15C, f32 arg160, f32 arg164, f32 arg168, f32 arg16C, f32 arg170,
                  s32 arg124, s32 arg128, s32 arg12C, s32 arg130) {
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
    actorInstance->pos.x = posX;
    actorInstance->pos.y = posY;
    actorInstance->pos.z = posZ;
    actorInstance->unk_90 = arg90;

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

    actorInstance->unk_F4 = argF4;
    actorInstance->unk_F8 = argF8;
    actorInstance->unk_FC = argFC;
    actorInstance->unk_100 = arg100;
    actorInstance->unk_104 = arg104;
    actorInstance->unk_108 = arg108;
    actorInstance->position._f32.x = argPosition0;
    actorInstance->position._f32.y = argPosition1;
    actorInstance->unk_15C = arg15C;
    actorInstance->unk_160 = arg160;
    actorInstance->unk_164 = arg164;
    actorInstance->unk_168 = arg168;
    actorInstance->unk_16C = arg16C;
    actorInstance->unk_170 = arg170;
    actorInstance->unk_124 = arg124;
    actorInstance->unk_128 = arg128;
    actorInstance->unk_12C = arg12C;
    actorInstance->unk_130 = arg130;
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

/**
 * @brief Spawns a new actor in the first free actor slot.
 *
 * Searches `gActors` for a slot holding `ACTOR_NULL`, fills it in through
 * `Actors_Init`, and increments `gActorCount`. Parameters after the position
 * are stored to the actor field their name refers to; what each field means
 * depends on the actor type.
 *
 * @param id The actor ID to spawn, from `enum actorIDs`.
 * @param posX The X coordinate to spawn at.
 * @param posY The Y coordinate to spawn at.
 * @param posZ The Z coordinate to spawn at.
 * @param arg90 The initial heading in degrees, stored to `unk_90`.
 * @param argF4 Stored to `unk_F4`.
 * @param argF8 Stored to `unk_F8`.
 * @param argFC Stored to `unk_FC`.
 * @param arg100 Stored to `unk_100`.
 * @param arg104 Stored to `unk_104`.
 * @param arg108 Stored to `unk_108`.
 * @param argPosition0 Stored to `position._f32.x`.
 * @param argPosition1 Stored to `position._f32.y`.
 * @param arg15C Stored to `unk_15C`.
 * @param arg160 Stored to `unk_160`.
 * @param arg164 Stored to `unk_164`.
 * @param arg168 Stored to `unk_168`.
 * @param arg16C Stored to `unk_16C`.
 * @param arg170 Stored to `unk_170`.
 * @param arg124 Stored to `unk_124`.
 * @param arg128 Stored to `unk_128`.
 * @param arg12C Stored to `unk_12C`.
 * @param arg130 Stored to `unk_130`.
 *
 * @return (s32) The index of the spawned actor; otherwise, it returns -1 if no slot is free.
 */
s32 Actor_Init(s32 id, f32 posX, f32 posY, f32 posZ, f32 arg90,
               f32 argF4, f32 argF8, f32 argFC, f32 arg100, f32 arg104, f32 arg108,
               f32 argPosition0, f32 argPosition1,
               f32 arg15C, f32 arg160, f32 arg164, f32 arg168, f32 arg16C, f32 arg170,
               s32 arg124, s32 arg128, s32 arg12C, s32 arg130) {
    s32 i;
    Actor* curActor = gActors;

    for (i = 0; i < ARRAY_COUNT(gActors); i++, curActor++) {
        if (curActor->actorID == ACTOR_NULL) {
            Actors_Init(i, id, posX, posY, posZ, arg90, argF4, argF8,
                argFC, arg100, arg104, arg108, argPosition0, argPosition1, arg15C, arg160, arg164,
                arg168, arg16C, arg170, arg124, arg128, arg12C, arg130);
            gActorCount++;
            return i;
        }
    }
    return -1;
}

/**
 * @brief Registers a pole in the first free pole slot.
 *
 * Searches `Poles` for a slot whose mode is 0 (free) and fills it in with
 * the given mode, position, and height.
 *
 * @param mode The pole mode to register; must not be 0, which marks a free slot.
 * @param x The X coordinate of the pole.
 * @param y The Y coordinate of the pole.
 * @param z The Z coordinate of the pole.
 * @param height The pole height, stored to `yStretch`.
 *
 * @return (s32) The index of the registered pole; otherwise, it returns -1 if the pool is full.
 */
s32 RegistPole(s32 mode, f32 x, f32 y, f32 z, f32 height) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(Poles); i++) {
        if (Poles[i].mode == 0) {
            Poles[i].mode = mode;
            Poles[i].pos.x = x;
            Poles[i].pos.y = y;
            Poles[i].pos.z = z;
            Poles[i].yStretch = height;
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
            D_80174860->untouchedFramesElapsed = 0;
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
            D_80174860->untouchedFramesElapsed++;
            sp34 = D_80174860->untouchedFramesElapsed;
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
        D_80174860->eye.x = D_80174860->f3.x;
        D_80174860->eye.y = D_80174860->f3.y;
        D_80174860->eye.z = D_80174860->f3.z;
        D_80174860->lookAt.x = D_80174860->f1.z;
        D_80174860->lookAt.y = D_80174860->f2.x;
        D_80174860->lookAt.z = D_80174860->f2.y;
    }

    D_80174860->f1.y = ArcTan2Deg(D_80174860->eye.x - D_80174860->lookAt.x, -(D_80174860->eye.z - D_80174860->lookAt.z));
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


// Transitions the current active player into the post-hit invulnerability/flicker window
void StartPlayerInvulnFlicker(s32 arg0) {
    gCurrentActivePlayerPointer->playerHurtState = PLAYER_HURT_INVULN;
    gCurrentActivePlayerPointer->playerHurtTimer = 0;
}


// Launches the player vertically: sets vel.y, re-enables jumping, resets the
// jump-release/anim state, and marks whether this launch counts as a tumble. Only current
// caller is the damage-knockback path (velY=48.0, tumbling=1).
void LaunchPlayerVertically(f32 velY, PlayerActor* player, s32 tumbling) {
    player->vel.y = velY;
    player->canJump = 1;
    player->hasTumbled = tumbling;
    player->jumpReleasedInAir = 0;
    player->jumpAnimFrame = 0;
}


void func_8002F568(void) {
    gCurrentActivePlayerPointer->vel.x = gCurrentActivePlayerPointer->vaultlocity.x * 0.25f;
    gCurrentActivePlayerPointer->vel.z = gCurrentActivePlayerPointer->vaultlocity.z * 0.25f;
    if (gTongueOnePointer->segments >= 4) {
        gCurrentActivePlayerPointer->vaultFall = 12;
    }
}

// Player squish-recovery ease curve
f32 CalcSquishReboundCurve(s32 squishFramesElapsed, s32 targetFrame, s32 duration, s32 wobbleCycles) {
    squishFramesElapsed = targetFrame - squishFramesElapsed;
    if (duration < squishFramesElapsed) {
        squishFramesElapsed = duration;
    }
    return (((((sinf(squishFramesElapsed * 0x168 * wobbleCycles / duration * 2 * PI / 360.0) * (duration - squishFramesElapsed)) / duration) + 3.0) * squishFramesElapsed) / 4) / duration;
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

// Triggers a rumble pulse for a player, scaled by an event-specific intensity (e.g. 2 for
// TongueHitWall, 5 for the damage-hit sequence). Skipped if D_80168D78[playerID] flags that
// player's controller slot as rumble-incapable, or (for player 1 specifically) when D_801749B0
// is set. Duration is scaled differently in battle mode vs normal play.
void TriggerPlayerRumble(s32 playerID, s32 intensity) {
    if (((D_801749B0 == 0) || (gCurrentActivePlayerPointer->playerID != 1)) && (D_80168D78[playerID] == 0)) {
        if (gGameModeCurrent == GAME_MODE_BATTLE_MENU) {
            Rumble_AddTime(playerID, ((intensity * 100) / 6.0f));
        } else {
            Rumble_AddTime(playerID, ((intensity * 100) * 0.5f));
        }
    }
}

// Tongue hits a wall: rumble pulse, wall-hit SFX, and a 10-frame lockout (wallTime) during
// which the tongue is unusable and flickers.
void TongueHitWall(Tongue* tongue) {
    TriggerPlayerRumble(gCurrentActivePlayerPointer->playerID, 2);
    PLAY_SFX(SFX_TongueWall, 0, 0X10);
    tongue->wallTime = 10;
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
#ifdef NON_MATCHING
// diff score: 92 words
s32 func_80030DCC(f32 x, f32 y, f32 z)
{
  Actor *actor;
  actorSubArray *seg;
  s32 byteI;
  s32 byteEnd;
  f32 actorY;
  f32 dx;
  f32 dz;
  f32 range;
  volatile unsigned short new_var2;
  float new_var;
  Actor *new_var3;
  actor = gActors;
  do
  {
    if ((((actor->actorID != 0) && (actor->actorID < 0x5F)) && (actor->unk_A0.unk_00 != 3)) && ((actor->actorState == 0) || (actor->actorState == 3)))
    {
      byteI = 0;
      seg = actor->unknownPositionThings;
      if (actor->tongueCollision > 0)
      {
        actorY = actor->pos.y;
        do
        {
          byteI += 0x14;
          if (((seg->unk_04 + (actorY + seg->unk_10)) < (y - 50.0f)) || ((y + 50.0f) < (seg->unk_04 + actorY)))
          {
            byteEnd = actor->tongueCollision * 0x14;
          }
          else
          {
            dx = x;
            new_var3 = actor;
            new_var = (seg->unk_08 + new_var3->pos.z) - z;
            dx = (seg->unk_00 + new_var3->pos.x) - dx;
            range = seg->unk_0C + 50.0f;
            dz = new_var;
            if ((range * range) < ((dx * dx) + (dz * dz)))
            {
              byteEnd = new_var2;
            }
            else
            {
              return 1;
            }
            new_var2 = new_var3->tongueCollision * 0x14;
          }
          seg++;
        }
        while (byteI < byteEnd);
      }
    }
    actor++;
  }
  while (actor != ((Actor *) Poles));
  return 0;
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80030DCC.s")
#endif

//https://decomp.me/scratch/BeR2b
void UpdateTongueReticle(void) {
    s32 hit;
    s32 i;
    s32 spread;
    f32 dist;

    hit = 0;
    for (i = 0, spread = 0; i < 6; i++) {
        dist = (spread / 6) + ((s32) (gTimer << 6) % 533);
        gCurrentActivePlayerPointer->unk_DC[i] = (cosf((((gCurrentActivePlayerPointer->yAngle * 2) * PI) / 360.0)) * dist) + gCurrentActivePlayerPointer->pos.x;
        gCurrentActivePlayerPointer->unk_F4[i] = gCurrentActivePlayerPointer->pos.z - (sinf((((gCurrentActivePlayerPointer->yAngle * 2) * PI) / 360.0)) * dist);
        if (func_80030DCC(gCurrentActivePlayerPointer->unk_DC[i], gCurrentActivePlayerPointer->pos.y + gCurrentActivePlayerPointer->tongueYOffset, gCurrentActivePlayerPointer->unk_F4[i]) != 0) {
            hit = 1;
        }
        spread += 0xC80;
    }
    if (func_800CF080((s32) gCurrentActivePlayerPointer, 3200.0f) != 0) {
        hit = 1;
    }
    if (hit != 0) {
        *(s32*) &gCurrentActivePlayerPointer->targetLockFramesLeft = 6;
    } else {
        *(s32*) &gCurrentActivePlayerPointer->targetLockFramesLeft = *(s32*) &gCurrentActivePlayerPointer->targetLockFramesLeft - 1;
    }
    if (*(s32*) &gCurrentActivePlayerPointer->targetLockFramesLeft >= 0) {
        gCurrentActivePlayerPointer->reticleSize += 0.1f;
        if (gCurrentActivePlayerPointer->reticleSize > 2.0f) {
            gCurrentActivePlayerPointer->reticleSize = 2.0f;
        }
    } else {
        gCurrentActivePlayerPointer->reticleSize -= 0.1f;
        if (gCurrentActivePlayerPointer->reticleSize < 1.0f) {
            gCurrentActivePlayerPointer->reticleSize = 1.0f;
        }
    }
}

// Despawns a whole Lizard Kong Butterfly (actorID 0x47) group at once: if this butterfly is idle
// and its group hasn't already been flagged, clear the shared group record and mark every other
// butterfly sharing the same group id (unk_128) to despawn too.
void DespawnButterflyGroup(Actor* butterfly) {
    Actor* unused; // dead local - incremented but never read, decompiler artifact
    s32 i;

    if ((butterfly->actorState == 0) && (butterfly->actorID == LIZARD_KONG_BUTTERFLY)) {
        if (butterfly->userVariables[3] == 0) {
            D_80170E68[butterfly->unk_128].unk_00 = 0;
            for (i = 0; i < MAX_ACTORS; i++, unused++) {
                if ((gActors[i].actorID == LIZARD_KONG_BUTTERFLY) && (butterfly->unk_128 == gActors[i].unk_128)) {
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

// Ant Queen's per-hit knockback reaction: launches her away at the given angle, disables
// tongue-grab, and transitions her state machine (userVariables[1]) to 14. Called by
// func_80036F30's countdown (unk_120, armed from level data via unk_12C) each hit until it
// reaches 0, at which point the defeat sequence (func_800313BC + Effect_BossDeadEyes_Init)
// fires instead.
void QueenAnt_HitRecoil(Actor* quintella, f32 angle) {
    quintella->userVariables[0] = 0;
    quintella->userVariables[1] = 14;
    quintella->unk_134[3] = 76.80000305f;
    quintella->vel.x = cosf(DEGREES_TO_RADIANS_2PI(angle)) * 16.0f;
    quintella->vel.z = -sinf(DEGREES_TO_RADIANS_2PI(angle)) * 16.0f;
    quintella->tongueCollision = 0;
    PLAY_SFX_AT(SFX_6D_unkSnd, quintella->pos, 0, 0);
}


void func_800313BC(s32 arg0, f32 arg1) {
    DespawnButterflyGroup(gActors+arg0);
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
    if (arg0->actorID == RED_ANT) {
        D_80172E88[arg0->userVariables[0]].unk_00 = 0;
    }
    arg0->actorID = ACTOR_NULL;
}

// Shared "room clear condition met" reaction: defeat all golems, mirror rooms, and minigames
// (billiards, bowling)
void TriggerRoomClearReaction(Actor* trigger) {
    Actor* other;
    s32 i;
    s32 actorOffset;
    s32 triggerID;
    s32 otherID;
    s32 golemID = GOLEM;
    s32 spiderSpawnerID = GOLEM_ROOM_SPIDER_SPAWNER;
    PlayerActor* player;
    f32 x;
    f32 z;

    triggerID = trigger->actorID;
    if ((triggerID == MIRROR) && (trigger->userVariables[1] == 1)) {
        for (i = 0, actorOffset = 0, other = gActors; i != MAX_ACTORS; i++, actorOffset += sizeof(Actor), other++) {
            otherID = other->actorID;
            if (((otherID >= CUP) && (otherID < RNG_ROOM_SPAWNER)) || (otherID == MIRROR)) {
                func_800313BC(i, other->unk_90);
                otherID = other->actorID;
            }
            if ((otherID == RNG_ROOM_SPAWNER) || ((otherID == FIRE) && (other->actorState == 0))) {
                TriggerRoomClearReaction((Actor*) ((u8*) gActors + actorOffset));
            }
        }
    } else if (golemID == triggerID) {
        trigger->actorID = ACTOR_NULL;
        for (other = gActors; other < &gActors[MAX_ACTORS]; other++) {
            if (golemID == other->actorID) {
                return;
            }
        }
        for (i = 0, other = gActors; i != MAX_ACTORS; i++, other++) {
            otherID = other->actorID;
            if (otherID != 0) {
                if ((spiderSpawnerID == otherID) || ((otherID == SPIDER) && (other->actorState == 0))) {
                    func_800313BC(i, Random(0, 360));
                }
            }
        }
    } else if (triggerID == BILLIARDS_BALL) {
        player = gCurrentActivePlayerPointer;
        x = player->pos.x;
        z = player->pos.z;
        if (x > 1800.0f) {
            x = 1800.0f;
        }
        if (x < -1800.0f) {
            x = -1800.0f;
        }
        if (z > 900.0f) {
            z = 900.0f;
        }
        if (z < -900.0f) {
            z = -900.0f;
        }
        Actor_SpawnAt(FALLING_R_HEART, x, player->pos.y + 1000.0f, z);
    } else if (triggerID == BOWLING_PINS) {
        // Same XZ clamp as the BILLIARDS_BALL case, but the result is never used
        player = gCurrentActivePlayerPointer;
        x = player->pos.x;
        z = player->pos.z;
        if (x > 1800.0f) {
            x = 1800.0f;
        }
        if (x < -1800.0f) {
            x = -1800.0f;
        }
        if (z > 900.0f) {
            z = 900.0f;
        }
        if (z < -900.0f) {
            z = -900.0f;
        }
    }
    func_800314E4(trigger);
}

//has to do with tonguing poles and camera stuff?
void func_800317A0(void) {
    s32 i;
    gTongueOnePointer->controlAngle = gCurrentActivePlayerPointer->yAngle;
    gTongueOnePointer->length = 0;

    for (i = gTongueOnePointer->poleSegmentAt; i < gTongueOnePointer->cameraSegmentAt; i++) {
        if (((gTongueOnePointer->tongueXs[i] != 0.0f) || (gTongueOnePointer->tongueZs[i] != 0.0f)) && (gTongueOnePointer->length < gTongueOnePointer->tongueForwards[i])) {
            gTongueOnePointer->controlAngle = ArcTan2Deg(gTongueOnePointer->tongueXs[i], gTongueOnePointer->tongueZs[i]);
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
    if ((actor->actorID == ACTOR_NULL) || (actor->unk_A0.unk_00 == 3)) {
        return 1;
    }
    return 0;
}


// Called by func_800321F8 when the player's swinging tongue (wrapped around a pole) brushes
// an actor for two consecutive frames. Computes the angle around the pole where contact
// happened and arms the actor into an orbit-around-the-pole state at that angle
void CaptureActorOnPoleSwing(s32 actorIndex, f32 contactX, f32 contactZ) {
    f32 angle;

    angle = CalcAngleBetween2DPoints(contactX, contactZ, Poles[gTongueOnePointer->poleID].pos.x, Poles[gTongueOnePointer->poleID].pos.z);
    if (gActors[actorIndex].userVariables[0] == 0) {
        if (gTimer != (gActors[actorIndex].userVariables[3] + 1)) {
            gActors[actorIndex].userVariables[3] = gTimer;
            return;
        }
        angle += gTongueOnePointer->tongueDir * 90.0f;
        WrapDegrees(&angle);

        gActors[actorIndex].unk_134[2] = angle;
        gActors[actorIndex].userVariables[0] = 1;
        gActors[actorIndex].unk_134[0] = angle;
        gActors[actorIndex].unk_134[1] = 0.0f;
        gActors[actorIndex].unk_134[3] = 0.0f;
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
        gCurrentActivePlayerPointer->powerFramesElapsed = 0;
        gCurrentActivePlayerPointer->powerDuration = actor->unk_128;
        PLAY_SFX(SFX_3A_unkSnd, 0, 0x10);
        var_s0 = 0x32;
        break;
    case BIG_FEET_POWER_UP:
        ClearPlayerPowerups(gCurrentActivePlayerPointer);
        gCurrentActivePlayerPointer->power = 1;
        gCurrentActivePlayerPointer->powerFramesElapsed = 0;
        gCurrentActivePlayerPointer->powerDuration = actor->unk_128;
        PLAY_SFX(SFX_3A_unkSnd, 0, 0x10);
        var_s0 = 0x32;
        break;
    case BIG_HEAD_POWER_UP:
        ClearPlayerPowerups(gCurrentActivePlayerPointer);
        gCurrentActivePlayerPointer->power = 2;
        gCurrentActivePlayerPointer->powerFramesElapsed = 0;
        gCurrentActivePlayerPointer->powerDuration = actor->unk_128;
        PLAY_SFX(SFX_3A_unkSnd, 0, 0x10);
        var_s0 = 0x32;
        break;
    case SHRINK_POWER_UP:
        ClearPlayerPowerups(gCurrentActivePlayerPointer);
        gCurrentActivePlayerPointer->power = 3;
        gCurrentActivePlayerPointer->powerFramesElapsed = 0;
        gCurrentActivePlayerPointer->powerDuration = actor->unk_128;
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
            gCurrentActivePlayerPointer->powerFramesElapsed = 0;
            gCurrentActivePlayerPointer->powerDuration = actor->unk_128;
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

    actor->actorID = ACTOR_NULL;

    if (var_s0 == 0) {
        Effect_PlayerEyes_Init(gSelectedCharacters[gCurrentActivePlayerPointer->playerID], 2, 50.0f, 0);
        return;
    }
    Effect_PlayerEyes_Init(gSelectedCharacters[gCurrentActivePlayerPointer->playerID], 1, var_s0, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80034104.s")

// score 970
// appears to be the function that drags actors in towards the chameleon following the tongue segment they attached to
#ifdef NON_MATCHING
void func_800343B4(void) {
    Tongue* tongue = gTongueOnePointer;
    PlayerActor* player;
    Actor* actor;
    s32 i;
    s32 seg;

    for (i = 0; i < (s32) tongue->amountOnTongue; i++) {
        actor = &gActors[tongue->onTongue[i]];
        if (actor->actorState == 1) {
            seg = actor->posOnTongue;
            player = gCurrentActivePlayerPointer;
            actor->pos.x = (tongue->tongueHalfX[seg] + player->pos.x) + actor->tOffset.x;
            actor->pos.y = (((tongue->tongueYs[seg] + player->pos.y) + actor->tOffset.y) + player->tongueYOffset) - (actor->unknownPositionThings[0].unk_10 * 0.5f);
            actor->pos.z = (tongue->tongueHalfZ[seg] + player->pos.z) + actor->tOffset.z;
        }
    }
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800343B4.s")
#endif


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
        if ((newActor->actorID == RED_ANT) || (newActor->actorID == SANDAL)) {
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
        AreAnglesWithin180Degrees(gCurrentActivePlayerPointer->yAngle, ArcTan2Deg((&Poles[gTongueOnePointer->poleID])->pos.x - gCurrentActivePlayerPointer->pos.x, -((&Poles[gTongueOnePointer->poleID])->pos.z - gCurrentActivePlayerPointer->pos.z)));
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
            angle = ArcTan2Deg(xCalc, -zCalc);
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
    if (arg0->playerHurtState == PLAYER_HURT_NONE) {
        TriggerPlayerRumble(arg0->playerID, 5);
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
        arg0->playerHurtState = PLAYER_HURT_HIT;
        arg0->playerHurtTimer = 0;
        arg0->playerHurtAnim = 0;
        arg0->playerHurtBy = 0;
        func_80031DB0(arg0, arg1, 0);
        arg0->yAngle = ArcTan2Deg(-arg0->vel.x, arg0->vel.z);;
        arg0->vel.x = -cosf(DEGREES_TO_RADIANS_2PI(arg0->yAngle)) * 32.0f;
        arg0->vel.z = sinf(DEGREES_TO_RADIANS_2PI(arg0->yAngle)) * 32.0f;
        LaunchPlayerVertically(48.0f, arg0, 1);
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
            greyAntSpawner->actorID = ACTOR_NULL;
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
                TriggerRoomClearReaction(bulletHellAntSpawner);
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
    } else if (gTimer % 8 == 4) {
        PLAY_SFX_AT(SFX_63_unkSnd+2, bulletHellAnt->pos, 1, 0);
    }
    return 0;
}

void ActorTick_RedAntSpawner(Actor* redAntSpawner) {
    f32 dx;
    f32 dz;
    f32 rangeSq;

    dx = redAntSpawner->pos.x - gCurrentActivePlayerPointer->pos.x; dz = redAntSpawner->pos.z - gCurrentActivePlayerPointer->pos.z;
    if (redAntSpawner->userVariables[1] == 0) {
        redAntSpawner->userVariables[0]++;
        if ((redAntSpawner->userVariables[0] % redAntSpawner->unk_124) == 1) {
            redAntSpawner->userVariables[1] = 1;
        }
    }
    redAntSpawner->vel.x = 0.0f;
    if (redAntSpawner->unk_128 >= gActorCount) {
        rangeSq = redAntSpawner->unk_160;
        if (((dx * dx) + (dz * dz)) < rangeSq) {
            if ((redAntSpawner->userVariables[1] != 0) &&
                (Actor_Init(RED_ANT, redAntSpawner->pos.x, redAntSpawner->pos.y - 100.0f, redAntSpawner->pos.z,
                    0.0f, redAntSpawner->unk_F4, redAntSpawner->unk_F8, redAntSpawner->unk_FC,
                    redAntSpawner->unk_100, redAntSpawner->unk_104, redAntSpawner->unk_108,
                    redAntSpawner->position._f32.x, redAntSpawner->position._f32.y, redAntSpawner->unk_15C,
                    rangeSq, redAntSpawner->unk_164, redAntSpawner->unk_168,
                    0.0f, 0.0f, 0, 0, 0, 0) != -1)) {
                redAntSpawner->userVariables[1] = 0;
                Effect_TypeY_Init(redAntSpawner->pos.x, redAntSpawner->pos.y, redAntSpawner->pos.z, 2.0f, 2.5f, 2.0f, 5.0f);
            }
            redAntSpawner->userVariables[2]++;
            redAntSpawner->vel.x = (1 - ((redAntSpawner->userVariables[2] & 1) * 2)) * 20.0f;
        }
    }
}

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

void ActorInit_RedAnt(Actor* redAnt) {
    unkStruct* slot;
    s32 slotIndex;
    s32 i;
    f32 hitboxTemp;

    redAnt->unk_90 = redAnt->unk_164;
    redAnt->userVariables[3] = 80.0f / redAnt->position._f32.x;
    slot = D_80172E88;
    slotIndex = 0;
    do {
        if (slot->unk_00 == 0) {
            slot->unk_00 = 1;
            *(s32*) &slot->unk_04 = 0;
            redAnt->userVariables[0] = slotIndex;
            break;
        }
        slotIndex++;
        slot++;
    } while (slotIndex != 0x18);
    if (slotIndex == 0x18) {
        redAnt->actorID = ACTOR_NULL;
        return;
    }
    slot = &D_80172E88[slotIndex];
    for (i = 0; i < 16; i++) {
        slot->unk_08[i] = redAnt->pos.x;
        slot->unk_48[i] = redAnt->pos.y;
        slot->unk_88[i] = redAnt->pos.z;
        ((f32*) slot->unk_C8)[i] = redAnt->unk_90;
    }
    hitboxTemp = redAnt->unknownPositionThings[0].unk_0C;
    redAnt->tongueCollision = 3;
    redAnt->unknownPositionThings[2].unk_0C = hitboxTemp;
    redAnt->unknownPositionThings[1].unk_0C = hitboxTemp;
    hitboxTemp = redAnt->unknownPositionThings[0].unk_10;
    redAnt->unknownPositionThings[2].unk_08 = 0.0f;
    redAnt->unknownPositionThings[2].unk_04 = 0.0f;
    redAnt->unknownPositionThings[2].unk_00 = 0.0f;
    redAnt->unknownPositionThings[1].unk_08 = 0.0f;
    redAnt->unknownPositionThings[1].unk_04 = 0.0f;
    redAnt->unknownPositionThings[1].unk_00 = 0.0f;
    redAnt->unknownPositionThings[2].unk_10 = hitboxTemp;
    redAnt->unknownPositionThings[1].unk_10 = hitboxTemp;
    PlaySoundEffect(SFX_5D_unkSnd, &redAnt->pos.x, &redAnt->pos.y, &redAnt->pos.z, 0, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_RedAnt.s")

void UpdateRedAntTrail(Actor* redAnt) {
    unkStruct* slot = &D_80172E88[redAnt->userVariables[0]];
    s32 head = redAnt->userVariables[1];
    s32 tail = redAnt->userVariables[2];
    f32 radius = redAnt->userVariables[3] * redAnt->position._f32.x;

    redAnt->unknownPositionThings[1].unk_00 = cosf((((redAnt->unk_90 + redAnt->unk_C0) * 2) * PI) / 360.0) * radius;
    redAnt->unknownPositionThings[1].unk_08 = -sinf((((redAnt->unk_90 + redAnt->unk_C0) * 2) * PI) / 360.0) * radius;
    redAnt->unknownPositionThings[1].unk_0C = redAnt->tScale * redAnt->sizeScalar;
    redAnt->unknownPositionThings[1].unk_10 = redAnt->tYPos * redAnt->sizeScalar;
    slot->unk_08[head] = redAnt->unknownPositionThings[1].unk_00 + redAnt->pos.x;
    slot->unk_48[head] = redAnt->pos.y;
    slot->unk_88[head] = redAnt->unknownPositionThings[1].unk_08 + redAnt->pos.z;
    redAnt->unknownPositionThings[2].unk_00 = redAnt->unknownPositionThings[1].unk_00 * (2.0f * 1.0f);
    redAnt->unknownPositionThings[2].unk_08 = redAnt->unknownPositionThings[1].unk_08 * (2.0f * 1.0f);
    redAnt->unknownPositionThings[2].unk_0C = redAnt->tScale * redAnt->sizeScalar;
    redAnt->unknownPositionThings[2].unk_10 = redAnt->tYPos * redAnt->sizeScalar;
    slot->unk_08[tail] = redAnt->unknownPositionThings[2].unk_00 + redAnt->pos.x;
    slot->unk_48[tail] = redAnt->pos.y;
    slot->unk_88[tail] = redAnt->unknownPositionThings[2].unk_08 + redAnt->pos.z;
}

void ActorInit_YellowAnt(Actor* yellowAnt) {
    f32 angle;
    f32 trig;

    angle = CalcAngleBetween2DPoints(yellowAnt->pos.x, yellowAnt->pos.z,
        Poles[yellowAnt->unk_124].pos.x, Poles[yellowAnt->unk_124].pos.z);
    trig = cosf(DEGREES_TO_RADIANS_2PI(angle + 180.0f));
    yellowAnt->pos.x = (yellowAnt->position._f32.x * trig) + (Poles + yellowAnt->unk_124)->pos.x;
    trig = sinf(DEGREES_TO_RADIANS_2PI(angle + 180.0f));
    yellowAnt->pos.z = Poles[yellowAnt->unk_124].pos.z - (yellowAnt->position._f32.x * trig);
    yellowAnt->unk_134[4] = yellowAnt->unk_90 = yellowAnt->unk_15C + (angle + 90.0f);
    WrapDegrees(&yellowAnt->unk_90);
    yellowAnt->unk_94 = yellowAnt->unk_160;
    yellowAnt->unk_F0 = Random(0, 0x100);
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_YellowAnt.s")

void ActorInit_GreenAnt(Actor* greenAnt) {
    greenAnt->unk_134[0] = 0.0f;
    greenAnt->userVariables[2] = greenAnt->unk_15C / greenAnt->position._f32.x;
    greenAnt->unk_F0 = Random(0, 256);
}

void ActorTick_GreenAnt(Actor* greenAnt) {
    s32 phase;

    switch (greenAnt->userVariables[0]) {
    case 0:
        RotateAngleTowards(&greenAnt->unk_90, greenAnt->unk_134[0], greenAnt->position._f32.y);
        if (gTongueOnePointer->amountInMouth != 0) {
            greenAnt->userVariables[1]++;
        } else if (greenAnt->unk_90 == greenAnt->unk_134[0]) {
            greenAnt->userVariables[1] = greenAnt->unk_124 - 1;
        } else {
            greenAnt->userVariables[1]++;
        }
        if (greenAnt->userVariables[1] >= greenAnt->unk_124) {
            greenAnt->userVariables[0] = 1;
            greenAnt->userVariables[1] = 0;
            greenAnt->unk_94 = greenAnt->position._f32.x;
        }
        break;
    case 1:
        phase = greenAnt->userVariables[1] % 8;
        if (phase == 0) {
            PlaySoundEffect(0x66, &greenAnt->pos.x, &greenAnt->pos.y, &greenAnt->pos.z, 1, 0);
        } else if (phase == 4) {
            PlaySoundEffect(0x65, &greenAnt->pos.x, &greenAnt->pos.y, &greenAnt->pos.z, 1, 0);
        }
        if (greenAnt->userVariables[2] == ++greenAnt->userVariables[1]) {
            greenAnt->userVariables[0] = 0;
            greenAnt->userVariables[1] = 0;
            greenAnt->unk_94 = 0.0f;
            if (AreAnglesWithin180Degrees(greenAnt->unk_90, CalcAngleBetween2DPoints(greenAnt->pos.x, greenAnt->pos.z, gCurrentActivePlayerPointer->pos.x, gCurrentActivePlayerPointer->pos.z)) > 0) {
                greenAnt->unk_134[0] = greenAnt->unk_90 + 90.0f;
                WrapDegrees(&greenAnt->unk_134[0]);
            } else {
                greenAnt->unk_134[0] = greenAnt->unk_90 - 90.0f;
                WrapDegrees(&greenAnt->unk_134[0]);
            }
        }
        break;
    }
    func_800382F4(greenAnt);
    greenAnt->unk_F0++;
}

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

void ActorTick_WhiteBombSnake(Actor* bombSnake) {
    Actor_PlaySound(bombSnake, SFX_73_unkSnd, 0x1E, 1);
    switch (bombSnake->userVariables[0]) {
    case 0:
        if (bombSnake->userVariables[2] == 0) {
            if (IsAngleWithin90Degrees(bombSnake->unk_90, CalcAngleBetween2DPoints(bombSnake->pos.x, bombSnake->pos.z, bombSnake->position._f32.x, bombSnake->position._f32.y)) < 0) {
                bombSnake->userVariables[0] = 1;
                bombSnake->userVariables[2] = 1;
                bombSnake->unk_94 = 0.0f;
            }
        } else if (IsAngleWithin90Degrees(bombSnake->unk_90, CalcAngleBetween2DPoints(bombSnake->pos.x, bombSnake->pos.z, bombSnake->unk_134[0], bombSnake->unk_134[1])) < 0) {
            bombSnake->userVariables[0] = 1;
            bombSnake->userVariables[2] = 0;
            bombSnake->unk_94 = 0.0f;
        }
        break;
    case 1:
        bombSnake->userVariables[1]++;
        if ((bombSnake->unk_124 / 4) == bombSnake->userVariables[1]) {
            bombSnake->userVariables[0] = 2;
            bombSnake->userVariables[1] = 0;
        }
        break;
    case 2:
        bombSnake->unk_90 += bombSnake->unk_160;
        WrapDegrees(&bombSnake->unk_90);
        if (bombSnake->userVariables[3] == ++bombSnake->userVariables[1]) {
            bombSnake->userVariables[0] = 3;
            bombSnake->userVariables[1] = 0;
        }
        break;
    case 3:
        if (bombSnake->unk_124 == ++bombSnake->userVariables[1]) {
            bombSnake->userVariables[0] = 0;
            bombSnake->userVariables[1] = 0;
            bombSnake->unk_94 = bombSnake->unk_15C;
        }
        break;
    case 4:
        if (bombSnake->unk_128 == bombSnake->userVariables[1]++) {
            bombSnake->userVariables[0] = 0;
            bombSnake->userVariables[1] = 0;
            bombSnake->unk_94 = bombSnake->unk_15C;
        }
        break;
    }
    func_800382F4(bombSnake);
}

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
        RotateAngleTowards(&grenade->unk_90, angle, grenade->position._f32.y);
    }
    Actor_PlaySound(grenade, SFX_GrenadeWalk, 10, 4);
    func_800382F4(grenade);
}

void ActorInit_MissileSpawner(Actor* missileSpawner) {
}

void ActorTick_MissileSpawner(Actor* missileSpawner) {
    Actor* actor = gActors; do {
        if (actor->actorID == MISSILE) {
            if (actor->unk_12C == missileSpawner->actorIndex) {
                return;
            }
        }
        actor++;
    } while (actor != (Actor*) Poles);

    if (missileSpawner->userVariables[0] == 0) {
        missileSpawner->userVariables[0] = 60;
    }
    missileSpawner->userVariables[0] -= 1;
    if (missileSpawner->userVariables[0] != 0) {
        return;
    }

    if (Actor_Init(MISSILE, missileSpawner->pos.x, missileSpawner->pos.y, missileSpawner->pos.z,
            0.0f, missileSpawner->unk_F4, missileSpawner->unk_F8, missileSpawner->unk_FC,
            missileSpawner->unk_100, missileSpawner->unk_104, missileSpawner->unk_108,
            missileSpawner->position._f32.x, missileSpawner->position._f32.y, missileSpawner->unk_15C,
            missileSpawner->unk_160, missileSpawner->unk_164, missileSpawner->unk_168,
            missileSpawner->unk_16C, missileSpawner->unk_170, missileSpawner->unk_124,
            missileSpawner->unk_128, missileSpawner->actorIndex, 0) != -1) {
        Effect_TypeX_Create(missileSpawner->pos.x, missileSpawner->pos.y, missileSpawner->pos.z, 200.0f, 0x18);
    }
}


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

void ActorTick_Cannon(Actor* cannon) {
    f32 cannonX;
    f32 range;
    f32 playerX;

    playerX = gCurrentActivePlayerPointer->pos.x;
    range = cannon->unk_168; cannonX = cannon->pos.x;
    if ((playerX < (range + cannonX)) && ((cannonX - range) < playerX) && (cannon->userVariables[0] == 0) &&
        (Actor_Init(CANNONBALL, cannon->pos.x, cannon->pos.y - 70.0f, cannon->pos.z - 300.0f, 0.0f,
            -50000.0f, 50000.0f, -50000.0f, 50000.0f, -50000.0f, 50000.0f,
            cannon->position._f32.x + (((gTimer % 3) * 0xC8) - 0xC8), cannon->position._f32.y,
            Random(-200, 200) + cannon->unk_15C, cannon->unk_160, 8.0f, 0.0f, 0.0f, 0.0f,
            0, 0, 0, 0) != -1)) {
        Effect_TypeA_Init(cannon->pos.x, cannon->pos.y - 70.0f, cannon->pos.z - 300.0f, 2, 60);
        cannon->userVariables[0] = 1;
    }
}

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

void ActorTick_Cannonball(Actor* cannonball) {
    if ((cannonball->unk_9C != 0) || (cannonball->globalTimer == cannonball->userVariables[0])) {
        if (Actor_Init(EXPLOSION, cannonball->pos.x,
                (cannonball->pos.y + (cannonball->unknownPositionThings[0].unk_10 / 2)) - (D_8010A6D0[0x14].y / 2),
                cannonball->pos.z, 0.0f, -50000.0f, 50000.0f, -50000.0f, 50000.0f, -50000.0f, 50000.0f,
                200.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0xA, 0, 0, 0) != -1) {
            Effect_TypeA_Init(cannonball->pos.x, cannonball->pos.y, cannonball->pos.z, 3, 0x64);
        }
        TriggerRoomClearReaction(cannonball);
    }
    cannonball->vel.y = cannonball->unk_134[0] + (sinf((((((((f32) cannonball->globalTimer - 0.5f) * 180.0f) / cannonball->userVariables[0]) + 90.0f) * 2) * PI) / 360.0) * cannonball->unk_164);
}

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
        TriggerRoomClearReaction(explosion);
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
        TriggerRoomClearReaction(bsBomb);
    }
}

// Black Chameleon Projectile Spawner
void ActorInit_ChameleonBlackSpotSpawner(Actor* blackChameleonProjectileSpawner) {

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

void ActorTick_SandCrab(Actor* sandCrab) {
    f32 dx;
    f32 dz;
    s32 state;

    state = sandCrab->userVariables[1];
    dx = sandCrab->pos.x - sandCrab->position._f32.y; dz = sandCrab->pos.z - sandCrab->unk_15C;
    if (state == 0) {
        if (sandCrab->unk_98 == 0) {
            if (sandCrab->vel.y < 0.0f) {
                sandCrab->vel.y = 0.0f;
                sandCrab->userVariables[1] = 1;
                sandCrab->unk_A0.unk_04 = 2;
                return;
            }
        }
        sandCrab->vel.y -= 3.2f;
        sandCrab->pos.y += sandCrab->vel.y;
        if (sandCrab->pos.y < (sandCrab->unk_134[0] - 1000.0)) {
            TriggerRoomClearReaction(sandCrab);
        }
    } else if (state == 1) {
        sandCrab->vel.y = 0.0f;
        if ((((dx * dx) + (dz * dz)) < 90000.0) || (sandCrab->unk_9C != 0)) {
            sandCrab->vel.z = 0.0f;
            sandCrab->vel.x = 0.0f;
            sandCrab->userVariables[1] = 2;
            sandCrab->unk_A0.unk_04 = 4;
        }
    } else {
        sandCrab->userVariables[0]++;
        sandCrab->pos.y -= 5.0f;
        if (sandCrab->userVariables[0] == 0x1E) {
            TriggerRoomClearReaction(sandCrab);
        }
    }
}

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
        TriggerRoomClearReaction(arrows);
    }
    func_800382F4(arrows);
}

// BOULDER
void func_8003E368(Actor* boulder) {

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

void ActorTick_Boulder(Actor* boulder) {
    if (boulder->userVariables[0] > 0) {
        boulder->vel.x -= boulder->vel.x * 0.03f;
        boulder->vel.z -= boulder->vel.z * 0.03f;
        boulder->unk_134[3] += sqrtf(SUM_OF_SQUARES(boulder->vel.x, boulder->vel.z));
        boulder->unk_90 = ArcTan2Deg(boulder->vel.x, -boulder->vel.z);
        boulder->vel.y -= 3.2f;
        if (boulder->unk_98 == 0) {
            BoulderCalculations(boulder);
            boulder->userVariables[1] ^= 1;
            if (boulder->userVariables[1] != 0) {
                PLAY_SFX_AT(SFX_RockTumble, boulder->pos, 0, 0);
            } else {
                PLAY_SFX_AT(SFX_90_unkSnd, boulder->pos, 0, 0);
            }
        }
    } else if (boulder->userVariables[0] < 0) {
        boulder->userVariables[2] += 1;
        if (boulder->userVariables[2] >= 31) {
            func_800314E4(boulder);
        } else {
            boulder->pos.y -= 20.0f;
        }
    } else if (gCurrentActivePlayerPointer->pos.y < boulder->unk_15C) {
        PLAY_SFX_AT(SFX_RockTumble, boulder->pos, 0, 0);
        boulder->unk_98 = 1;
        boulder->userVariables[0] = 1;
        boulder->vel.x = boulder->position._f32.x;
        boulder->vel.z = boulder->position._f32.y;
    }
}

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

    for (i = 0; i < armadillo->unk_12C; i++) {
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
    pogo->unk_90 = ArcTan2Deg(temp_f0, -temp_f2);
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

void ActorInit_Unk23(Actor* unk_23) {

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
void func_80040CDC(Actor* unk_28) {

}

void ActorTick_Unk28(Actor* unk_28) {

}

// Cake Boss Choco Kid
void func_80040CEC(Actor* cakeBossChocoKid) {

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
void ActorInit_BilliardBall(Actor* billiardBall) {

}

void ActorTick_BilliardBall(Actor* billiardBall) {
    f32 temp_f0_2;

    //super
    ActorTick_MinigameActor(billiardBall);

    temp_f0_2 = NORM_2(billiardBall->vel.x,billiardBall->vel.z);
    billiardBall->unk_94 = temp_f0_2;
    billiardBall->unk_134[0] = ((180.0f * temp_f0_2) / ( billiardBall->unknownPositionThings[0].unk_0C * PI)) + billiardBall->unk_134[0];
    billiardBall->unk_90 = ArcTan2Deg(billiardBall->vel.x, -billiardBall->vel.z);
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

void ActorTick_BowlingPin(Actor* bowlingPin) {
    f32 speed;

    if (bowlingPin->userVariables[0] == 0) {
        bowlingPin->unk_134[0] = 0.0f;
    }
    ActorTick_MinigameActor(bowlingPin);
    speed = sqrtf((bowlingPin->vel.x * bowlingPin->vel.x) + (bowlingPin->vel.z * bowlingPin->vel.z));
    bowlingPin->unk_94 = speed;
    bowlingPin->unk_134[0] += (180.0f * speed) / (bowlingPin->unknownPositionThings[0].unk_0C * PI);
    bowlingPin->unk_90 = ArcTan2Deg(bowlingPin->vel.x, -bowlingPin->vel.z);
    if (bowlingPin->unk_134[0] >= 5.0f) {
        bowlingPin->unk_134[0] += 2.0f;
        if (!(gTimer & 1)) {
            bowlingPin->pos.y = 5000.0f;
        } else {
            bowlingPin->pos.y = 50.0f;
        }
        if (bowlingPin->userVariables[0] == 0) {
            switch (Rand() % 3) {
            case 0:
                PlaySoundEffect(SFX_BE_unkSnd, NULL, NULL, NULL, 0, 0x10);
                break;
            case 1:
                PlaySoundEffect(SFX_BF_unkSnd, NULL, NULL, NULL, 0, 0x10);
                break;
            default:
                PlaySoundEffect(SFX_C0_unkSnd, NULL, NULL, NULL, 0, 0x10);
                break;
            }
        } else if (bowlingPin->userVariables[0] >= 0x5B) {
            TriggerRoomClearReaction(bowlingPin);
        }
        bowlingPin->userVariables[0] += 4;
    }
}

void ActorInit_Unk2E(Actor* unk_2E) {
    unk_2E->userVariables[0] = 10;
    unk_2E->unk_134[0] = unk_2E->pos.y;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_Unk2E.s")

void ActorInit_Unk2F(Actor* unk_2F) {

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
void ActorInit_RNGRoomSpawner(Actor* rngRoomSpawner) {

}

void ActorTick_RNGRoomSpawner(Actor* rngRoomSpawner) {
    f32 deg;
    f32 spawnX;
    f32 spawnZ;

    Actor_PlaySound(rngRoomSpawner, 0xD8, 0x19, 4);
    if ((StageFlags[rngRoomSpawner->unk_130] != 0) && (gActorCount < rngRoomSpawner->unk_124)) {
        deg = Random(0, 0x167);
        spawnX = (cosf((((deg * 2) * PI) / 360.0)) * rngRoomSpawner->unk_164) + rngRoomSpawner->pos.x;
        spawnZ = (-sinf((((deg * 2) * PI) / 360.0)) * rngRoomSpawner->unk_164) + rngRoomSpawner->pos.z;
        deg += 180.0f;
        WrapDegrees(&deg);
        if (Actor_Init(FIRE, spawnX, rngRoomSpawner->pos.y, spawnZ, deg,
                -5000.0f, 5000.0f, -5000.0f, 5000.0f, -5000.0f, 5000.0f,
                rngRoomSpawner->position._f32.x, rngRoomSpawner->position._f32.y,
                rngRoomSpawner->unk_15C, rngRoomSpawner->unk_160,
                0.0f, 0.0f, 0.0f, 0.0f, 0, rngRoomSpawner->unk_128, rngRoomSpawner->unk_12C, 0) != -1) {
            Effect_TypeA_Init(spawnX, rngRoomSpawner->pos.y, spawnZ, 3, 0x1E);
        }
    }
}

void ActorInit_Mirror(Actor* mirror) {
    if (gTimer % mirror->unk_128 == mirror->unk_124) {
        mirror->userVariables[1] = 1;
    } else {
        mirror->userVariables[1] = 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_Mirror.s")

void ActorInit_BarrelFireSpawner(Actor* barrelFireSpawner) {

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

void ActorTick_BarrelFire(Actor* barrelFire) {
    f32 fireY;
    f32 playerY;

    barrelFire->unk_134[0] += barrelFire->unk_160;
    WrapDegrees(&barrelFire->unk_134[0]);
    barrelFire->unk_90 = barrelFire->unk_134[0] + 90.0f;
    WrapDegrees(&barrelFire->unk_90);
    barrelFire->pos.x = (cosf((((barrelFire->unk_134[0] * 2) * PI) / 360.0)) * barrelFire->unk_15C) + barrelFire->position._f32.x;
    barrelFire->pos.z = (-sinf((((barrelFire->unk_134[0] * 2) * PI) / 360.0)) * barrelFire->unk_15C) + barrelFire->position._f32.y;
    playerY = gCurrentActivePlayerPointer->pos.y;
    fireY = barrelFire->pos.y;
    if (playerY < (fireY - 15.0f)) {
        barrelFire->vel.y = -15.0f;
    } else if ((fireY + 15.0f) < playerY) {
        barrelFire->vel.y = 15.0f;
    } else {
        barrelFire->vel.y = 0.0f;
    }
    Actor_PlaySound(barrelFire, 0xB0, 0x46, 1);
    if (barrelFire->globalTimer == barrelFire->userVariables[0]) {
        TriggerRoomClearReaction(barrelFire);
    }
    barrelFire->unk_F0++;
}

void ActorInit_FireSpitter(Actor* fireSpitter) {
    fireSpitter->userVariables[0] = fireSpitter->unk_124 - 1;
}

#ifdef NON_MATCHING
void ActorTick_FireSpitter(Actor *fireSpitter)
{
  f32 dx;
  f32 dz;
  f32 distSq;
  f32 fireX;
  f32 fireY;
  f32 fireZ;
  s32 period;
  s32 timer;
  dx = fireSpitter->pos.x - gCurrentActivePlayerPointer->pos.x;
  dz = fireSpitter->pos.z - gCurrentActivePlayerPointer->pos.z;
  distSq = (dx * dx) + (dz * dz);
  if (((distSq < fireSpitter->unk_164) && (fireSpitter->unk_168 < distSq)) && (gActorCount < fireSpitter->unk_130))
  {
    period = fireSpitter->unk_124;
    timer = fireSpitter->userVariables[0];
    if (timer >= (period - 0xA))
    {
      fireSpitter->unk_F0 = (timer - period) + 0xA;
    }
    else
      if (fireSpitter->unk_F0 != 0)
    {
      fireSpitter->unk_F0--;
      if (1)
      {
        timer = fireSpitter->userVariables[0];
        period = fireSpitter->unk_124;
      }
    }
    fireSpitter->userVariables[0] = timer + 1;
    if (1)
    {
    }
    if (fireSpitter->userVariables[0] == period)
    {
      fireSpitter->userVariables[0] = 0;
      if (Actor_Init(0x3B, fireSpitter->pos.x, fireSpitter->pos.y, fireSpitter->pos.z, 0.0f, fireSpitter->unk_F4, fireSpitter->unk_F8, fireSpitter->unk_FC, fireSpitter->unk_100, fireSpitter->unk_104, fireSpitter->unk_108, fireSpitter->position._f32.x, fireSpitter->position._f32.y, fireSpitter->unk_15C, fireSpitter->unk_160, 0.0f, 0.0f, 0.0f, 0.0f, 0, fireSpitter->unk_128, fireSpitter->unk_12C, 0) != (-1))
      {
        fireX = fireSpitter->pos.x;
        fireY = fireSpitter->pos.y;
        fireZ = fireSpitter->pos.z;
        Effect_TypeC_Init(fireX, fireY, fireZ, fireX, fireY + 300.0f, fireZ, 0xFFU, 0xFFU, 0xFFU, 0xFFU, 0x10, 0x4A);
        PlaySoundEffect(0xAB, &fireSpitter->pos.x, &fireSpitter->pos.y, &fireSpitter->pos.z, 0, 0);
      }
    }
  }
  fireSpitter->unk_90 = CalcAngleBetween2DPoints(fireSpitter->pos.x, fireSpitter->pos.z, gCurrentActivePlayerPointer->pos.x, gCurrentActivePlayerPointer->pos.z);
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_FireSpitter.s")
#endif

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
        RotateAngleTowards(&fire->unk_90, angle, fire->position._f32.y);
        if (fire->userVariables[1] == 0) {
            fire->userVariables[0] = 1;
            fire->userVariables[1] = Random(1, fire->unk_12C);
        } else {
            fire->userVariables[1]--;
        }
    } else {
        fire->unk_94 = 0.0f;
        RotateAngleTowards(&fire->unk_90, angle, fire->unk_160);
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

void GhostBoss_SpawnArms(Actor* ghostBoss) {
    s32 i;
    s32 j;
    s32 actorID;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 15; j++) {
            actorID = PILE_OF_BOOKS_ARM_SEGMENTS;
            if (j == 0) {
                actorID = PILE_OF_BOOKS_ARM_SPITTER;
            }
            D_801749D8[i][j] = Actor_Init(actorID, 0.0f, 5000.0f, 0.0f,
                0.0f, -10000.0f, 10000.0f, -10000.0f, 10000.0f, -10000.0f, 10000.0f,
                0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
                j, ghostBoss->actorIndex, i, 0);
        }
    }
}


void ActorInit_GhostBoss(Actor* pob) {
    pob->unk_EC = 0;
    pob->userVariables[3] = pob->unk_128 * 2;
    pob->unk_134[1] = pob->pos.z + -800.0f;
    pob->unk_134[2] = pob->unk_90;
    GhostBoss_SpawnArms(pob);    // Compiled as empty originally?
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800448C0.s")

void func_80044C30(Actor* arg0, s32 arg1) {
    Actor* actor;
    s32 i;

    if ((arg1 == 0) || (arg1 == 2)) {
        actor = &gActors[D_801749D8[0][0]];
        i = arg0->userVariables[0] + 1;
        arg0->userVariables[0] = i;
        D_80174A50.unk_000[i][0] = actor->pos.x;
        D_80174A50.unk_000[i][1] = (actor->unknownPositionThings[0].unk_10 * 0.125f) + actor->pos.y;
        D_80174A50.unk_000[i][2] = actor->pos.z;
        D_80174A50.unk_000[i][3] = actor->unk_90;
    }
    if ((arg1 == 1) || (arg1 == 2)) {
        actor = &gActors[D_801749D8[1][0]];
        i = arg0->userVariables[1] + 1;
        arg0->userVariables[1] = i;
        D_80174A50.unk_5A0[i][0] = actor->pos.x;
        D_80174A50.unk_5A0[i][1] = (actor->unknownPositionThings[0].unk_10 * 0.125f) + actor->pos.y;
        D_80174A50.unk_5A0[i][2] = actor->pos.z;
        D_80174A50.unk_5A0[i][3] = actor->unk_90;
    }
}

void func_80044D58(Actor* arg0, s32 arg1) {
    Actor* actor;
    s32 i;

    if ((arg1 == 0) || (arg1 == 2)) {
        actor = &gActors[D_801749D8[0][0]];
        i = arg0->userVariables[0] - 1;
        arg0->userVariables[0] = i;
        actor->pos.x = D_80174A50.unk_000[i][0];
        actor->pos.y = D_80174A50.unk_000[i][1] - (actor->unknownPositionThings[0].unk_10 * 0.125f);
        actor->pos.z = D_80174A50.unk_000[i][2];
        actor->unk_90 = D_80174A50.unk_000[i][3];
    }
    if ((arg1 == 1) || (arg1 == 2)) {
        actor = &gActors[D_801749D8[1][0]];
        i = arg0->userVariables[1] - 1;
        arg0->userVariables[1] = i;
        actor->pos.x = D_80174A50.unk_5A0[i][0];
        actor->pos.y = D_80174A50.unk_5A0[i][1] - (actor->unknownPositionThings[0].unk_10 * 0.125f);
        actor->pos.z = D_80174A50.unk_5A0[i][2];
        actor->unk_90 = D_80174A50.unk_5A0[i][3];
    }
}


s32 func_80044E80(Actor* arg0, s32 arg1) {
    return (arg0->userVariables[arg1] + 5) / 6;
}

//pob spin on one arm
//D_801749D8 array of 30 s32s, 15 for each (see also armsMaybe)
void func_80044EA4(Actor* arg0, f32 arg1) {
    Actor* pivot = gActors + D_801749D8[arg0->unk_120][0];
    Actor* seg;
    s32 i;

    for (i = 0; i < 15; i++) {
        seg = gActors + D_801749D8[arg0->unk_120][i];
        seg->unk_90 += arg1;
        WrapDegrees(&seg->unk_90);
        RotatePointAroundPivot(&seg->pos.x, &seg->pos.z, pivot->pos.x, pivot->pos.z, arg1);
    }
    RotatePointAroundPivot(&arg0->pos.x, &arg0->pos.z, pivot->pos.x, pivot->pos.z, arg1);
    seg = gActors + D_801749D8[1 - arg0->unk_120][0];
    seg->unk_90 += arg1;
    WrapDegrees(&seg->unk_90);
    RotatePointAroundPivot(&seg->pos.x, &seg->pos.z, pivot->pos.x, pivot->pos.z, arg1);
}


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
        } else {
            armSpit->unk_F0 -= 1;
            if (armSpit->unk_F0  == 0) {
                armSpit->userVariables[0] = 0;
            }
        }
    } else {
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
        TriggerRoomClearReaction(projectile);
        return;
    }
    if (projectile->pos.y > 50.0f) {
        projectile->pos.y -= 10.0f;
    }
}

void ActorInit_SpiderSpawner(Actor* spiderSpawner) {

}

void ActorTick_SpiderSpawner(Actor* spiderSpawner) {
    s32 actorCount = gActorCount;
    s32 maxSpiders = spiderSpawner->unk_124;

    if ((actorCount < maxSpiders) &&
        (((actorCount < ((maxSpiders * 3) / 4)) && (spiderSpawner->unk_130 < ++spiderSpawner->userVariables[0])) ||
         ((spiderSpawner->unk_130 * 2) < ++spiderSpawner->userVariables[0]))) {
        spiderSpawner->userVariables[0] = 0;
        if (Actor_Init(SPIDER, spiderSpawner->pos.x, spiderSpawner->pos.y + 20.0f, spiderSpawner->pos.z,
                (((spiderSpawner->userVariables[1] % 3) - 1) * 60.0f) + spiderSpawner->unk_90,
                spiderSpawner->unk_F4, spiderSpawner->unk_F8, spiderSpawner->unk_FC,
                spiderSpawner->unk_100, spiderSpawner->unk_104, spiderSpawner->unk_108,
                spiderSpawner->position._f32.x, spiderSpawner->position._f32.y, spiderSpawner->unk_15C,
                spiderSpawner->unk_160, 0.0f, 0.0f, 0.0f, 0.0f, 0,
                spiderSpawner->unk_128, spiderSpawner->unk_12C, 0) != -1) {
            spiderSpawner->userVariables[1]++;
        }
    }
    func_800382F4(spiderSpawner);
}

void ActorInit_Spider(Actor* spider) {
    spider->unk_98 = 1;
    spider->vel.y = spider->unk_160;
    spider->unk_94 = spider->position._f32.x;
    func_800382F4(spider);    // Sometimes calls with a arg0, sometimes calls empty?
}

void ActorTick_Spider(Actor* spider) {
    f32 angle;
    s32 framesLeft;

    if (spider->userVariables[2] == 0) {
        if (spider->unk_98 != 0) {
            spider->vel.y -= 3.2f;
            spider->pos.y += spider->vel.y;
        } else {
            spider->unk_A0.unk_04 = 2;
            spider->userVariables[2] = 1;
            spider->vel.y = 0.0f;
            spider->userVariables[1] = spider->unk_128 / 2;
        }
    } else {
        angle = CalcAngleBetween2DPoints(spider->pos.x, spider->pos.z,
            gCurrentActivePlayerPointer->pos.x, gCurrentActivePlayerPointer->pos.z);
        if (spider->userVariables[0] == 0) {
            spider->unk_94 = spider->position._f32.x;
            RotateAngleTowards(&spider->unk_90, angle, spider->position._f32.y);
            framesLeft = spider->userVariables[1];
            if (framesLeft == 0) {
                spider->userVariables[0] = 1;
                spider->userVariables[1] = Random(1, spider->unk_12C);
            } else {
                spider->userVariables[1] = framesLeft - 1;
            }
            Actor_PlaySound(spider, SFX_43_unkSnd, 4, 4);
        } else {
            angle += Random(-0x1E, 0x1E);
            WrapDegrees(&angle);
            spider->unk_94 = 0.0f;
            RotateAngleTowards(&spider->unk_90, angle, spider->unk_15C);
            framesLeft = spider->userVariables[1];
            if (framesLeft == 0) {
                spider->userVariables[0] = 0;
                spider->userVariables[1] = Random(1, spider->unk_128);
            } else {
                spider->userVariables[1] = framesLeft - 1;
            }
        }
        func_800382F4(spider);
    }
    spider->unk_F0++;
}

void ActorInit_SpiderTrio(Actor* spiderTrio) {
    spiderTrio->unk_134[0] = spiderTrio->pos.x;
    spiderTrio->unk_134[1] = spiderTrio->pos.z;
    spiderTrio->unk_90 = CalcAngleBetween2DPoints(spiderTrio->pos.x, spiderTrio->pos.z, spiderTrio->position._f32.x, spiderTrio->position._f32.y);
    spiderTrio->unk_94 = spiderTrio->unk_15C;
}

void ActorTick_SpiderTrio(Actor* spiderTrio) {
    f32 turnRate = 1.0f;

    switch (spiderTrio->userVariables[0]) {
    case 0:
        if (spiderTrio->userVariables[2] == 0) {
            if (IsAngleWithin90Degrees(spiderTrio->unk_90, CalcAngleBetween2DPoints(spiderTrio->pos.x, spiderTrio->pos.z, spiderTrio->position._f32.x, spiderTrio->position._f32.y)) < 0) {
                spiderTrio->userVariables[0] = 1;
                spiderTrio->userVariables[2] = 1;
                spiderTrio->unk_94 = 0.0f;
            }
        } else {
            if (IsAngleWithin90Degrees(spiderTrio->unk_90, CalcAngleBetween2DPoints(spiderTrio->pos.x, spiderTrio->pos.z, spiderTrio->unk_134[0], spiderTrio->unk_134[1])) < 0) {
                spiderTrio->userVariables[0] = 1;
                spiderTrio->userVariables[2] = 0;
                spiderTrio->unk_94 = 0.0f;
            }
        }
        break;
    case 1:
        spiderTrio->unk_90 += turnRate * spiderTrio->unk_160;
        WrapDegrees(&spiderTrio->unk_90);
        spiderTrio->userVariables[1] += 1;
        if ((180.0f / spiderTrio->unk_160) == spiderTrio->userVariables[1]) {
            spiderTrio->userVariables[0] = 0;
            spiderTrio->userVariables[1] = 0;
            spiderTrio->unk_94 = spiderTrio->unk_15C;
        }
        break;
    }
    func_800382F4(spiderTrio);
}


// GOLEM Room SPIDER Spawner
void ActorInit_GolemSpiderSpawner(Actor* golemRoomSpiderSpawner) {

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

void ActorTick_Golem(Actor* golem) {
    f32 dx;
    f32 dz;

    dx = (golem->unk_160 + gCurrentActivePlayerPointer->pos.x) - golem->pos.x; dz = gCurrentActivePlayerPointer->pos.z - golem->pos.z;
    switch ((u32) golem->userVariables[0]) {
    case 0:
        if (((dx * dx) + (dz * dz)) < golem->position._f32.x) {
            StageFlags[golem->unk_124] = 1;
        }
        if (StageFlags[golem->unk_124] != 0) {
            golem->userVariables[0] = 1;
            PlaySoundEffect(SFX_46_unkSnd, &golem->pos.x, &golem->pos.y, &golem->pos.z, 0, 0);
        }
        break;
    case 1:
        if (++golem->unk_F0 >= 0x14U) {
            golem->userVariables[0] = 2;
            golem->unk_F0 = 0;
            golem->unk_EC = 1;
        }
        break;
    case 2:
        if ((golem->unk_128 == 0) || ((golem->globalTimer & 0xF) != 7)) {
            golem->unk_F0++;
            golem->unk_F0 = golem->unk_F0 % 55U;
        }
        if ((golem->unk_F0 >= 0x18U) && (golem->unk_F0 < 0x2DU)) {
            golem->unk_94 = golem->position._f32.y;
            RotateAngleTowards(&golem->unk_90, ArcTan2Deg(dx, -dz), golem->unk_15C);
        } else {
            golem->unk_94 = 0.0f;
        }
        if (golem->unk_F0 == 0x18) {
            PlaySoundEffect(SFX_44_unkSnd, &golem->pos.x, &golem->pos.y, &golem->pos.z, 0, 0);
        } else if (golem->unk_F0 == 0x2A) {
            PlaySoundEffect(SFX_45_unkSnd, &golem->pos.x, &golem->pos.y, &golem->pos.z, 0, 0);
        }
        break;
    }
    func_800382F4(golem);
}

void ActorInit_Hedgehog(Actor* hedgehog) {
    hedgehog->unk_134[0] = (f32) hedgehog->pos.x;
    hedgehog->unk_134[1] = (f32) hedgehog->pos.z;
    hedgehog->unk_134[2] = (f32) hedgehog->unk_90;
}

#ifdef NON_MATCHING
// diff score: 2 words (fp coalesce at -(dz+playerZ) add)
void ActorTick_Hedgehog(Actor *hedgehog)
{
  f32 dx;
  f32 dzTemp;
  f32 dz;
  f32 playerX;
  f32 playerZ;
  playerX = gCurrentActivePlayerPointer->pos.x;
  if ((((hedgehog->unk_F4 < playerX) && (playerX < hedgehog->unk_F8)) && (hedgehog->unk_104 < (playerZ = gCurrentActivePlayerPointer->pos.z))) && (playerZ < hedgehog->unk_108))
  {
    dx = playerX - hedgehog->pos.x;
    dzTemp = playerZ - hedgehog->pos.z;
    dz = dzTemp;
    if (((dx * dx) + (dz * dz)) < hedgehog->unk_15C)
    {
      hedgehog->userVariables[0] = 1;
    }
    if (hedgehog->userVariables[0] != 0)
    {
      hedgehog->unk_94 = hedgehog->position._f32.x;
      dx += Random((s32) (-hedgehog->unk_160), (s32) hedgehog->unk_160);
      playerZ = Random((s32) (-hedgehog->unk_160), (s32) hedgehog->unk_160);
      RotateAngleTowards(&hedgehog->unk_90, ArcTan2Deg(dx, -(dz + playerZ)), hedgehog->position._f32.y);
    }
    else
    {
      hedgehog->unk_94 = hedgehog->position._f32.x;
      RotateAngleTowards(&hedgehog->unk_90, hedgehog->unk_134[2], hedgehog->position._f32.y);
    }
  }
  else
  {
    dx = hedgehog->unk_134[0] - hedgehog->pos.x;
    dz = hedgehog->unk_134[1] - hedgehog->pos.z;
    if (((dx * dx) + (dz * dz)) > 2500.0f)
    {
      RotateAngleTowards(&hedgehog->unk_90, ArcTan2Deg(dx, -dz), hedgehog->position._f32.y);
      hedgehog->userVariables[0] = 0;
    }
    else
    {
      hedgehog->unk_94 = 0.0f;
      RotateAngleTowards(&hedgehog->unk_90, hedgehog->unk_134[2], hedgehog->position._f32.y);
    }
  }
  Actor_PlaySound(hedgehog, 0x41, 4, 4);
  hedgehog->unk_F0++;
  func_800382F4(hedgehog);
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_Hedgehog.s")
#endif

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

#ifdef NON_MATCHING
void func_800480EC(Actor *butterfly)
{
  unk80170E68 *rec;
  unk80170E68 *fill;
  s32 slotIndex;
  s32 i;
  s32 *new_var2;
  s32 spawned[4];
  s32 *p;
  s32 result;
  s32 next;
  unk80170E68 *new_var;
  butterfly->userVariables[1] = butterfly->unk_124 / 5;
  butterfly->userVariables[2] = (butterfly->unk_124 * 2) / 3;
  if (butterfly->unk_128 == (-1))
  {
    rec = D_80170E68;
    slotIndex = 0;
    do
    {
      if (rec->unk_00 == 0)
      {
        rec->unk_00 = 1;
        rec->unk_04 = 0;
        butterfly->unk_128 = slotIndex;
        break;
      }
      slotIndex++;
      rec++;
    }
    while (slotIndex != 4);
    if (slotIndex == 4)
    {
      butterfly->actorID = 0;
      return;
    }
    new_var = &D_80170E68[slotIndex];
    fill = new_var;
    for (i = 0; i < 128; i++)
    {
      fill->unk_08[i] = butterfly->pos.x;
      fill->unk_208[i] = butterfly->pos.y;
      fill->unk_408[i] = butterfly->pos.z;
      fill->unk_608[i] = butterfly->unk_90;
    }

    i = (butterfly->userVariables[3] = 0);
    p = spawned;
    do
    {
      next = i - -1;
      result = func_80047FC0(butterfly, next);
      *p = result;
      if (result == (-1))
      {
        rec->unk_00 = 0;
        new_var2 = spawned;
        butterfly->actorID = 0;
        for (; new_var2 < p; p++)
        {
          gActors[spawned[0]].actorID = 0;
        }

        return;
      }
      i = next;
      p++;
    }
    while (next != 4);
  }
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800480EC.s")
#endif

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80048284.s")

void ActorTick_LizardKongButterfly(Actor* butterfly) {
    s32 uv3 = butterfly->userVariables[3];
    unk80170E68* rec;
    s32 idx;

    if ((uv3 == 0) || (uv3 == -1)) {
        func_80048284(butterfly);
    } else {
        rec = &D_80170E68[butterfly->unk_128];
        idx = ((uv3 * 16) + rec->unk_04 + 128) % 128;
        butterfly->vel.x = rec->unk_08[idx] - butterfly->pos.x;
        butterfly->vel.y = rec->unk_208[idx] - butterfly->pos.y;
        butterfly->vel.z = rec->unk_408[idx] - butterfly->pos.z;
        butterfly->unk_90 = rec->unk_608[idx];
    }
    PlaySoundEffect(SFX_42_unkSnd, &butterfly->pos.x, &butterfly->pos.y, &butterfly->pos.z, 1, 0);
    butterfly->unk_F0++;
}


void ActorInit_LizardKongButterflySpawner(Actor* lizardKongButterflySpawner) {

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

void ActorInit_PopcornBucketSpawner(Actor* popcornBucketSpawner) {

}

void ActorTick_PopcornBucketSpawner(Actor *popcornBucketSpawner) {
    Actor *actor;
    int unusedCheck;
    Actor *start;
    Actor *end;

    /* statement grouping on this line is load-bearing for codegen */
    start = gActors; actor = start; do { end = (Actor *) Poles;
        if (actor->actorID == ACTOR_NULL) {
            break;
        }
        actor++;
    } while (actor != end);
    unusedCheck = !popcornBucketSpawner;
    if (actor != ((Actor *) Poles)) {
        if (gActorCount < popcornBucketSpawner->unk_130) {
            if ((!popcornBucketSpawner) && (unusedCheck & 0xFFFFu)) {}
            actor = start;
            do {
                start = end;
                if (actor->actorID == POPCORN_BUCKET) {
                    return;
                }
                actor++;
                if (actor && actor) {}
            } while (actor != start);
            actor = popcornBucketSpawner;
            Actor_Init(POPCORN_BUCKET, popcornBucketSpawner->pos.x, popcornBucketSpawner->pos.y, popcornBucketSpawner->pos.z, popcornBucketSpawner->unk_90, actor->unk_F4, actor->unk_F8, actor->unk_FC, actor->unk_100, actor->unk_104, popcornBucketSpawner->unk_108, popcornBucketSpawner->position._f32.x, actor->position._f32.y, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, actor->unk_124, popcornBucketSpawner->unk_128, actor->unk_12C, 0); } }
}


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

void ActorInit_ChocoKidSpawner(Actor* chocoKidSpawner) {

}

void ActorTick_ChocoKidSpawner(Actor* chocoKidSpawner) {
    s32 spawnerTag = chocoKidSpawner->unk_124;
    Actor* actor = gActors; do {
        if (actor->actorID == SPAWNED_CHOCO_KID) {
            if (spawnerTag == actor->unk_124) {
                return;
            }
        }
        actor++;
    } while (actor != (Actor*) Poles);

    if (chocoKidSpawner) {}

    Actor_Init(SPAWNED_CHOCO_KID, chocoKidSpawner->pos.x, chocoKidSpawner->pos.y, chocoKidSpawner->pos.z,
        chocoKidSpawner->unk_90, chocoKidSpawner->unk_F4, chocoKidSpawner->unk_F8, chocoKidSpawner->unk_FC,
        chocoKidSpawner->unk_100, chocoKidSpawner->unk_104, chocoKidSpawner->unk_108,
        chocoKidSpawner->position._f32.x, chocoKidSpawner->position._f32.y, chocoKidSpawner->unk_15C,
        0.0f, 0.0f, 0.0f, 0.0f, 0.0f, spawnerTag, 0, 0, 0);
}

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

void ActorInit_BattleModeSandCrabSpawner(Actor* bmSCS) {

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

void ActorInit_BattleModeFireSpawner(Actor* bmFireSpawner) {

}

#ifdef NON_MATCHING
// diff score: 5 words: 3 spill-slot offset constants (uopt reserved-slot ordering, not source-reachable) + 2-word lui/addiu schedule pair
void ActorTick_BattleModeFireSpawner(Actor *fireSpawner)
{
  s32 i = 0;
  Actor *actor;
  f32 deg;
  f32 rad;
  f32 cosResult;
  f32 sinResult;
  s32 slotUsed[62];
  for (; i < fireSpawner->unk_124; i++)
  {
    if (1)
    {
      slotUsed[i] = 0;
    }
  }

  actor = gActors;
  i = ((deg * 2.0f) * 3.141592653589793) / 360.0;
  do
  {
    if (actor->actorID == 0x56)
    {
      slotUsed[actor->unk_124] = 1;
      rad = i;
    }
 do { } while (0);
    actor++;
  }
  while (((u32) actor) < ((u32) Poles));
  for (i = 0; i < fireSpawner->unk_124; i++)
  {
    if (slotUsed[i] == 0)
    {
      deg = i;
      deg = (360.0f * deg) / fireSpawner->unk_124;
      rad = ((deg * 2) * 3.141592653589793) / 360.0;
      cosResult = __cosf(rad);
      sinResult = __sinf(rad);
      Actor_Init(0x56, (fireSpawner->position._f32.x * cosResult) + fireSpawner->pos.x, fireSpawner->pos.y, fireSpawner->pos.z - (fireSpawner->position._f32.x * sinResult), deg + 180.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, i, 0, 0, 0);
    }
  }

}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_BattleModeFireSpawner.s")
#endif


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

void ActorTick_BattleModeSaucerSpawner(Actor *bmSaucerSpawner) {
    s32 i;
    s32 idx;
    int new_var;
    if (D_80174758[bmSaucerSpawner->unk_128 - 1] != (-1)) {
        return;
    }
    bmSaucerSpawner->userVariables[0] += 1;
    if (bmSaucerSpawner->unk_124 != bmSaucerSpawner->userVariables[0]) {
        return;
    }
    for (i = bmSaucerSpawner->unk_128 - 1; i > 0; i--) {
        new_var = i - 1;
        if (D_80174758[new_var] != (-1)) {
            gActors[D_80174758[i - 1]].userVariables[0] = i;
            D_80174758[i] = D_80174758[i - 1];
            D_80174758[i - 1] = -1;
            if (1) { }
        }
    }

    D_80174758[0] = Actor_Init(BATTLE_MODE_SAUCER, bmSaucerSpawner->pos.x, bmSaucerSpawner->pos.y - bmSaucerSpawner->position._f32.x, bmSaucerSpawner->pos.z, 0.0f, bmSaucerSpawner->unk_F4, bmSaucerSpawner->unk_F8, -10000.0f, 10000.0, bmSaucerSpawner->unk_104, bmSaucerSpawner->unk_108, bmSaucerSpawner->position._f32.x, bmSaucerSpawner->position._f32.y, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0);
    bmSaucerSpawner->userVariables[0] = 0;
}


void ActorInit_BattleModeSaucer(Actor* battleModeSaucer) {
    battleModeSaucer->unk_134[0] = battleModeSaucer->pos.y;
}

// score 30
#ifdef NON_MATCHING
void ActorTick_BattleModeSaucer(Actor* battleModeSaucer) {
    f32 targetY = (battleModeSaucer->position._f32.x * battleModeSaucer->userVariables[0]) + battleModeSaucer->unk_134[0];

    if (battleModeSaucer->pos.y < targetY) {
        battleModeSaucer->pos.y += battleModeSaucer->position._f32.y;
        if (targetY < battleModeSaucer->pos.y) {
            battleModeSaucer->pos.y = targetY;
        }
    } else if (targetY < battleModeSaucer->pos.y) {
        battleModeSaucer->pos.y -= battleModeSaucer->position._f32.y;
        if (battleModeSaucer->pos.y < targetY) {
            battleModeSaucer->pos.y = targetY;
        }
    }

    if (D_80174758[battleModeSaucer->userVariables[0] - 1] == -1) {
        D_80174758[battleModeSaucer->userVariables[0]] = -1;
        battleModeSaucer->userVariables[0] -= 1;
        D_80174758[battleModeSaucer->userVariables[0]] = battleModeSaucer->actorIndex;
    }
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_BattleModeSaucer.s")
#endif

void ActorInit_Unk59(Actor* unk_59) {

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

void ActorInit_PowerUpSpawner(Actor* powerUpSpawner) {

}

void ActorTick_PowerUpSpawner(Actor* powerUpSpawner) {
    s32 weightA;
    s32 weightB;
    s32 weightC;
    s32 randVal;
    s32 spawnID;

    if ((powerUpSpawner->globalTimer % (u32) (s32) powerUpSpawner->unk_168) == 1) {
        randVal = Random(0, 0xC350);
        weightA = powerUpSpawner->position._f32.x;
        weightB = powerUpSpawner->position._f32.y;
        weightC = powerUpSpawner->unk_15C;
        spawnID = randVal % ((s32) powerUpSpawner->unk_160 + weightA + weightB + weightC);
        if (spawnID < weightA) {
            spawnID = BIG_FEET_POWER_UP;
        } else if (spawnID < (weightB + weightA)) {
            spawnID = BIG_HEAD_POWER_UP;
        } else if (spawnID < (weightC + weightA + weightB)) {
            spawnID = SHRINK_POWER_UP;
        } else {
            randVal = powerUpSpawner->unk_124;
            if (!randVal) {}
            spawnID = SHRINK_ENEMY_POWER_UP;
        }
        randVal = powerUpSpawner->unk_124; Actor_Init(spawnID, powerUpSpawner->pos.x, powerUpSpawner->pos.y, powerUpSpawner->pos.z, 0.0f,
            -10000.0f, 10000.0f, -10000.0f, 10000.0f, -10000.0f, 10000.0f, powerUpSpawner->unk_164,
            0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, (s32) powerUpSpawner->unk_16C,
            randVal, 0, 0);
    }
}

void ActorInit_FallingGreyAntSpawner(Actor* fallingGreyAntSpawner) {

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

void ActorInit_UnkFireSpawner(Actor* unkFireSpawner) {

}

void ActorTick_UnkFireSpawner(Actor* unkFireSpawner) {
    Actor* actor;

    if (StageFlags[unkFireSpawner->unk_130] != 0) {
        actor = gActors;
        do {
            if (actor->actorID == FIRE) {
                return;
            }
            actor++;
        } while (actor != (Actor*) Poles);

        if (Actor_Init(FIRE, unkFireSpawner->pos.x, unkFireSpawner->pos.y, unkFireSpawner->pos.z,
                0.0f, unkFireSpawner->unk_F4, unkFireSpawner->unk_F8, unkFireSpawner->unk_FC,
                unkFireSpawner->unk_100, unkFireSpawner->unk_104, unkFireSpawner->unk_108,
                unkFireSpawner->position._f32.x, unkFireSpawner->position._f32.y, unkFireSpawner->unk_15C,
                unkFireSpawner->unk_160, 0.0f, 0.0f, 0.0f, 0.0f, 0,
                unkFireSpawner->unk_128, unkFireSpawner->unk_12C, 0) != -1) {
            Actor_PlaySound(unkFireSpawner, SFX_AB_unkSnd, 1, 1);
        }
    }
}


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
            TriggerRoomClearReaction(powerup);
        }
    } else {
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
    gCurrentActivePlayerPointer = gPlayerActors;
    gTongueOnePointer = gTongues;

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

// score 18
#ifdef NON_MATCHING
void func_8004BC48(ContMain* arg0) {
    s32 val;
    s32 phase;
    f32 angle;
    s32 mode;

    val = D_801749D0;
    mode = 0;
    if ((val > 0) && (val < 6)) {
        mode = 1;
        phase = val - 1;
    } else if ((val >= 0x14) && (val < 0x29)) {
        mode = 2;
        phase = val - 0x14;
    }

    switch (mode) {
    case 0:
        return;
    case 1:
        angle = 0.0f;
        break;
    case 2:
        angle = (phase * 15) + 90;
        break;
    }
    arg0->stickX = cosf(DEGREES_TO_RADIANS_2PI(angle)) * 10.0f;
    arg0->stickY = -sinf(DEGREES_TO_RADIANS_2PI(angle)) * 10.0f;
    arg0->buttons0 |= 0x4000;
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004BC48.s")
#endif


void func_8004BD7C(void) {
    s32 i;

    for (i = 0; i < 4; i++) {
        D_80175598[i] = 0;
        Controller_Zero(&D_801755A8[i]);
        D_801755E8[i] = 0;
        D_80175608[i] = ((4 - D_801003DC[0]) * 0x23) / 4;
        D_801755F8[i] = D_80175608[i] + (Random(0, 99999) % 20);
    }
}

// Count actor collisions overlapping tongue within a height bound
s32 CountActorsAtTongueHeight(PlayerActor *player) {
    Actor *cur;
    Actor *actor;
    s32 count = 0;
    s32 i;
    f32 y;
    /* statement grouping on this line is load-bearing for codegen */
    cur = actor; actor = gActors; do { cur = actor;
        if (cur->unk_A0.unk_00 == 1) {
            if (cur->actorID != ACTOR_NULL) {
                if (cur->actorID < R_HEART) {
                    if ((cur->actorState == 0) || (cur->actorState == 3)) {
                        y = (player->pos.y + player->tongueYOffset) - 5.0f;
                        for (i = 0; i < cur->tongueCollision; i++) {
                            if (!(((cur->pos.y + cur->unknownPositionThings[i].unk_10) + cur->unknownPositionThings[i].unk_04) < y)) {
                                if (!((y + 10.0f) < (cur->unknownPositionThings[i].unk_04 + cur->pos.y))) {
                                    count++;
                                }
                            }
                        }
                    }
                }
            }
        }
        actor++;
    }
    while (actor != ((Actor *) Poles));
    return count;
}


s32 GetTongueTargetDistSq(Actor* actor, s32 arg1, f32 x, f32 z) {
    PlayerActor* player = (PlayerActor*) arg1;
    f32 tongueY;
    s32 i;
    s32 dx;
    s32 dz;

    if (actor->unk_A0.unk_00 == 1) {
        if ((actor->actorID != ACTOR_NULL) && (actor->actorID < R_HEART) &&
            ((actor->actorState == 0) || (actor->actorState == 3))) {
            tongueY = (player->pos.y + player->tongueYOffset) - 5.0f;
            for (i = 0; i < actor->tongueCollision; i++) {
                if ((((actor->pos.y + actor->unknownPositionThings[i].unk_10) + actor->unknownPositionThings[i].unk_04) < tongueY) ||
                    ((tongueY + 10.0f) < (actor->unknownPositionThings[i].unk_04 + actor->pos.y))) {
                    continue;
                }
                dx = x - actor->pos.x;
                dz = z - actor->pos.z;
                if ((gCurrentZone == 2) && (actor->actorState == 3)) {
                    if (((player->pos.x * player->pos.x) + ((player->pos.z * player->pos.z) / 2)) <
                        ((actor->pos.x * actor->pos.x) + (actor->pos.z * actor->pos.z))) {
                        return -1;
                    }
                }
                return (dx * dx) + (dz * dz);
            }
        }
    }
    return -1;
}

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
        temp_v0 = GetTongueTargetDistSq(actorArray, arg0, arg1, arg2);
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

#ifdef NON_MATCHING
s32 func_8004C1C8(PlayerActor *player)
{
  s32 closest;
  s32 skip;
  s32 i;
  f32 bestDist;
  f32 x;
  f32 z;
  s32 new_var;
  f32 dx;
  f32 dz;
  skip = player->playerID;
  closest = -1;
  bestDist = 1e10f;
  for (i = 0; i < 4; i++)
  {
    if (i != skip)
    {
      if (gPlayerActors[i].exists != 0)
      {
        new_var = gCurrentZone;
        if ((((new_var != 4) && (new_var != 5)) && (new_var != 6)) && (new_var != 7))
        {
          x = player->pos.x;
          z = player->pos.z;
        }
        else
        {
          z = (x = 0.0f);
        }
        dx = x - gPlayerActors[i].pos.x;
        dz = z - gPlayerActors[i].pos.z;
        if (((dx * dx) + (dz * dz)) < bestDist)
        {
          closest = i;
          bestDist = (dx * dx) + (dz * dz);
        }
      }
    }
  }

  return closest;
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004C1C8.s")
#endif

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

s32 SnapToBattleArenaWall(f32* outX, f32* outZ, f32 x, f32 z) {
    if (((x >= 1500.0f) && (x <= 1560.0f)) || ((x <= -1500.0f) && (x >= -1560.0f))) {
        if ((z >= -1060.0f) && (z <= 1060.0f)) {
            *outZ = -1.0f;
            *outX = -1.0f;
            return 0;
        }
        *outX = x;
        if (*outZ > 1060.0f) {
            *outZ = 1060.0f;
        } else {
            *outZ = -1060.0f;
        }
        return 0;
    }
    if (((z >= 1000.0f) && (z <= 1060.0f)) || ((z <= -1000.0f) && (z >= -1060.0f))) {
        if ((x >= -1560.0f) && (x <= 1560.0f)) {
            *outZ = -1.0f;
            *outX = -1.0f;
            return 0;
        }
        *outZ = z;
        if (*outX > 1560.0f) {
            *outX = 1560.0f;
        } else {
            *outX = -1560.0f;
        }
        return 0;
    }
    return -1;
}

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
s32 func_8004CCBC(PlayerActor* player) {
    switch (gCurrentZone) {
    case 1:
    case 2:
    case 5:
        return 0;
    case 3:
        return 1;
    case 4:
    case 6:
    case 7:
        if (player->pos.y < 0.0f) {
            if (SUM_OF_SQUARES(player->vel.x, player->vel.z) <
                    (((4225.0f * player->forwardImpulse) * player->forwardImpulse) / 6.0f)) {
                if (D_801755E8[player->playerID] >= 0x10) {
                    return 1;
                }
            }
            return 0;
        }
        return 1;
    }
    return 1;
}


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