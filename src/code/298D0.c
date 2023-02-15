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

extern s32 D_800F0690;
extern void* D_80175638;
extern OSContStatus D_80175640[];
extern OSPfs D_801756C8[];
extern s32 D_80176960[];
extern s32 D_80175668[];
extern u16 D_80175678[];


//https://decomp.me/scratch/WixVG
s32 func_8004E4D0(void) {
    OSMesgQueue siQueue;
    OSMesg mesgBuf;
    s32 temp_v0_2;
    s32 temp_v0_3;
    u8 controllerBits;
    s32 i;
    s32 j;

    osCreateMesgQueue(&siQueue, &mesgBuf, 1);
    osSetEventMesg(OS_EVENT_SI, &siQueue, (OSMesg)1);
    osContInit(&siQueue, &controllerBits, D_80175640);
    osCreateMesgQueue(&D_80175620, &D_80175638, 1);
    osSetEventMesg(OS_EVENT_SI, &D_80175620, NULL);

    for (i = 0; i < MAXCONTROLLERS; i++) {
        D_80175668[i] = -1;
        //chain assignment required?
        D_80175678[i] = D_801756C0[i] = 0;
    }

    for (i = 0, j = 0; i < MAXCONTROLLERS; i++) {
        if (controllerBits & (1 << i)) {
            if (!(D_80175640[i].errno & CONT_NO_RESPONSE_ERROR)) {
                D_80175668[i] = i; //should be D_80175668[i] = i; ?
                j++;
            }
        }
    }

    for (i = 0; i < MAXCONTROLLERS; i++) {
        D_80176960[i] = 0;
        if (((controllerBits >> i) & 1) && (D_80175640[i].type & CONT_JOYPORT) && (D_80175640[i].status & CONT_CARD_ON)) {
            temp_v0_2 = osPfsInitPak(&D_80175620, &D_801756C8[i], i);
            if (temp_v0_2 == PFS_ERR_ID_FATAL || temp_v0_2 == PFS_ERR_DEVICE) {
                temp_v0_3 = osMotorInit(&D_80175620, &D_801756C8[i], i);
                switch (temp_v0_3) {
                default:
                    D_80176960[i] = 1;
                    break;
                case PFS_ERR_NOPACK:
                    D_80176960[i] = 0;
                    break;
                case PFS_ERR_CONTRFAIL:
                    D_80176960[i] = 0;
                    D_800F0690 = 1;
                    break;
                case PFS_ERR_DEVICE:
                    D_80176960[i] = 0;
                    D_800F0690 = 1;
                    break;
                }
            }
        }
    }
    return j;
}

void func_8004E73C(void) {
    osContStartReadData(&D_80175620);
}

void func_8004E760(arg* arg0) {
    arg0->unk8 = 0;
    arg0->unk4 = 0;
    arg0->unk2 = 0;
    arg0->unk_00 = 0;
    arg0->unk6 = arg0->unk8;
    arg0->unkC = 0.0f;
}

//https://decomp.me/scratch/yrEom
#pragma GLOBAL_ASM("asm/nonmatchings/code/298D0/func_8004E784.s")

void func_8004E9AC(void) {
    s32 i = 0;
    for (i = 0; i < 4; i++) {D_80175678[i] = D_80175680[i].unk_00;}
}
