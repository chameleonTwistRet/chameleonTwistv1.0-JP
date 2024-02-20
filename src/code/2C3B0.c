#include "2C3B0.h"

u8 D_80176820;
u8 D_80176821;
u8 D_80176822;
u8 D_80176823;
s32 D_80176824;
s32 D_80176828;
s32 D_8017682C;
s32 gMultiplayerBGM;
s32 D_80176834;

u32 D_800F0B50 = 0;
u8 D_800F0B54[] = { 255, 0, 0, 0 };
s32 D_800F0B58 = 0;
s32 D_800F0B5C = -1;
s32 D_800F0B60 = 0;
s32 D_800F0B64 = 1;
s32 D_800F0B68[4][4] = {
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
};
s32 gCharacterPortraitIndecies[6] = { 0x68, 0x69, 0x6A, 0x6B, 0x6C, 0x6D };
s32 D_800F0BC0[4] = { 0, 0, 0, 0 };
s32 D_800F0BD0[4] = { 0, 0, 0, 0 };
u8 D_800F0BE0[4] = { 0, 3, 1, 2 };
unk800F0BE4 D_800F0BE4[] = {
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
s32 D_800F0C78[] = { 1, 10, 100, 1000, 10000, 100000, 1000000, 10000000 };
u8 D_800F0C98[] = { 19, 21, 4, 4, 5, 14, 100, 4, 5, 1, 20, 8 };
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
                    D_800F0BE4[D_800F0BE0[i]].unk_00++;
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
            if (++D_800F0B68[i][D_800F0BC0[i]] > 99) {
                D_800F0B68[i][D_800F0BC0[i]] = 99;
            }
        }
    }
}

s32 func_8005119C(void) {
    s32 i, j;
    s32 sum_1 = 0;
    s32 sum_2 = 0;
    
    s32 var_v0 = D_801749AC;
    if (D_800F0B58 == 6) {
        var_v0 = 1;
    }
    
    switch (var_v0) {
        case 2:
            for (i = 0; i < PLAYERS_MAX ; i++) {
                s32 total = 0;
                if (gPlayerActors[i].active == TRUE) {
                    for (j = 0; j < 4; j++) {
                        if (gPlayerActors[j].active == TRUE) {
                            if (i != j && D_800F0BE4[D_800F0BE0[j]].unk_00 < D_800F0BE4[D_800F0BE0[i]].unk_00) {
                                total++; 
                            }
                            D_800F0BC0[i] = total;
                        }    
                    }
                    if (D_800F0BC0[i] == 0) {
                        sum_1 += 1;
                    }
                    if (D_800F0BC0[i] == 1) {
                        sum_2 += 1;
                    }
                }
            }

            if (sum_2 == 2) {
                for (i = 0; i < PLAYERS_MAX; i++) {
                    if (gPlayerActors[i].active == TRUE && D_800F0BC0[i] == 3) {
                        D_800F0BC0[i] = 2;
                    }
                }
            }
            if (sum_1 == 1) {
                sum_1 = 0;
            } else {
                sum_1--;
            }
            break;
        case 1:
            for (i = 0; i < PLAYERS_MAX; i++) {
                if (gPlayerActors[i].active == TRUE) {
                    D_800F0BC0[i] = D_800F0BD0[i] - 1;
                    
                    if (D_800F0BD0[i] < 2) {
                        D_800F0BC0[i] = 0;
                    }
                    if (D_800F0BC0[i] == 0) {
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
    
    if (D_800F0C74 == D_800F0B50) {
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
    
    D_800F0C74 = D_800F0B50;

    if (var_v1 >= 2) {
        var_v1 = 0;
    } else {        
        var_v1 = -1;        
    }
    return var_v1;
}

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
    if ((gCurrentZone == 6) && ((D_800F0B50 % 60) == 0)) {
        PLAYSFX(137, 0, 0x10);
    }
}

s32 func_8005177C(s32 arg0) {
    s32 i;
    s32 activeCount = 0;

    for (i = 0; i < PLAYERS_MAX; i++) {
        if (gPlayerActors[i].active && (D_80168D78[i] != (((i & 0xFF) == 4) * 0))) {
            if (arg0 != i) {
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

void func_800517EC(void) {
    s32 i;

    for (i = 0; i < PLAYERS_MAX; i++) {
        if (gPlayerActors[i].active == TRUE) {
            if (gSelectedCharacters[i] > 5) {
                continue;
            }
            printUISprite(D_800F0BE4[D_800F0BE0[i]].unk_04, D_800F0BE4[D_800F0BE0[i]].unk_08, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, gCharacterPortraitIndecies[gSelectedCharacters[i]]);
        }
    }
}

#ifdef NON_MATCHING
void func_80051910(s32 arg0) {
    if (D_800F0BC0[arg0] == 0) {
        s8 g = D_800F0B50 * 16;
        SetTextGradient(255, g, 32, 255,
                        255, 0,  0, 255,
                        255, g, 32, 255,
                        255, 0,  0, 255);
    } else {
        SetTextGradientFromPalette(5);
    }
    func_800610A8();
    printNumber(D_800F0BE4[D_800F0BE0[arg0]].unk_0C, D_800F0BE4[D_800F0BE0[arg0]].unk_10, 0.0f, 0.6f, (D_800F0BE4[D_800F0BE0[arg0]].unk_00 / 1800) % 60, 2, 0);
    PrintTextWrapper(D_800F0BE4[D_800F0BE0[arg0]].unk_0C + 18.0f, D_800F0BE4[D_800F0BE0[arg0]].unk_10 - 2.0f, 0.0f, 0.6f, "：", 1);
    printNumber(D_800F0BE4[D_800F0BE0[arg0]].unk_0C + 28.0f, D_800F0BE4[D_800F0BE0[arg0]].unk_10, 0.0f, 0.6f, (D_800F0BE4[D_800F0BE0[arg0]].unk_00 / 30) % 60, 2, 0);
    func_800610B8();
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_80051910.s")
void func_80051910(s32 arg0);
#endif

#ifdef NON_MATCHING
void func_80051B24(s32 arg0) {
    f32 go;
    f32 temp_f2;
    f32 var_f12 = 1.0f;
    f32 sp68 = 24.0f;
    f32 sp64 = 16.0f;
    f32 sp60 = 0.0f;
    f32 sp5C = 0.0f;
    s32 temp_t4;
    
    if (D_800F0BE4[D_800F0BE0[arg0]].unk_20 != D_800F0BC0[D_800F0BE0[arg0]]) {
        D_800F0BE4[D_800F0BE0[arg0]].unk_20 = D_800F0BC0[D_800F0BE0[arg0]];
        D_800F0BE4[D_800F0BE0[arg0]].unk_1C = 0;
    } else {
        D_800F0BE4[D_800F0BE0[arg0]].unk_1C += 0.125f;
        if (D_800F0BE4[D_800F0BE0[arg0]].unk_1C <= 1.0f) {
            var_f12 *= D_800F0BE4[D_800F0BE0[arg0]].unk_1C;
            go = 1 - var_f12;
            temp_f2 = 1.0f + 2.0f * go;
            
            sp68 *= temp_f2;
            sp64 *= temp_f2;
            sp60 = 24.0f;
            sp5C = 16.0f;
            sp60 *= go;
            sp5C *= go;
        }
    }
    
    temp_t4 = D_800F0B50 % 64;
    if (temp_t4 < 2 || temp_t4 >= 6 && temp_t4 < 8) {
        SetTextGradient(255, 255, 255, 255 * var_f12, 
                        255, 255, 255, 255 * var_f12, 
                        255, 255, 255, 255 * var_f12, 
                        255, 255, 255, 255 * var_f12);
    } else {
        switch (D_800F0BC0[arg0]) {
            case 0:
                SetTextGradientFromPaletteAlpha(0xD, var_f12);
                break;
            case 1:
                SetTextGradientFromPaletteAlpha(0xE, var_f12);
                break;
            case 2:
                SetTextGradientFromPaletteAlpha(0xF, var_f12);
                break;
            case 3:
                SetTextGradientFromPaletteAlpha(0x10, var_f12);
                break;
        }
    }
    printUISprite(D_800F0BE4[D_800F0BE0[arg0]].unk_14 - sp60, D_800F0BE4[D_800F0BE0[arg0]].unk_18 - sp5C,
                0, 0, 1, sp68, sp64, D_800F0BC0[arg0], 0xd5);
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_80051B24.s")
void func_80051B24(s32 arg0);
#endif

void func_80051F38(void) {
    s32 i;

    switch (D_800F0B58) {
        case 6:
            for (i = 0; i < PLAYERS_MAX; i++) {
                if (gPlayerActors[i].active == TRUE) {
                    if (D_801749AC == 2) {
                        if (D_800F0BC0[i] < 2) {
                            func_80051910(i);
                        } else {
                            func_80051B24(i);
                        }
                    } else if (D_801749AC == 1) {
                        func_80051B24(i);
                    }
                }
            }
            break;
        case 8:
        case 9:
            for (i = 0; i < 4; i++) {
                if (gPlayerActors[i].active == TRUE && D_80176828 == 0) {
                    func_80051B24(i);
                }
            }
            break;
    }
}

void func_80052094(f32 x, f32 y, f32 arg2, s32 arg3, u8 arg4, unk_80052094_8* arg5, s32 arg6) {
    s32 i;

    if (arg2 > 1.0f) {
        arg2 = 1.0f;
    }
    
    for (i = 0; i < arg4; i++) {        
        SetTextGradientFromPalette(arg3);
        func_800612F0(arg5[i].unk_04);
        if (arg6 == 0) {
            func_80059F28(x + 32 * i, y - 16.0f * arg2, 0.0f, 0.0f, 1.0f, 32.0f, 16 * arg2, arg5[i].unk_00, 0x5E);
        } else {
            printUISprite(x + 32 * i, y - 16.0f * arg2, 0.0f, 0.0f, 1.0f, 32.0f, 16 * arg2, arg5[i].unk_00, 0x5E);
        }
        SetTextGradientFromPalette(arg3 + 1);
        func_800612F0(arg5[i].unk_04 + 1);
        if (arg6 == 0) {
            func_80059F28(x + 32 * i, y, 0.0f, 0.0f, 1.0f, 32.0f, 16 * arg2, arg5[i].unk_00, 0x5E);
        } else {
            printUISprite(x + 32 * i, y, 0.0f, 0.0f, 1.0f, 32.0f, 16 * arg2, arg5[i].unk_00, 0x5E);
        }
    }
}

void func_800522A4(f32 arg0, f32 arg1, f32 arg2, f32 arg3, s32 arg4, s32 arg5) {
    s32 var_s0;
    s32 sp90;
    s32 sp8C;    
    s32 var_s1;

    var_s0 = arg4;
    var_s1 = 0;
    while (arg4 != 0) {
        if (func_80080318(1, arg4, &sp90, &sp8C) == 0) {
            SetTextGradientFromPalette(arg5);
            func_800612F0(sp8C);
            func_80059F28(arg0 + 16.0f * arg2 * var_s1, arg1, 0, 0, 1.0f, 16 * arg2, 24.0f * arg3, sp90, 1);
        }
        
        arg4 += 2;
        var_s1++;
    }
}

void func_800523E4(f32 arg0, f32 arg1, f32 arg2, f32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 i;

    func_800610A8();
    if (arg5 > 8) {
        arg5 = 8;
    }
    
    for (i = 0; i < arg5; i++) {
        s32 temp_s0 = (arg4 / D_800F0C78[arg5 - i - 1]) % 10;
        func_800612F0(1);
        if (arg6 != 0) {
            printUISprite(arg0 + 16 * i * arg2, arg1, 0.0f, 0.0f, 1.0f, 16.0f * arg2, 24.0f * arg3,  temp_s0, 1);
        } else {
            func_80059F28(arg0 + 16 * i * arg2, arg1, 0.0f, 0.0f, 1.0f, 16.0f * arg2, 24.0f * arg3, temp_s0, 1);
        }
    }
    func_800610B8();
}

void func_800525E8(s32 arg0, f32 arg1) {
    s32 sp44;

    sp44 = func_8005177C(arg0);
    if (sp44 >= 0) {
        arg1 -= 3;
        func_800610A8();
        SetTextGradientFromPalette(0);
        
        func_800612F0(0);
        func_80059F28(arg1,      102.0f, 0.0f, 0.0f, 1.0f, 12.0f, 24.0f,  3.0f, 1);
        func_80059F28(arg1 + 12, 104.6f, 0.0f, 0.0f, 1.0f, 12.0f, 24.0f, 15.0f, 1);
        func_80059F28(arg1 + 24, 107.3f, 0.0f, 0.0f, 1.0f, 12.0f, 24.0f, 13.0f, 1);
        
        func_800612F0(1);
        func_80059F28(arg1 + 36, 110.0f, 0.0f, 0.0f, 1.0f, 12.0f, 24.0f, sp44 + 1, 1);
        func_800610B8();
    } else {
        func_800612F0(1);
        SetTextGradientFromPalette(0);
        func_80059F28(arg1, 102.0f, 0.0f, 0.0f, 1.0f, 16.0f, 24.0f, arg0 + 1, 1);
        
        func_800612F0(0);
        SetTextGradientFromPalette(0);
        func_80059F28(arg1 + 24, 110.0f, 0.0f, 0.0f, 1.0f, 16.0f, 24.0f, 16, 1);
    }
}

#ifdef NON_MATCHING
void func_80052890(u32 arg0) {
    static u8 D_80176840;
    static u8 D_80176841;
    s32 temp_t6 = D_800F0B50 & 0x1F;
    
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
    
    switch (arg0) {
        case 0:
            SetTextGradient(0, D_80176840 * 0.8, D_80176840, 255,
                            0, D_80176841 * 0.8, D_80176841, 255,
                            0, D_80176840 * 0.8, D_80176840, 255,
                            0, D_80176841 * 0.8, D_80176841, 255);
            break;
        case 1:
            SetTextGradient(D_80176840 * 0.4, D_80176840, 0, 255,
                            D_80176841 * 0.4, D_80176841, 0, 255,
                            D_80176840 * 0.4, D_80176840, 0, 255,
                            D_80176841 * 0.4, D_80176841, 0, 255);
            break;
        case 2:
            SetTextGradient(D_80176840, D_80176840, 0, 255,
                            D_80176841, D_80176841, 0, 255,
                            D_80176840, D_80176840, 0, 255,
                            D_80176841, D_80176841, 0, 255);
            break;
        case 3:
            SetTextGradient(D_80176840, D_80176840 * 0.4, D_80176840 * 0.5, 255, 
                            D_80176841, D_80176841 * 0.4, D_80176841 * 0.5, 255,
                            D_80176840, D_80176840 * 0.4, D_80176840 * 0.5, 255, 
                            D_80176841, D_80176841 * 0.4, D_80176841 * 0.5, 255);
            break;
        case 4:
            SetTextGradient(D_80176840 * 0.4, D_80176840 * 0.2, D_80176840, 255,
                            D_80176841 * 0.4, D_80176841 * 0.2, D_80176841, 255,
                            D_80176840 * 0.4, D_80176840 * 0.2, D_80176840, 255,
                            D_80176841 * 0.4, D_80176841 * 0.2, D_80176841, 255);
            break;
        case 5:
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
                if (j == D_800F0BC0[i] && D_80176828 == 0) {
                    func_80052890(gSelectedCharacters[i]);
                } else {
                    SetTextGradientFromPalette(1);
                }

                if (D_800F0B68[i][j] >= 10) {
                    v0 = 2;
                } else {
                    v0 = 1;
                }

                func_800523E4(sp9C + 12.8f * (v0 == 1), y, 0.8f, 0.8f, D_800F0B68[i][j], v0, 0);
                
            }
            sp9C += sp94;
        }
    }
}

//prints "HURRY!" during MP Battle [9 times]
void Multiplayer_PrintHurry(void) {
    if ((D_80176824 <= 1800) && (D_80176824 > 1710) && ((D_80176824 % 10) < 5)) {
        SetTextGradientFromPalette(1); 
        PrintTextWrapper(100.0f, 10.0f, 0.0f, 1.0f, "ＨＵＲＲＹ！", 1);
    }
}

void func_80053950(void) {
    f32 var_f0 = 1.0f;
    if (D_80176824 < 0x3A3) {
        SetTextGradient(0xFFU, 0x3CU, 0U, 0xFFU, 0xFF, 0, 0, 0xFF, 0xFF, 0x3C, 0, 0xFF, 0xFF, 0, 0, 0xFF);
        if (D_80176824 < 0x15) {
            var_f0 = (f32) D_80176824 / 20.0f;
        }
        func_800523E4(136.0f, ((1.0f - var_f0) * 12.0f) + 10.0f, 1.0f, var_f0, (s32) ((s32) D_80176824 / 30) % 60, 2, 1);
    }
}

void func_80053A70(f32 arg0, f32 arg1) {
    f32 var_f26;
    s32 i;

    if (D_800F0B50 <= 20) {
        var_f26 = D_800F0B50 / 20.0f;
    } else if (D_800F0B50 > 20 && D_800F0B50 < 130) {
        var_f26 = 1.0f;
    } else if (D_800F0B50 >= 130 && D_800F0B50 < 150) {
        var_f26 = 1.0f - (D_800F0B50 - 130.0f) / 20.0f;
    } else {
        return;
    }

    for (i = 0; i < 12; i++) {
        if ((D_800F0B50 % 10) < 5 && var_f26 == 1.0f) {
            SetTextGradientFromPalette(1);
        } else {
            SetTextGradientFromPalette(4);
        }
        func_800612F0(0);
        printUISprite(arg0 + i * 11.2f, arg1 + (1 - var_f26) * 12.0f, 0.0f, 0.0f, 1.0f, 11.2f, 16.8f * var_f26, D_800F0C98[i], 1);
    }    
}

void func_80053CA0(void) {
    s32 i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 8; j++) {
            func_800612F0(i);
            func_80059F28((j * 0x28), (i * 0x30), 0, 0, 1.0f, 40.0f, 48.0f, j, 0xCE);
        }
    }
    func_800536D8();
}

void func_80053DA8(s32 arg0) {
    s32 i;
    s32 activeCount;    

    if (arg0 == 0) {
        for (i = 0; i < 4; i++) {
            if (gPlayerActors[i].active == 1 && D_800F0BC0[i] == 0) {
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
            if (D_8017682C == D_800F0BC0[i] + 1) {
                var_s1 = 3;
                SetPlayerContextEyes(gSelectedCharacters[i], 2, 0);
            } else {
                var_s1 = D_800F0BC0[i];
                SetPlayerContextEyes(gSelectedCharacters[i], 1, (D_800F0BC0[i] == 0) ^ 1);
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

    if (D_800F0B50 % 2) {
        setPrimColor(D_800FE564[arg5].unk0, D_800FE564[arg5].unk1, D_800FE564[arg5].unk2, D_800FE564[arg5].unk3 * flabs((arg3 / arg1)));
        guAlign(&sp30, 0.0f, 0.0f, 100.0f, 0.0f);
        func_80058BE4(&sp30, arg0, arg1, arg2, arg4, arg4, 0.0f, 0x4A);
    }
}

void func_800546F0(void) {
    s32 i;
    
    D_800F0B58 = 0;
    D_800F0B64 = 1;
    D_80176824 = D_8020250C;
    D_800F0674 = D_801749B4 = 0;
    D_800F0C74 = 999999999;
    D_80176828 = 99;
    D_800FE74C = 0;
    D_800F0B60 = 0;
    D_800F0B5C = -1;
    D_800F0B54[0] = 255;

    for (i = 0; i < 4; i++) {
        D_800F0BE4[i].unk_20 = 99;
        D_800F0BE4[i].unk_1C = 0.0f;
    }
    LoadSprite(0x6E);
    LoadSprite(0x5E);
    LoadSprite(0xD5);
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
void func_80054864(void) {
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_3;
    u32 var_v1_2;
    s32 i;

    if (gCurrentStage != 7 || D_801749AC == 0) {
        return;
    }
    
    if (gCurrentZone >= 4) {
        D_801749AC = 2;
    } else {
        D_801749AC = 1;
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
    
    switch (D_800F0B58) {
        case 0:
            D_800F0674 = 2;
            func_80055C74();
            for (i = 0; i < 4 ; i++) {
                if (gPlayerActors[i].active == 1) {
                    D_8017682C++;
                }
            }
    
            if (D_801749AC == 1) {
                D_80176834 = D_8017682C;
            } else {
                D_80176834 = 2;
            }
            for (i = 0; i < 4; i++) {
                D_800F0BD0[i] = 0;
                D_800F0BE4[i].unk_00 = 29;    
                D_80176820[i] = 0;
            }
            for (i = 0; i < 4; i++) {
                D_800F0BC0[i] = 0;
            }
            
            D_800F0B50 = 0;
            D_800F0B58 = 2;
            func_800678EC(0xFF, 0xFF, 0xFF, 0, 0x2D);
            break;
        case 1:
            break;
        case 2:
            func_80055C74();
            D_800F0674 = 2;
            D_800F0B50++;
            if (D_800F0B50 > 45) {
                D_800F0B58 = 3;
                D_800F0B50 = 0;
                playSoundEffect(0x3E, NULL, NULL, NULL, 0, 0x10);
            }
            break;
        case 3:
            func_80055C74();
            D_800F0674 = 2;
            D_800F0B50++;
            func_8005171C();
            func_80052094(80.0f, 100.0f, D_800F0B50 / 23.333334f, 0x11, 5U, D_800F0DF4, 1);
            if (D_800F0B50 == 40) {
                func_800705C4(8.0f, 90.0f, 0x5FFF);
            }
            if (D_800F0B50 > 70) {
                D_800F0674 = 0;
                D_800F0B58 = 4;
                D_800F0B50 = 0;
                D_8017683C = playSoundEffect(0x40, NULL, NULL, NULL, 0, 0x10);
                PlayBGM(gMultiplayerBGM);
                func_80055C80();
            }
            break;
        case 4:
            D_800F0B50++;
            func_8005171C();
            func_80052094(110.0f, 100.0f, 1.0f, 0x13, 3, D_800F0E1C, 1);
            if (D_800F0B50 > 20) {
                D_800F0B58 = 5;
                D_800F0B50 = 0;
                func_80087358(D_8017683C);
            }
            break;
        case 5:
            if (D_801749B4 == 0) {
                D_80176824--;
                D_800F0B50++;
            }
            func_800517EC();
            func_8005171C();
            func_8005444C();
            switch (D_801749AC) {
                case 1:
                    for (i = 0; i < 4; i++) {
                        if (gPlayerActors[i].active == 1 && gPlayerActors[i].exists == 0) {
                            if (D_80176820[i] == 0) {
                                if (func_80051548(i) == 0) {
                                    D_800F0B60 = 1;
                                    D_80176828 = 0x63;
                                    D_80176824 = 0;
                                    break;
                                } else {
                                    D_80176820[i]++;
                                }
                            } else {
                                func_80051B24(i);
                            }
                        }
                    }
                    Multiplayer_PrintHurry();
                    func_80053950();
                    if (D_800F0B60 == 0) {
                        D_80176828 = func_8005119C();
                    }
                    if (D_800F0B60 == 1 || D_80176828 == 0 || D_80176824 <= 0) {
                        D_800F0B50 = 0;
                        if (D_80176828 > 0) {
                            D_800F0B60 = 1;
                        }
                        if (D_800F0B60 == 0) {
                            D_800F0B58 = 7;
                        } else {
                            D_800F0B58 = 8;
                        }
                    }
                    break;
                case 2:
                    func_80050FB0();
                    func_8005171C();
                    D_80176828 = func_8005119C();
                    for (i = 0; i < 4 ; i++) {
                        if (gPlayerActors[i].active != 0) {
                            func_80051910(i);
                        }
                    }
                    Multiplayer_PrintHurry();
                    func_80053950();
                    if (D_80176824 <= 0) {
                        if (D_80176828 != 0) {
                            D_800F0B58 = 6;
                            for (i = 0; i < 4; i++) {
                                if (gPlayerActors[i].active != 0) {
                                    D_800F0BD0[i] = D_800F0BC0[i] + 1;
                                    if (D_800F0BC0[i] > 0) {
                                        D_80176820[i] = 1;
                                    }
                                    D_80176834 = D_80176828 + 1;
                                }
                            }
                        } else {
                            D_800F0B58 = 7;
                        }
                        D_800F0B50 = 0;
                    }
                    break;
            }
            break;
        case 6:
            if (D_801749B4 == 0) {
                D_800F0B50++;
            }
            func_8005171C();
            for (i = 0; i < 4 ; i++) {
                if (gPlayerActors[i].active != 0) {
                    func_8005456C(gPlayerActors[i].pos.x, -300.0f, gPlayerActors[i].pos.z,
                                  gPlayerActors[i].pos.y, 200.0f, gSelectedCharacters[i]);
                }
            }
            func_8005444C();
            func_80053A70(90.0f, 16.0f);
            func_800517EC();
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
                    D_800F0B64 = D_800F0B58;
                    D_800F0B58 = 7;
                } else {
                    D_800F0B58 = 8;
                }
                D_800F0B50 = 0;
            }
            break;
        case 7:
            D_800F0674 = 0;
            D_800F0B58 = 8;
            func_8005171C();
            func_800517EC();
            var_v1_3 = 0;
            for (i = 0; i < 4; i++) {
                if (gPlayerActors[i].active != 0) {
                    if (gPlayerActors[i].exists != 0 && D_80176820[i] != 1 || D_800F0B64 != 1) {
                        var_v1_3++;
                        if (gPlayerActors[i].canJump != 0 || gPlayerActors[i].playerHURTSTATE != 0 || gTongues[i].tongueMode != 0) {
                            if (D_800F0BC0[i] != 0) {
                                func_80055C74();
                            }
                            D_800F0B58 = 7;
                        }
                    }
                }
            }
            if (var_v1_3 == 0) {
                D_800F0B58 = 8;
                D_800F0B60 = 1;
                D_80176828 = 99;
            }
            if (D_800F0B58 == 8 && var_v1_3 != 0) {
                func_800510E0();
            }
            break;
        case 8:
            if (D_800F0B50++ < 16) {
                D_800F0674 = 0;
                func_800517EC();
                func_80055C74();
                break;
            }
            D_800F0674 = 2;
            func_80055C74();
            func_800517EC();
            func_80051F38();
            D_800F0B50 = 0;
            func_80053DA8(D_80176828);
            if (D_80176828 > 0 || D_800F0B60 == 1) {
                for (i = 0; i < 4; i++) {
                    D_800F0BC0[i] = 1;
                }
                func_8008BFE0(0x5A);
            } else if (D_80176828 == 0 && D_800F0B60 == 0) {
                PlayBGM(0xA);
                for (i = 0; i < 4; i++) {
                    if (gPlayerActors[i].active == 1 && D_800F0BC0[i] == 0) {
                        UnlockEyeChange();
                        SetPlayerContextEyes(gSelectedCharacters[i], 1, 0);
                        func_80053FA0(i);
                        gPlayerActors[i].pos.y = 5000.0f;
                        break;
                    }
                }
            }
            D_800F0B50 = 0;
            D_800F0B58 = 9;
            break;
        case 9:
            func_80055C74();
            D_800F0B50++;
            D_800F0674 = 2;
            func_8005171C();
            func_800517EC();
            func_80051F38();
            if (D_801749AC == 2) {
                for (i = 0; i < 4; i++) {
                    if (gPlayerActors[i].active != 0) {
                        func_8005456C(gPlayerActors[i].pos.x, -300.0f, gPlayerActors[i].pos.z,
                                      gPlayerActors[i].pos.y, 200.0f, gSelectedCharacters[i]);
                    }
                }
            }
            if (D_800F0B50 > 120) {
                StopBGM();
                D_800F0B58 = 10;
            }
            break;
        case 10:
            D_800F0B50 = 0;
            D_800F0B58 = 0;
            D_800F0674 = 0;
            D_800F0B54[0] = 0;
            func_80055C80();
            SetProcessType(0x11);
            break;
        default:
            D_800F0B58 = 1;
            D_800F0B50 = 0;
            break;
    }
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_80054864.s")
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
        LoadSprite(94);
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