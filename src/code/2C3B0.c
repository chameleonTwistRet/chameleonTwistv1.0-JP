#include "common.h"
//AOF=33

void func_8005456C(f32, f32, f32, f32, f32, s32);

void func_80050FB0(void) {
    s32 i;

    if (D_801749B4 == 0) {
        for (i = 0; i < 4; i++) {
            if (D_80168DA8[i].active == 1) {
                if (D_80168DA8[i].yPos < -10.0f) {
                    D_800F0BE4[D_800F0BE0[i]].unk_00++;
                    func_8005456C(D_80168DA8[i].xPos, -300.0f, D_80168DA8[i].zPos, D_80168DA8[i].yPos, 200.0f, D_800F06DC[i]);
                }
            } 
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_800510E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_8005119C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_80051548.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_80051678.s")

void func_8005171C(void) {
    if ((currentZone == 6) && ((D_800F0B50 % 60) == 0)) {
        func_80087ED0(137, 0, 0, 0, 0, 16);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_8005177C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_800517EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_80051910.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_80051B24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_80051F38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_80052094.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_800522A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_800523E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_800525E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_80052890.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_800536D8.s")

void func_800538D0(void) {
    if ((D_80176824 < 1801) && (D_80176824 >= 1711) && ((D_80176824 % 10) < 5)) {
        func_80076884(1);
        func_800803F0(100.0f, 10.0f, 0.0f, 1.0f, D_8010C944, 1);
    }
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_80053950.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_80053A70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_80053CA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_80053DA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_80053FA0.s")

void func_8005423C(void) {
    s32 i;
    for (i = 0; i != 6; i++){
        func_8006D598(i, 0, 0);
    };
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_80054284.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_8005444C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_8005456C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_800546F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_80054864.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_8005564C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_800557F8.s")

void func_80055994(void) {
    switch (D_800FFEB8) {
    case 0:
        D_800FFDF4 = 1;
        func_800A7988();
        func_800A1EC4();
        func_80057010(94);
        func_8008CDC4();
        func_8002E0CC();
        D_800FFEB8 += 1;
        D_80100FD0 = 0;
        D_800FFDF0 = 2;
        D_801FC9AC = 0;
        func_8008F114();
        break;
    case 1:
        func_800735A8();
        D_800FFEB8 += 1;
        func_8008F114();
        break;
    case 2:
        func_8008F16C();
        D_8017499C += 1;
        break;
    case 3:
        func_8008FD04(10);
        break;
    }
    func_8008C094();
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_80055AA0.s")
