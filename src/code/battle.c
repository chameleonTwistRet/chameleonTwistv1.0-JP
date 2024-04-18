#include "battle.h"
#include "sprite.h"

// BSS
u8 Battle_PlayerIsOut[4];
s32 Battle_TimeLeft;
s32 Battle_FirstRankCount; // number of players on 1st rank minus 1
s32 Battle_PlayerCount;
s32 gMultiplayerBGM;
s32 Battle_NumRanks;

// data
u32 Battle_Time = 0;
u8 D_800F0B54[] = { 255, 0, 0, 0 };
s32 Battle_Stage = BATTLE_STAGE_INIT;
s32 D_800F0B5C = -1;
s32 Battle_NoWinner = FALSE;
s32 D_800F0B64 = BATTLE_STAGE_INVALID;
s32 Battle_RankingTable[4][4] = {
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
};
s32 gCharacterPortraits[6] = { SPRITE_PORTRAITDAVY, SPRITE_PORTRAITJACK, SPRITE_PORTRAITFRED,
                               SPRITE_PORTRAITLINDA, SPRITE_PORTRAITBLACK, SPRITE_PORTRAITWHITE };
s32 Battle_PlayerRank[4] = { 0, 0, 0, 0 };
s32 Battle_SurvivalPlayerRank[4] = { 0, 0, 0, 0 };
u8 Battle_CornerIndices[4] = { 0, 3, 1, 2 };
BattlePlayerData Battle_PlayerData[] = {
    {
        0,
        { 16.0f, 14.0f },
        { 36.0f, 14.0f },
        { 34.0f, 14.0f },
        0.0f,
        0
    },
    {
        0,
        { 16.0f, 205.0f },
        { 36.0f, 212.0f },
        { 34.0f, 206.0f },
        0.0f,
        0
    },
    {
        0,
        { 288.0f, 14.0f },
        { 240.0f, 14.0f },
        { 260.0f, 14.0f },
        0.0f,
        0
    },
    {
        0,
        { 288.0f, 205.0f },
        { 240.0f, 212.0f },
        { 260.0f, 206.0f },
        0.0f,
        0
    }
};
s32 Battle_LastKnockOutTime = 999999999;
s32 Battle_DecimalPowers[] = { 1, 10, 100, 1000, 10000, 100000, 1000000, 10000000 };
u8 Battle_MsgSuddenDeath[] = { LETTER_S, LETTER_U, LETTER_D, LETTER_D, LETTER_E, LETTER_N, SPACE, LETTER_D, LETTER_E, LETTER_A, LETTER_T, LETTER_H };
unk_80052094_8 D_800F0CA4[] = {
    { 0.0f, 2 },
    { 9.0f, 0 },
    { 255.0f, 255 },
    { 2.0f, 2 },
    { 4.0f, 0 },
    { 7.0f, 0 },
};
unk_80052094_8 D_800F0CD4[] = {
    { 9.0f, 2 },
    { 8.0f, 0 },
    { 6.0f, 0 },
};
unk_80052094_8 D_800F0CEC[] = {
    { 0.0f, 2 },
    { 255.0f, 255 },
    { 2.0f, 2 },
    { 4.0f, 0 },
    { 7.0f, 0 },
};
unk_80052094_8 D_800F0D14[] = {
    { 1.0f, 0 },
    { 0.0f, 2 },
    { 0.0f, 0 },
    { 2.0f, 2 },
    { 4.0f, 2 },
};
u8 D_800F0D3C[] = { 2, 2, 2, 3, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 7, 7, 6, 6, 5, 5, 4, 4, 3, 3, 3, 2 };
u8 D_800F0D58[] = { 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 9, 9, 9, 10, 10, 10, 11, 11, 11, 12, 12, 12, 13, 13, 13, 14, 14, 14 };
s32 D_800F0D88 = 0;
s8 D_800F0D8C = 3;

void Battle_DrawLightSpot(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, s32 playerID);

void Battle_UpdateFallOffTimers(void) {
    s32 i;

    if (!gIsMultiplayerPaused) {
        for (i = 0; i < ARRAY_COUNT(gPlayerActors); i++) {
            if (gPlayerActors[i].active == TRUE) {
                if (gPlayerActors[i].pos.y < -10.0f) {
                    Battle_PlayerData[Battle_CornerIndices[i]].fallOffTime++;
                    Battle_DrawLightSpot(gPlayerActors[i].pos.x, -300.0f, gPlayerActors[i].pos.z, gPlayerActors[i].pos.y, 200.0f, gSelectedCharacters[i]);
                }
            }
        }
    }
}

void Battle_LimitCountersInRanking(void) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gPlayerActors); i++) {
        if (gPlayerActors[i].active == TRUE) {
            if (++Battle_RankingTable[i][Battle_PlayerRank[i]] > 99) {
                Battle_RankingTable[i][Battle_PlayerRank[i]] = 99;
            }
        }
    }
}

s32 Battle_UpdateRanking(void) {
    s32 i, j;
    s32 numFirstPlace = 0;
    s32 numSecondPlace = 0;
    
    s32 gameType = Battle_GameType;
    if (Battle_Stage == BATTLE_STAGE_SUDDEN_DEATH) {
        gameType = BATTLE_TYPE_SURVIVAL;
    }
    
    switch (gameType) {
        case BATTLE_TYPE_TIME_TRIAL:
            for (i = 0; i < ARRAY_COUNT(gPlayerActors) ; i++) {
                s32 rank = 0;
                if (gPlayerActors[i].active == TRUE) {
                    for (j = 0; j < ARRAY_COUNT(gPlayerActors); j++) {
                        if (gPlayerActors[j].active == TRUE) {
                            if (i != j && Battle_PlayerData[Battle_CornerIndices[j]].fallOffTime <
                                          Battle_PlayerData[Battle_CornerIndices[i]].fallOffTime) {
                                rank++; 
                            }
                            Battle_PlayerRank[i] = rank;
                        }    
                    }
                    if (Battle_PlayerRank[i] == 0) {
                        numFirstPlace++;
                    }
                    if (Battle_PlayerRank[i] == 1) {
                        numSecondPlace++;
                    }
                }
            }

            if (numSecondPlace == 2) {
                for (i = 0; i < ARRAY_COUNT(gPlayerActors); i++) {
                    if (gPlayerActors[i].active == TRUE && Battle_PlayerRank[i] == 3) {
                        Battle_PlayerRank[i] = 2;
                    }
                }
            }
            if (numFirstPlace == 1) {
                numFirstPlace = 0;
            } else {
                numFirstPlace--;
            }
            break;
        case BATTLE_TYPE_SURVIVAL:
            for (i = 0; i < ARRAY_COUNT(gPlayerActors); i++) {
                if (gPlayerActors[i].active == TRUE) {
                    Battle_PlayerRank[i] = Battle_SurvivalPlayerRank[i] - 1;
                    
                    if (Battle_SurvivalPlayerRank[i] < 2) {
                        Battle_PlayerRank[i] = 0;
                    }
                    if (Battle_PlayerRank[i] == 0) {
                        numFirstPlace++;
                    }
                }
            }
            numFirstPlace--;
            break;
    }
    return numFirstPlace;
}

// return zero if there is no winner
s32 Battle_KnockOutPlayer(s32 playerID) {
    static s32 sSurvivalLastPlayerRank;
    s32 numFirstPlace = 0;
    s32 i;
    
    if (Battle_LastKnockOutTime == Battle_Time) {
        // two or more players are knocked out simulataneously
        Battle_SurvivalPlayerRank[playerID] = sSurvivalLastPlayerRank;

        for (i = 0; i < ARRAY_COUNT(gPlayerActors); i++) {
            Battle_SurvivalPlayerRank[i]--;
            if (Battle_SurvivalPlayerRank[i] <= 0) {
                Battle_SurvivalPlayerRank[i] = 0;
            }
            if (Battle_SurvivalPlayerRank[i] == 1) {
                numFirstPlace++;
            }
        }

        sSurvivalLastPlayerRank--;
    } else {
        Battle_SurvivalPlayerRank[playerID] = sSurvivalLastPlayerRank = Battle_NumRanks--;
    }
    
    Battle_LastKnockOutTime = Battle_Time;

    if (numFirstPlace >= 2) {
        numFirstPlace = 0;
    } else {        
        numFirstPlace = -1;        
    }
    return numFirstPlace;
}

s32 D_8017683C;

f32 Battle_CalcTableColumnWidths(u8 numColumns, f32* arg1, f32 xMin, f32 xMax) {
    f32 width;
    f32 temp_f12;
    
    width = xMax - xMin;
    switch (numColumns) {
        default:
            break;
        case 2:
            temp_f12 = width / 6.0f;
            *arg1 = temp_f12 + xMin;
            width = temp_f12 * 4.0f;
            break;
        case 3:
            temp_f12 = width / 8;
            *arg1 = temp_f12 + xMin;
            width = temp_f12 * 3.0f;
            break;
        case 4:
            *arg1 = xMin;
            width = width / 3.0f;
            break;
    }
    return width;
}

void Battle_PlayEnvSounds(void) {
    if (gCurrentZone == 6 && (Battle_Time % 60) == 0) {
        PLAYSFX(137, 0, 0x10);
    }
}

// return -1 if human player
s32 Battle_GetComputerPlayerID(s32 playerID) {
    s32 i;
    s32 activeCount = 0;

    for (i = 0; i < ARRAY_COUNT(gPlayerActors); i++) {
        if (gPlayerActors[i].active && (D_80168D78[i] != (((i & 0xFF) == 4) * 0))) {
            if (playerID != i) {
                activeCount++;
                continue;
            }
            break;
        }
    }
    if (i == ARRAY_COUNT(gPlayerActors)) {
        activeCount = -1;
    }
    return activeCount;
}

void Battle_DrawPortraits(void) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gPlayerActors); i++) {
        if (gPlayerActors[i].active == TRUE) {
            if (gSelectedCharacters[i] > CHARA_WHITE) {
                continue;
            }
            printUISprite(Battle_PlayerData[Battle_CornerIndices[i]].portraitPos.x,
                          Battle_PlayerData[Battle_CornerIndices[i]].portraitPos.y,
                          0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, gCharacterPortraits[gSelectedCharacters[i]]);
        }
    }
}

#ifdef NON_MATCHING
void Battle_PrintPlayerTimer(s32 playerID) {
    if (Battle_PlayerRank[playerID] == 0) {
        s8 g = Battle_Time * 16;
        SetTextGradient(255, g, 32, 255,
                        255, 0,  0, 255,
                        255, g, 32, 255,
                        255, 0,  0, 255);
    } else {
        SetTextGradientFromPalette(5);
    }
    func_800610A8();
    printNumber(Battle_PlayerData[Battle_CornerIndices[playerID]].timerPos.x,
                Battle_PlayerData[Battle_CornerIndices[playerID]].timerPos.y,
                0.0f, 0.6f, (Battle_PlayerData[Battle_CornerIndices[playerID]].fallOffTime / 1800) % 60, 2, 0);
    PrintTextWrapper(Battle_PlayerData[Battle_CornerIndices[playerID]].timerPos.x + 18.0f,
                     Battle_PlayerData[Battle_CornerIndices[playerID]].timerPos.y - 2.0f,
                     0.0f, 0.6f, "：", 1);
    printNumber(Battle_PlayerData[Battle_CornerIndices[playerID]].timerPos.x + 28.0f,
                Battle_PlayerData[Battle_CornerIndices[playerID]].timerPos.y,
                0.0f, 0.6f, (Battle_PlayerData[Battle_CornerIndices[playerID]].fallOffTime / 30) % 60, 2, 0);
    func_800610B8();
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/battle/Battle_PrintPlayerTimer.s")
void Battle_PrintPlayerTimer(s32 playerID);
#endif

#ifdef NON_MATCHING
void Battle_PrintPlayerRank(s32 playerID) {
    f32 go;
    f32 temp_f2;
    f32 alpha = 1.0f;
    f32 sp68 = 24.0f;
    f32 sp64 = 16.0f;
    f32 deltaX = 0.0f;
    f32 deltaY = 0.0f;
    s32 temp_t4;
    
    if (Battle_PlayerData[Battle_CornerIndices[playerID]].rank != Battle_PlayerRank[Battle_CornerIndices[playerID]]) {
        Battle_PlayerData[Battle_CornerIndices[playerID]].rank = Battle_PlayerRank[Battle_CornerIndices[playerID]];
        Battle_PlayerData[Battle_CornerIndices[playerID]].rankTimer = 0;
    } else {
        Battle_PlayerData[Battle_CornerIndices[playerID]].rankTimer += 0.125f;
        if (Battle_PlayerData[Battle_CornerIndices[playerID]].rankTimer <= 1.0f) {
            alpha *= Battle_PlayerData[Battle_CornerIndices[playerID]].rankTimer;
            go = 1 - alpha;
            temp_f2 = 1.0f + 2.0f * go;
            
            sp68 *= temp_f2;
            sp64 *= temp_f2;

            deltaX = 24.0f;
            deltaY = 16.0f;

            deltaX *= go;
            deltaY *= go;
        }
    }
    
    temp_t4 = Battle_Time % 64;
    if (temp_t4 < 2 || temp_t4 >= 6 && temp_t4 < 8) {
        SetTextGradient(255, 255, 255, 255 * alpha, 
                        255, 255, 255, 255 * alpha, 
                        255, 255, 255, 255 * alpha, 
                        255, 255, 255, 255 * alpha);
    } else {
        switch (Battle_PlayerRank[playerID]) {
            case 0:
                SetTextGradientFromPaletteAlpha(0xD, alpha);
                break;
            case 1:
                SetTextGradientFromPaletteAlpha(0xE, alpha);
                break;
            case 2:
                SetTextGradientFromPaletteAlpha(0xF, alpha);
                break;
            case 3:
                SetTextGradientFromPaletteAlpha(0x10, alpha);
                break;
        }
    }
    printUISprite(Battle_PlayerData[Battle_CornerIndices[playerID]].rankPos.x - deltaX,
                  Battle_PlayerData[Battle_CornerIndices[playerID]].rankPos.y - deltaY,
                  0, 0, 1, sp68, sp64, Battle_PlayerRank[playerID], SPRITE_ORDINALS);
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/battle/Battle_PrintPlayerRank.s")
void Battle_PrintPlayerRank(s32 arg0); 
#endif

void func_80051F38(void) {
    s32 i;
    switch (Battle_Stage) {
        case BATTLE_STAGE_SUDDEN_DEATH:
            for (i = 0; i < ARRAY_COUNT(gPlayerActors); i++) {
                if (gPlayerActors[i].active == TRUE) {
                    if (Battle_GameType == BATTLE_TYPE_TIME_TRIAL) {
                        if (Battle_PlayerRank[i] < 2) {
                            Battle_PrintPlayerTimer(i);
                        } else {
                            Battle_PrintPlayerRank(i);
                        }
                    } else if (Battle_GameType == BATTLE_TYPE_SURVIVAL) {
                        Battle_PrintPlayerRank(i);
                    }
                }
            }
            break;
        case BATTLE_STAGE_SHOW_WINNER:
        case BATTLE_STAGE_WAIT_BEFORE_EXIT:
            for (i = 0; i < ARRAY_COUNT(gPlayerActors); i++) {
                if (gPlayerActors[i].active == TRUE && Battle_FirstRankCount == 0) {
                    Battle_PrintPlayerRank(i);
                }
            }
            break;
    }
}

void Battle_PrintTextBig(f32 posX, f32 posY, f32 scaleX, s32 palette, u8 length, unk_80052094_8* arg5, s32 arg6) {
    s32 i;

    if (scaleX > 1.0f) {
        scaleX = 1.0f;
    }
    
    for (i = 0; i < length; i++) {        
        SetTextGradientFromPalette(palette);
        func_800612F0(arg5[i].unk_04);
        if (!arg6) {
            func_80059F28(posX + 32 * i, posY - 16.0f * scaleX, 0.0f, 0.0f, 1.0f, 32.0f, 16 * scaleX, arg5[i].unk_00, SPRITE_TEXTBIGGER);
        } else {
            printUISprite(posX + 32 * i, posY - 16.0f * scaleX, 0.0f, 0.0f, 1.0f, 32.0f, 16 * scaleX, arg5[i].unk_00, SPRITE_TEXTBIGGER);
        }
        SetTextGradientFromPalette(palette + 1);
        func_800612F0(arg5[i].unk_04 + 1);
        if (!arg6) {
            func_80059F28(posX + 32 * i, posY, 0.0f, 0.0f, 1.0f, 32.0f, 16 * scaleX, arg5[i].unk_00, SPRITE_TEXTBIGGER);
        } else {
            printUISprite(posX + 32 * i, posY, 0.0f, 0.0f, 1.0f, 32.0f, 16 * scaleX, arg5[i].unk_00, SPRITE_TEXTBIGGER);
        }
    }
}

void func_800522A4(f32 posX, f32 posY, f32 scaleX, f32 scaleY, s32 arg4, s32 palette) {
    s32 unused;
    s32 sp90;
    s32 sp8C;
    s32 i;

    i = 0;
    while (arg4 != 0) {
        if (func_80080318(SPRITE_TEXTBIG, arg4, &sp90, &sp8C) == 0) {
            SetTextGradientFromPalette(palette);
            func_800612F0(sp8C);
            func_80059F28(posX + 16.0f * scaleX * i, posY, 0, 0, 1.0f, 16 * scaleX, 24.0f * scaleY, sp90, SPRITE_TEXTBIG);
        }
        
        arg4 += 2;
        i++;
    }
}

void Battle_PrintNumber(f32 posX, f32 posY, f32 scaleX, f32 scaleY, s32 value, s32 numDigits, s32 arg6) {
    s32 i;

    func_800610A8();
    if (numDigits > 8) {
        numDigits = 8;
    }
    
    for (i = 0; i < numDigits; i++) {
        s32 digit = (value / Battle_DecimalPowers[numDigits - i - 1]) % 10;
        func_800612F0(1);
        if (arg6) {
            printUISprite(posX + 16 * i * scaleX, posY, 0.0f, 0.0f, 1.0f, 16.0f * scaleX, 24.0f * scaleY,  digit, SPRITE_TEXTBIG);
        } else {
            func_80059F28(posX + 16 * i * scaleX, posY, 0.0f, 0.0f, 1.0f, 16.0f * scaleX, 24.0f * scaleY, digit, SPRITE_TEXTBIG);
        }
    }
    func_800610B8();
}

void Battle_PrintName(s32 playerID, f32 posX) {
    s32 compIndex;

    compIndex = Battle_GetComputerPlayerID(playerID);
    if (compIndex >= 0) {
        // computer player
        posX -= 3;
        func_800610A8();
        SetTextGradientFromPalette(0);
        
        func_800612F0(0);
        func_80059F28(posX,      102.0f, 0.0f, 0.0f, 1.0f, 12.0f, 24.0f, LETTER_C, SPRITE_TEXTBIG);
        func_80059F28(posX + 12, 104.6f, 0.0f, 0.0f, 1.0f, 12.0f, 24.0f, LETTER_O, SPRITE_TEXTBIG);
        func_80059F28(posX + 24, 107.3f, 0.0f, 0.0f, 1.0f, 12.0f, 24.0f, LETTER_M, SPRITE_TEXTBIG);
        
        func_800612F0(1);
        func_80059F28(posX + 36, 110.0f, 0.0f, 0.0f, 1.0f, 12.0f, 24.0f, compIndex + 1, SPRITE_TEXTBIG);
        func_800610B8();
    } else {
        func_800612F0(1);
        SetTextGradientFromPalette(0);
        func_80059F28(posX, 102.0f, 0.0f, 0.0f, 1.0f, 16.0f, 24.0f, playerID + 1, SPRITE_TEXTBIG);
        
        func_800612F0(0);
        SetTextGradientFromPalette(0);
        func_80059F28(posX + 24, 110.0f, 0.0f, 0.0f, 1.0f, 16.0f, 24.0f, LETTER_P, SPRITE_TEXTBIG);
    }
}

void Battle_ShimmeringText(u32 charID) {
    static u8 D_80176840;
    static u8 D_80176841;
    f32 newvar; // required to match
    s32 temp_t6 = Battle_Time % 32;
    
    if (temp_t6 >= 0 && temp_t6 < 8) {
        D_80176840 = 80 + (u8)(175.0f * (temp_t6 % 8) / (newvar = 8.0f));
    }
    if (temp_t6 >= 8 && temp_t6 < 16) {
        D_80176841 = 80 + (u8)(175.0f * (temp_t6 % 8) / (newvar = 8.0f));
    }
    
    if (temp_t6 >= 16 && temp_t6 < 24) {
        D_80176840 = (1 - (temp_t6 % 8) / 8.0f) * 175.0f;
        D_80176840 += 80;
    }
    if (temp_t6 >= 24 && temp_t6 <= 32) {
        D_80176841 = (1 - (temp_t6 % 8) / 8.0f) * 175.0f;
        D_80176841 += 80;
    }
    
    switch (charID) {
        case CHARA_DAVY:
            SetTextGradient(0, D_80176840 * 0.8, D_80176840, 255,
                            0, D_80176841 * 0.8, D_80176841, 255,
                            0, D_80176840 * 0.8, D_80176840, 255,
                            0, D_80176841 * 0.8, D_80176841, 255);
            break;
        case CHARA_JACK:
            SetTextGradient(D_80176840 * 0.4, D_80176840, 0, 255,
                            D_80176841 * 0.4, D_80176841, 0, 255,
                            D_80176840 * 0.4, D_80176840, 0, 255,
                            D_80176841 * 0.4, D_80176841, 0, 255);
            break;
        case CHARA_FRED:
            SetTextGradient(D_80176840, D_80176840, 0, 255,
                            D_80176841, D_80176841, 0, 255,
                            D_80176840, D_80176840, 0, 255,
                            D_80176841, D_80176841, 0, 255);
            break;
        case CHARA_LINDA:
            SetTextGradient(D_80176840, D_80176840 * 0.4, D_80176840 * 0.5, 255, 
                            D_80176841, D_80176841 * 0.4, D_80176841 * 0.5, 255,
                            D_80176840, D_80176840 * 0.4, D_80176840 * 0.5, 255, 
                            D_80176841, D_80176841 * 0.4, D_80176841 * 0.5, 255);
            break;
        case CHARA_BLACK:
            SetTextGradient(D_80176840 * 0.4, D_80176840 * 0.2, D_80176840, 255,
                            D_80176841 * 0.4, D_80176841 * 0.2, D_80176841, 255,
                            D_80176840 * 0.4, D_80176840 * 0.2, D_80176840, 255,
                            D_80176841 * 0.4, D_80176841 * 0.2, D_80176841, 255);
            break;
        case CHARA_WHITE:
            SetTextGradient(D_80176840, D_80176840, D_80176840, 255,
                            D_80176841, D_80176841, D_80176841, 255,
                            D_80176840, D_80176840, D_80176840, 255,
                            D_80176841, D_80176841, D_80176841, 255);
            break;
    }
}

void Battle_PrintRankingTable(void) {
    s32 i, j;
    f32 posX;
    s32 numDigits;
    f32 width;

    width = Battle_CalcTableColumnWidths(Battle_PlayerCount, &posX, 88.0f, 256.0f);

    for (i = 0; i < ARRAY_COUNT(gPlayerActors); i++) {
        if (gPlayerActors[i].active == TRUE) {
            f32 posY = 128.0f;
            Battle_PrintName(i, posX - 4.0f);
            for (j = 0; j < ARRAY_COUNT(gPlayerActors); j++, posY += 24) {
                if (j == Battle_PlayerRank[i] && Battle_FirstRankCount == 0) {
                    Battle_ShimmeringText(gSelectedCharacters[i]);
                } else {
                    SetTextGradientFromPalette(1);
                }

                if (Battle_RankingTable[i][j] >= 10) {
                    numDigits = 2;
                } else {
                    numDigits = 1;
                }

                Battle_PrintNumber(posX + 12.8f * (numDigits == 1), posY, 0.8f, 0.8f, Battle_RankingTable[i][j], numDigits, 0); 
            }
            posX += width;
        }
    }
}

//prints "HURRY!" during MP Battle [9 times]
void Battle_PrintHurry(void) {
    if (Battle_TimeLeft <= 1800 && Battle_TimeLeft > 1710 && (Battle_TimeLeft % 10) < 5) {
        SetTextGradientFromPalette(1); 
        PrintTextWrapper(100.0f, 10.0f, 0.0f, 1.0f, "ＨＵＲＲＹ！", SPRITE_TEXTBIG);
    }
}

void Battle_PrintCountdownTimer(void) {
    f32 scaleY = 1.0f;
    if (Battle_TimeLeft <= 930) {
        SetTextGradient(255, 60, 0, 255,
                        255, 0, 0, 255,
                        255, 60, 0, 255,
                        255, 0, 0, 255);
        if (Battle_TimeLeft <= 20) {
            scaleY = Battle_TimeLeft / 20.0f;
        }
        Battle_PrintNumber(136.0f, ((1.0f - scaleY) * 12.0f) + 10.0f, 1.0f, scaleY, (Battle_TimeLeft / 30) % 60, 2, 1);
    }
}

void Battle_PrintSuddenDeath(f32 posX, f32 posY) {
    f32 scaleY;
    s32 i;

    if (Battle_Time <= 20) {
        scaleY = Battle_Time / 20.0f;
    } else if (Battle_Time > 20 && Battle_Time < 130) {
        scaleY = 1.0f;
    } else if (Battle_Time >= 130 && Battle_Time < 150) {
        scaleY = 1.0f - (Battle_Time - 130.0f) / 20.0f;
    } else {
        return;
    }

    for (i = 0; i < ARRAY_COUNT(Battle_MsgSuddenDeath); i++) {
        if ((Battle_Time % 10) < 5 && scaleY == 1.0f) {
            SetTextGradientFromPalette(1);
        } else {
            SetTextGradientFromPalette(4);
        }
        func_800612F0(0);
        printUISprite(posX + i * 11.2f, posY + (1 - scaleY) * 12.0f, 0.0f, 0.0f, 1.0f, 11.2f, 16.8f * scaleY, Battle_MsgSuddenDeath[i], SPRITE_TEXTBIG);
    }    
}

void func_80053CA0(void) {
    s32 row, col;

    for (row = 0; row < 5; row++) {
        for (col = 0; col < 8; col++) {
            func_800612F0(row);
            func_80059F28(col * 40, row * 48, 0, 0, 1.0f, 40.0f, 48.0f, col, SPRITE_RANKINGBACKGROUND);
        }
    }
    Battle_PrintRankingTable();
}

void func_80053DA8(s32 arg0) {
    s32 i;
    s32 comID;    

    if (arg0 == 0) {
        for (i = 0; i < ARRAY_COUNT(gPlayerActors); i++) {
            if (gPlayerActors[i].active == TRUE && Battle_PlayerRank[i] == 0) {
                break;
            }
        }
    } else {
        i = -1;
    }
    
    comID = Battle_GetComputerPlayerID(i);
    if (comID >= 0) {
        D_800F0CEC[0].unk_00 = comID + 5;
    } else {
        D_800F0CA4[0].unk_00 = i + 5;
    }
    if (i == -1) {
        Effect_TypeAZ_Init(70.0f, 80.0f, 170.0f, 1.0f, 5, D_800F0D14, 0x11, 0x12, 5.0f, 10.0f, 120.0f);
    } else if (comID >= 0) {
        Effect_TypeAZ_Init(60.0f, 80.0f, 180.0f, 0.8f, 8, D_800F0CD4, 0x13, 0x14, 5.0f, 8.0f, 120.0f);
    } else {
        Effect_TypeAZ_Init(70.0f, 80.0f, 170.0f, 1.0f, 6, D_800F0CA4, 0x13, 0x14, 5.0f, 10.0f, 120.0f);
    }
}

void func_80053FA0(s32 playerID) {
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 posX;

    sp78 = cosf(DEGREES_TO_RADIANS_2PI(gPlayerActors[playerID].yAngle - 90.0f));
    sp7C = sinf(DEGREES_TO_RADIANS_2PI(gPlayerActors[playerID].yAngle - 90.0f));
    sp80 = cosf(DEGREES_TO_RADIANS_2PI(gPlayerActors[playerID].yAngle + 260.0f));
    sp84 = sinf(DEGREES_TO_RADIANS_2PI(gPlayerActors[playerID].yAngle + 260.0f));

    posX = gPlayerActors[playerID].pos.x; // required for matching
    
    func_80068A88(D_80176B78->f5.x, D_80176B78->f5.y, D_80176B78->f5.z,
                  gPlayerActors[playerID].pos.x, gPlayerActors[playerID].pos.y + 300.0f, gPlayerActors[playerID].pos.z,
                  gPlayerActors[playerID].pos.x, gPlayerActors[playerID].pos.y + 150.0f, gPlayerActors[playerID].pos.z,
                  D_80176B78->f3.x * 3.0f, D_80176B78->f3.y * 3.0f, D_80176B78->f3.z * 3.0f,
                  posX + sp78 * 1000.0f, gPlayerActors[playerID].pos.y + 120.0f, gPlayerActors[playerID].pos.z - sp7C * 1000.0f,
                  posX + sp80 * 300.0f, gPlayerActors[playerID].pos.y + 90.0f, gPlayerActors[playerID].pos.z - sp84 * 300.0f,
                  60.0f, 60.0f, 360.0f);
    Effect_TypeAH_Init(D_800F0B54, gPlayerActors[playerID].pos.x, gPlayerActors[playerID].pos.y - 20.0f, gPlayerActors[playerID].pos.z,
                  gPlayerActors[playerID].yAngle, D_800F0DE0, gSelectedCharacters[playerID], 1, 2);
}

void func_8005423C(void) {
    s32 i;
    for (i = 0; i < 6; i++){
        SetPlayerContextEyes(i, 0, 0);
    }
}

void func_80054284(void) {
    f32 width;
    s32 var_s1;
    s32 i;
    f32 posX;

    func_8005423C();
    width = Battle_CalcTableColumnWidths(Battle_PlayerCount, &posX, -160.0f, 310.0f);
    for (i = 0; i < ARRAY_COUNT(gPlayerActors); i++) {
        if (gPlayerActors[i].active == TRUE) {
            if (Battle_PlayerCount == Battle_PlayerRank[i] + 1) {
                var_s1 = 3;
                SetPlayerContextEyes(gSelectedCharacters[i], 2, 0);
            } else {
                var_s1 = Battle_PlayerRank[i];
                SetPlayerContextEyes(gSelectedCharacters[i], 1, (Battle_PlayerRank[i] == 0) ^ 1);
            }
            if (Battle_NoWinner == TRUE) {
                var_s1 = 1;
                SetPlayerContextEyes(gSelectedCharacters[i], 0, 0);
            }
            Effect_TypeAH_Init(D_800F0B54, posX, D_800F0D90[var_s1].unk10, -500.0f, -posX / 12.0f, &D_800F0D90[var_s1], gSelectedCharacters[i], 0, 0);
            posX += width;
        }
    }
}

void func_8005444C(void) {
    if (gIsMultiplayerPaused == TRUE) {
        Effect_TypeAY_Init(D_800FE404, 16.0f, 16.0f, 1, 5, &D_800F0B5C, 0.0f, 0.0f, 320.0f, 240.0f);
    }
    switch (D_800F0B5C) {
        case -2:
        case 1:
            D_800F0B5C = -1;
            break;
        case 2:
            D_800FE74C = 0;
            D_800F0B5C = -1;
            func_8005423C();
            SetProcessType(GAME_MODE_STAGE_SELECT);
            break;
        case 3:
            D_800FE74C = 0;
            D_800F0B5C = -1;
            func_8005423C();
            SetProcessType(GAME_MODE_BATTLE_MENU);
            break;
        case 4:
            D_800FE74C = 0;
            D_800F0B5C = -1;
            func_8005423C();
            SetProcessType(GAME_MODE_TITLE_SCREEN);
            break;
        default:
            break;
    }
}

void Battle_DrawLightSpot(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, s32 playerID) {
    Mtx mtx;

    if (Battle_Time % 2) {
        setPrimColor(D_800FE564[playerID].r, D_800FE564[playerID].g, D_800FE564[playerID].b, D_800FE564[playerID].a * flabs((arg3 / arg1)));
        guAlign(&mtx, 0.0f, 0.0f, 100.0f, 0.0f);
        func_80058BE4(&mtx, arg0, arg1, arg2, arg4, arg4, 0.0f, SPRITE_74);
    }
}

void Battle_Init(void) {
    s32 i;
    
    Battle_Stage = BATTLE_STAGE_INIT;
    D_800F0B64 = BATTLE_STAGE_INVALID;
    Battle_TimeLeft = gTimeTrialDuration;
    D_800F0674 = gIsMultiplayerPaused = FALSE;
    Battle_LastKnockOutTime = 999999999;
    Battle_FirstRankCount = 99;
    D_800FE74C = 0;
    Battle_NoWinner = FALSE;
    D_800F0B5C = -1;
    D_800F0B54[0] = 255;

    for (i = 0; i < ARRAY_COUNT(gPlayerActors); i++) {
        Battle_PlayerData[i].rank = 99;
        Battle_PlayerData[i].rankTimer = 0.0f;
    }
    LoadSprite(SPRITE_110);
    LoadSprite(SPRITE_TEXTBIGGER);
    LoadSprite(SPRITE_ORDINALS);
    LockEyeChange();
    LoadPlayerEyes(0);
    LoadPlayerEyes(1);
    LoadPlayerEyes(2);
    LoadPlayerEyes(3);
    LoadPlayerEyes(4);
    LoadPlayerEyes(5);
    StopBGM();
    if (gSelectedBattleBGM == -1) {
        gMultiplayerBGM = (Rand() % 3) + BGM_BATTLE1;
    } else {
        gMultiplayerBGM = gSelectedBattleBGM + BGM_BATTLE1;
    }
}

#ifdef NON_MATCHING
void Battle_Update(void) {
    s32 var_v0;
    s32 var_v1;
    s32 numAlive;
    u32 var_v1_2;
    s32 i;

    if (gCurrentStage != STAGE_VS || Battle_GameType == BATTLE_TYPE_UNK_0) {
        return;
    }
    
    if (gCurrentZone >= 4) {
        Battle_GameType = BATTLE_TYPE_TIME_TRIAL;
    } else {
        Battle_GameType = BATTLE_TYPE_SURVIVAL;
    }
    
    if (!gIsMultiplayerPaused) {
        var_v1 = 0;
        var_v0 = 0;
        for (i = 0; i < 4; i++) {
            if (gPlayerActors[i].active && D_80168D78[i] == 0) {
                var_v0++;
                if (gPlayerActors[i].exists == 0) {
                    var_v1++;
                }
            }
        }
        
        if (var_v0 == var_v1) {
            var_v1_2 = 0;
        } else {
            var_v1_2 = 1;
        }
        
        for (i = 0; i < 4; i++) {
            if (gPlayerActors[i].active) {
                if (!var_v1_2) {
                    if (func_80055F10(i, 0x1000) == 1) {
                        D_800F0674 = 1;
                    }
                }
                if (gPlayerActors[i].exists && D_80168D78[i] == 0) {
                    if (func_80055F10(i, 0x1000) == 1) {
                        D_800F0674 = 1;
                    }
                }
            }
        }
    }
    
    switch (Battle_Stage) {
        case BATTLE_STAGE_INIT:
            D_800F0674 = 2;
            DisableInput();
            for (i = 0; i < 4; i++) {
                if (gPlayerActors[i].active == TRUE) {
                    Battle_PlayerCount++;
                }
            }
    
            if (Battle_GameType == BATTLE_TYPE_SURVIVAL) {
                Battle_NumRanks = Battle_PlayerCount;
            } else {
                Battle_NumRanks = 2;
            }
            for (i = 0; i < 4; i++) {
                Battle_SurvivalPlayerRank[i] = 0;
                Battle_PlayerData[i].fallOffTime = 29;    
                Battle_PlayerIsOut[i] = FALSE;
            }
            for (i = 0; i < 4; i++) {
                Battle_PlayerRank[i] = 0;
            }
            
            Battle_Time = 0;
            Battle_Stage = BATTLE_STAGE_AFTER_INIT;
            Effect_TypeO_Init(255, 255, 255, 0, 0x2D);
            break;
        case BATTLE_STAGE_INVALID:
            break;
        case BATTLE_STAGE_AFTER_INIT:
            DisableInput();
            D_800F0674 = 2;
            Battle_Time++;
            if (Battle_Time > 45) {
                Battle_Stage = BATTLE_STAGE_READY;
                Battle_Time = 0;
                PLAYSFX(62, 0, 0x10);
            }
            break;
        case BATTLE_STAGE_READY:
            DisableInput();
            D_800F0674 = 2;
            Battle_Time++;
            Battle_PlayEnvSounds();
            Battle_PrintTextBig(80.0f, 100.0f, Battle_Time / 23.333334f, 17, 5, Battle_MsgReady, 1);
            if (Battle_Time == 40) {
                Effect_TypeAG_Init(8.0f, 90.0f, 0x5FFF);
            }
            if (Battle_Time > 70) {
                D_800F0674 = 0;
                Battle_Stage = BATTLE_STAGE_GO;
                Battle_Time = 0;
                D_8017683C = PLAYSFX(64, 0, 0x10);
                PlayBGM(gMultiplayerBGM);
                EnableInput();
            }
            break;
        case BATTLE_STAGE_GO:
            Battle_Time++;
            Battle_PlayEnvSounds();
            Battle_PrintTextBig(110.0f, 100.0f, 1.0f, 19, 3, Battle_MsgGo, 1);
            if (Battle_Time > 20) {
                Battle_Stage = BATTLE_STAGE_GAME;
                Battle_Time = 0;
                StopSoundEffect(D_8017683C);
            }
            break;
        case BATTLE_STAGE_GAME:
            if (!gIsMultiplayerPaused) {
                Battle_TimeLeft--;
                Battle_Time++;
            }
            Battle_DrawPortraits();
            Battle_PlayEnvSounds();
            func_8005444C();
            switch (Battle_GameType) {
                case BATTLE_TYPE_SURVIVAL:
                    for (i = 0; i < 4; i++) {
                        if (gPlayerActors[i].active == TRUE && gPlayerActors[i].exists == 0) {
                            if (!Battle_PlayerIsOut[i]) {
                                if (Battle_KnockOutPlayer(i) == 0) {
                                    Battle_NoWinner = TRUE;
                                    Battle_FirstRankCount = 99;
                                    Battle_TimeLeft = 0;
                                    break;
                                } else {
                                    Battle_PlayerIsOut[i]++;
                                }
                            } else {
                                Battle_PrintPlayerRank(i);
                            }
                        }
                    }
                    Battle_PrintHurry();
                    Battle_PrintCountdownTimer();
                    if (!Battle_NoWinner) {
                        Battle_FirstRankCount = Battle_UpdateRanking();
                    }
                    if (Battle_NoWinner == TRUE || Battle_FirstRankCount == 0 || Battle_TimeLeft <= 0) {
                        Battle_Time = 0;
                        if (Battle_FirstRankCount > 0) {
                            Battle_NoWinner = TRUE;
                        }
                        if (!Battle_NoWinner) {
                            Battle_Stage = BATTLE_STAGE_END_ACTIONS;
                        } else {
                            Battle_Stage = BATTLE_STAGE_SHOW_WINNER;
                        }
                    }
                    break;
                case BATTLE_TYPE_TIME_TRIAL:
                    Battle_UpdateFallOffTimers();
                    Battle_PlayEnvSounds();
                    Battle_FirstRankCount = Battle_UpdateRanking();
                    for (i = 0; i < 4; i++) {
                        if (gPlayerActors[i].active != 0) {
                            Battle_PrintPlayerTimer(i);
                        }
                    }
                    Battle_PrintHurry();
                    Battle_PrintCountdownTimer();
                    if (Battle_TimeLeft <= 0) {
                        if (Battle_FirstRankCount != 0) {
                            // at least two players have same time
                            Battle_Stage = BATTLE_STAGE_SUDDEN_DEATH;
                            for (i = 0; i < 4; i++) {
                                if (gPlayerActors[i].active) {
                                    Battle_SurvivalPlayerRank[i] = Battle_PlayerRank[i] + 1;
                                    if (Battle_PlayerRank[i] > 0) {
                                        Battle_PlayerIsOut[i]++;
                                    }
                                    Battle_NumRanks = Battle_FirstRankCount + 1;
                                }
                            }
                        } else {
                            Battle_Stage = BATTLE_STAGE_END_ACTIONS;
                        }
                        Battle_Time = 0;
                    }
                    break;
            }
            break;
        case BATTLE_STAGE_SUDDEN_DEATH:
            if (!gIsMultiplayerPaused) {
                Battle_Time++;
            }
            Battle_PlayEnvSounds();
            for (i = 0; i < 4; i++) {
                if (gPlayerActors[i].active) {
                    Battle_DrawLightSpot(gPlayerActors[i].pos.x, -300.0f, gPlayerActors[i].pos.z,
                                  gPlayerActors[i].pos.y, 200.0f, gSelectedCharacters[i]);
                }
            }
            func_8005444C();
            Battle_PrintSuddenDeath(90.0f, 16.0f);
            Battle_DrawPortraits();
            func_80051F38();
            for (i = 0; i < 4; i++) {
                if (gPlayerActors[i].active && !Battle_PlayerIsOut[i] && gPlayerActors[i].pos.y < -10.0f) {
                    if (Battle_KnockOutPlayer(i) == 0) {
                        Battle_NoWinner = TRUE;
                        Battle_FirstRankCount = 99;
                        break;
                    }
                    Battle_PlayerIsOut[i]++;
                }
            }
            if (!Battle_NoWinner) {
                Battle_FirstRankCount = Battle_UpdateRanking();
            }
            if (Battle_FirstRankCount == 0 || Battle_NoWinner == TRUE) {
                if (!Battle_NoWinner) {
                    D_800F0B64 = Battle_Stage;
                    Battle_Stage = BATTLE_STAGE_END_ACTIONS;
                } else {
                    Battle_Stage = BATTLE_STAGE_SHOW_WINNER;
                }
                Battle_Time = 0;
            }
            break;
        case BATTLE_STAGE_END_ACTIONS:
            D_800F0674 = 0;
            Battle_Stage = BATTLE_STAGE_SHOW_WINNER;
            Battle_PlayEnvSounds();
            Battle_DrawPortraits();
            numAlive = 0;
            for (i = 0; i < 4; i++) {
                if (gPlayerActors[i].active) {
                    if (gPlayerActors[i].exists && Battle_PlayerIsOut[i] != TRUE || D_800F0B64 != BATTLE_STAGE_INVALID) {
                        numAlive++;
                        if (gPlayerActors[i].canJump || gPlayerActors[i].playerHURTSTATE != 0 || gTongues[i].tongueMode != 0) {
                            if (Battle_PlayerRank[i] != 0) {
                                DisableInput();
                            }
                            Battle_Stage = BATTLE_STAGE_END_ACTIONS;
                        }
                    }
                }
            }
            if (numAlive == 0) {
                Battle_Stage = BATTLE_STAGE_SHOW_WINNER;
                Battle_NoWinner = TRUE;
                Battle_FirstRankCount = 99;
            }
            if (Battle_Stage == BATTLE_STAGE_SHOW_WINNER && numAlive != 0) {
                Battle_LimitCountersInRanking();
            }
            break;
        case BATTLE_STAGE_SHOW_WINNER:
            if (Battle_Time++ < 16) {
                D_800F0674 = 0;
                Battle_DrawPortraits();
                DisableInput();
                break;
            }
            D_800F0674 = 2;
            DisableInput();
            Battle_DrawPortraits();
            func_80051F38();
            Battle_Time = 0;
            func_80053DA8(Battle_FirstRankCount);
            if (Battle_FirstRankCount > 0 || Battle_NoWinner == TRUE) {
                for (i = 0; i < 4; i++) {
                    Battle_PlayerRank[i] = 1;
                }
                func_8008BFE0(90);
            } else if (Battle_FirstRankCount == 0 && !Battle_NoWinner) {
                PlayBGM(BGM_BATTLEWIN);
                for (i = 0; i < 4; i++) {
                    if (gPlayerActors[i].active == TRUE && Battle_PlayerRank[i] == 0) {
                        UnlockEyeChange();
                        SetPlayerContextEyes(gSelectedCharacters[i], 1, 0);
                        func_80053FA0(i);
                        gPlayerActors[i].pos.y = 5000.0f;
                        break;
                    }
                }
            }
            Battle_Time = 0;
            Battle_Stage = BATTLE_STAGE_WAIT_BEFORE_EXIT;
            break;
        case BATTLE_STAGE_WAIT_BEFORE_EXIT:
            DisableInput();
            Battle_Time++;
            D_800F0674 = 2;
            Battle_PlayEnvSounds();
            Battle_DrawPortraits();
            func_80051F38();
            if (Battle_GameType == BATTLE_TYPE_TIME_TRIAL) {
                for (i = 0; i < 4; i++) {
                    if (gPlayerActors[i].active) {
                        Battle_DrawLightSpot(gPlayerActors[i].pos.x, -300.0f, gPlayerActors[i].pos.z,
                                      gPlayerActors[i].pos.y, 200.0f, gSelectedCharacters[i]);
                    }
                }
            }
            if (Battle_Time > 120) {
                StopBGM();
                Battle_Stage = BATTLE_STAGE_EXIT;
            }
            break;
        case BATTLE_STAGE_EXIT:
            Battle_Time = 0;
            Battle_Stage = BATTLE_STAGE_INIT;
            D_800F0674 = 0;
            D_800F0B54[0] = 0;
            EnableInput();
            SetProcessType(0x11);
            break;
        default:
            Battle_Stage = BATTLE_STAGE_INVALID;
            Battle_Time = 0;
            break;
    }
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/battle/Battle_Update.s")
#endif

void Process_Ranking(void) {
    switch (gGameModeState) {
    case 0:
        D_800FFDF4 = 1;
        D_800FE708 = 0;
        DMAStruct_Print();
        func_800A1EC4();
        LoadSprite(0xD4);
        LoadSprite(SPRITE_PORTRAITDAVY);
        LoadSprite(SPRITE_PORTRAITJACK);
        LoadSprite(SPRITE_PORTRAITFRED);
        LoadSprite(SPRITE_PORTRAITLINDA);
        LoadSprite(SPRITE_PORTRAITBLACK);
        LoadSprite(SPRITE_PORTRAITWHITE);
        LoadSprite(0x6E);
        LoadSprite(0xBD);
        LoadSprite(0xBE);
        LoadSprite(0xBF);
        LoadSprite(0xC0);
        LoadSprite(0xC1);
        LoadSprite(0xC2);
        CTTaskList_Init();
        D_80168DA0 = 4;
        gGameModeState++;
        UseFixedRNGSeed = FALSE;
        D_800FFDF0 = 2;
        func_8008BE14();
        func_80088198();
        D_801FC9AC = 0;
        Effect_TypeO_Init(0, 0, 0, 0, 0x10);
        func_8008F114();
        break;
    case 1:
        Effect_TypeAN_Init();
        gGameModeState++;
        func_8008F114();
        break;
    case 2:
        func_8008F16C();
        gTimer++;
        break;
    case 3:
        SetProcessType(GAME_MODE_TITLE_SCREEN);
        break;
    }
    func_8008C094();
}

void func_800557F8(void) {
    s32 i;

    switch (gGameModeState) {
    case 0:
        D_800FFDF4 = 1;
        DMAStruct_Print();
        func_800A0D90();

        for (i = 0; i < ARRAY_COUNT(gPlayerActors); i++) {
            gPlayerActors[i].exists = gPlayerActors[i].active;
        }

        LoadSprite(0xCE);
        LoadSprite(0x6E);
        LoadSprite(0xD5);
        LoadPlayerEyes(CHARA_DAVY);
        LoadPlayerEyes(CHARA_JACK);
        LoadPlayerEyes(CHARA_FRED);
        LoadPlayerEyes(CHARA_LINDA);
        LoadPlayerEyes(CHARA_BLACK);
        LoadPlayerEyes(CHARA_WHITE);
        CTTaskList_Init();
        D_80168DA0 = 4;
        gGameModeState++;
        UseFixedRNGSeed = FALSE;
        D_800FFDF0 = 2;
        func_8008BE14();
        func_80088198();
        D_801FC9AC = 0;
        func_8008F114();
        break;
    case 1:
        Effect_TypeAO_Init();
        gGameModeState++;
        func_8008F114();
        break;
    case 2:
        func_8008F16C();
        gTimer++;
        break;
    case 3:
        SetProcessType(GAME_MODE_TITLE_SCREEN);
        break;
    }

    func_8008C094();
}

void Process_Boot(void) {
    switch (gGameModeState) {
    case 0:
        D_800FFDF4 = 1;
        DMAStruct_Print();
        func_800A1EC4();
        LoadSprite(SPRITE_TEXTBIGGER);
        CTTaskList_Init();
        func_8002E0CC();
        gGameModeState++;
        UseFixedRNGSeed = FALSE;
        D_800FFDF0 = 2;
        D_801FC9AC = 0;
        func_8008F114();
        break;
    case 1:
        Effect_ControllerRumble_Init();
        gGameModeState++;
        func_8008F114();
        break;
    case 2:
        func_8008F16C();
        gTimer++;
        break;
    case 3:
        SetProcessType(GAME_MODE_SUPPLY_SYSTEM_LOGO);
        break;
    }

    func_8008C094();
}

void Process_SunsoftLogo(void) {
    switch (gGameModeState) { 
    case 0:
        D_800FFDF4 = 1;
        DMAStruct_Print();
        func_800A1EC4();
        LoadSprite(0xCD);
        CTTaskList_Init();
        func_8002E0CC();
        gGameModeState++;
        UseFixedRNGSeed = FALSE;
        D_800FFDF0 = 2;
        D_801FC9AC = 0;
        break;
    case 1:
        Effect_TypeAP_Init();
        gGameModeState++;
        func_8008F114();
        break;
    case 2:
        func_8008F16C();
        gTimer++;
        break;
    case 3:
        SetProcessType(GAME_MODE_SUPPLY_SYSTEM_LOGO);
        break;
    }
    
    func_8008C094();
}
