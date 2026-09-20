#include "common.h"
#include "sprite.h"

typedef struct unkTextStruct {
    char strings[4][0x64];
} unkTextStruct;

void func_8007B434(f32, f32, f32, f32, f32, f32);

//static u8 D_80176810[4];
//static u8 D_80176814[4];
//static u8 D_80176818[4];

typedef struct DebugPlacement {
    /* 0x00 */ Vec3f pos;
    /* 0x0C */ char unk_0C[8];
} DebugPlacement; // size = 0x14

DebugPlacement sDebugPlacements[2][100];
u8 D_80176810[4];
u8 D_80176814[4];
u8 D_80176818[4];

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
s16 D_800F06E0 = -1;
s16 D_800F06E4 = -1;
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
f32 sDebugLayoutOffsetX = 0;
f32 sDebugLayoutOffsetY = 0;
f32 sDebugLayoutOffsetZ = 0;
f32 sDebugPlayerHeights[4] = {0, 0, 0, 0};

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


void Debug_MovePlayer(void) {
    s32 i;

    if (gContMain->buttons0 & L_TRIG) {
        for (i = 0; i < PLAYERS_MAX; i++) {
            gPlayerActors[i].pos.y = sDebugPlayerHeights[i];
        }
    } else {
        for (i = 0; i < PLAYERS_MAX; i++) {
            sDebugPlayerHeights[i] = gPlayerActors[i].pos.y;
        }
    }
    if (Debug_GetButtonRepeatWithL(U_JPAD) != 0) {
        gPlayerActorPtr[0].pos.z -= 100.0f;
    }
    if (Debug_GetButtonRepeatWithL(D_JPAD) != 0) {
        gPlayerActorPtr[0].pos.z += 100.0f;
    }
    if (Debug_GetButtonRepeatWithL(L_JPAD) != 0) {
        gPlayerActorPtr[0].pos.x -= 100.0f;
    }
    if (Debug_GetButtonRepeatWithL(R_JPAD) != 0) {
        gPlayerActorPtr[0].pos.x += 100.0f;
    }
    if (Debug_GetButtonRepeatWithL(U_CBUTTONS) != 0) {
        for (i = 0; i < PLAYERS_MAX; i++) {
            sDebugPlayerHeights[i] += 100.0f;
        }
    }
    if (Debug_GetButtonRepeatWithL(D_CBUTTONS) != 0) {
        for (i = 0; i < PLAYERS_MAX; i++) {
            sDebugPlayerHeights[i] -= 100.0f;
        }
    }
}

extern s32 D_802478E0;

void Debug_ChangeRoom(void) {
    s32 shouldChangeRoom;

    if (Debug_GetButtonRepeatWithL(L_CBUTTONS) != 0) {
        shouldChangeRoom = TRUE;
        gCurrentZone--;
    }
    if (Debug_GetButtonRepeatWithL(R_CBUTTONS) != 0) {
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

void Debug_ChangeView(void) {
    static s32 sDebugViewType = 0;
    static s32 sDebugViewZoomOut = 1000;
    static s32 sDebugViewRotate = 0;

    if (Debug_GetButtonRepeatWithL(START_BUTTON) != 0) {
        sDebugViewType++;
    }

    if (Debug_GetButtonRepeatWithL(B_BUTTON) != 0) {
        if (++sDebugViewRotate >= 360) {
            sDebugViewRotate -= 360;
        }
    }

    if (Debug_GetButtonRepeatWithL(A_BUTTON) != 0) {
        if (--sDebugViewRotate < 0) {
            sDebugViewRotate += 360;
        }
    }

    switch (sDebugViewType) {
    case 0:
        break;
    case 1:
        func_8007B480(gPlayerActorPtr->pos.x, gPlayerActorPtr->pos.y, gPlayerActorPtr->pos.z, gPlayerActorPtr->pos.x, gPlayerActorPtr->pos.y + (f32) sDebugViewZoomOut, gPlayerActorPtr->pos.z + 1.0f);
        break;
    case 2:
        func_8007B480(gPlayerActorPtr->pos.x, gPlayerActorPtr->pos.y, gPlayerActorPtr->pos.z,
            gPlayerActorPtr->pos.x + (__sinf(((sDebugViewRotate * 2 * M_PI) / 360)) * sDebugViewZoomOut),
            gPlayerActorPtr->pos.y + 1.0f,
            gPlayerActorPtr->pos.z - (sDebugViewZoomOut * __cosf(sDebugViewRotate * 2 * M_PI / 360)));

        break;
    case 3:
        func_8007B480(gPlayerActorPtr->pos.x, gPlayerActorPtr->pos.y, gPlayerActorPtr->pos.z, gPlayerActorPtr->pos.x, gPlayerActorPtr->pos.y + 1.0f, gPlayerActorPtr->pos.z + (f32) sDebugViewZoomOut);
        break;
    default:
        func_8007B434(0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
        sDebugViewType = 0;
        break;
    }
    if (Debug_GetButtonRepeatWithL(Z_TRIG) != 0) {
        sDebugViewZoomOut += 100;
    }
    if (sDebugViewZoomOut >= 20001) {
        sDebugViewZoomOut = 100;
    }
}

void func_8004EF5C(void) {
    static unkTextStruct D_800F0734 = {
        "ひだりうえ",
        "ひだりした",
        "みぎうえ",
        "みぎした"
    };

    static s32 D_800F08C4 = 0;
    unkTextStruct buffer = D_800F0734;
    s32 i;

    if (Debug_GetButtonRepeatWithL(B_BUTTON)) {
        D_80176810[D_800F08C4]++;
    }

    if (Debug_GetButtonRepeatWithL(A_BUTTON) != 0) {
        D_80176810[D_800F08C4]--;
    }

    if (Debug_GetButtonRepeatWithL(L_CBUTTONS) != 0) {
        D_80176814[D_800F08C4]++;
    }

    if (Debug_GetButtonRepeatWithL(D_CBUTTONS) != 0) {
        D_80176814[D_800F08C4]--;
    }

    if (Debug_GetButtonRepeatWithL(U_CBUTTONS) != 0) {
        D_80176818[D_800F08C4]++;
    }

    if (Debug_GetButtonRepeatWithL(R_CBUTTONS) != 0) {
        D_80176818[D_800F08C4]--;
    }
    if (1 == Debug_GetButtonRepeatWithL(R_TRIG)) {
        D_800F08C4 = (D_800F08C4) + 1;
        D_800F08C4 = (D_800F08C4) & 3;
    }

    if (Debug_GetButtonRepeatWithL(Z_TRIG) != 0) {
        for (i = 0; i < 4; i++) {
            D_80176810[i] = D_80176814[i] = D_80176818[i] = 0;
        }
    }

    func_800610B8();
    for (i = 0; i < 4; i++) {
        SetTextGradient(D_80176810[0], D_80176814[0], D_80176818[0], 0xFF, D_80176810[1], D_80176814[1], D_80176818[1], 0xFF, D_80176810[2], D_80176814[2], D_80176818[2], 0xFF, D_80176810[3], D_80176814[3], D_80176818[3], 0xFF); PrintNumberWR(180.0f, (i + 2) * 0x20, 0.0f, 0.5f, D_80176810[i], 3, 0);
        SetTextGradient(D_80176810[0], D_80176814[0], D_80176818[0], 0xFF, D_80176810[1], D_80176814[1], D_80176818[1], 0xFF, D_80176810[2], D_80176814[2], D_80176818[2], 0xFF, D_80176810[3], D_80176814[3], D_80176818[3], 0xFF);
        PrintNumberWR(210.0f, (i + 2) * 0x20, 0.0f, 0.5f, D_80176814[i], 3, 0);
        SetTextGradient(D_80176810[0], D_80176814[0], D_80176818[0], 0xFF, D_80176810[1], D_80176814[1], D_80176818[1], 0xFF, D_80176810[2], D_80176814[2], D_80176818[2], 0xFF, D_80176810[3], D_80176814[3], D_80176818[3], 0xFF);
        printNumber(240.0f, (i + 2) * 0x20, 0.0f, 0.5f, D_80176818[i], 3, 0);
    }

    SetTextGradient(D_80176810[0], D_80176814[0], D_80176818[0], 0xFF, D_80176810[1], D_80176814[1], D_80176818[1], 0xFF, D_80176810[2], D_80176814[2], D_80176818[2], 0xFF, D_80176810[3], D_80176814[3], D_80176818[3], 0xFF);
    PrintTextWrapper(140.0f, 32.0f, 0.0f, 1.0f, buffer.strings[D_800F08C4], 1);

    switch (D_800F08C4) {
    default:
        break;
    case 0:
        PrintTextWrapper(124.0f, 16.0f, 0.0f, 0.5f, buffer.strings[D_800F08C4], 1);
        break;
    case 1:
        PrintTextWrapper(124.0f, 48.0f, 0.0f, 0.5f, buffer.strings[D_800F08C4], 1);
        break;
    case 2:
        PrintTextWrapper(296.0f, 16.0f, 0.0f, 0.5f, buffer.strings[D_800F08C4], 1);
        break;
    case 3:
        PrintTextWrapper(296.0f, 48.0f, 0.0f, 0.5f, buffer.strings[D_800F08C4], 1);
        break;
    }

    func_800610B8();
}

void func_8004F61C(void) {
    static s32 sPlacedCounts[] = {0, 0};
    static s32 sSelectedType = 0;
    static char sLeafSpriteNames[][100] = {
        "SPR_s0_leaf70",
        "SPR_s0_leaf71",
    };
    s32 i;
    s32 j;

    if (Debug_GetButtonRepeatWithL(A_BUTTON) == 1) {
        sDebugPlacements[sSelectedType][sPlacedCounts[sSelectedType]].pos.x = gPlayerActorPtr->pos.x + sDebugLayoutOffsetX;
        sDebugPlacements[sSelectedType][sPlacedCounts[sSelectedType]].pos.y = gPlayerActorPtr->pos.y + sDebugLayoutOffsetY;
        sDebugPlacements[sSelectedType][sPlacedCounts[sSelectedType]].pos.z = gPlayerActorPtr->pos.z + sDebugLayoutOffsetZ;
        osSyncPrintf("\t{SPE0502( SPE_SPRITE , %s  , X_S + %7.0f , Y_S + %7.0f , Z_S + %7.0f , 256,128,256 , 1 , 0 , 15 , 0 ,  0,0,0,0 , 255,255,255,255),\n",
                     sLeafSpriteNames[sSelectedType], gPlayerActorPtr->pos.x + sDebugLayoutOffsetX, gPlayerActorPtr->pos.y + sDebugLayoutOffsetY, gPlayerActorPtr->pos.z + sDebugLayoutOffsetZ);
        sPlacedCounts[sSelectedType]++;
    }
    if (Debug_GetButtonRepeatWithL(B_BUTTON) == 1) {
        sDebugPlacements[sSelectedType][sPlacedCounts[sSelectedType]].pos.x = gPlayerActorPtr->pos.x + sDebugLayoutOffsetX;
        sDebugPlacements[sSelectedType][sPlacedCounts[sSelectedType]].pos.y = gPlayerActorPtr->yCounter + sDebugLayoutOffsetY;
        sDebugPlacements[sSelectedType][sPlacedCounts[sSelectedType]].pos.z = gPlayerActorPtr->pos.z + sDebugLayoutOffsetZ;
        osSyncPrintf("\t{SPE0502( SPE_SPRITE , %s  , X_S + %7.0f , Y_S + %7.0f , Z_S + %7.0f , 256,128,256 , 1 , 0 , 15 , 0 ,  0,0,0,0 , 255,255,255,255),\n",
                     sLeafSpriteNames[sSelectedType], gPlayerActorPtr->pos.x + sDebugLayoutOffsetX, gPlayerActorPtr->yCounter + sDebugLayoutOffsetY, gPlayerActorPtr->pos.z + sDebugLayoutOffsetZ);
        sPlacedCounts[sSelectedType]++;
    }
    if (Debug_GetButtonRepeatWithL(Z_TRIG) != 0) {
        for (j = 0; j < 2; j++) {
            sPlacedCounts[j] = 0;
        }
    }
    if (Debug_GetButtonRepeatWithL(R_TRIG) != 0) {
        sSelectedType++;
        if (sSelectedType >= 2) {
            sSelectedType = 0;
        }
    }
    setPrimColor(0, 255, 0, 255);
    func_800612F0(1);
    printUISprite(250.0f, 32.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, sSelectedType + 1, 1);
    PrintTextWrapper(280.0f, 32.0f, 0.0f, 1.0f, sLeafSpriteNames[sSelectedType], 1);
    for (i = 0; i < 2; i++) {
        for (j = 0; j < sPlacedCounts[i]; j++) {
            if (i == 0) {
                func_8005747C(sDebugPlacements[i][j].pos.x, sDebugPlacements[i][j].pos.y + 32.0f, sDebugPlacements[i][j].pos.z, 64.0f, 64.0f, 0.0f, 0x52);
            } else {
                func_8005747C(sDebugPlacements[i][j].pos.x, sDebugPlacements[i][j].pos.y + 32.0f, sDebugPlacements[i][j].pos.z, 64.0f, 64.0f, 0.0f, 0x53);
            }
        }
    }
}

void func_8004FA5C(void) {
    static s32 sPlacedCounts[] = {0, 0};
    static s32 sSelectedType = 0;
    static char sItemNames[][100] = {
        "ITEM_VITAL",
        "ITEM_3VITAL",
        "ITEM_MAXVITAL",
        "ITEM_COLLECT",
    };
    s32 i;
    s32 j;

    if (Debug_GetButtonRepeatWithL(A_BUTTON) == 1) {
        sDebugPlacements[sSelectedType][sPlacedCounts[sSelectedType]].pos.x = gPlayerActorPtr->pos.x + sDebugLayoutOffsetX;
        sDebugPlacements[sSelectedType][sPlacedCounts[sSelectedType]].pos.y = gPlayerActorPtr->pos.y + sDebugLayoutOffsetY;
        sDebugPlacements[sSelectedType][sPlacedCounts[sSelectedType]].pos.z = gPlayerActorPtr->pos.z + sDebugLayoutOffsetZ;
        osSyncPrintf("\t{%s,X_S + %7.0f , Y_S + %7.0f , Z_S + %7.0f},\n", sItemNames[sSelectedType], gPlayerActorPtr->pos.x + sDebugLayoutOffsetX, gPlayerActorPtr->pos.y + sDebugLayoutOffsetY, gPlayerActorPtr->pos.z + sDebugLayoutOffsetZ);
        sPlacedCounts[sSelectedType]++;
    }
    if (Debug_GetButtonRepeatWithL(B_BUTTON) == 1) {
        sDebugPlacements[sSelectedType][sPlacedCounts[sSelectedType]].pos.x = gPlayerActorPtr->pos.x + sDebugLayoutOffsetX;
        sDebugPlacements[sSelectedType][sPlacedCounts[sSelectedType]].pos.y = gPlayerActorPtr->yCounter + sDebugLayoutOffsetY;
        sDebugPlacements[sSelectedType][sPlacedCounts[sSelectedType]].pos.z = gPlayerActorPtr->pos.z + sDebugLayoutOffsetZ;
        osSyncPrintf("\t{%s,X_S + %7.0f , Y_S + %7.0f , Z_S + %7.0f},\n", sItemNames[sSelectedType], gPlayerActorPtr->pos.x + sDebugLayoutOffsetX, gPlayerActorPtr->yCounter + sDebugLayoutOffsetY, gPlayerActorPtr->pos.z + sDebugLayoutOffsetZ);
        sPlacedCounts[sSelectedType]++;
    }
    if (Debug_GetButtonRepeatWithL(Z_TRIG) != 0) {
        for (j = 0; j < 2; j++) {
            sPlacedCounts[j] = 0;
        }
    }
    if (Debug_GetButtonRepeatWithL(R_TRIG) != 0) {
        sSelectedType++;
        if (sSelectedType >= 2) {
            sSelectedType = 0;
        }
    }
    if (Debug_GetButtonRepeatWithL(NO_BUTTON) != 0) {
        setPrimColor(0, 0xFF, 0, 0xFF);
        func_800612F0(1);
        printUISprite(250.0f, 32.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, sSelectedType + 1, 1);
    }
    PrintTextWrapper(280.0f, 32.0f, 0.0f, 1.0f, sItemNames[sSelectedType], 1);
    for (i = 0; i < 2; i++) {
        for (j = 0; j < sPlacedCounts[i]; j++) {
            func_800612F0(1);
            func_8005747C(sDebugPlacements[i][j].pos.x, sDebugPlacements[i][j].pos.y + 32.0f, sDebugPlacements[i][j].pos.z, 64.0f, 64.0f, i + 1, 1);
        }
    }
}


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
    static s32 sDebugTestView = 0;
    if (Debug_GetButtonRepeatWithL(R_TRIG) != 0) {
        sDebugTestView ^= 1;
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

s32 sDebugCodeSeqStep = 0;
s32 D_800F0B40 = 0;

// NON_MATCHING: score 0, but only with 10 fake if (1) {} else {} blocks
#ifdef NON_MATCHING
void func_80080C28(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9);

void debugMain(void) {
    static s32 sDebugCodeSeqStep = 0;
    static s32 D_800F0B40 = 0;
    s32 i;
    f32 textX;
    f32 textY;
    f32 numX;
    f32 numY;
    f32 posX;
    f32 posScale;
    f32 flagX;
    s32 y;
    f32 flagScale;
    Field* field;
    f32 halfX;
    f32 halfY;
    f32 halfZ;
    f32 dx;
    f32 dy;
    f32 dz;

    if (sDebugInt >= 0) {
        if ((gLevelFlowState == 2) || (gLevelFlowState == 3) || (gLevelFlowState == 4) || (gLevelFlowState == 5)) {
            Debug_ZeroInt();
        }
        switch (gCurrentStage) {
        case STAGE_ANT:
            sDebugLayoutOffsetX = 0.0f;
            sDebugLayoutOffsetY = 0.0f;
            sDebugLayoutOffsetZ = 0.0f;
            break;
        case STAGE_BOMB:
            sDebugLayoutOffsetX = 0.0f;
            sDebugLayoutOffsetY = 0.0f;
            sDebugLayoutOffsetZ = 0.0f;
            break;
        case STAGE_KIDS:
            sDebugLayoutOffsetX = 0.0f;
            sDebugLayoutOffsetY = 0.0f;
            sDebugLayoutOffsetZ = 0.0f;
            break;
        case STAGE_DESERT:
            sDebugLayoutOffsetX = 5000.0f;
            sDebugLayoutOffsetY = -10000.0f;
            sDebugLayoutOffsetZ = 0.0f;
            break;
        case STAGE_OPENING:
            sDebugLayoutOffsetX = 0.0f;
            sDebugLayoutOffsetY = 0.0f;
            sDebugLayoutOffsetZ = 0.0f;
            break;
        case STAGE_GHOST:
            sDebugLayoutOffsetX = 0.0f;
            sDebugLayoutOffsetY = 0.0f;
            sDebugLayoutOffsetZ = 0.0f;
            break;
        case STAGE_JUNGLE:
            sDebugLayoutOffsetX = 0.0f;
            sDebugLayoutOffsetY = 0.0f;
            sDebugLayoutOffsetZ = 0.0f;
            break;
        case STAGE_VS:
            sDebugLayoutOffsetX = 0.0f;
            sDebugLayoutOffsetY = 0.0f;
            sDebugLayoutOffsetZ = 0.0f;
            break;
        case STAGE_TRAINING:
            sDebugLayoutOffsetX = 0.0f;
            sDebugLayoutOffsetY = 0.0f;
            sDebugLayoutOffsetZ = 0.0f;
            break;
        default:
            sDebugLayoutOffsetX = 0.0f;
            sDebugLayoutOffsetY = 0.0f;
            sDebugLayoutOffsetZ = 0.0f;
            break;
        }
        if ((gContMain->buttons0 & L_TRIG) && (sDebugInt == 1)) {
            textX = 32.0f;
            textY = 32.0f;
            numX = 32.0f;
            numY = 64.0f;
            posX = 32.0f;
            posScale = 0.5f;
            flagX = 290.0f;
            flagScale = 0.5f;
            setPrimColor(0, 0, 0, 128);
            printUISprite(0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 80.0f, 192.0f, 0.0f, SPRITE_BLANK);
            SetTextGradient(191, 10, 0, 255, 200, 200, 0, 255, 191, 10, 0, 255, 200, 200, 0, 255);
            switch (gCurrentStage) {
            case STAGE_ANT:
                PrintTextWrapper(textX, textY, 0.0f, 1.0f, "ＡＮＴ", 1);
                printNumber(numX, numY, 0.0f, 1.0f, gCurrentZone, 2, 0);
                break;
            case STAGE_BOMB:
                PrintTextWrapper(textX, textY, 0.0f, 1.0f, "ＢＯＭ", 1);
                printNumber(numX, numY, 0.0f, 1.0f, gCurrentZone, 2, 0);
                break;
            case STAGE_KIDS:
                PrintTextWrapper(textX, textY, 0.0f, 1.0f, "ＫＩＤＳ", 1);
                printNumber(numX, numY, 0.0f, 1.0f, gCurrentZone, 2, 0);
                break;
            case STAGE_DESERT:
                PrintTextWrapper(textX, textY, 0.0f, 1.0f, "ＤＥＳＥＲＴ", 1);
                printNumber(numX, numY, 0.0f, 1.0f, gCurrentZone, 2, 0);
                break;
            case STAGE_OPENING:
                PrintTextWrapper(textX, textY, 0.0f, 1.0f, "ＯＰＥＮＩＮＧ", 1);
                printNumber(numX, numY, 0.0f, 1.0f, gCurrentZone, 2, 0);
                break;
            case STAGE_GHOST:
                PrintTextWrapper(textX, textY, 0.0f, 1.0f, "ＧＨＯＳＴ", 1);
                printNumber(numX, numY, 0.0f, 1.0f, gCurrentZone, 2, 0);
                break;
            case STAGE_JUNGLE:
                PrintTextWrapper(textX, textY, 0.0f, 1.0f, "ＪＵＮＧＬＥ", 1);
                if (isInOverworld == FALSE) {
                    printNumber(numX, numY, 0.0f, 1.0f, gCurrentZone + D_800F0B40, 2, 0);
                } else {
                    printNumber(numX, numY, 0.0f, 1.0f, gCurrentZone, 2, 0);
                    D_800F0B40 = D_802478E0;
                }
                break;
            case STAGE_VS:
                PrintTextWrapper(textX, textY, 0.0f, 1.0f, "ＶＳ", 1);
                printNumber(numX, numY, 0.0f, 1.0f, gCurrentZone, 2, 0);
                break;
            case STAGE_TRAINING:
                PrintTextWrapper(textX, textY, 0.0f, 1.0f, "ＴＲＡＮＩＮＩＧ", 1);
                printNumber(numX, numY, 0.0f, 1.0f, gCurrentZone, 2, 0);
                break;
            case STAGE_JUNGLEBOSS:
                PrintTextWrapper(textX, textY, 0.0f, 1.0f, "ＪＵＮＧＬＥＢＯＳＳ", 1);
                printNumber(numX, numY, 0.0f, 1.0f, gCurrentZone, 2, 0);
                break;
            case STAGE_ANTBOSS:
                PrintTextWrapper(textX, textY, 0.0f, 1.0f, "ＡＮＴＢＯＳＳ", 1);
                printNumber(numX, numY, 0.0f, 1.0f, gCurrentZone, 2, 0);
                break;
            case STAGE_BOMBBOSS:
                PrintTextWrapper(textX, textY, 0.0f, 1.0f, "ＢＯＭＢＯＳＳ", 1);
                printNumber(numX, numY, 0.0f, 1.0f, gCurrentZone, 2, 0);
                break;
            case STAGE_DESERTBOSS:
                PrintTextWrapper(textX, textY, 0.0f, 1.0f, "ＤＥＳＥＲＴＢＯＳＳ", 1);
                printNumber(numX, numY, 0.0f, 1.0f, gCurrentZone, 2, 0);
                break;
            case STAGE_KIDSBOSS:
                PrintTextWrapper(textX, textY, 0.0f, 1.0f, "ＫＩＤＳＢＯＳＳ", 1);
                printNumber(numX, numY, 0.0f, 1.0f, gCurrentZone, 2, 0);
                break;
            case STAGE_GHOSTBOSS:
                PrintTextWrapper(textX, textY, 0.0f, 1.0f, "ＧＨＯＳＴＢＯＳＳ", 1);
                printNumber(numX, numY, 0.0f, 1.0f, gCurrentZone, 2, 0);
                break;
            }
            // HELP
            if (1) {
            } else {
            }
            if (1) {
            } else {
            }
            if (1) {
            } else {
            }
            if (1) {
            } else {
            }
            if (1) {
            } else {
            }
            if (1) {
            } else {
            }
            if (1) {
            } else {
            }
            if (1) {
            } else {
            }
            if (1) {
            } else {
            }
            if (1) {
            } else {
            }
            PrintNumberWR(posX, 96.0f, 0.0f, posScale, gPlayerActorPtr->pos.x + sDebugLayoutOffsetX, 6, 0);
            PrintNumberWR(posX, 112.0f, 0.0f, posScale, gPlayerActorPtr->pos.y + sDebugLayoutOffsetY, 6, 0);
            PrintNumberWR(posX, 128.0f, 0.0f, posScale, gPlayerActorPtr->pos.z + sDebugLayoutOffsetZ, 6, 0);
            dx = D_801768A0.lookAt.x - D_801768A0.eye.x;
            dy = D_801768A0.lookAt.y - D_801768A0.eye.y;
            dz = D_801768A0.lookAt.z - D_801768A0.eye.z;
            PrintNumberWR(posX, 160.0f, 0.0f, posScale, sqrtf(SQ(dx) + SQ(dy) + SQ(dz)), 6, 0);
            y = 32;
            for (i = 0; i < 10; i++) {
                PrintNumberWR(200.0f, y, 0.0f, flagScale, StageFlags[i], 4, 1);
                PrintNumberWR(230.0f, y, 0.0f, flagScale, StageFlags[i + 10], 4, 1);
                PrintNumberWR(260.0f, y, 0.0f, flagScale, StageFlags[i + 20], 4, 1);
                y += 12;
            }
            PrintNumberWR(flagX, 32.0f, 0.0f, flagScale, StageFlags[30], 4, 1);
            PrintNumberWR(flagX, 44.0f, 0.0f, flagScale, StageFlags[31], 4, 1);
            field = &gZoneFields[gCurrentZone];
            halfX = (field->roomBounds.max.x - field->roomBounds.min.x) / 2;
            halfY = (field->roomBounds.max.y - field->roomBounds.min.y) / 2;
            halfZ = (field->roomBounds.max.z - field->roomBounds.min.z) / 2;
            func_80080C28(field->roomBounds.min.x + halfX, field->roomBounds.min.y + halfY, field->roomBounds.min.z + halfZ, halfX, halfY, halfZ, 100, 100, 100, 100);
        }
        if (sDebugInt == 0) {
            if (Debug_GetButtonRepeatWithL(U_JPAD) != 0) {
                sDebugCodeSeqStep = 1;
            }
            if ((Debug_GetButtonRepeatWithL(D_JPAD) != 0) && (sDebugCodeSeqStep > 0)) {
                sDebugCodeSeqStep = 2;
            }
            if ((Debug_GetButtonRepeatWithL(L_JPAD) != 0) && (sDebugCodeSeqStep >= 2)) {
                sDebugCodeSeqStep = 3;
            }
            if ((Debug_GetButtonRepeatWithL(R_JPAD) != 0) && (sDebugCodeSeqStep >= 3)) {
                sDebugCodeSeqStep = 4;
                sDebugInt = 1;
            }
        } else {
            Debug_MovePlayer();
            Debug_ChangeRoom();
            Debug_NOOP();
            Debug_ChangeView();
        }
    }
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/debug/debugMain.s")
#endif
