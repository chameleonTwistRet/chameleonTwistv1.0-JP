#include "common.h"

//static u8 D_80176810[4];
//static u8 D_80176814[4];
//static u8 D_80176818[4];

char D_80175870[0xFA0];
u8 D_80176810;
u8 D_80176811;
u8 D_80176812;
u8 D_80176813;
u8 D_80176814;
u8 D_80176815;
u8 D_80176816;
u8 D_80176817;
u8 D_80176818;
u8 D_80176819;
u8 D_8017681A;
u8 D_8017681B;

//data
s16 sDebugPerfectCodeFlag = 1;
s32 sDebugMultiplayer = 0;
s16 sDebugLevelAccess = -1;
s16 sDebugBitfeild = 0;
s32 sDebugInt = -1;
s16 sStageCrownTotals[] = {25, 25, 21, 24, 23, 23};

u8 debug_pad = 0;

s16 D_800F06C6 = 0;
f32 D_800F06C8[] = {
    1.299999952,
    1.200000048,
    1,
    0.6999999881,
    2
};
u8 gSelectedCharacters[4] = {0, 1, 2, 3};
s16 D_800F06E0[] = {-1, 0};
s16 D_800F06E4[] = {-1, 0};
s32 sGameModeStart = 18;

//value hooked onto the LoadStageByIndex call with D_80174878 to overwrite it
s32 sDebugStageOverride = -1;

s32 D_800F06F0 = -1;
s32 D_800F06F4 = -1;
s32 D_800F06F8 = -1;
s32 D_800F06FC = -1;
s32 D_800F0700 = -1;
s32 D_800F0704 = 0;
s16 D_800F0708[] = {-1, 0};
f32 D_800F070C = 0;
f32 D_800F0710 = 0;
f32 D_800F0714 = 0;
f32 sDebugPlayerHeights[4] = {0, 0, 0, 0};
u32 sDebugViewType = 0;
u32 sDebugViewZoomOut = 1000;
u32 sDebugViewRotate = 0;

//smth like this
char D_800F0734[][100] = {
    "ひだりうえ",
    "ひだりした",
    "みぎうえ",
    "みぎした"
};
s32 D_800F08C4 = 0;
s32 D_800F08C8[] = {0, 0};
s32 D_800F08D0 = 0;
char D_800F08D4[100] = "SPR_s0_leaf70";
char D_800F0938[100] = "SPR_s0_leaf71";
s32 D_800F099C[] = {0, 0};
s32 D_800F09A4 = 0;
char D_800F09A8[][100] = {
    "ITEM_VITAL",
    "ITEM_3VITAL",
    "ITEM_MAXVITAL",
    "ITEM_COLLECT",
};
s32 sDebugTestView = 0;
u32 sDebugCodeSeqStep = 0;
s32 D_800F0B40[] = {0, 0, 0, 0};
//

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
/* 0x18 */ f32 UNK_28;
} unkarg0_2;


#pragma GLOBAL_ASM("asm/nonmatchings/code/debug/Debug_MovePlayer.s")

extern s32 D_802478E0;

void Debug_ChangeRoom(void) {
    s32 shouldChangeRoom;

    if (func_80055E5C(2) != 0) {
        shouldChangeRoom = TRUE;
        gCurrentZone--;
    }
    if (func_80055E5C(1) != 0) {
        shouldChangeRoom = TRUE;
        gCurrentZone++;
    }
    if (gCurrentZone < 0) {
        gCurrentZone = D_802478E0 - 1;
    }
    if (gCurrentZone >= D_802478E0) {
        gCurrentZone = 0;
    }
    //@bug variable could be uninitialized
    if (shouldChangeRoom == 1) {
        if (isInOverworld == FALSE) {
            func_800C1458(gCurrentZone);
            return;
        }
        func_800C29D8(gCurrentZone);
    }
}

void Debug_NOOP(void) {
}

//https://decomp.me/scratch/MZIQO
#pragma GLOBAL_ASM("asm/nonmatchings/code/debug/Debug_ChangeView.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/debug/func_8004EF5C.s")

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
//         SetTextGradient(D_80176810[0], D_80176814[0], D_80176818[0], 0xFF, D_80176810[1], D_80176814[1], D_80176818[1], 0xFF, D_80176810[2], D_80176814[2], D_80176818[2], 0xFF, D_80176810[3], D_80176814[3], D_80176818[3], 0xFF); PrintNumberWR(180.0f, (i + 2) * 0x20, 0.0f, 0.5f, D_80176810[i], 3, 0);
//         SetTextGradient(D_80176810[0], D_80176814[0], D_80176818[0], 0xFF, D_80176810[1], D_80176814[1], D_80176818[1], 0xFF, D_80176810[2], D_80176814[2], D_80176818[2], 0xFF, D_80176810[3], D_80176814[3], D_80176818[3], 0xFF);
//         PrintNumberWR(210.0f, (i + 2) * 0x20, 0.0f, 0.5f, D_80176814[i], 3, 0);
//         SetTextGradient(D_80176810[0], D_80176814[0], D_80176818[0], 0xFF, D_80176810[1], D_80176814[1], D_80176818[1], 0xFF, D_80176810[2], D_80176814[2], D_80176818[2], 0xFF, D_80176810[3], D_80176814[3], D_80176818[3], 0xFF);
//         printNumber(240.0f, (i + 2) * 0x20, 0.0f, 0.5f, D_80176818[i], 3, 0);
//     }

//     SetTextGradient(D_80176810[0], D_80176814[0], D_80176818[0], 0xFF, D_80176810[1], D_80176814[1], D_80176818[1], 0xFF, D_80176810[2], D_80176814[2], D_80176818[2], 0xFF, D_80176810[3], D_80176814[3], D_80176818[3], 0xFF);
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

#pragma GLOBAL_ASM("asm/nonmatchings/code/debug/func_8004F61C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/debug/func_8004FA5C.s")

void func_8004FE90(unkarg0_2* arg0, f32 arg1, f32 arg2, f32 arg3, f32* arg4, f32* arg5, f32* arg6) {
    *arg4 = (arg0->unk_20 * arg3) + ((arg0->unk_00 * arg1) + (arg0->unk_10 * arg2));
    *arg5 = (arg0->unk_24 * arg3) + ((arg0->unk_04 * arg1) + (arg0->unk_14 * arg2));
    *arg6 = (arg0->UNK_28 * arg3) + ((arg0->unk_08 * arg1) + (arg0->unk_18 * arg2));
}

void func_8004FF1C(unkarg0_2* arg0, f32* arg1, f32* arg2) {
    *arg1 = (arg0->unk_24 * 100.0f) + (arg0->unk_14 * 0);
    *arg2 = (arg0->UNK_28 * 100.0f) + (arg0->unk_18 * 0);
}

void func_8004FF64(unkarg0_2* arg0, f32* arg1, f32* arg2) {
    *arg1 = (arg0->unk_20 * 100.0f) + (arg0->unk_00 * 0);
    *arg2 = (arg0->UNK_28 * 100.0f) + (arg0->unk_08 * 0);
}

void func_8004FFAC(unkarg0_2* arg0, f32* arg1, f32* arg2) {
    *arg1 = (arg0->unk_10 * 0) + (arg0->unk_00 * 100.0f);
    *arg2 = (arg0->unk_14 * 0) + (arg0->unk_04 * 100.0f);
}

void Debug_ZeroInt(void) {
    sDebugInt = 0;
}

void Debug_TestView(void) {
    s32 *temp = &sDebugTestView;
    if (func_80055E5C(R_TRIG) != 0) {
        *temp ^= 1;
    }
    if (sDebugTestView != 0) {
        setPrimColor(0, 0, 0, 255);
        printUISprite(0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 320.0f, 180.0f, 0.0f, SPRITE_BLANK);
        func_8007B480(0.0f, 0.0f, 0.0f, 0.0f, 400.0f, 2000.0f);
        func_8007B4CC(0.0f, 120.0f, 0.0f, 0.0f, 120.0f, 0.0f);
        printUISprite(32.0f, 32.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, SPRITE_BATTLE_BIGBOARD);
        SetTextGradient_TopBottom(191,  10, 0, 255, 200, 200, 0, 255);
        PrintTextWrapper(64.0f, 32.0f, 0.0f, 1.0f, "ＴＥＳＴＶＩＥＷ", 1);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/debug/debugMain.s")