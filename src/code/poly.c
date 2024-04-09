#include "common.h"

/* rodata */
extern char D_801103D0[];

extern f64 D_801104F8;
extern s32 D_80236974;
extern Collider D_80236980[128];
extern s32 D_8020D8F4;
extern f64 D_801106A0;
extern f64 D_801106A8;

extern Vec3f D_80108F9C;
extern Vec3f D_80108FA8;
extern Vec3f D_80108FB4;
extern Vec3f D_80108FC0;
extern f32 D_80108FCC;
extern s32 D_80108FD0;
extern s32 D_80108FD4;
extern f32 D_80108FD8;
extern f32 D_80108FDC;
extern s32 D_80108FE0;
extern f32 D_80108FE4;
extern s32 D_80108FE8;
extern s32 D_80108FEC;
extern Vec3f D_802489C8[8];

/* Migrated BSS */
//TODO: type this data correctly
char gShadows[0xC00];
s32 gShadowCount;
Vec3f D_80248518;
char D_80248528[0x18];
char D_80248540[0x368];
s32 D_802488A8;
char D_802488B0[0x10];
char gHasShadow[0x100];
char D_802489C0[0x08];
Vec3f D_802489C8[8];
char D_80248A28[0x08];

void func_800D3854(PlayerActor*, Tongue*, Camera*, Vec3f*, Vec3f*, s32);
void func_800D5394(PlayerActor*, Tongue*, Camera*, Vec3f*, Vec3f*, s32);
void func_800D6864(PlayerActor*, Tongue*, Camera*, Vec3f*, Vec3f*);
void func_800D69D0(s32, PlayerActor*, Tongue*, Camera*, Vec3f*, Vec3f*, s32);
Collider* func_800CAF88(Vec3f, f32, f32);
Collider* SearchPolygonBetween(Vec3f, Vec3f, s32, s32, s32);
void OrderRectBounds(Rect3D*);
void func_800C9748(Rect3D*, s32, s32);
void func_800CA734(Vec3f*, Vec3f, f32, s32);
void func_800CBC08(Actor*);
void func_800CC814(Actor*, Vec3f, s32);

void ClearPolygon(void) {
    D_80236968 = 0;
}

const char D_80110180[] = "\n";

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C8F0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C9504.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C9600.s")

void func_800C9704(void) {
    D_8023696C = 0;
    func_800C9504();
}

void func_800C9728(void) {
    func_800C9504();
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C9748.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C982C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C9928.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C9A24.s")

// Checks if Poly's bounding box intersects with the given rectangle
s32 IfPolyBoundIntersectsRect(Poly* poly, Rect3D* rect) {
    if (poly->unk_00 < 0) {
        return 0;
    }

    func_800D79E4(poly, 1);

    if (IfRectsIntersect(rect, &poly->boundBox) == 0) {
        return 0;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C9B7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/DistanceWithLine.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/MinimunDistance.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/ListUpTouchedPolygon.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CA3FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CA4BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CA5B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CA734.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/SearchPolygonBetween.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CAE08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CAF88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CB294.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/Shadows_Reset.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/Shadows_Set.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CB99C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CBB2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CBB98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CBC08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CBD24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CBE74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CBF54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/Shadows_Draw_AntQueen.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/Shadows_Draw.s")

/**
 * @brief Calculates the angle of the (x,z) vector from a 3dim vector, with respect to the positive z-axis.
 * 
 * @param vec: The 3dim vector to calculate the angle of. 
 */
void func_800CC7E0(Vec3f vec) {
    // In this instance the z component is flipped.
    CalculateAngleOfVector(vec.x, -vec.z);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CC814.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/CalcThrownEnemyNext.s")

void func_800CCDCC(Actor* arg0) {
    Vec3f sp24;

    sp24.x = arg0->unknownPositionThings[0].unk_00 + arg0->pos.x;
    sp24.y = arg0->pos.y;
    sp24.z = arg0->unknownPositionThings[0].unk_08 + arg0->pos.z;
    arg0->unk_98 = 0;
    arg0->unk_9C = 0;
    func_800CC814(arg0, sp24, 1);
    func_800CBC08(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CCE4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/CalcWalkingEnemyNext.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/CalcJumpingEnemyNext.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CEB10.s")

void CalcEnemyNextPosition(Actor* arg0) {
   switch (arg0->unk_A0.unk_04) {
   case 0:
       func_800CCDCC(arg0);
       break;
   case 1:
       func_800CCE4C(arg0);
       break;
   case 2:
       CalcWalkingEnemyNext(arg0);
       break;
   case 3:
       CalcJumpingEnemyNext(arg0);
       break;
   case 4:
       func_800CEB10(arg0);
       break;
   default:
       DummiedPrintf3("CalcEnemyNextPosition(): Unknown ATR_IDOU_XXXX\n");
       // double 810000
       break;
   }
   if (arg0->tongueCollision >= 2) {
       func_800CBD24(arg0);
   }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CF080.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CF3B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CF654.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CF808.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CFB6C.s")

void func_800CFDB8(PlayerActor* arg0) {
    arg0->vaulting = 0;
    arg0->surface = -1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CFDC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CFE14.s")

void func_800CFF64(PlayerActor* player) {
    player->surfaceSlide = 0;
    player->move.z = 0.0f;
    player->move.y = 0.0f;
    player->move.x = 0.0f;
}

void func_800CFF7C(Vec3f* arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f14;
    Rect3D* temp_v0;

    if (D_80236974 != 1) {
        if ((gCurrentStage == 1) && ((gCurrentZone == 7) || (gCurrentZone == 0xF)) && (levelFlags[0] != 0)) {
            temp_f14 = SUM_OF_SQUARES(arg0->x, arg0->z);
            if (810000.0 < temp_f14) {
                temp_f0_2 = sqrtf((f32) (810000.0 / temp_f14));
                arg0->x = arg0->x * temp_f0_2;
                arg0->z = arg0->z * temp_f0_2;
            }
        } else {
            temp_v0 = &gZoneCollisions[gCurrentZone].roomBounds;
            
            if (temp_v0->min.x > arg0->x ) {
                arg0->x = temp_v0->min.x;
            }
            
            if (temp_v0->max.x < arg0->x) {
                arg0->x = temp_v0->max.x;
            }

            if (temp_v0->min.z > arg0->z) {
                arg0->z = temp_v0->min.z;
            }
  
            if (temp_v0->max.z < arg0->z) {
                arg0->z = temp_v0->max.z;
            }
        }
    }
}


Vec3f* func_800D00DC(Vec3f* arg0, Collider* arg1) {
    Vec3f sp24;
    Collider* temp_v1;

    if (arg1->unk80 < 0) {
        Vec3f_Zero(&sp24);
    } else {
        temp_v1 = &D_80236980[arg1->unk80];
        if (((temp_v1->unk_10 == 0x14) || (temp_v1->unk_10 == 0x15) || (temp_v1->unk_10 == 0x16)) && (arg1->unk_11C != 4)) {
            sp24.x = temp_v1->unk_8C;
            sp24.y = temp_v1->unk_90;
            sp24.z = temp_v1->unk_94;
        } else {
            Vec3f_Zero(&sp24);
        }
    }
    *arg0 = sp24;
    return arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D01A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D0448.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D04B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D0694.s")
//referred to in US1.0 as "Poly.c CalcNextPosition"
#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/CalcNextPosition.s")

void func_800D34CC(void) {
    s32 i;

    Vec3f_Zero(&D_80108F9C);
    Vec3f_Zero(&D_80108FA8);
    Vec3f_Zero(&D_80108FB4);
    Vec3f_Zero(&D_80108FC0);
    D_80108FCC = 0.0f;
    D_80108FD0 = 0;
    D_80108FD4 = 0;
    D_80108FD8 = 0.0f;
    D_80108FDC = 0.0f;
    D_80108FE0 = 0;
    D_80108FE4 = 0.0f;
    D_80108FE8 = 0;
    D_80108FEC = 0;
    for (i = 0; i < ARRAY_COUNT(D_802489C8); i++) {
        Vec3f_Zero(&D_802489C8[i]);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D3590.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D363C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D3854.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D3D80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D3FC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D4200.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D44C8.s")

void func_800D4550(s32 arg0, s32 arg1, Poly* arg2, Vec3f* arg3, Vec3f* arg4) {
    Collision* temp_v0 = &gZoneCollisions[gCurrentZone];

    arg3->x = temp_v0->unkA4;
    arg3->y = temp_v0->unkA8 + (temp_v0->unkD0 * arg2->unkVectorStruct.vec1.x);
    arg3->z = temp_v0->unkAC;
    arg4->x = temp_v0->cameraAnchor.x;
    arg4->y = temp_v0->cameraAnchor.y + (temp_v0->unkD0 * arg2->unkVectorStruct.vec1.x);
    arg4->z = temp_v0->cameraAnchor.z;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D45D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D4720.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D4D90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D4F50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D52E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D5394.s")

void func_800D6864(PlayerActor* arg0, Tongue* arg1, Camera* arg2, Vec3f* arg3, Vec3f* arg4) {
    Collision* collider;

    collider = &gZoneCollisions[gCurrentZone];
    arg3->x = arg2->f1.z;
    arg3->y = arg2->f2.x + (collider->unkD0 * arg2->size1._f32);
    arg3->z = arg2->f2.y;
    arg4->x = arg2->f3.x;
    arg4->y = arg2->f3.y + (collider->unkD0 * arg2->size1._f32);
    arg4->z = arg2->f3.z;
}

void ApplyRotationToVector(Vec3f* vecA, Vec3f* vecB, f32 degreesAngle) {
    Vec3f differenceVector;

    // Calculate the difference vector between the two vectors
    differenceVector.x = vecA->x - vecB->x;
    differenceVector.y = vecA->y - vecB->y;
    differenceVector.z = vecA->z - vecB->z;
    
    // Rotate the difference vector by the given angle around the y-axis
    RotateVector3D(&differenceVector, differenceVector, DEGREES_TO_RADIANS_PI(degreesAngle), 2);
    
    // Add the rotated difference vector to the second vector to get the first vector
    vecA->x = vecB->x + differenceVector.x;
    vecA->y = vecB->y + differenceVector.y;
    vecA->z = vecB->z + differenceVector.z;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D69D0.s")

void SetCameraParameters(void) {
    Collision* temp = &gZoneCollisions[gCurrentZone];
    Camera* cam;
    s32 pad;
    s32 i;
    Vec3f sp3C;
    Vec3f sp30;

    if ((gCurrentStage == STAGE_GHOST) && (gCurrentZone == 0xE)) { //billiard room?
        func_800D6864(gPlayerActors, gTongues, gCamera, &sp3C, &sp30);
    } else if ((D_80236974 == 1) && (D_8020D8F4 == 0)) {
        func_800D3854(gPlayerActors, gTongues, gCamera, &sp3C, &sp30, 0);
    } else if (gCamera[0].unk0 == 1) {
        func_800D69D0(temp->cameraMode, gPlayerActors, gTongues, gCamera, &sp3C, &sp30, 0);
    } else {
        func_800D5394(gPlayerActors, gTongues, gCamera, &sp3C, &sp30, 0);
    }
    
    cam = &gCamera[0];
    
    for (i = 0; i < 4; i++, cam++) {
        cam->f5._f32.x = sp3C.x;
        cam->f5._f32.y = sp3C.y;
        cam->f5._f32.z = sp3C.z;

        cam->f4.x = sp30.x;
        cam->f4.y = sp30.y;
        cam->f4.z = sp30.z;
        if (gCurrentStage != STAGE_VS) {
            break;
        }
    }
}

/* Create a rectangle using two vectors then perform an unknown operation */
void func_800D71E8(f32 x1, f32 x2, f32 y1, f32 y2, f32 z1, f32 z2) {
    Rect3D r;

    // define a rectangle with the given bounds
    r.min.x = x1;
    r.max.x = x2;
    r.min.y = y1;
    r.min.z = z1;
    r.max.y = y2;
    r.max.z = z2;
    
    // ensure max > min
    OrderRectBounds(&r);
    func_800C9748(&r, 0x77, 2); //unknown
}

s32 func_800D7248(f32 x, f32 y, f32 z, f32 arg3, f32 arg4, f32* outX, f32* arg6, f32* arg7) {
    Vec3f vec;
    s32 var_v1;
    Collider* collider;

    vec.x = x;
    vec.y = y;
    vec.z = z;
    
    collider = func_800CAF88(vec, arg3, arg4);
    
    // if a collider was found assign its position to the output variables then return 1 for success
    return (collider != NULL) ?
        *outX = collider->unk_94,
        *arg6 = collider->unk_98,
        *arg7 = collider->unk_9C,
        1 :
        0;
}

s32 func_800D72DC(f32 x1, f32 y1, f32 z1, f32 x2, f32 y2, f32 z2, f32* outX, f32* outY, f32* outZ) {
    Vec3f vecOne;
    Vec3f vecTwo;
    Collider* collider;

    vecOne.x = x1;
    vecOne.y = y1;
    vecOne.z = z1;

    vecTwo.x = x2;
    vecTwo.y = y2;
    vecTwo.z = z2;
    
    collider = SearchPolygonBetween(vecOne, vecTwo, 0x77, 1, 1);
    return (collider != NULL) ?
        *outX = collider->unk_94,
        *outY = collider->unk_98,
        *outZ = collider->unk_9C,
        1 :
        0;
}

void func_800D73BC(f32* x, f32* y, f32* z, f32 arg3) {
    Vec3f destVec;
    Vec3f srcVec;

    srcVec.x = *x;
    srcVec.y = *y;
    srcVec.z = *z;
    
    //wrong number of args(?)
    func_800CA734(&destVec, srcVec, arg3, 0x77);
    
    *x = destVec.x;
    *y = destVec.y;
    *z = destVec.z;
}
