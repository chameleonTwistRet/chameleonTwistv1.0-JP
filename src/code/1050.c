#include "common.h"

void func_800D9730(void);
void func_80025CB8(void*);
void func_80025D80(void*);



extern s32 D_80168D70;
extern OSViMode D_801090F0;
extern OSMesgQueue D_80119270;
extern OSMesg   D_801191A8;
extern OSThread D_80113C90; // thread1
extern OSThread D_80115E40; // thread3
extern s32 D_80117FF0;

void func_80025C50(void) {
    func_800D9730();
    D_80168D70 = 1;
    osCreateThread(&D_80113C90, 1, func_80025CB8, 0, &D_80115E40, 10);
    osStartThread(&D_80113C90);
}

void func_80025CB8(void *arg0) {
    osCreateViManager(OS_PRIORITY_VIMGR);
    osViSetMode(&D_801090F0);
    osViBlack(1);
    osViSetSpecialFeatures(0x40);
    osViSetSpecialFeatures(0x20);
    osCreatePiManager(0x96, &D_80119270, &D_801191A8, 0x32);
    osCreateThread(&D_80115E40, 3, func_80025D80, arg0, &D_80117FF0, 10);
    osStartThread(&D_80115E40);
    osSetThreadPri(0, 0);

    while (TRUE) {};
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_80025D80.s")

void func_80025EE8(void) {
    
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_80025EF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_80026C78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_80026CA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_80026E30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_80026FB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_80027138.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_80027240.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_800273F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_800274F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_80027650.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_80027694.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_8002A190.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_8002A4C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_8002A824.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_8002AE3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_8002B118.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_8002B7BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_8002C280.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_8002C4E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_8002C900.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_8002CAC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_8002CB04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_8002CB6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_8002CBE8.s")

s32 func_8002CCA0(void) {
    s32 sp1C;

    if (D_80174998 >= 3) {
        sp1C = func_8002C900();
    }
    return sp1C;
}

void func_8002CCDC(void) {
    func_8008BEDC();
    func_80088198();
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_8002CD04.s")

void func_8002CD94(s32 arg0) {
    if (arg0 == 2) {
        osViBlack(0);
    }
}
#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_8002CDBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_8002CE54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_8002D080.s")
