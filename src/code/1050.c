#include "common.h"
//AOF=35

typedef struct frameBufferData {
    char data[0x25800];
} frameBufferData;

extern frameBufferData D_803B5000[2];
extern s32 D_80174874;
extern OSMesgQueue D_801192D0;
extern OSMesgQueue D_801192E8;

typedef struct temp {
/* 0x00 */ char unk_00[0x24];
/* 0x24 */ f32 unk_24;
/* 0x28 */ f32 unk_28;
/* 0x2C */ f32 unk_2C;
/* 0x30 */ char unk_30[0x24];
/* 0x54 */ f32 unk_54;
} temp;

void func_8008C494(void);
void func_8008C4B8(void);
void func_8008C554(void);
void osViSwapBuffer(void* frameBufPtr);
s32 func_8004E4D0(void);
void func_80084ACC(void);
void func_80086C20(void);
void func_8004CD9C(s32, s32);
s32 func_800AF604(f32, f32, f32, f32);
void __osInitialize_common(void);

void func_80025C50(void) {
    __osInitialize_common();
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

s32 func_80026C78(temp* arg0) {
    return 1 - func_800AF604(arg0->unk_24, arg0->unk_28, arg0->unk_2C, 8000.0f);
}

void func_80059254(Mtx*, f32, f32, f32, f32, f32, f32, s32);
void func_800598C4(Mtx*, f32, f32, f32, f32, f32, f32, s32);
void func_800849DC(s32, tongue*, playerActor*, s32*);
void func_8005747C(f32, f32, f32, f32, f32, f32, s32);
extern s32 D_8016AA98;

typedef struct unkMatrix {
    u8 pad[0x10880];
    Mtx unk10880[0x1000 / sizeof(Mtx)]; // assumed length
    Mtx unk11880[0x1000 / sizeof(Mtx)]; // assumed length
} unkMatrix;

void func_80026CA8(unkMatrix *arg0, Mtx *arg1, u32 arg2, f32 arg3, s32 arg4) {
    f32 xPos = 0.0f;
    f32 yPos = 0.0f;
    f32 zPos = 0.0f;
    
    func_800849DC(0, &D_80169268, &D_80168DA8[0], &D_8016AA98);
    guMtxXFML(&arg0->unk10880[arg2], xPos, yPos, zPos, &xPos, &yPos, &zPos);
    guMtxXFML(&arg0->unk11880[arg2], xPos, yPos, zPos, &xPos, &yPos, &zPos);
    guMtxCatL(arg1, &arg0->unk10880[arg2], arg1);
    guMtxCatL(arg1, &arg0->unk11880[arg2], arg1);
    func_80059254(arg1, D_8016AC68[arg2].posX + xPos, D_8016AC68[arg2].posY + yPos, D_8016AC68[arg2].posZ + zPos, arg3, arg3, 0.0f, arg4);
}

void func_80026E30(unkMatrix *arg0, Mtx *arg1, u32 arg2, f32 arg3, s32 arg4) {
    f32 xPos = 0.0f;
    f32 yPos = 0.0f;
    f32 zPos = 0.0f;
    
    func_800849DC(0, &D_80169268, &D_80168DA8[0], &D_8016AA98);
    guMtxXFML(&arg0->unk10880[arg2], xPos, yPos, zPos, &xPos, &yPos, &zPos);
    guMtxXFML(&arg0->unk11880[arg2], xPos, yPos, zPos, &xPos, &yPos, &zPos);
    guMtxCatL(arg1, &arg0->unk10880[arg2], arg1);
    guMtxCatL(arg1, &arg0->unk11880[arg2], arg1);
    func_800598C4(arg1, D_8016AC68[arg2].posX + xPos, D_8016AC68[arg2].posY + yPos, D_8016AC68[arg2].posZ + zPos, arg3, arg3, 0.0f, arg4);
}

void func_80026FB8(unkMatrix *arg0, Mtx *arg1, u32 arg2, f32 arg3, f32 arg4, s32 arg5) {
    f32 xPos, yPos, zPos;
    zPos = yPos = xPos = 0.0f;
    
    func_800849DC(0, &D_80169268, &D_80168DA8[0], &D_8016AA98);
    guMtxXFML(arg1, xPos, yPos, zPos, &xPos, &yPos, &zPos);
    guMtxXFML(&arg0->unk10880[arg2], xPos, yPos, zPos, &xPos, &yPos, &zPos);
    guMtxXFML(&arg0->unk11880[arg2], xPos, yPos, zPos, &xPos, &yPos, &zPos);
    func_8005747C(D_8016AC68[arg2].posX + xPos, D_8016AC68[arg2].posY + yPos + arg4, D_8016AC68[arg2].posZ + zPos, arg3, arg3, 0.0f, arg5);
}

typedef u32 uintptr_t;

extern struct {
    uintptr_t base_address;
    u32 unk4;
} D_80100F50[];

#define SEGMENT_MASK 0x0F000000
#define SEGMENT_SHIFT 24
#define IS_SEGMENTED(x)          (((uintptr_t)(x) & SEGMENT_MASK) != 0)
#define SEGMENT_INDEX(x)         (((uintptr_t)(x) & SEGMENT_MASK) >> SEGMENT_SHIFT)
#define SEGMENT_OFFSET_CUSTOM(x)        (((uintptr_t)(x) & ~SEGMENT_MASK))
#define SEGMENTED_TO_VIRTUAL(x)  (void*)(SEGMENT_OFFSET_CUSTOM(x) + D_80100F50[SEGMENT_INDEX(x)].base_address)

void func_80027138(void* arg0, s32* arg1, s32* arg2, s32* arg3) {
    void* var_a2;
    s32* var_v1;

    //this is required to be 1 line or codegen breaks
    if (!IS_SEGMENTED(arg0)) {var_v1 = arg0;} else {var_v1 = SEGMENTED_TO_VIRTUAL(arg0);}
    
    if (!IS_SEGMENTED(var_v1[1])) {
        var_a2 = (s32*)var_v1[1];
    } else {
        var_a2 = SEGMENTED_TO_VIRTUAL(var_v1[1]);
    }
    
    *arg1 = *(s32*)var_a2;
    
    if (!IS_SEGMENTED(var_v1[0])) {
        var_a2 = (s32*)var_v1[0];
    } else {
        var_a2 = SEGMENTED_TO_VIRTUAL(var_v1[0]);
    }

    *arg2 = *(s32*)var_a2;
    
    if (!IS_SEGMENTED(var_v1[2])) {
        *arg3 = var_v1[2];
    } else {
        *arg3 = SEGMENTED_TO_VIRTUAL(var_v1[2]);
    }
}


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

void func_8002CBE8(s32 arg0) {
    func_8008C4B8();
    osRecvMesg(&D_801192D0, NULL, 1);
    osViSwapBuffer(&D_803B5000[arg0].data);
    osViSetSpecialFeatures(5);
    
    if (D_801192E8.validCount >= D_801192E8.msgCount) {
        osRecvMesg(&D_801192E8, NULL, 1);
    }
    
    func_8008C554();
    osRecvMesg(&D_801192E8, NULL, 1);
    func_8008C494();
}

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

void func_8002CD04(void) {
    func_800A7988();
    D_80174878++;

    if (D_800F06EC >= 0) {
        D_80174878 = D_800F06EC;
    }

    D_80174878 = func_800961F4(D_80174878);
    func_8002E0CC();
    func_800C2FA0();
    func_8002CCDC();
    func_80056EB4();
    func_800615A4();
    func_8005C9B8();
    func_80084788();
}

void func_8002CD94(s32 arg0) {
    if (arg0 == 2) {
        osViBlack(0);
    }
}

void func_8002CDBC(s32 arg0) {
    s32 i;

    if (D_80174874 != 7) {
        D_80168D78[0] = 0;
        return;
    }

    for (i = 0; i < 4; i++) {
        if (D_80168D78[i] != 0) {
            D_80168D78[i] = 1;
            func_8004CD9C(i, (i * 0x10) + arg0);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/1050/func_8002CE54.s")

void func_8002D080(void) {
    D_80174878 = -1;
    D_80168D70 = func_8004E4D0();
    D_80168DA8[0].active = 1;
    D_80168DA8[1].active = 0;
    D_80168DA8[2].active = 0;
    D_80168DA8[3].active = 0;
    func_80086C20();
    func_80084ACC();
}
