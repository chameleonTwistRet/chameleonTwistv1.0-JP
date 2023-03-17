#include "common.h"
#include "PR/libaudio.h"

extern char D_8010E9D0[];
typedef struct unkarg0 {
    char unk_00[0x6A];
    s16 unk6A;
} unkarg0;

//jump table
#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/videoproc.s")

void func_80084F80(s32 arg0, s32 arg1) {
    D_801B3138 = arg0;
    D_800FF5D0 = arg1;
    osSendMesg(&D_801B3120, (OSMesg)3, 0);
}

void func_80084FC0(s32 arg0) {
    D_801B3140 = arg0;
    osSendMesg(&D_801B3120, (OSMesg)5, 0);
}

//os
#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80084FF4.s")

//os
#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800851C0.s")

//os
#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80085290.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80085364.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800853B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008568C.s")

void func_80085C08(struct UnkList* arg0) {
    arg0->unk0 = D_80200060.unk0;
    D_80200060.unk0 = arg0;
}

void Audio_RomCopy(u32 devAddr, void* arg1, u32 arg2) {
    osWritebackDCacheAll();
    osPiStartDma(&D_801FF7F0, 0, 0, devAddr, arg1, arg2, &D_801FF750);
    osRecvMesg(&D_801FF750, NULL, 1);
}

//os
#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80085C90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80085D14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/Audio_Init.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/audioproc.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/Audio_StartThread.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80086C7C.s")

unk0* func_80086EB4(s32 arg0) {
    unk0* next;
    unk0* prev;

    prev = D_801FFB84->unk50;
    next = prev->unk50;
    
    while (next != NULL) {
        if (arg0 == prev->unk40) {
            return prev;
        }
        prev = next;
        next = next->unk50;
    }
    return 0;
}

s16 func_80086EFC(s32 arg0) {
    unk0* next;
    unk0* prev;

    prev = D_801FFB84->unk50;
    next = prev->unk50;
    
    while (next != NULL) {
        if (arg0 == prev->unk40) {
            return prev->unk42;
        }
        prev = next;
        next = next->unk50;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80086F44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80087088.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80087130.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008714C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80087180.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80087290.s")

s32 func_80087358(s32 arg0) {
    unk0* temp_v0 = func_80086EB4(arg0);

    if (temp_v0 == NULL) {
        return -1;
    }

    return func_80087290(temp_v0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80087390.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008746C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800874E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80087824.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008788C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80087904.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80087E60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80087ED0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80087FA4.s")

void func_8008800C(s32 arg0) {
    D_800FF5E8 = arg0;
    D_800FF5E4 = arg0;
    D_801FCA00 = 0.0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80088030.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80088198.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80088248.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800882D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80088388.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80088474.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80088528.s")

s32 func_800885EC(s32 arg0, s32 arg1) {
    s32 v1;
    unk0 *temp_v0;
    
    temp_v0 = func_80086EB4(arg0);
    if (temp_v0 == 0) {
        return -1;
    }
    
    if (arg1 < 0) {
        arg1 = 0;
    } else {
        if (arg1 < 0x7F) {
            v1 = arg1;
        } else {
            v1 = 0x7F;
        }
        arg1 = v1;
    }
    
    if (arg1 == temp_v0->unk3D) {
        return 0;
    } else {
        temp_v0->unk3D = arg1;
        if ((temp_v0->unk48 >= 0) && (temp_v0->unk48 < 0x10)) {
            alSndpSetSound(D_800FF61C, temp_v0->unk48);
            alSndpSetFXMix(D_800FF61C, arg1);
        }
    }
    
    return 0;
}

s32 func_80088698(s32 arg0) {
    unk0* temp_v0 = func_80086EB4(arg0);

    if (temp_v0 == 0) {
        return -1;
    }

    temp_v0->unk20 |= 0x20;
    return 0;
}

s32 func_800886D8(s32 arg0, s16 arg1, s16 arg2) {
    unk0* temp_v0;

    temp_v0 = func_80086EB4(arg0);
    if (temp_v0 == NULL) {
        return -1;
    }
    
    temp_v0->unk30 = arg1;
    temp_v0->unk2C = (f32)(arg1 - temp_v0->unk32) / arg2;
    return 0;
}

s32 func_8008873C(s32 arg0, s32 arg1, s32 arg2) {
    if (++D_800FF64C >= 0x80) {
        D_800FF64C = 0;
    }
    
    if (D_800FF64C == D_800FF650 ) {
        return 0;
    }
    
    DummiedPrintf(D_8010D834, D_80200A98[D_800FF64C]);
    return func_80087904(D_80200A98[D_800FF64C], arg0, arg1, arg2, 0, 2);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800887F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80088B7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800893C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80089BA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80089E24.s")

void func_8008A208(void) {
    if (D_80236974 == 0) {
        if (D_8020005A == 1) {
            func_8008BD98(1);
        }
    } else if (((s32) D_8017499C % 300) == 0x12B) {
        func_80087ED0(Random(0, 5) + 0x4F, NULL, NULL, NULL, 1, 0x10);
    }
    D_8020005A = D_80236974;
}

void func_8008A2B0(void) {
    if ((gameModeCurrent == 0) && (gCurrentStage == 0)) {
        func_8008A208();
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008A2EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008AD30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008B458.s")

s32 func_8008BA58(void) {
    //possibly a struct on the stack?
    s32 sp24;
    s32 sp28; //unused
    s32 devAddr;
    s32 temp_t4; //unused
    s32 temp_v0;
    s32 var_v0; //unused
    s32 var_v1; //unused
    unk801FCA20* temp_t2;
    s32 anotherTemp;

    if ((gameModeCurrent == 4) || (gameModeCurrent == 5)) {
        return 0;
    }

    if ((gIsPaused != 0) && (D_800FF604 == 0)) {
        if (alSeqpGetState(D_800FF614) == 1) {
            alSeqpSetVol(D_800FF614, 0);
            alSeqpStop(D_800FF614);
            D_800FF608 = 1;
        } else {
            D_800FF608 = 0;
        }
        D_800FF604 = gIsPaused;
        return 0;
    }

    if ((gIsPaused == 0) && (D_800FF604 != 0)) {
        if ((alSeqpGetState(D_800FF614) != 1) || (D_800FF608 != 0)) {
            if ((gameModeCurrent != 4) && (gameModeCurrent != 5)) {
                alSeqpPlay(D_800FF614);
            }
            alSeqpSetVol(D_800FF614, D_801FCA22);
        }
        D_800FF604 = gIsPaused;
        return 0;
    }
    
    if (gIsPaused != 0) {
        return 0;
    }
    
    if (D_801FC9A0 != 0) {
        if (D_801FCA20.unk_00 > 0) {
            D_801FCA20.unk_00 = D_801FCA20.unk_00 - D_801FC9A0;
            if (D_801FCA20.unk_00 < 0) {
                D_801FCA20.unk_00 = 0;
            }
            alSeqpSetVol(D_800FF614, D_801FCA20.unk_00);
        } 
    }
    
    if (D_801FC9B4 != 0) {
        alSeqpSetTempo(D_800FF614, D_801FC9A8);
    } else {
        D_801FC9B0 = alCSPGetTempo((ALCSPlayer*)D_800FF614);
    }
    
    temp_v0 = alSeqpGetState(D_800FF614);
    
    if (D_800FF620 == -1) {
        if ((temp_v0 == 0) && (D_801FCA24 != 0)) {
            D_800FF620 = D_800FF624.unk_00;
        } else {
            return 0;
        }
    }
    else if (temp_v0 != 0) {
        return 0;
    }
    
    D_800FF624.unk_00 = D_800FF620;
    sp24 = D_801FCA44[D_800FF624.unk_00 + 1].unk_00; //is this correct?
    devAddr = D_801FCA44[D_800FF624.unk_00].unk_04;
    
    if (sp24 & 1) {
        sp24 += 1;
    }
    
    osInvalDCache(D_801FD550.unk_00, sp24);
    Audio_RomCopy(devAddr, D_801FD550.unk_00, sp24);
    func_800DFC1C(D_800FF618, D_801FD550.unk_00);
    alSeqpSetSeq(D_800FF614, D_800FF618);
    D_801FCA20 = D_800FF4D0[D_800FF624.unk_00];
    alSeqpPlay(D_800FF614);
    alSeqpSetVol(D_800FF614, D_801FCA22);
    D_800FF620 = -1;
    D_801FC9B4 = 0;
    D_801FC9A8 = 0;
    D_801FC9B0 = 0;
    return 1;
}

s32 func_8008BD98(s32 arg0) {
    if ((arg0 >= (s16)D_801FCA44->unk_00) || (arg0 < 0)) {
        return -1;
    }
    if (D_800FF614->state == 1) {
        alSeqpStop(D_800FF614);
    }
    D_800FF620 = arg0;
    D_801FC9A0 = 0;
    return 0;
}

s32 func_8008BE14(void) {
    D_801FCA24 = 0;
    if (D_800FF614->state == 1) {
        alSeqpStop(D_800FF614);
    }
    func_80088198();
    D_800FF5E4 = 0;
    D_800FF5E8 = 0;
    D_801FCA00 = 0.0;
    D_800FF5F4 = 0;
    gIsPaused = 0;
    D_800FF604 = 0;
    D_800FF608 = 0;
    D_800FF64C = 0;
    D_800FF650 = 0;
    D_801FC9B4 = 0;
    D_801FC9A8 = 0;
    D_801FC9A0 = 0;
    D_800FF620 = -1;
    D_801FCA48 = 1;
    return 0;
}

s32 func_8008BEDC(void) {
    D_801FCA24 = 0;
    if (D_800FF614->state == 1) {
        alSeqpStop(D_800FF614);
    }
    return 0;
}

s32 func_8008BF20(void) {
    D_801FCA20 = D_800FF4D0[D_800FF624.unk_00];
    if ((D_800FF614->state != 1) && (gameModeCurrent != 4) && (gameModeCurrent != 5)) {
        alSeqpPlay(D_800FF614);
    }
    return 0;
}
s32 func_8008BFA8(s32 arg0) {
    alSeqpSetVol(D_800FF614, arg0);
    D_801FCA20.unk_00 = arg0;
    return 0;
}

s32 func_8008BFE0(s32 arg0) {
    D_801FC9A0 = (s32) ((f32)D_801FCA20.unk_00 / (f32)arg0) + 1;
    return 0;
}

s32 func_8008C01C(void) {
    return alCSPGetTempo((ALCSPlayer*)D_800FF614);
}

s32 func_8008C040(s32 arg0) {
    if (arg0 > 0) {
        D_801FC9A8 = arg0;
        D_801FC9B4 = 1;
    } else {
        D_801FC9B4 = 0;
    }
    return 0;
}

void func_8008C070(s32 arg0) {
    if (arg0 != 0) {
        D_800FF5FC = 1;
        return;
    }
    D_800FF5FC = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008C094.s")

void func_8008C1C8(s32* arg0) {
    s32 sp4C = *arg0;

    if ((gSelectedCharacters[0] == CHARA_WHITE) && (gameModeCurrent == 0)) {
        if ((D_80176F58 == 0) && (D_801B1EEC != 0)) {
            if ((D_801B1EEE != 0) && (gCurrentStage != 8)) {
                func_80061308(255, 255, 0, 255, 255, 0, 0, 255, 255, 255, 0, 255, 255, 0, 0, 255);
                func_8005AFD0(276.0f, 204.0f, 0.0f, 0.0f, 1.0f, 16.0f, 16.0f, 0.0f, 75);
            }
        }
    }

    func_8008AD30();
    func_8008C094();
    func_8008A2EC();
    func_8008A2B0();
    func_8008D060();
    func_8008C438();
    *arg0 = sp4C;
}

void func_8008C330(s32 arg0) {
    func_8008BD98(D_800FF854[arg0]);
}

void func_8008C35C(s32 arg0) {

}

s32 func_8008C364(Actor* arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v0;

    if (gameModeCurrent == 7) {
        var_v0 = func_80087ED0(arg1, 0, 0, 0, 1, 0x10);
    } else {
        var_v0 = func_80087ED0(arg1, &arg0->pos.x, &arg0->pos.y, &arg0->pos.z, 0, 0);
    }
    return var_v0;
}

void func_8008C3F0(Actor* arg0, s32 arg1, s32 arg2) {
    func_80087ED0(arg1, &arg0->pos.x, &arg0->pos.y, &arg0->pos.z, 1, 0);
}

s32 func_8008C438(void) {
    return 0;
}

void func_8008C440(void) {
    D_800FF89C = (u32) osGetTime();
}

void func_8008C464(void) {
    D_800FF898 = osGetTime() - D_800FF89C;
}

void func_8008C494(void) {
    D_800FF8A8 = (u32) osGetTime();
}

void func_8008C4B8(void) {
    D_800FF8A4 = osGetTime() - D_800FF8A8;
}

void func_8008C4E8(void) {
    D_800FF8A0 = osGetTime() - D_800FF89C;
    D_801B316C = (f32) (D_800FF8A0 / D_8010F410);
}

void func_8008C554(void) {
    D_800FF8AC = osGetTime() - D_800FF8A8;
}

void func_8008C584(void) {
    OSMesg sp2C;

    while (1) {
        if (osRecvMesg(&D_801B3120, &sp2C, 0) == -1) {
            continue;
        }
        if (sp2C == NULL) {
            DummiedPrintf(D_8010D940, sp2C);
            break;
        } else {
            DummiedPrintf(D_8010D964, sp2C);
        }
    }
}

void func_8008C610(void) {
    while (1) {
        if (osRecvMesg(&D_801B3120, NULL, 0) == -1) {
            break;
        }
    }
    func_8008C584();
    D_800FF884 = osGetTime();
    func_8008C584();
    D_800FF884 = osGetTime() - D_800FF884;
    DummiedPrintf(D_8010D968, D_800FF884);
}

void func_8008C698(void) {
    D_800FF88C = osGetCount();
    D_800FF888 = D_800FF88C - D_800FF8A8;
}

void func_8008C6D4(void) {
    D_800FF890[D_800FF8BC] = osGetCount() - D_800FF88C;
}

void func_8008C714(void) {
    D_800FF8B8 = osGetTime();
    D_801B3168 = D_800FF8B8 - D_800FF8A8;
}

void func_8008C750(void) {
    D_800FF8B4 = osGetTime() - D_800FF8B8;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/PutDList.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008C940.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/strcpy.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008CC48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008CCDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008CCF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008CD50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/TaskInit.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008CE94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/bzero32.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008CF6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008D060.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008D114.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008D168.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008D5DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008D6B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008D6E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008D7B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008D7FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008D950.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008DAB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008DB24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008DB90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008E314.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008E488.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008E5FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008E698.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008E7B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008E840.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008E9AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008EA60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008EB08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008EBCC.s")

s32 func_8008EC90(void) {
    if (D_801B3540 == 1) {
        return 0;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008ECB8.s")

void func_8008EF78(s32 arg0) {
    func_8008ECB8();
    func_8008CCDC(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008EFA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008F050.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008F114.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008F16C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008F694.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008F710.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008F7A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008F814.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008F900.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/ParseIntToBase10.s")
//parse int to hex string
#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/parseIntToHex.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008FB4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008FBC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008FC34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008FD04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008FD68.s")

void func_8008FDF8(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008FE00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008FE50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008FEA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008FF84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/MainLoop.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800908C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80090B10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80090BC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80090C54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80090CB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80090D28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80090E2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80090E78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800910E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800911D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009131C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80091390.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80091420.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800914CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80091548.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800915C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80091694.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80091758.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800917A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800919D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80091A38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80092208.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80092254.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80092324.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009236C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009244C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80092474.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800925A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80092690.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009273C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800927A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800927E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80092864.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009288C.s")

void func_800928F0(s32 arg0) {

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800928F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80092990.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80092A64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80092C0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80092C54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80092D68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80092E10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80092E9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80092F44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80092FB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80092FEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80093110.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009319C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80093260.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009336C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800933CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80093500.s")

void func_800935F8(s32 arg0) {

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80093600.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800937FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009384C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800938B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800938E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800939B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80093A98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80093B7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80093CD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80093DE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80093ECC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80093FC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009403C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800940B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80094120.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800941C0.s")

void func_80094220(s32 arg0) {

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80094228.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009430C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80094410.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800944C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80094540.s")

void func_800945E4(s32 arg0) {

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800945EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800946F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800947B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009483C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009489C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80094958.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800949D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80094ABC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80094B2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80094BDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80094C84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80094D64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80094DBC.s")

void func_80094E0C(s32 arg0) {

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80094E14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80094FC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800950C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80095184.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80095264.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80095500.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009553C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80095780.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80095A3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80095D38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80095E44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80095EC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009603C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80096128.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/loadStageByIndex.s")

void func_800966E0(void) {
    D_80100F50[1].base_address = (u32)&D_803B5000 - _ALIGN((u32)&D_1045C00 - (u32)&D_1000000, 16);
    D_80100F50[1].unk4 = (u32)&D_803B5000;
    D_801FFB78 = func_8009603C(gSelectedCharacters[0] + 8, D_80100F50[1].base_address);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80096748.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009678C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80096898.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80096964.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80096A20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80096CA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80096D40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80097414.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80097498.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80097508.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80097540.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80097624.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80097794.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80097910.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80097CF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80097D1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800983C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80098684.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80098F50.s")

void func_80099570(s32 arg0) {
    func_800983C8();
    func_80098F50(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80099598.s")

void func_8009960C(tempStruct1* arg0) {
    arg0->function = &func_8009961C;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009961C.s")

void func_8009984C(u16* arg0) {
    arg0[52] = 0xFF;
    func_80099570((s32) arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80099870.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800998CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800998DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80099AF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009A57C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009A64C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009A724.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009A868.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009A988.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/MakeSaveMaster.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009ABF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009AC74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009ACC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009AD74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009ADDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009AE38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009AF98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009AFFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009B08C.s")

void func_8009B120(s32 arg0) {

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/FileWork.s")

void func_8009B45C(s32 arg0) {

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009B464.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/MakeLoadMaster.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009B914.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009BA38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009BAF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009BB54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009BBD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009BC30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009BC60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009BC98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009BCF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009BDA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009BDC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009BDE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009BEC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009BFA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009BFF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009C038.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009C19C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009C278.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009C2FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009C33C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009C394.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009C4E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009C644.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009C6AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009C700.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009C74C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009C828.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009C904.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009CB14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009CBC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009CFA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009D08C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009D0EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009D19C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009D1CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009D45C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009D954.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009DA20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009DB98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009DC40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009DDEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009DE1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009E24C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009E2B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009E300.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009E504.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009E6D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009E784.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009E82C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009EE44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009F0C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009F1B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009F314.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009F5B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009F7F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009F890.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A02C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A0354.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A03B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A07E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A0810.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A0D90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A0E3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A0EB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A0EE8.s")

void func_800A10E8(s32 arg0) {

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A10F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A18C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A191C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A1944.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A1B34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A1CCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A1D38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A1EC4.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A1F3C.s")
char* parseIntToHex(s32, s32, char*);
extern char D_8010E954[];
extern s32 perfectCode;

// To do with the perfect code
void func_800A1F3C(s32 arg0) {
    char sp50[38];

    func_80061308(0xFF, 0x90, 0xF2, 0xFF, 0xFF, 0x38, 0x64, 0xFF, 0xFF, 0x90, 0xF2, 0xFF, 0xFF, 0x38, 0x64, 0xFF);
    func_80080430(144.0f, 24.0f, 0.0f, 0.7f, 0.0f, 0.0f, D_8010E954, 1);
    func_80061308(0x90, 0xF2, 0xFF, 0xFF, 0x38, 0x64, 0xFF, 0xFF, 0x90, 0xF2, 0xFF, 0xFF, 0x38, 0x64, 0xFF, 0xFF);
    func_80080430(160.0f, 40.0f, 0.0f, 0.7f, 0.0f, 0.0f, parseIntToHex(perfectCode, 8, sp50), 1);
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A20CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A2164.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A22D4.s")

void func_800A250C(unkarg0* arg0) {
    if (arg0->unk6A > 0) {
        func_80061308(0x6EU, 0xD2U, 0xFF, 0xFF, 0, 0xDE, 0, 0xFF, 0x6E, 0xD2, 0xFF, 0xFF, 0, 0xDE, 0, 0xFF);
        func_800803F0(72.0f, 176.0f, 0.0f, 1.0f, D_8010E9D0, 1);
    }
    
    arg0->unk6A++;
    
    if (arg0->unk6A >= 0x11) {
        arg0->unk6A = -0xA;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A25F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A272C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A27B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A28B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A2B9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A2BDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A2D84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A2E18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A2EF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A38B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A3928.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A3990.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A39EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A3DC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A3E04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A4074.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A41C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A4320.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A4484.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A44D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A46BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A4820.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A4868.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A4904.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A49B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A4A10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A4A64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A4BCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A4D0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A4D58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A4EC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A5060.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A50B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A51DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A5444.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A5488.s")

void func_800A54EC(s32 arg0) {

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A54F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A5524.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A5570.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A56D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A5778.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A57DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A6B34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A6B80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A6C04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A6CF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A6D40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A6DD8.s")

extern char D_8010ECBC[];
extern char D_8010ECCC[];

s32 func_800A72E8(s32 arg0) {
    s32 i, j;
    //needed for reg alloc
    s32 zero = 0;

    if (arg0 < 0) {
        DummiedPrintf(D_8010ECBC, arg0); //無効ＩＤ(%d)\n    //invalid ID (%d)\n
        return -1;
    }

    j = 0;
    for (i = zero; i < 50; i++) {
        if (arg0 == D_801FCFD8[i].index) {
            j++;
            if (osRecvMesg(&D_801FCA50[i], NULL, 0) != -1) {
                j--;
                D_801FCFD8[i].index = -1;
            }
        }
    }
    
    DummiedPrintf(D_8010ECCC, arg0, j); //Id(%d)残り %d\n     //Id(%d)%d\n remaining
    
    if (j > 0) {
        return 0;
    }
    
    return 1;
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A73EC.s")

s32 dma_copy(void* arg0, void* arg1, s32 size) {
    s32 dmaSizeCalc;
    s32 j;
    s32 i;
    s32 temp_v0;

    dmaSizeCalc = (size / 20480) + 1;

    DummiedPrintf(D_8010ECF8, dmaSizeCalc );
    for (i = 0, j = 0; i < ARRAY_COUNT(D_801FCFD8); i++) {
        if (D_801FCFD8[i].index < 0) {
            j++;
            if (!(j < dmaSizeCalc )) {
                break;
            }
        }
    }
    
    if (i >= ARRAY_COUNT(D_801FCFD8)) {
        DummiedPrintf(D_8010ED04);
        return -1;
    }
    
    osInvalICache(arg1, size);
    osInvalDCache(arg1, size);
    
    temp_v0 = func_800A73EC(arg0, arg1, size, dmaSizeCalc );

    if (temp_v0 < 0) {
        DummiedPrintf(D_8010ED0C);
        DummiedPrintf(D_8010ED20);
    } else {
        DummiedPrintf(D_8010ED2C, arg0, arg1, size);
        DummiedPrintf(D_8010ED48, ((s32)arg1 + size));
        DummiedPrintf(D_8010ED58, temp_v0);
    }
    return temp_v0;
}

s32 func_800A772C(void* arg0, void* arg1, s32 size) {
    s32 dmaSizeCalc;
    s32 j;
    s32 i;
    s32 temp_v0;

    dmaSizeCalc = (size / 20480) + 1;

    DummiedPrintf(D_8010ED5C, dmaSizeCalc );
    for (i = 0, j = 0; i < ARRAY_COUNT(D_801FCFD8); i++) {
        if (D_801FCFD8[i].index < 0) {
            j++;
            if (!(j < dmaSizeCalc )) {
                break;
            }
        }
    }
    
    if (i >= ARRAY_COUNT(D_801FCFD8)) {
        return -1;
    }
    
    DummiedPrintf(D_8010ED68, arg0, arg1, size);
    DummiedPrintf(D_8010ED84, (s32)arg1 + size);    
    osInvalICache(arg1, size);
    osInvalDCache(arg1, size);
    
    temp_v0 = func_800A73EC(arg0, arg1, size, dmaSizeCalc );

    if (temp_v0 < 0) {
        DummiedPrintf(D_8010ED94);
    }
    return temp_v0;
}

void func_800A7844(void) {
    s32 i;
    D_801FD558 = 0;
    
    for (i = 0; i < ARRAY_COUNT(D_801FCA50); i++) {
        osCreateMesgQueue(&D_801FCA50[i], &D_801FCF08[i], 1);
        D_801FCFD8[i].index = -1;
    }
}

s32 func_800A78D0(void) {
    s32 i;
    s32 j = 0;
    
    for (i = 0; i < ARRAY_COUNT(D_801FCA50); i++) {
        if (D_801FCFD8[i].index >= 0) {
            if (osRecvMesg(&D_801FCA50[i], NULL, 0) != -1) {
                D_801FCFD8[i].index = -1;
                //TODO fake match
                do {
                    j++;
                } while (0);
            }
        }
    }

    return j;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/DMAStruct_Print.s")
//the following three programs are used in generating the "Perfect Code"
s32 func_800A7A18(u32 arg0) {
    s32 i;
    s32 j;

    for (i = 0, j = 0; i < 32; i++) {
        if (((i < 7) || (i >= 0xF)) && ((arg0 >> i) & 1)) {
            j++;
        }
    }
    return j;
}
//this takes (u32)osGetTime() as the arg
#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/GeneratePerfectCode.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A7C58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A7D64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A7DD0.s")

//color
s32 func_800A7E78(u8* arg0) {
    s32 color = arg0[0] & 15;
    color <<= 8;
    color += arg0[1];
    color <<= 8;
    color += arg0[2];
    return color;
} 

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A7E9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A7ED0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A7F70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A80C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A81E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/SaveData_Compare.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A832C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A83E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A847C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A850C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A85D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A8668.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A870C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A878C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A87D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A881C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A8944.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A8988.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A8AF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/SetLevelBitfeild.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A8DF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A903C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A9298.s")
//Supposed to print the players' button/joystick input.
#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A93AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A9450.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A9690.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A96DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A9728.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A97E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A988C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/IniDemo.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A9F84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AA3F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AA844.s")
//between these funcs in US1.0 is a program printing part of the c script.
// as well as a few other funcs.
#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AA86C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AAAC8.s")

void func_800AAB0C(s32 arg0) {
    s32 dmaResult;
    s32 dmaSize;
    s32 i;
    DMAStruct_Print();
    loadStageByIndex(arg0);
    DMAStruct_Print();
    _bzero(gPlayerActors, sizeof(gPlayerActors)); //sizeof 4 player actors
    _bzero(&gCamera, sizeof(gCamera));
    D_80168DA0 = 1;
    gPlayerActors[0].active = 1;
    gPlayerActors[1].active = 0;
    gPlayerActors[2].active = 0;
    gPlayerActors[3].active = 0;
    D_80175668[0] = 0;
    func_8002E0CC();
    InitField();
    func_80056EB4();
    aa1_InitHead();
    func_8005C9B8();
    func_80084788();
    func_80055FA4();

    for (i = 0; i < 4; i++) {
        D_801756C0[i] = 0;
        D_80175678[i] = 0;
    }

    D_801FCA10 = 0x10A9;
    dmaSize = D_F0042B0 - D_F000000;
    D_80100FD0 = 1;
    D_80200C8C = func_80056EE4(dmaSize);
    if (D_80200C8C == NULL) {
        osSyncPrintf(D_8010F1EC, D_80200C8C);
    } else {
        dmaResult = dma_copy(&D_AB10B0, D_80200C8C, dmaSize);
        if (dmaResult < 0) {
            osSyncPrintf(D_8010F1FC);
        } else {
            while (func_800A72E8(dmaResult) == 0) {}
        }
    }
    //TODO fake match
    if (gPlayerActors){}
    DMAStruct_Print();
    D_80200C94 = D_80200C8C;
    D_80200C84.unk0 = 0;
    D_80200C84.unk2 = 0xFFFF;
    D_80200C84.unk4 = 0;
    D_80200C84.unk5 = 0;
    D_8017499C = 0;
    D_80174998 = 0;
    func_800AAAC8();
    D_80168DE4 = 0.0f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AACFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AB0B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AB45C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/PlayerInits_Copy.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AB734.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AD980.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800ADA84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800ADC50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800ADE24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800ADE70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AE158.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AE28C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AE4AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AE690.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AE770.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AE82C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AE87C.s")

s32 func_800AE8E4(unk802018D8* arg0, unk802018D8* arg1) {
    if ((f64) arg1->unk_0C < (f64) arg0->unk_00) {
        return 0;
    }
    if ((f64) arg0->unk_0C < (f64) arg1->unk_00) {
        return 0;
    }
    if ((f64) arg1->unk_10 < (f64) arg0->unk_04) {
        return 0;
    }
    if ((f64) arg0->unk_10 < (f64) arg1->unk_04) {
        return 0;
    }
    if ((f64) arg1->unk_14 < (f64) arg0->unk_08) {
        return 0;
    }
    if ((f64) arg0->unk_14 < (f64) arg1->unk_08) {
        return 0;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AE9E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AEAA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AEB48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AEDB4.s")