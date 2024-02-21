#include "2C3B0.h"

// BSS
u8 D_80176820;
u8 D_80176821;
u8 D_80176822;
u8 D_80176823;
s32 Battle_TimeLeft;
s32 D_80176828;
s32 D_8017682C;
s32 gMultiplayerBGM;
s32 D_80176834;

// data
u32 Battle_Time = 0;
u8 D_800F0B54[] = { 255, 0, 0, 0 };
s32 Battle_Stage = BATTLE_STAGE_0;
s32 D_800F0B5C = -1;
s32 D_800F0B60 = 0;
s32 D_800F0B64 = BATTLE_STAGE_1;
s32 D_800F0B68[4][4] = {
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
};
s32 gCharacterPortraits[6] = { SPRITE_PORTRAITDAVY, SPRITE_PORTRAITJACK, SPRITE_PORTRAITFRED, SPRITE_PORTRAITLINDA, SPRITE_PORTRAITBLACK, SPRITE_PORTRAITWHITE };
s32 Battle_PlayerPlaces[4] = { 0, 0, 0, 0 };
s32 D_800F0BD0[4] = { 0, 0, 0, 0 };
u8 Battle_CornerIndices[4] = { 0, 3, 1, 2 };
unk800F0BE4 Battle_PlayerUIDefs[] = {
    {
        0,
        16.0f, 14.0f,
        36.0f, 14.0f,
        34.0f, 14.0f,
        0.0f,
        0
    },
    {
        0,
        16.0f, 205.0f,
        36.0f, 212.0f,
        34.0f, 206.0f,
        0.0f,
        0
    },
    {
        0,
        288.0f, 14.0f,
        240.0f, 14.0f,
        260.0f, 14.0f,
        0.0f,
        0
    },
    {
        0,
        288.0f, 205.0f,
        240.0f, 212.0f,
        260.0f, 206.0f,
        0.0f,
        0
    }
};
s32 D_800F0C74 = 999999999;
s32 Battle_DecimalPowers[] = { 1, 10, 100, 1000, 10000, 100000, 1000000, 10000000 };
u8 Batlle_MsgSuddenDeath[] = { 19, 21, 4, 4, 5, 14, 100, 4, 5, 1, 20, 8 };
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

void func_80050FB0(void) {
    s32 i;

    if (D_801749B4 == 0) {
        for (i = 0; i < PLAYERS_MAX; i++) {
            if (gPlayerActors[i].active == TRUE) {
                if (gPlayerActors[i].pos.y < -10.0f) {
                    Battle_PlayerUIDefs[Battle_CornerIndices[i]].unk_00++;
                    func_8005456C(gPlayerActors[i].pos.x, -300.0f, gPlayerActors[i].pos.z, gPlayerActors[i].pos.y, 200.0f, gSelectedCharacters[i]);
                }
            }
        }
    }
}

void func_800510E0(void) {
    s32 i;

    for (i = 0; i < PLAYERS_MAX; i++) {
        if (gPlayerActors[i].active == TRUE) {
            if (++D_800F0B68[i][Battle_PlayerPlaces[i]] > 99) {
                D_800F0B68[i][Battle_PlayerPlaces[i]] = 99;
            }
        }
    }
}

s32 func_8005119C(void) {
    s32 i, j;
    s32 sum_1 = 0;
    s32 sum_2 = 0;
    
    s32 gameType = Battle_GameType;
    if (Battle_Stage == BATTLE_STAGE_6) {
        gameType = BATTLE_TYPE_SURVIVAL;
    }
    
    switch (gameType) {
        case BATTLE_TYPE_TIME_TRIAL:
            for (i = 0; i < PLAYERS_MAX ; i++) {
                s32 total = 0;
                if (gPlayerActors[i].active == TRUE) {
                    for (j = 0; j < PLAYERS_MAX; j++) {
                        if (gPlayerActors[j].active == TRUE) {
                            if (i != j && Battle_PlayerUIDefs[Battle_CornerIndices[j]].unk_00 < Battle_PlayerUIDefs[Battle_CornerIndices[i]].unk_00) {
                                total++; 
                            }
                            Battle_PlayerPlaces[i] = total;
                        }    
                    }
                    if (Battle_PlayerPlaces[i] == 0) {
                        sum_1++;
                    }
                    if (Battle_PlayerPlaces[i] == 1) {
                        sum_2++;
                    }
                }
            }

            if (sum_2 == 2) {
                for (i = 0; i < PLAYERS_MAX; i++) {
                    if (gPlayerActors[i].active == TRUE && Battle_PlayerPlaces[i] == 3) {
                        Battle_PlayerPlaces[i] = 2;
                    }
                }
            }
            if (sum_1 == 1) {
                sum_1 = 0;
            } else {
                sum_1--;
            }
            break;
        case BATTLE_TYPE_SURVIVAL:
            for (i = 0; i < PLAYERS_MAX; i++) {
                if (gPlayerActors[i].active == TRUE) {
                    Battle_PlayerPlaces[i] = D_800F0BD0[i] - 1;
                    
                    if (D_800F0BD0[i] < 2) {
                        Battle_PlayerPlaces[i] = 0;
                    }
                    if (Battle_PlayerPlaces[i] == 0) {
                        sum_1++;
                    }
                }
            }
            sum_1--;
            break;
    }
    return sum_1;
}

s32 func_80051548(s32 arg0) {
    static s32 D_80176838;
    s32 var_v1 = 0;
    s32 i;
    
    if (D_800F0C74 == Battle_Time) {
        D_800F0BD0[arg0] = D_80176838;

        for (i = 0; i < PLAYERS_MAX; i++) {
            D_800F0BD0[i]--;
            if (D_800F0BD0[i] <= 0) {
                D_800F0BD0[i] = 0;
            }
            if (D_800F0BD0[i] == 1) {
                var_v1++;
            }
        }

        D_80176838--;
    } else {
        D_80176838 = D_800F0BD0[arg0] = D_80176834;
        D_80176834--;
    }
    
    D_800F0C74 = Battle_Time;

    if (var_v1 >= 2) {
        var_v1 = 0;
    } else {        
        var_v1 = -1;        
    }
    return var_v1;
}

// TODO make them static inside function
s32 D_8017683C;
unk80176840 D_80176840;

f32 func_80051678(u8 arg0, f32* arg1, f32 arg2, f32 arg3) {
    f32 ret;
    f32 temp_f12;
    f32 temp_f12_2;
    
    ret = arg3 - arg2;
    switch (arg0) {
    default:
        break;
    case 2:
        temp_f12 = ret / 6.0f;
        *arg1 = temp_f12 + arg2;
        ret = temp_f12 * 4.0f;
        break;
    case 3:
        temp_f12 = ret / 8;
        *arg1 = temp_f12 + arg2;
        ret = temp_f12 * 3.0f;
        break;
    case 4:
        *arg1 = arg2;
        ret = ret / 3.0f;
        break;
    }
    return ret;
}

void func_8005171C(void) {
    if (gCurrentZone == 6 && (Battle_Time % 60) == 0) {
        PLAYSFX(137, 0, 0x10);
    }
}

s32 func_8005177C(s32 playerID) {
    s32 i;
    s32 activeCount = 0;

    for (i = 0; i < PLAYERS_MAX; i++) {
        if (gPlayerActors[i].active && (D_80168D78[i] != (((i & 0xFF) == 4) * 0))) {
            if (playerID != i) {
                activeCount++;
                continue;
            }
            break;
        }
    }
    if (i == PLAYERS_MAX) {
        activeCount = -1;
    }
    return activeCount;
}

void Battle_DrawPortraits(void) {
    s32 i;

    for (i = 0; i < PLAYERS_MAX; i++) {
        if (gPlayerActors[i].active == TRUE) {
            if (gSelectedCharacters[i] > CHARA_WHITE) {
                continue;
            }
            printUISprite(Battle_PlayerUIDefs[Battle_CornerIndices[i]].unk_04, Battle_PlayerUIDefs[Battle_CornerIndices[i]].unk_08, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, gCharacterPortraits[gSelectedCharacters[i]]);
        }
    }
}

#ifdef NON_MATCHING
void Battle_PrintPlayerTimer(s32 playerID) {
    if (Battle_PlayerPlaces[playerID] == 0) {
        s8 g = Battle_Time * 16;
        SetTextGradient(255, g, 32, 255,
                        255, 0,  0, 255,
                        255, g, 32, 255,
                        255, 0,  0, 255);
    } else {
        SetTextGradientFromPalette(5);
    }
    func_800610A8();
    printNumber(Battle_PlayerUIDefs[Battle_CornerIndices[playerID]].unk_0C, Battle_PlayerUIDefs[Battle_CornerIndices[playerID]].unk_10, 0.0f, 0.6f, (Battle_PlayerUIDefs[Battle_CornerIndices[playerID]].unk_00 / 1800) % 60, 2, 0);
    PrintTextWrapper(Battle_PlayerUIDefs[Battle_CornerIndices[playerID]].unk_0C + 18.0f, Battle_PlayerUIDefs[Battle_CornerIndices[playerID]].unk_10 - 2.0f, 0.0f, 0.6f, "：", 1);
    printNumber(Battle_PlayerUIDefs[Battle_CornerIndices[playerID]].unk_0C + 28.0f, Battle_PlayerUIDefs[Battle_CornerIndices[playerID]].unk_10, 0.0f, 0.6f, (Battle_PlayerUIDefs[Battle_CornerIndices[playerID]].unk_00 / 30) % 60, 2, 0);
    func_800610B8();
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/Battle_PrintPlayerTimer.s")
void Battle_PrintPlayerTimer(s32 playerID);
#endif

#ifdef NON_MATCHING
void Battle_PrintPlayerPlace(s32 playerID) {
    f32 go;
    f32 temp_f2;
    f32 alpha = 1.0f;
    f32 sp68 = 24.0f;
    f32 sp64 = 16.0f;
    f32 sp60 = 0.0f;
    f32 sp5C = 0.0f;
    s32 temp_t4;
    
    if (Battle_PlayerUIDefs[Battle_CornerIndices[playerID]].unk_20 != Battle_PlayerPlaces[Battle_CornerIndices[playerID]]) {
        Battle_PlayerUIDefs[Battle_CornerIndices[playerID]].unk_20 = Battle_PlayerPlaces[Battle_CornerIndices[playerID]];
        Battle_PlayerUIDefs[Battle_CornerIndices[playerID]].unk_1C = 0;
    } else {
        Battle_PlayerUIDefs[Battle_CornerIndices[playerID]].unk_1C += 0.125f;
        if (Battle_PlayerUIDefs[Battle_CornerIndices[playerID]].unk_1C <= 1.0f) {
            alpha *= Battle_PlayerUIDefs[Battle_CornerIndices[playerID]].unk_1C;
            go = 1 - alpha;
            temp_f2 = 1.0f + 2.0f * go;
            
            sp68 *= temp_f2;
            sp64 *= temp_f2;
            sp60 = 24.0f;
            sp5C = 16.0f;
            sp60 *= go;
            sp5C *= go;
        }
    }
    
    temp_t4 = Battle_Time % 64;
    if (temp_t4 < 2 || temp_t4 >= 6 && temp_t4 < 8) {
        SetTextGradient(255, 255, 255, 255 * alpha, 
                        255, 255, 255, 255 * alpha, 
                        255, 255, 255, 255 * alpha, 
                        255, 255, 255, 255 * alpha);
    } else {
        switch (Battle_PlayerPlaces[playerID]) {
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
    printUISprite(Battle_PlayerUIDefs[Battle_CornerIndices[playerID]].unk_14 - sp60, Battle_PlayerUIDefs[Battle_CornerIndices[playerID]].unk_18 - sp5C,
                0, 0, 1, sp68, sp64, Battle_PlayerPlaces[playerID], 213);
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/Battle_PrintPlayerPlace.s")
void Battle_PrintPlayerPlace(s32 arg0); 
#endif

void func_80051F38(void) {
    s32 i;
    switch (Battle_Stage) {
        case BATTLE_STAGE_6:
            for (i = 0; i < PLAYERS_MAX; i++) {
                if (gPlayerActors[i].active == TRUE) {
                    if (Battle_GameType == BATTLE_TYPE_TIME_TRIAL) {
                        if (Battle_PlayerPlaces[i] < 2) {
                            Battle_PrintPlayerTimer(i);
                        } else {
                            Battle_PrintPlayerPlace(i);
                        }
                    } else if (Battle_GameType == BATTLE_TYPE_SURVIVAL) {
                        Battle_PrintPlayerPlace(i);
                    }
                }
            }
            break;
        case BATTLE_STAGE_8:
        case BATTLE_STAGE_9:
            for (i = 0; i < 4; i++) {
                if (gPlayerActors[i].active == TRUE && D_80176828 == 0) {
                    Battle_PrintPlayerPlace(i);
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

void func_800522A4(f32 posX, f32 posY, f32 scaleX, f32 scaleY, s32 arg4, s32 arg5) {
    s32 var_s0;
    s32 sp90;
    s32 sp8C;    
    s32 var_s1;

    var_s0 = arg4;
    var_s1 = 0;
    while (arg4 != 0) {
        if (func_80080318(SPRITE_TEXTBIG, arg4, &sp90, &sp8C) == 0) {
            SetTextGradientFromPalette(arg5);
            func_800612F0(sp8C);
            func_80059F28(posX + 16.0f * scaleX * var_s1, posY, 0, 0, 1.0f, 16 * scaleX, 24.0f * scaleY, sp90, SPRITE_TEXTBIG);
        }
        
        arg4 += 2;
        var_s1++;
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

void func_800525E8(s32 playerID, f32 posX) {
    s32 sp44;

    sp44 = func_8005177C(playerID);
    if (sp44 >= 0) {
        posX -= 3;
        func_800610A8();
        SetTextGradientFromPalette(0);
        
        func_800612F0(0);
        func_80059F28(posX,      102.0f, 0.0f, 0.0f, 1.0f, 12.0f, 24.0f,  3.0f, SPRITE_TEXTBIG);
        func_80059F28(posX + 12, 104.6f, 0.0f, 0.0f, 1.0f, 12.0f, 24.0f, 15.0f, SPRITE_TEXTBIG);
        func_80059F28(posX + 24, 107.3f, 0.0f, 0.0f, 1.0f, 12.0f, 24.0f, 13.0f, SPRITE_TEXTBIG);
        
        func_800612F0(1);
        func_80059F28(posX + 36, 110.0f, 0.0f, 0.0f, 1.0f, 12.0f, 24.0f, sp44 + 1, SPRITE_TEXTBIG);
        func_800610B8();
    } else {
        func_800612F0(1);
        SetTextGradientFromPalette(0);
        func_80059F28(posX, 102.0f, 0.0f, 0.0f, 1.0f, 16.0f, 24.0f, playerID + 1, SPRITE_TEXTBIG);
        
        func_800612F0(0);
        SetTextGradientFromPalette(0);
        func_80059F28(posX + 24, 110.0f, 0.0f, 0.0f, 1.0f, 16.0f, 24.0f, 16, SPRITE_TEXTBIG);
    }
}

#ifdef NON_MATCHING
void func_80052890(u32 charID) {
    static u8 D_80176840;
    static u8 D_80176841;
    s32 temp_t6 = Battle_Time & 0x1F;
    
    if (temp_t6 >= 0 && temp_t6 < 8) {
        D_80176840 = (temp_t6 % 8) * 175.0f / 8.0f;
        D_80176840 += 80;
    }
    if (temp_t6 >= 8 && temp_t6 < 16) {
        D_80176841 = (temp_t6 % 8) * 175.0f / 8.0f;
        D_80176841 += 80;
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
#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_80052890.s")
void func_80052890(u32 arg0);
#endif

void func_800536D8(void) {
    s32 i, j;
    f32 sp9C;
    s32 v0;
    f32 sp94;

    sp94 = func_80051678(D_8017682C, &sp9C, 88.0f, 256.0f);

    for (i = 0; i < 4; i++) {
        if (gPlayerActors[i].active == 1) {
            f32 y = 128.0f;
            func_800525E8(i, sp9C - 4.0f);
            for (j = 0; j < 4; j++, y += 24) {
                if (j == Battle_PlayerPlaces[i] && D_80176828 == 0) {
                    func_80052890(gSelectedCharacters[i]);
                } else {
                    SetTextGradientFromPalette(1);
                }

                if (D_800F0B68[i][j] >= 10) {
                    v0 = 2;
                } else {
                    v0 = 1;
                }

                Battle_PrintNumber(sp9C + 12.8f * (v0 == 1), y, 0.8f, 0.8f, D_800F0B68[i][j], v0, 0);
                
            }
            sp9C += sp94;
        }
    }
}

//prints "HURRY!" during MP Battle [9 times]
void Multiplayer_PrintHurry(void) {
    if ((Battle_TimeLeft <= 1800) && (Battle_TimeLeft > 1710) && ((Battle_TimeLeft % 10) < 5)) {
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

    for (i = 0; i < ARRAY_COUNT(Batlle_MsgSuddenDeath); i++) {
        if ((Battle_Time % 10) < 5 && scaleY == 1.0f) {
            SetTextGradientFromPalette(1);
        } else {
            SetTextGradientFromPalette(4);
        }
        func_800612F0(0);
        printUISprite(posX + i * 11.2f, posY + (1 - scaleY) * 12.0f, 0.0f, 0.0f, 1.0f, 11.2f, 16.8f * scaleY, Batlle_MsgSuddenDeath[i], SPRITE_TEXTBIG);
    }    
}

void func_80053CA0(void) {
    s32 i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 8; j++) {
            func_800612F0(i);
            func_80059F28((j * 0x28), (i * 0x30), 0, 0, 1.0f, 40.0f, 48.0f, j, 206);
        }
    }
    func_800536D8();
}

void func_80053DA8(s32 arg0) {
    s32 i;
    s32 activeCount;    

    if (arg0 == 0) {
        for (i = 0; i < 4; i++) {
            if (gPlayerActors[i].active == TRUE && Battle_PlayerPlaces[i] == 0) {
                break;
            }
        }
    } else {
        i = -1;
    }
    
    activeCount = func_8005177C(i);
    if (activeCount >= 0) {
        D_800F0CEC[0].unk_00 = activeCount + 5;
    } else {
        D_800F0CA4[0].unk_00 = i + 5;
    }
    if (i == -1) {
        func_80077688(70.0f, 80.0f, 170.0f, 1.0f, 5, D_800F0D14, 0x11, 0x12, 5.0f, 10.0f, 120.0f);
    } else if (activeCount >= 0) {
        func_80077688(60.0f, 80.0f, 180.0f, 0.8f, 8, D_800F0CD4, 0x13, 0x14, 5.0f, 8.0f, 120.0f);
    } else {
        func_80077688(70.0f, 80.0f, 170.0f, 1.0f, 6, D_800F0CA4, 0x13, 0x14, 5.0f, 10.0f, 120.0f);
    }
}

void func_80053FA0(s32 arg0) {
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 posX;

    sp78 = cosf((gPlayerActors[arg0].yAngle - 90.0f) * 2 * 3.141592653589793 / 360.0);
    sp7C = sinf((gPlayerActors[arg0].yAngle - 90.0f) * 2 * 3.141592653589793 / 360.0);
    sp80 = cosf((gPlayerActors[arg0].yAngle + 260.0f) * 2 * 3.141592653589793 / 360.0);
    sp84 = sinf((gPlayerActors[arg0].yAngle + 260.0f) * 2 * 3.141592653589793 / 360.0);

    posX = gPlayerActors[arg0].pos.x; // required for matching
    
    func_80068A88(D_80176B78->f5.x, D_80176B78->f5.y, D_80176B78->f5.z,
                  gPlayerActors[arg0].pos.x, gPlayerActors[arg0].pos.y + 300.0f, gPlayerActors[arg0].pos.z,
                  gPlayerActors[arg0].pos.x, gPlayerActors[arg0].pos.y + 150.0f, gPlayerActors[arg0].pos.z,
                  D_80176B78->f3.x * 3.0f, D_80176B78->f3.y * 3.0f, D_80176B78->f3.z * 3.0f,
                  posX + sp78 * 1000.0f, gPlayerActors[arg0].pos.y + 120.0f, gPlayerActors[arg0].pos.z - sp7C * 1000.0f,
                  posX + sp80 * 300.0f, gPlayerActors[arg0].pos.y + 90.0f, gPlayerActors[arg0].pos.z - sp84 * 300.0f,
                  60.0f, 60.0f, 360.0f);
    func_80070970(D_800F0B54, gPlayerActors[arg0].pos.x, gPlayerActors[arg0].pos.y - 20.0f, gPlayerActors[arg0].pos.z,
                  gPlayerActors[arg0].yAngle, D_800F0DE0, gSelectedCharacters[arg0], 1, 2);
}

void func_8005423C(void) {
    s32 i;
    for (i = 0; i < 6; i++){
        SetPlayerContextEyes(i, 0, 0);
    }
}

void func_80054284(void) {
    f32 temp_f22;
    s32 var_s1;
    s32 i;
    f32 sp88;

    func_8005423C();
    temp_f22 = func_80051678(D_8017682C, &sp88, -160.0f, 310.0f);
    for (i = 0; i < 4; i++) {
        if (gPlayerActors[i].active == 1) {
            if (D_8017682C == Battle_PlayerPlaces[i] + 1) {
                var_s1 = 3;
                SetPlayerContextEyes(gSelectedCharacters[i], 2, 0);
            } else {
                var_s1 = Battle_PlayerPlaces[i];
                SetPlayerContextEyes(gSelectedCharacters[i], 1, (Battle_PlayerPlaces[i] == 0) ^ 1);
            }
            if (D_800F0B60 == 1) {
                var_s1 = 1;
                SetPlayerContextEyes(gSelectedCharacters[i], 0, 0);
            }
            func_80070970(D_800F0B54, sp88, D_800F0D90[var_s1].unk10, -500.0f, -sp88 / 12.0f, &D_800F0D90[var_s1], gSelectedCharacters[i], 0, 0);
            sp88 += temp_f22;
        }
    }
}

void func_8005444C(void) {
    if (D_801749B4 == 1) {
        func_800771DC(&D_800FE404, 16.0f, 16.0f, 1, 5, &D_800F0B5C, 0.0f, 0.0f, 320.0f, 240.0f);
    }
    switch (D_800F0B5C) {
        case -2:
        case 1:
            D_800F0B5C = -1;
            return;
        case 2:
            D_800FE74C = 0;
            D_800F0B5C = -1;
            func_8005423C();
            SetProcessType(0xE);
            return;
        case 3:
            D_800FE74C = 0;
            D_800F0B5C = -1;
            func_8005423C();
            SetProcessType(7);
            return;
        case 4:
            D_800FE74C = 0;
            D_800F0B5C = -1;
            func_8005423C();
            SetProcessType(6);
            /* fallthrough */
        default:
            return;
    }
}

void func_8005456C(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, s32 arg5) {
    Mtx sp30;

    if (Battle_Time % 2) {
        setPrimColor(D_800FE564[arg5].unk0, D_800FE564[arg5].unk1, D_800FE564[arg5].unk2, D_800FE564[arg5].unk3 * flabs((arg3 / arg1)));
        guAlign(&sp30, 0.0f, 0.0f, 100.0f, 0.0f);
        func_80058BE4(&sp30, arg0, arg1, arg2, arg4, arg4, 0.0f, 0x4A);
    }
}

void Battle_Init(void) {
    s32 i;
    
    Battle_Stage = BATTLE_STAGE_0;
    D_800F0B64 = BATTLE_STAGE_1;
    Battle_TimeLeft = D_8020250C;
    D_800F0674 = D_801749B4 = 0;
    D_800F0C74 = 999999999;
    D_80176828 = 99;
    D_800FE74C = 0;
    D_800F0B60 = 0;
    D_800F0B5C = -1;
    D_800F0B54[0] = 255;

    for (i = 0; i < 4; i++) {
        Battle_PlayerUIDefs[i].unk_20 = 99;
        Battle_PlayerUIDefs[i].unk_1C = 0.0f;
    }
    LoadSprite(110);
    LoadSprite(SPRITE_TEXTBIGGER);
    LoadSprite(213);
    LockEyeChange();
    LoadPlayerEyes(0);
    LoadPlayerEyes(1);
    LoadPlayerEyes(2);
    LoadPlayerEyes(3);
    LoadPlayerEyes(4);
    LoadPlayerEyes(5);
    StopBGM();
    if (gSelectedBattleBGM == -1) {
        gMultiplayerBGM = (Rand() % 3) + 7;
    } else {
        gMultiplayerBGM = gSelectedBattleBGM + 7;
    }
}

#ifdef NON_MATCHING
void Battle_Update(void) {
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_3;
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
    
    if (D_801749B4 == 0) {
        var_v1 = 0;
        var_v0 = 0;
        for (i = 0; i < 4; i++) {
            if (gPlayerActors[i].active != 0 && D_80168D78[i] == 0) {
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
            if (gPlayerActors[i].active != 0) {
                if (!var_v1_2) {
                    if (func_80055F10(i, 0x1000) == 1) {
                        D_800F0674 = 1;
                    }
                }
                if (gPlayerActors[i].exists != 0 && D_80168D78[i] == 0) {
                    if (func_80055F10(i, 0x1000) == 1) {
                        D_800F0674 = 1;
                    }
                }
            }
        }
    }
    
    switch (Battle_Stage) {
        case BATTLE_STAGE_0:
            D_800F0674 = 2;
            InputDisable();
            for (i = 0; i < 4 ; i++) {
                if (gPlayerActors[i].active == TRUE) {
                    D_8017682C++;
                }
            }
    
            if (Battle_GameType == BATTLE_TYPE_SURVIVAL) {
                D_80176834 = D_8017682C;
            } else {
                D_80176834 = 2;
            }
            for (i = 0; i < 4; i++) {
                D_800F0BD0[i] = 0;
                Battle_PlayerUIDefs[i].unk_00 = 29;    
                D_80176820[i] = 0;
            }
            for (i = 0; i < 4; i++) {
                Battle_PlayerPlaces[i] = 0;
            }
            
            Battle_Time = 0;
            Battle_Stage = BATTLE_STAGE_2;
            func_800678EC(255, 255, 255, 0, 0x2D);
            break;
        case BATTLE_STAGE_1:
            break;
        case BATTLE_STAGE_2:
            InputDisable();
            D_800F0674 = 2;
            Battle_Time++;
            if (Battle_Time > 45) {
                Battle_Stage = BATTLE_STAGE_READY;
                Battle_Time = 0;
                PlaySoundEffect(0x3E, NULL, NULL, NULL, 0, 0x10);
            }
            break;
        case BATTLE_STAGE_READY:
            InputDisable();
            D_800F0674 = 2;
            Battle_Time++;
            func_8005171C();
            Battle_PrintTextBig(80.0f, 100.0f, Battle_Time / 23.333334f, 17, 5, D_800F0DF4, 1);
            if (Battle_Time == 40) {
                func_800705C4(8.0f, 90.0f, 0x5FFF);
            }
            if (Battle_Time > 70) {
                D_800F0674 = 0;
                Battle_Stage = BATTLE_STAGE_GO;
                Battle_Time = 0;
                D_8017683C = PlaySoundEffect(0x40, NULL, NULL, NULL, 0, 0x10);
                PlayBGM(gMultiplayerBGM);
                InputEnable();
            }
            break;
        case BATTLE_STAGE_GO:
            Battle_Time++;
            func_8005171C();
            Battle_PrintTextBig(110.0f, 100.0f, 1.0f, 19, 3, D_800F0E1C, 1);
            if (Battle_Time > 20) {
                Battle_Stage = BATTLE_STAGE_5;
                Battle_Time = 0;
                StopSoundEffect(D_8017683C);
            }
            break;
        case BATTLE_STAGE_5:
            if (D_801749B4 == 0) {
                Battle_TimeLeft--;
                Battle_Time++;
            }
            Battle_DrawPortraits();
            func_8005171C();
            func_8005444C();
            switch (Battle_GameType) {
                case BATTLE_TYPE_SURVIVAL:
                    for (i = 0; i < 4; i++) {
                        if (gPlayerActors[i].active == TRUE && gPlayerActors[i].exists == 0) {
                            if (D_80176820[i] == 0) {
                                if (func_80051548(i) == 0) {
                                    D_800F0B60 = 1;
                                    D_80176828 = 99;
                                    Battle_TimeLeft = 0;
                                    break;
                                } else {
                                    D_80176820[i]++;
                                }
                            } else {
                                Battle_PrintPlayerPlace(i);
                            }
                        }
                    }
                    Multiplayer_PrintHurry();
                    Battle_PrintCountdownTimer();
                    if (D_800F0B60 == 0) {
                        D_80176828 = func_8005119C();
                    }
                    if (D_800F0B60 == 1 || D_80176828 == 0 || Battle_TimeLeft <= 0) {
                        Battle_Time = 0;
                        if (D_80176828 > 0) {
                            D_800F0B60 = 1;
                        }
                        if (D_800F0B60 == 0) {
                            Battle_Stage = BATTLE_STAGE_7;
                        } else {
                            Battle_Stage = BATTLE_STAGE_8;
                        }
                    }
                    break;
                case BATTLE_TYPE_TIME_TRIAL:
                    func_80050FB0();
                    func_8005171C();
                    D_80176828 = func_8005119C();
                    for (i = 0; i < 4 ; i++) {
                        if (gPlayerActors[i].active != 0) {
                            Battle_PrintPlayerTimer(i);
                        }
                    }
                    Multiplayer_PrintHurry();
                    Battle_PrintCountdownTimer();
                    if (Battle_TimeLeft <= 0) {
                        if (D_80176828 != 0) {
                            Battle_Stage = BATTLE_STAGE_6;
                            for (i = 0; i < 4; i++) {
                                if (gPlayerActors[i].active != 0) {
                                    D_800F0BD0[i] = Battle_PlayerPlaces[i] + 1;
                                    if (Battle_PlayerPlaces[i] > 0) {
                                        D_80176820[i] = 1;
                                    }
                                    D_80176834 = D_80176828 + 1;
                                }
                            }
                        } else {
                            Battle_Stage = BATTLE_STAGE_7;
                        }
                        Battle_Time = 0;
                    }
                    break;
            }
            break;
        case BATTLE_STAGE_6:
            if (D_801749B4 == 0) {
                Battle_Time++;
            }
            func_8005171C();
            for (i = 0; i < 4 ; i++) {
                if (gPlayerActors[i].active != 0) {
                    func_8005456C(gPlayerActors[i].pos.x, -300.0f, gPlayerActors[i].pos.z,
                                  gPlayerActors[i].pos.y, 200.0f, gSelectedCharacters[i]);
                }
            }
            func_8005444C();
            Battle_PrintSuddenDeath(90.0f, 16.0f);
            Battle_DrawPortraits();
            func_80051F38();
            for (i = 0; i < 4 ; i++) {
                if (gPlayerActors[i].active != 0 && D_80176820[i] == 0 && gPlayerActors[i].pos.y < -10.0f) {
                    if (func_80051548(i) == 0) {
                        D_800F0B60 = 1;
                        D_80176828 = 0x63;
                        break;
                    }
                    D_80176820[i]++;
                }
            }
            if (D_800F0B60 == 0) {
                D_80176828 = func_8005119C();
            }
            if (D_80176828 == 0 || D_800F0B60 == 1) {
                if (D_800F0B60 == 0) {
                    D_800F0B64 = Battle_Stage;
                    Battle_Stage = BATTLE_STAGE_7;
                } else {
                    Battle_Stage = BATTLE_STAGE_8;
                }
                Battle_Time = 0;
            }
            break;
        case BATTLE_STAGE_7:
            D_800F0674 = 0;
            Battle_Stage = BATTLE_STAGE_8;
            func_8005171C();
            Battle_DrawPortraits();
            var_v1_3 = 0;
            for (i = 0; i < 4; i++) {
                if (gPlayerActors[i].active) {
                    if (gPlayerActors[i].exists && D_80176820[i] != 1 || D_800F0B64 != BATTLE_STAGE_1) {
                        var_v1_3++;
                        if (gPlayerActors[i].canJump || gPlayerActors[i].playerHURTSTATE != 0 || gTongues[i].tongueMode != 0) {
                            if (Battle_PlayerPlaces[i] != 0) {
                                InputDisable();
                            }
                            Battle_Stage = BATTLE_STAGE_7;
                        }
                    }
                }
            }
            if (var_v1_3 == 0) {
                Battle_Stage = BATTLE_STAGE_8;
                D_800F0B60 = 1;
                D_80176828 = 99;
            }
            if (Battle_Stage == BATTLE_STAGE_8 && var_v1_3 != 0) {
                func_800510E0();
            }
            break;
        case BATTLE_STAGE_8:
            if (Battle_Time++ < 16) {
                D_800F0674 = 0;
                Battle_DrawPortraits();
                InputDisable();
                break;
            }
            D_800F0674 = 2;
            InputDisable();
            Battle_DrawPortraits();
            func_80051F38();
            Battle_Time = 0;
            func_80053DA8(D_80176828);
            if (D_80176828 > 0 || D_800F0B60 == 1) {
                for (i = 0; i < 4; i++) {
                    Battle_PlayerPlaces[i] = 1;
                }
                func_8008BFE0(0x5A);
            } else if (D_80176828 == 0 && D_800F0B60 == 0) {
                PlayBGM(0xA);
                for (i = 0; i < 4; i++) {
                    if (gPlayerActors[i].active == 1 && Battle_PlayerPlaces[i] == 0) {
                        UnlockEyeChange();
                        SetPlayerContextEyes(gSelectedCharacters[i], 1, 0);
                        func_80053FA0(i);
                        gPlayerActors[i].pos.y = 5000.0f;
                        break;
                    }
                }
            }
            Battle_Time = 0;
            Battle_Stage = BATTLE_STAGE_9;
            break;
        case BATTLE_STAGE_9:
            InputDisable();
            Battle_Time++;
            D_800F0674 = 2;
            func_8005171C();
            Battle_DrawPortraits();
            func_80051F38();
            if (Battle_GameType == BATTLE_TYPE_TIME_TRIAL) {
                for (i = 0; i < 4; i++) {
                    if (gPlayerActors[i].active != 0) {
                        func_8005456C(gPlayerActors[i].pos.x, -300.0f, gPlayerActors[i].pos.z,
                                      gPlayerActors[i].pos.y, 200.0f, gSelectedCharacters[i]);
                    }
                }
            }
            if (Battle_Time > 120) {
                StopBGM();
                Battle_Stage = BATTLE_STAGE_10;
            }
            break;
        case BATTLE_STAGE_10:
            Battle_Time = 0;
            Battle_Stage = BATTLE_STAGE_0;
            D_800F0674 = 0;
            D_800F0B54[0] = 0;
            InputEnable();
            SetProcessType(0x11);
            break;
        default:
            Battle_Stage = BATTLE_STAGE_1;
            Battle_Time = 0;
            break;
    }
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/Battle_Update.s")
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
        func_800678EC(0, 0, 0, 0, 0x10);
        func_8008F114();
        break;
    case 1:
        func_80072D34();
        gGameModeState++;
        func_8008F114();
        break;
    case 2:
        func_8008F16C();
        D_8017499C++;
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

        for (i = 0; i < PLAYERS_MAX; i++) {
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
        func_80073090();
        gGameModeState++;
        func_8008F114();
        break;
    case 2:
        func_8008F16C();
        D_8017499C++;
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
        checkControllerRumble();
        gGameModeState++;
        func_8008F114();
        break;
    case 2:
        func_8008F16C();
        D_8017499C++;
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
        func_80073FD8();
        gGameModeState++;
        func_8008F114();
        break;
    case 2:
        func_8008F16C();
        D_8017499C++;
        break;
    case 3:
        SetProcessType(GAME_MODE_SUPPLY_SYSTEM_LOGO);
        break;
    }
    
    func_8008C094();
}