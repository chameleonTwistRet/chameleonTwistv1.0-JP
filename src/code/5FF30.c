#include "common.h"
#include "PR/libaudio.h"
//AOF=759

typedef struct tempStruct {
/* 0x00 */ char unk_00[60];
/* 0x3C */ Vec3f unk_3C;
} tempStruct;

typedef struct tempStruct1 {
/* 0x00 */ s32 unk_00;
/* 0x04 */ s32 unk_04;
/* 0x08 */ s32 (*function) (void);
} tempStruct1;

//jump table
#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80084B30.s")

void func_80084F80(s32 arg0, s32 arg1) {
    D_801B3138 = arg0;
    D_800FF5D0 = arg1;
    func_800DC400(&D_801B3120, 3, 0);
}

void func_80084FC0(s32 arg0) {
    D_801B3140 = arg0;
    func_800DC400(&D_801B3120, 5, 0);
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

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80085C20.s")

//os
#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80085C90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80085D14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80085D98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80086710.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80086C20.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800885EC.s")

s32 func_80088698(s32 arg0) {
    unk0* temp_v0 = func_80086EB4(arg0);

    if (temp_v0 == 0) {
        return -1;
    }

    temp_v0->unk20 |= 0x20;
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800886D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008873C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800887F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80088B7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800893C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80089BA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80089E24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008A208.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008A2B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008A2EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008AD30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008B458.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008BA58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008BD98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008BE14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008BEDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008BF20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008BFA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008BFE0.s")

void func_8008C01C(void) {
    func_800DF680(D_800FF614);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008C040.s")

void func_8008C070(s32 arg0) {
    if (arg0 != 0) {
        D_800FF5FC = 1;
        return;
    }
    D_800FF5FC = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008C094.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008C1C8.s")

void func_8008C330(s32 arg0) {
    func_8008BD98(D_800FF854[arg0]);
}

void func_8008C35C(s32 arg0) {

}

s32 func_8008C364(Actor* arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v0;

    if (D_800FFEB4 == 7) {
        var_v0 = func_80087ED0(arg1, 0, 0, 0, 1, 0x10);
    } else {
        var_v0 = func_80087ED0(arg1, &arg0->posX, &arg0->posY, &arg0->posZ, 0, 0);
    }
    return var_v0;
}

void func_8008C3F0(Actor* arg0, s32 arg1, s32 arg2) {
    func_80087ED0(arg1, &arg0->posX, &arg0->posY, &arg0->posZ, 1, 0);
}

s32 func_8008C438(void) {
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008C440.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008C464.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008C494.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008C4B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008C4E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008C554.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008C584.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008C610.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008C698.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008C6D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008C714.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008C750.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008C780.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008C940.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008CC18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008CC48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008CCDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008CCF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008CD50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008CDC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008CE94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008CEC4.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008F974.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8008FA44.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_80090684.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800961F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800966E0.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009AA08.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009B128.s")

void func_8009B45C(s32 arg0) {

}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009B464.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_8009B6CC.s")

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
char* func_8008FA44(s32, s32, char*);
extern char D_8010E954[];
extern s32 perfectCode;

// To do with the perfect code
void func_800A1F3C(s32 arg0) {
    char sp50[38];

    func_80061308(0xFF, 0x90, 0xF2, 0xFF, 0xFF, 0x38, 0x64, 0xFF, 0xFF, 0x90, 0xF2, 0xFF, 0xFF, 0x38, 0x64, 0xFF);
    func_80080430(144.0f, 24.0f, 0.0f, 0.7f, 0.0f, 0.0f, D_8010E954, 1);
    func_80061308(0x90, 0xF2, 0xFF, 0xFF, 0x38, 0x64, 0xFF, 0xFF, 0x90, 0xF2, 0xFF, 0xFF, 0x38, 0x64, 0xFF, 0xFF);
    func_80080430(160.0f, 40.0f, 0.0f, 0.7f, 0.0f, 0.0f, func_8008FA44(perfectCode, 8, sp50), 1);
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A20CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A2164.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A22D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A250C.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A72E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A73EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A75E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A772C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A7844.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A78D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A7988.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A7A18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A7AD4.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A8288.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A8C7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A8DF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A903C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A9298.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A93AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A9450.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A9690.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A96DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A9728.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A97E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A988C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A9CA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800A9F84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AA3F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AA844.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AA86C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AAAC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AAB0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AACFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AB0B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AB45C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AB59C.s")

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

s32 func_800AE8E4(func_800AE8E4Compare* arg0, func_800AE8E4Compare* arg1) {
    if ((f64) arg1->unkC < (f64) arg0->unk0) {
        return 0;
    }
    if ((f64) arg0->unkC < (f64) arg1->unk0) {
        return 0;
    }
    if ((f64) arg1->unk10 < (f64) arg0->unk4) {
        return 0;
    }
    if ((f64) arg0->unk10 < (f64) arg1->unk4) {
        return 0;
    }
    if ((f64) arg1->unk14 < (f64) arg0->unk8) {
        return 0;
    }
    if ((f64) arg0->unk14 < (f64) arg1->unk8) {
        return 0;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AE9E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AEAA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AEB48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AEDB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AEEC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AF260.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AF2A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AF604.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AF62C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AF658.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AF9D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AFB2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AFB88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800AFC6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B06B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B0764.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B07E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B088C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B08C8.s")

void func_800B09C0(s32 arg0, f32* arg1) {
    func_800B56D4(arg1[10], arg1[11]);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B09E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B0A30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B0AA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B0B20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B101C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B118C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B12B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B1538.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B1DA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B1DD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B2070.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B2144.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B216C.s")

void func_800B21CC(s32 arg0, s32 arg1) {
    func_800BE2C0();
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B21F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B2220.s")

s32 func_800B2260(s32* value) {
    return (*value != 0 && *value < 95) ? 1 : 0;
}

s32 func_800B2288(s32* value) {
    return (*value >= 95 ) ? 1 : 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B22AC.s")

void func_800B22E8(s32* arg0) {
    func_800B22AC(*arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B2308.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B2470.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B2510.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B255C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B2AB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B2B50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B2BBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B2C58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B2CC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B2D10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B2D34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B2D78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B2E40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B3364.s")

//rains 7 month old bool checker
s32 func_800B340C(s32 value) {
    return ( value >= 0 ) ? 1 : 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B3424.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B3484.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B34D0.s")

s32 func_800B3540(void) {
    return 1 - func_800B34D0();
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B3564.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B35B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B35FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B3648.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B3698.s")

void func_800B37D8(void) {
    D_8020D854 = 0;
    D_8020D85C = 0;
    D_8020D860 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B37F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B39EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B3AAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B3B68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B3D38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B3D9C.s")

//if zero
s32 func_800B3DFC(s32* value) {
    return (*value == 0 ) ? 1 : 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B3E1C.s")

//what the fuck
s32 func_800B3E7C(s32* value) {
    return (*value == 0 ) ? 1 : 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B3E9C.s")

//why are they all the same thing
s32 func_800B3EFC(s32* value) {
    return (*value == 0 ) ? 1 : 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B3F1C.s")

//if less than zero
s32 func_800B3F7C(s32* value) {
    return (*value < 0 ) ? 1 : 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B3F9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B3FFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B402C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B4070.s")

void func_800B40F4(s32* arg0) {
    arg0[5] = 0;
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B40FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B4140.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B417C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B4264.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B4408.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B4574.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B47DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B4884.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B4A3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B4B34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B4BDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B4DB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B4F14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B4FCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B505C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B5224.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B5314.s")

void func_800B5600(void) {
    D_802025B0 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B560C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B5640.s")

void func_800B56D4(f32 arg0, f32 arg1) {
    D_8010881C = arg0;
    D_80108820 = arg1;
}


#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B56E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B5878.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B5908.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B59F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B5A98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B5C60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B5D68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B5E40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B5ED0.s")

void func_800B602C(s32* arg0, s32 arg1) {
    arg0[43] = arg1 - 60;
    arg0[44] = 1;
}

void func_800B6040(s32* arg0) {
    arg0[43] = 60;
    arg0[44] = 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B6054.s")

void func_800B6078(tempStruct* arg0) {
    func_800D8198(&arg0->unk_3C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B6098.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B61FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B67D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B691C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B6B14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B6B4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B6C34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B6CD8.s")

void func_800B6D24(tempStruct* arg0) {
    func_800D8198(&arg0->unk_3C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B6D44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B6DF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B7208.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B7328.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B7860.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B78F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B80A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B81B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B81FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B83D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B8634.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B87A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B9078.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B9298.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B9390.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B942C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B9514.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B9750.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B97F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B9E8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800B9FA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BA2D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BA35C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BA89C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BA900.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BA92C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BAA28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BAC44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BAFA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BB038.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BB178.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BB254.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BB354.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BB4A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BB5DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BB64C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BB988.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BBA80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BBC88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BBCE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BBF80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BC284.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BCC04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BCD10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BD1EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BD2AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BD55C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BD608.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BD634.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BD718.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BD938.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BDF2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BE000.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BE0D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BE1C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BE24C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BE264.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BE2A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BE2C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BE370.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BE474.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BE550.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BE580.s")

void func_800BE664(s32* arg0) {
    if (arg0[71] == 4) {
        arg0[71] = 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BE680.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BE714.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BE7BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BE7F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BE87C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BE8D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BE9DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BEF6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BF1BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BF268.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BF2E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BF374.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BF4AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BF524.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BF5A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BF5E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BF84C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BF928.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BFCD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BFD64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800BFDF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C0274.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C04D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C04F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C0760.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C08B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C09AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C0AEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C0B74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C0CDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C0E78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C0F1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C1204.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C1458.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C1510.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C1550.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C15AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C1810.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C198C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C1B70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C1BF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C1C64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C1CE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C250C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C2670.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C2820.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C29D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C2A00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C2C34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C2F48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C2FA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C325C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C38E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C3958.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C3B50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C3DCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C3E94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C4040.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C43AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C4594.s")


//alotta unks
//https://decomp.me/scratch/XCUmg
#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C48B8.s")

//subroutine variables
#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C4968.s")

//subroutine variables
#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C4B1C.s")

//subroutine variables
#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C4C48.s")

//really big wow
#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C4CAC.s")

//jump table
#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C4DF8.s")

//really big wow
#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C5304.s")

void func_800C54F8(huh* arg0, s32* arg1) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    *arg1 = 0;
}

void func_800C5508(playerActor* arg0) {
    arg0->canJump = 0;
    arg0->groundMovement = 2;
    arg0->globalTimer = (f32) ((f64) arg0->globalTimer + 1.5);
}

void func_800C5538(playerActor* arg0) {
    arg0->canJump = 0;
    arg0->groundMovement = 1;
    arg0->globalTimer = (f32) ((f64) arg0->globalTimer + D_8010FFF8);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C5564.s")
/*
doesnt build for SOME reason
void func_800C5564(playerActor* arg0) {
    arg0->canJump = 0;
    arg0->groundMovement = 0;
    arg0->globalTimer = (f32) ((f64) arg0->globalTimer + D_80110000);
}*/

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C558C.s")

//jump table
#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C56D4.s")

void func_800C88AC(void) {
    s32 var = 1;
    if (D_80108B68 == 0) {
        D_80108B68 = var;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FF30/func_800C88D0.s")
/*
"illegal combination of pointer and integer"
void func_800C88D0(void) {
    func_800C56D4(&D_80168DA8);
}*/