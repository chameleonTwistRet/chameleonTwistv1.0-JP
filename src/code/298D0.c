#include "common.h"

typedef struct contMain {
    u16 unk_00;
    u16 unk_02;
    u16 unk_04;
    u16 unk_06;
    u16 unk_08;
    u16 unk_0A;
    f32 unk_0C;
} contMain;

u16 D_80175678[4];
contMain D_80175680[4];

typedef struct unkStruct1 {
    char unk_00[0x68];
} unkStruct1;

s32 func_800D9344(OSMesgQueue*, void*, s32);
s32 func_800DB660(OSMesgQueue*, void*, s32, OSContStatus*);
extern s32 D_800F0690;
extern void* D_80175638;
extern OSContStatus D_80175640[];
extern unkStruct1 D_801756C8[];
extern s32 D_80176960[];
extern s32 D_80175668[];
extern u16 D_80175678[];


//https://decomp.me/scratch/WixVG
#pragma GLOBAL_ASM("asm/nonmatchings/code/298D0/func_8004E4D0.s")

void func_8004E73C(void) {
    osContStartReadData(&D_80175620);
}

void func_8004E760(arg* arg0) {
    arg0->unk8 = 0;
    arg0->unk4 = 0;
    arg0->unk2 = 0;
    arg0->unk0 = 0;
    arg0->unk6 = arg0->unk8;
    arg0->unkC = 0.0f;
}

//https://decomp.me/scratch/yrEom
#pragma GLOBAL_ASM("asm/nonmatchings/code/298D0/func_8004E784.s")

void func_8004E9AC(void) {
    s32 i = 0;
    for (i = 0; i < 4; i++) {D_80175678[i] = D_80175680[i].unk_00;}
}
