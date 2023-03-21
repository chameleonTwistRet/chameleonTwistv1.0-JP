#include "common.h"

extern f64 D_801104F8;
extern s32 gCurrentStage;
extern s32 D_80236974;
extern Collision D_80240CE0[];
extern Collider D_80236980[];
extern char D_801103D0[];

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

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C9B18.s")

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
    func_800C8C14(arg0.x, -arg0.z);
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

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D4550.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D45D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D4720.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D4D90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D4F50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D52E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D5394.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D6864.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D68EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D69D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D7028.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D71E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D7248.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D72DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800D73BC.s")
