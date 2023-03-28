#include "common.h"

extern s16 gTotalCarrots;
extern unkStruct07 D_802019A8[];
extern Collision D_80240CE0[];
extern unkStruct08 D_80108AF8[];

void func_800C2A00(void);
void func_800CFDC8(playerActor*);
s32 func_800B4A3C(s32);
void func_800BE474(Tongue*);
s32 isPickup(Actor*);
void pickup_collide_func(s32);

extern f32 D_8010FB50;
extern s32 D_80168DFC;
extern s32 D_80168E14;

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AF9D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AFB2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AFB88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/MoveTheater.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B06B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/CountSpatActors.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B07E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B088C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B08C8.s")

void func_800B09C0(s32 arg0, f32* arg1) {
    func_800B56D4(arg1[10], arg1[11]);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B09E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B0A30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B0AA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B0B20.s")
//deals with "shutters"
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B101C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B118C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B12B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B1538.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B1DA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B1DD4.s")

void func_800B2070(s32 arg0) {
    unkStruct15 sp24;
    Vec3f sp18;

    sp24.unk_00 = -172.0f;
    sp24.unk_0C = 100.0f;
    sp24.unk_04 = -155.0f;
    sp24.unk_10 = -145.0f;
    sp24.unk_08 = 450.0f;
    sp24.unk_14 = D_8010FB50;
    sp18.x = gPlayerActors->pos.x;
    sp18.y = gPlayerActors->pos.y;
    sp18.z = gPlayerActors->pos.z;
    if ((gPlayerActors->squishTimer == 0) && (D_80168DFC == 0) && (func_800AE9E0(sp18, &sp24) != 0)) {
        D_80168E14 = 1;
    }
}

void func_800B2144(Collider* arg0, unkStruct14* arg1) {
    arg0->unk_AC = arg1->unk_38;
    func_800B35FC(arg0->unk_AC);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B216C.s")

void func_800B21CC(s32 arg0, s32 arg1) {
    func_800BE2C0();
}

// referred to in US1.0 as "feild.c - LimitInt"

/*
 * LimitInt: Limits an integer to be in an inclusive range [a, b].
 *      @param integer: The integer to limit.
 *      @param a: The lower bound of the range.
 *      @param b: The upper bound of the range.
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

/*
 * LimitFloat: Limits a float to be in an inclusive range [a, b].
 *      @param _float: The float to limit.
 *      @param a: The lower bound of the range.
 *      @param b: The upper bound of the range.
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

/*
 * IsntPickup: Checks if an actor is not a pickup.
 *      @param actor: The actor to check.
 *      @return: 1 if the actor is not a pickup, 0 otherwise.
 */

s32 IsntPickup(Actor* actor) {
    return (actor->actorID != 0 && actor->actorID < R_Heart) ? 1 : 0;
}

/*
 * isPickup: Checks if an actor is a pickup.
 *      @param actor: The actor to check.
 *      @return: 1 if the actor is a pickup, 0 otherwise.
 */

s32 isPickup(Actor* actor) {
    return (actor->actorID >= R_Heart ) ? 1 : 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B22AC.s")

void func_800B22E8(s32* arg0) {
    func_800B22AC(*arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B2308.s")

// lerp 2 vec3f's by a scalar computed by func_800B2308
Vec3f* func_800B2470(Vec3f* arg0, Vec3f arg1, Vec3f arg4, f32 arg7, s32 arg8) {
    f32 pad;
    Vec3f sp30;
    
    Vec3f_Lerp(&sp30, arg1, arg4, func_800B2308(arg7, arg8));       //out, vec1, vec2, scalar
    *arg0 = sp30;
    return arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B2510.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B255C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B2AB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B2B50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B2BBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B2C58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B2CC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B2D10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B2D34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B2D78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B2E40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B3364.s")

//rains 7 month old bool checker
s32 func_800B340C(s32 value) {
    return ( value >= 0 ) ? 1 : 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B3424.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B3484.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B34D0.s")

s32 func_800B3540(s32 arg0) {
    return 1 - func_800B34D0(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B3564.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B35B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B35FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B3648.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B3698.s")

void func_800B37D8(void) {
    VertextBufferCount = 0;
    TriangleBufferCount = 0;
    ModelBufferCount = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B37F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B39EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B3AAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B3B68.s")

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

//struct pointer arg0 is a guess
s32 func_800B3FFC(unkSpriteStruct *arg0, s32 arg1) {
    Vec3s *new_var = &D_801087D8[arg1];
    int new_var2 = arg0->unk_14 & new_var->y;

    return new_var2 >> (*new_var).z;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B402C.s")

void func_800B4070(unkSpriteStruct* arg0) {
    s32 var_a2;

    if ((arg0->unk_4C != 0) && (func_800B3FFC(arg0->unk_4C, 4) == 1)) {
        var_a2 = 1;
    } else if ( func_800B3FFC(arg0, 0) == 2 || func_800B3FFC(arg0, 2) == 2) {
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
    if (!(D_80200C00.flags0[1] & 8)) {
        D_80200C00.flags0[1] |= 8;
        func_800A870C();
    }
}

s32 StageCarrotAvailable(s32 arg0) {
    if (arg0 >= 6) {
        return 0;
    }
    if (gCarrotBitfield & (1 << arg0)) {
        return 0;
    }
    return 1;
}

void AddCarrot(s32 arg0) {
    s32 i;

    if (arg0 < 6) {
        gCarrotBitfield = gCarrotBitfield | (1 << arg0);
        gTotalCarrots = 0;
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
    s32 new_var;
    
    temp_s3 = D_80240CE0[arg0].unk18;
    var_s0 = &D_802019A8[D_80240CE0[arg0].unk78];
    
    for (i = 0; i < temp_s3; i++, var_s0++) {
        new_var = var_s0->unk_00;
        if (var_s0->unk_0C == 1) {
            var_s0->unk_10 = func_800B4A3C(new_var);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/checkRoomItem.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/EraseRoomItem.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B4F14.s")

void func_800B4FCC(void) {
    s32 i;
    
    for (i = 0; i < ACTORS_MAX; i++) {
        if ((IsntPickup(&gActors[i]) != 0) && (gActors[i].actorState == 0)) {
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

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B560C.s")

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

void func_800B602C(s32* arg0, s32 arg1) {
    arg0[43] = arg1 - 60;
    arg0[44] = 1;
}

void func_800B6040(s32* arg0) {
    arg0[43] = 60;
    arg0[44] = 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B6054.s")

void func_800B6078(tempStruct* arg0) {
    Vec3f_Zero(&arg0->unk_3C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B6098.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B61FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B67D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B691C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B6B14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B6B4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B6C34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B6CD8.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BA900.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BD608.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BD634.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BD718.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BD938.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BDF2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BE000.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BE0D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BE1C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BE24C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BE264.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BE2A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BE2C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BE370.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BE474.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BE550.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/EraseToungeEatEnemy.s")

// void EraseToungeEatEnemy(Tongue* arg0) {
//     s32 i;

//     arg0->vaulting = 0;
//     arg0->tongueMode = 0;
//     arg0->segments = 0;

//     for (i = 0; i < 64; i++) {
//         do { } while (0);
//         if ((gActors[i].actorID != 0) && (gActors[i].actorState == 1)) {
//             if (isPickup(&gActors[i]) != 0) {
//                 pickup_collide_func(i);
//             } else {
//                 gActors[i].actorState = 2;
//                 arg0->inMouth.slots[arg0->amountInMouth] = (u32) i;
//                 arg0->amountInMouth += 1;
//             }
//             arg0->amountTnTongue -= 1;      
//         }
//     }
//     func_800BE474(arg0);
// }

void func_800BE664(playerActor * arg0) {
    if (arg0->power == POWERUP_TIME) {
        arg0->power = POWERUP_NONE;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BE680.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BE714.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BE7BC.s")

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
    func_8004BA5C(D_80240D6C[currentZone].collisionType);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BF5E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BF84C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/InitFieldSub.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BFCD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BFD64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/CalcRoomInfo.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C0274.s")

s32 GetDirectionName(s32 arg0) {
    return D_80108AF8[arg0].unk0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/CalcDoorInfo.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C0760.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C08B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/ChameleonFromDoor.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C0AEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C0B74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C0CDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C0E78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C0F1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C1204.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C1458.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C1510.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C1550.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C15AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/InitFieldSubScroll.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C198C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C1B70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C1BF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C1C64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C1CE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C250C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C2670.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C2820.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C29D8.s")

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
    D_800FFEB8 = *new_var2;
    D_80174878 = 0xB;
}
//referred to in US1.0 as "InitField"
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/InitField.s")
//referred to in US1.0 as "moveField"
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/MoveField.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C38E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C3958.s")

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

void func_800C54F8(Vec2s* arg0, s32* arg1) {
    arg0->x = 0;
    arg0->y = 0;
    *arg1 = 0;
}

void func_800C5508(playerActor* arg0) {
    arg0->canJump = FALSE;
    arg0->groundMovement = 2;
    arg0->globalTimer = arg0->globalTimer + 1.5;
}

void func_800C5538(playerActor* arg0) {
    arg0->canJump = FALSE;
    arg0->groundMovement = 1;
    arg0->globalTimer = arg0->globalTimer + D_8010FFF8;
}

void func_800C5564(playerActor* arg0) {
    arg0->canJump = FALSE;
    arg0->groundMovement = 0;
    arg0->globalTimer = arg0->globalTimer + D_80110000;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C558C.s")

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