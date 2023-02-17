#include "common.h"

void func_8005456C(f32, f32, f32, f32, f32, s32);
void func_80073090(void);
void func_8008BE14(void);
void func_800A0D90(void);
void func_800678EC(s32, s32, s32, s32, s32);
extern s32 D_800FE708;
extern s32 D_80168EBC;
extern s32 D_80168EC0;
extern s32 D_80168FEC;
extern s32 D_80168FF0;
extern s32 D_8016911C;
extern s32 D_80169120;
extern s32 D_8016924C;
extern s32 D_80169250;

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

//https://decomp.me/scratch/9z01z
#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_8005456C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_800546F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_80054864.s")

void func_8005564C(void) {
    switch (D_800FFEB8) {
    case 0:
        D_800FFDF4 = 1;
        D_800FE708 = 0;
        func_800A7988();
        func_800A1EC4();
        func_80057010(0xD4);
        func_80057010(0x68);
        func_80057010(0x69);
        func_80057010(0x6A);
        func_80057010(0x6B);
        func_80057010(0x6C);
        func_80057010(0x6D);
        func_80057010(0x6E);
        func_80057010(0xBD);
        func_80057010(0xBE);
        func_80057010(0xBF);
        func_80057010(0xC0);
        func_80057010(0xC1);
        func_80057010(0xC2);
        func_8008CDC4();
        D_80168DA0 = 4;
        D_800FFEB8++;
        D_80100FD0 = 0;
        D_800FFDF0 = 2;
        func_8008BE14();
        func_80088198();
        D_801FC9AC = 0;
        func_800678EC(0, 0, 0, 0, 0x10);
        func_8008F114();
        break;
    case 1:
        func_80072D34();
        D_800FFEB8++;
        func_8008F114();
        break;
    case 2:
        func_8008F16C();
        D_8017499C++;
        break;
    case 3:
        func_8008FD04(6);
        break;
    }
    func_8008C094();
}

void func_800557F8(void) {
    s32 i;

    switch (D_800FFEB8) {
    case 0:
        D_800FFDF4 = 1;
        func_800A7988();
        func_800A0D90();

        for (i = 0; i < 4; i++) {
            D_80168DA8[i].exists = D_80168DA8[i].active;
        }

        func_80057010(0xCE);
        func_80057010(0x6E);
        func_80057010(0xD5);
        func_8006CB34(0);
        func_8006CB34(1);
        func_8006CB34(2);
        func_8006CB34(3);
        func_8006CB34(4);
        func_8006CB34(5);
        func_8008CDC4();
        D_80168DA0 = 4;
        D_800FFEB8++;
        D_80100FD0 = 0;
        D_800FFDF0 = 2;
        func_8008BE14();
        func_80088198();
        D_801FC9AC = 0;
        func_8008F114();
        break;
    case 1:
        func_80073090();
        D_800FFEB8++;
        func_8008F114();
        break;
    case 2:
        func_8008F16C();
        D_8017499C++;
        break;
    case 3:
        func_8008FD04(6);
        break;
    }

    func_8008C094();
}

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

void func_80055AA0(void) {
    switch (D_800FFEB8) { 
    case 0:
        D_800FFDF4 = 1;
        func_800A7988();
        func_800A1EC4();
        func_80057010(0xCD);
        func_8008CDC4();
        func_8002E0CC();
        D_800FFEB8++;
        D_80100FD0 = 0;
        D_800FFDF0 = 2;
        D_801FC9AC = 0;
        break;
    case 1:
        func_80073FD8();
        D_800FFEB8++;
        func_8008F114();
        break;
    case 2:
        func_8008F16C();
        D_8017499C++;
        break;
    case 3:
        func_8008FD04(0xA);
        break;
    }
    
    func_8008C094();
}
