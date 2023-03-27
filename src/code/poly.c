#include "common.h"

extern f64 D_801104F8;
extern s32 D_80236974;
extern Collision D_80240CE0[];
extern Collider D_80236980[128];
extern char D_801103D0[];
extern s32 D_8020D8F4;
extern s32 gCurrentStage;
extern f64 D_801106A0;
extern f64 D_801106A8;

void RotateVector3D(Vec3f*, Vec3f, f32, s32);
void func_800D3854(playerActor*, Tongue*, Camera*, Vec3f*, Vec3f*, s32);
void func_800D5394(playerActor*, Tongue*, Camera*, Vec3f*, Vec3f*, s32);
void func_800D6864(playerActor*, Tongue*, Camera*, Vec3f*, Vec3f*);
void func_800D69D0(s32, playerActor*, Tongue*, Camera*, Vec3f*, Vec3f*, s32);
Collider* func_800CAF88(Vec3f, f32, f32);
Collider* SearchPolygonBetween(Vec3f, Vec3f, s32, s32, s32);
void func_800AE87C(unkStruct10*);
void func_800C9748(unkStruct10*, s32, s32);
void func_800CA734(Vec3f*, Vec3f, f32, s32);
void func_800CBC08(Actor*);
void func_800CC814(Actor*, Vec3f, s32);

void ClearPolygon(void) {
    D_80236968 = 0;
}

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

s32 func_800C9B18(Poly* arg0, Rect* arg1) {
    if (arg0->unk_00 < 0) {
        return 0;
    }

    func_800D79E4(arg0, 1);

    if (func_800AE8E4(arg1, &arg0->unk_2C) == 0) {
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

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CB3A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CB470.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CB99C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CBB2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CBB98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CBC08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CBD24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CBE74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CBF54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CBFB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CC2F4.s")

void func_800CC7E0(Vec3f arg0) {
    CalculateAngleBetweenVectors(arg0.x, -arg0.z);
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

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/CalcEnemyNextPosition.s")
// void CalcEnemyNextPosition(Actor* arg0) {
//     switch (arg0->unk_A0.unk_04) {
//     case 0:
//         func_800CCDCC(arg0);
//         break;
//     case 1:
//         func_800CCE4C(arg0);
//         break;
//     case 2:
//         CalcWalkingEnemyNext(arg0);
//         break;
//     case 3:
//         CalcJumpingEnemyNext(arg0);
//         break;
//     case 4:
//         func_800CEB10(arg0);
//         break;
//     default:
//         DummiedPrintf3(D_801103D0);
//         break;
//     }
//     if (arg0->tongueCollision >= 2) {
//         func_800CBD24(arg0);
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CF080.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CF3B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CF654.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CF808.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CFB6C.s")

void func_800CFDB8(playerActor* player) {
    player->vaulting = 0;
    player->surface = -1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CFDC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CFE14.s")

void func_800CFF64(playerActor* player) {
    player->surfaceSlide = 0;
    player->move.z = 0.0f;
    player->move.y = 0.0f;
    player->move.x = 0.0f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CFF7C.s")
//needs rodata support
// void func_800CFF7C(Vec3f* arg0) {
//     f32 temp_f0;
//     f32 temp_f0_2;
//     f32 temp_f0_3;
//     f32 temp_f0_4;
//     f32 temp_f2;
//     f32 temp_f2_2;
//     f32 temp_f2_3;
//     f32 temp_f14;
//     CollisionSubStruct* temp_v0;

//     if (D_80236974 != 1) {
//         if ((gCurrentStage == 1) && ((currentZone == 7) || (currentZone == 0xF)) && (D_80174880[0] != 0)) {
//             temp_f14 = (SQ(arg0->x) + SQ(arg0->z));
//             if (810000.0 < temp_f14) {
//                 temp_f0_2 = __sqrtf((f32) (810000.0 / temp_f14));
//                 arg0->x = arg0->x * temp_f0_2;
//                 arg0->z = arg0->z * temp_f0_2;
//             }
//         } else {
//             temp_v0 = &D_80240CE0[currentZone].collisionSubStruct;
            
//             if (temp_v0->unk_30 > arg0->x ) {
//                 arg0->x = temp_v0->unk_30;
//             }
            
//             if (temp_v0->unk_3C < arg0->x) {
//                 arg0->x = temp_v0->unk_3C;
//             }

//             if (temp_v0->unk_38 > arg0->z) {
//                 arg0->z = temp_v0->unk_38;
//             }
  
//             if (temp_v0->unk_44 < arg0->z) {
//                 arg0->z = temp_v0->unk_44;
//             }
//         }
//     }
// }

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

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D34CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D3590.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D363C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D3854.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D3D80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D3FC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D4200.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D44C8.s")

void func_800D4550(s32 arg0, s32 arg1, Poly* arg2, Vec3f* arg3, Vec3f* arg4) {
    Collision* temp_v0 = &D_80240CE0[currentZone];

    arg3->x = temp_v0->unkA4;
    arg3->y = temp_v0->unkA8 + (temp_v0->unkD0 * arg2->x);
    arg3->z = temp_v0->unkAC;
    arg4->x = temp_v0->unk98;
    arg4->y = temp_v0->unk9C + (temp_v0->unkD0 * arg2->x);
    arg4->z = temp_v0->unkA0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D45D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D4720.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D4D90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D4F50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D52E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D5394.s")

void func_800D6864(playerActor* arg0, Tongue* arg1, Camera* arg2, Vec3f* arg3, Vec3f* arg4) {
    Collision* collider;

    collider = &D_80240CE0[currentZone];
    arg3->x = arg2->f1.z;
    arg3->y = arg2->f2.x + (collider->unkD0 * arg2->size1);
    arg3->z = arg2->f2.y;
    arg4->x = arg2->f3.x;
    arg4->y = arg2->f3.y + (collider->unkD0 * arg2->size1);
    arg4->z = arg2->f3.z;
}

void ApplyRotationToVector(Vec3f* arg0, Vec3f* arg1, f32 arg2) {
    Vec3f sp2C;

    sp2C.x = arg0->x - arg1->x;
    sp2C.y = arg0->y - arg1->y;
    sp2C.z = arg0->z - arg1->z;
    
    RotateVector3D(&sp2C, sp2C, ((arg2 * D_801106A0) / D_801106A8), 2);
    
    arg0->x = arg1->x + sp2C.x;
    arg0->y = arg1->y + sp2C.y;
    arg0->z = arg1->z + sp2C.z;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D69D0.s")

void SetCameraParameters(void) {
    Collision* temp = &D_80240CE0[currentZone];
    Camera* cam;
    s32 pad;
    s32 i;
    Vec3f sp3C;
    Vec3f sp30;

    if ((gCurrentStage == 5) && (currentZone == 0xE)) {
        func_800D6864(gPlayerActors, gTongues, gCamera, &sp3C, &sp30);
    } else if ((D_80236974 == 1) && (D_8020D8F4 == 0)) {
        func_800D3854(gPlayerActors, gTongues, gCamera, &sp3C, &sp30, 0);
    } else if (gCamera[0].unk0 == 1) {
        func_800D69D0(temp->unk94, gPlayerActors, gTongues, gCamera, &sp3C, &sp30, 0);
    } else {
        func_800D5394(gPlayerActors, gTongues, gCamera, &sp3C, &sp30, 0);
    }
    
    cam = &gCamera[0];
    
    for (i = 0; i < 4; i++, cam++) {
        cam->f5.x = sp3C.x;
        cam->f5.y = sp3C.y;
        cam->f5.z = sp3C.z;

        cam->f4.x = sp30.x;
        cam->f4.y = sp30.y;
        cam->f4.z = sp30.z;
        if (gCurrentStage != 7) {
            break;
        }
    }
}

void func_800D71E8(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    unkStruct10 sp18;

    sp18.unk_00 = arg0;
    sp18.unk_0C = arg1;
    sp18.unk_04 = arg2;
    sp18.unk_08 = arg4;
    sp18.unk_10 = arg3;
    sp18.unk_14 = arg5;
    
    func_800AE87C(&sp18);
    func_800C9748(&sp18, 0x77, 2);
}

s32 func_800D7248(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32* arg5, f32* arg6, f32* arg7) {
    Vec3f sp2C;
    s32 var_v1;
    Collider* temp_v0;

    sp2C.x = arg0;
    sp2C.y = arg1;
    sp2C.z = arg2;
    
    temp_v0 = func_800CAF88(sp2C, arg3, arg4);
    
    return (temp_v0 != NULL) ?
        *arg5 = temp_v0->unk_94,
        *arg6 = temp_v0->unk_98,
        *arg7 = temp_v0->unk_9C,
        1 :
        0;
}

s32 func_800D72DC(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32* arg6, f32* arg7, f32* arg8) {
    Vec3f sp38;
    Vec3f sp44;
    Collider* temp_v0;

    sp38.x = arg0;
    sp38.y = arg1;
    sp38.z = arg2;

    sp44.x = arg3;
    sp44.y = arg4;
    sp44.z = arg5;
    
    temp_v0 = SearchPolygonBetween(sp38, sp44, 0x77, 1, 1);
    return (temp_v0 != NULL) ?
        *arg6 = temp_v0->unk_94,
        *arg7 = temp_v0->unk_98,
        *arg8 = temp_v0->unk_9C,
        1 :
        0;
}

void func_800D73BC(f32* arg0, f32* arg1, f32* arg2, f32 arg3) {
    Vec3f sp2C;
    Vec3f sp20;

    sp20.x = *arg0;
    sp20.y = *arg1;
    sp20.z = *arg2;
    
    func_800CA734(&sp2C, sp20, arg3, 0x77);
    
    *arg0 = sp2C.x;
    *arg1 = sp2C.y;
    *arg2 = sp2C.z;
}
