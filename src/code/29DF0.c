#include "common.h"

u8 D_80176810[4];
u8 D_80176814[4];
u8 D_80176818[4];

typedef struct unkTextStruct {
char strings[4][0x64];
} unkTextStruct;

typedef struct unkarg0_2 {
/* 0x00*/ f32 unk_00;
/* 0x04 */ f32 unk_04;
/* 0x08 */ f32 unk_08;
/* 0x0C */ char unk_0C[4];
/* 0x10 */ f32 unk_10;
/* 0x14 */ f32 unk_14;
/* 0x18 */ f32 unk_18;
/* 0x18 */ f32 unk_1C;
/* 0x18 */ f32 unk_20;
/* 0x18 */ f32 unk_24;
/* 0x18 */ f32 unk_28;
} unkarg0_2;

void func_8007F0D8(f32, f32, f32, f32, f32, s32, s32);   /* extern */
void func_8007EBE4(f32, f32, f32, f32, f32, s32, s32);   /* extern */

extern unkTextStruct D_800F0734;

#pragma GLOBAL_ASM("asm/nonmatchings/code/29DF0/func_8004E9F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/29DF0/func_8004EBD4.s")

void func_8004ECA8(void) {
}

//https://decomp.me/scratch/MZIQO
#pragma GLOBAL_ASM("asm/nonmatchings/code/29DF0/func_8004ECB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/29DF0/func_8004EF5C.s")

// void func_8004EF5C(void) { //needs bss support for static variable
//     static s32 D_800F08C4;
//     unkTextStruct buffer = D_800F0734;
//     s32 i;
    
//     if (func_80055E5C(0x4000)) {
//         D_80176810[D_800F08C4]++;
//     }
    
//     if (func_80055E5C(0x8000) != 0) {
//         D_80176810[D_800F08C4]--;
//     }
    
//     if (func_80055E5C(2) != 0) {
//         D_80176814[D_800F08C4]++;
//     }
    
//     if (func_80055E5C(4) != 0) {
//         D_80176814[D_800F08C4]--;
//     }
    
//     if (func_80055E5C(8) != 0) {
//         D_80176818[D_800F08C4]++;
//     }
    
//     if (func_80055E5C(1) != 0) {
//         D_80176818[D_800F08C4]--;
//     }
//     if (1 == func_80055E5C(0x10)) {
//         D_800F08C4 = (D_800F08C4) + 1;
//         D_800F08C4 = (D_800F08C4) & 3;
//     }
    
//     if (func_80055E5C(0x2000) != 0) {
//         for (i = 0; i < 4; i++) {
//             D_80176810[i] = D_80176814[i] = D_80176818[i] = 0;
//         }
//     }
    
//     func_800610B8();
//     for (i = 0; i < 4; i++) {
//         func_80061308(D_80176810[0], D_80176814[0], D_80176818[0], 0xFF, D_80176810[1], D_80176814[1], D_80176818[1], 0xFF, D_80176810[2], D_80176814[2], D_80176818[2], 0xFF, D_80176810[3], D_80176814[3], D_80176818[3], 0xFF); func_8007F0D8(180.0f, (i + 2) * 0x20, 0.0f, 0.5f, D_80176810[i], 3, 0);
//         func_80061308(D_80176810[0], D_80176814[0], D_80176818[0], 0xFF, D_80176810[1], D_80176814[1], D_80176818[1], 0xFF, D_80176810[2], D_80176814[2], D_80176818[2], 0xFF, D_80176810[3], D_80176814[3], D_80176818[3], 0xFF);
//         func_8007F0D8(210.0f, (i + 2) * 0x20, 0.0f, 0.5f, D_80176814[i], 3, 0);
//         func_80061308(D_80176810[0], D_80176814[0], D_80176818[0], 0xFF, D_80176810[1], D_80176814[1], D_80176818[1], 0xFF, D_80176810[2], D_80176814[2], D_80176818[2], 0xFF, D_80176810[3], D_80176814[3], D_80176818[3], 0xFF);
//         func_8007EBE4(240.0f, (i + 2) * 0x20, 0.0f, 0.5f, D_80176818[i], 3, 0);
//     }
    
//     func_80061308(D_80176810[0], D_80176814[0], D_80176818[0], 0xFF, D_80176810[1], D_80176814[1], D_80176818[1], 0xFF, D_80176810[2], D_80176814[2], D_80176818[2], 0xFF, D_80176810[3], D_80176814[3], D_80176818[3], 0xFF);
//     PrintTextWrapper(140.0f, 32.0f, 0.0f, 1.0f, buffer.strings[D_800F08C4], 1);
    
//     switch (D_800F08C4) {
//     default:
//         break;
//     case 0:
//         PrintTextWrapper(124.0f, 16.0f, 0.0f, 0.5f, buffer.strings[D_800F08C4], 1);
//         break;
//     case 1:
//         PrintTextWrapper(124.0f, 48.0f, 0.0f, 0.5f, buffer.strings[D_800F08C4], 1);
//         break;
//     case 2:
//         PrintTextWrapper(296.0f, 16.0f, 0.0f, 0.5f, buffer.strings[D_800F08C4], 1);
//         break;
//     case 3:
//         PrintTextWrapper(296.0f, 48.0f, 0.0f, 0.5f, buffer.strings[D_800F08C4], 1);
//         break;
//     }
    
//     func_800610B8();
// }

#pragma GLOBAL_ASM("asm/nonmatchings/code/29DF0/func_8004F61C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/29DF0/func_8004FA5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/29DF0/func_8004FE90.s")

void func_8004FF1C(unkarg0_2* arg0, f32* arg1, f32* arg2) {
    *arg1 = (arg0->unk_24 * 100.0f) + (arg0->unk_14 * 0);
    *arg2 = (arg0->unk_28 * 100.0f) + (arg0->unk_18 * 0);
}

void func_8004FF64(unkarg0_2* arg0, f32* arg1, f32* arg2) {
    *arg1 = (arg0->unk_20 * 100.0f) + (arg0->unk_00 * 0);
    *arg2 = (arg0->unk_28 * 100.0f) + (arg0->unk_08 * 0);
}

void func_8004FFAC(unkarg0_2* arg0, f32* arg1, f32* arg2) {
    *arg1 = (arg0->unk_10 * 0) + (arg0->unk_00 * 100.0f);
    *arg2 = (arg0->unk_14 * 0) + (arg0->unk_04 * 100.0f);
}

void func_8004FFF0(void) {
    D_800F06B0 = 0;
}

void func_8004FFFC(void) {
    s32 *temp = &D_800F0B38;
    if (func_80055E5C(16) != 0) {
        *temp ^= 1;
    }
    if (D_800F0B38 != 0) {
        func_80061270(0, 0, 0, 255);
        func_8005AFD0(0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 320.0f, 180.0f, 0.0f, 0);
        func_8007B480(0.0f, 0.0f, 0.0f, 0.0f, 400.0f, 2000.0f);
        func_8007B4CC(0.0f, 120.0f, 0.0f, 0.0f, 120.0f, 0.0f);
        func_8005AFD0(32.0f, 32.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 77);
        func_80061308(191, 10, 0, 255, 200, 200, 0, 255, 191, 10, 0, 255, 200, 200, 0, 255);
        PrintTextWrapper(64.0f, 32.0f, 0.0f, 1.0f, D_8010C7B0, 1);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/29DF0/func_800501BC.s")
