#include "common.h"

void func_8005456C(f32, f32, f32, f32, f32, s32);
void func_80073090(void);
s32 func_8008BE14(void);
void func_800A0D90(void);
void func_800678EC(s32, s32, s32, s32, s32);
extern s32 D_800FE708;
extern s32 D_80168EBC;
extern s32 D_80168EC0;
extern s32 D_80168FEC;
extern s32 D_80168FF0;
extern s32 D_8016911C;
extern s32 D_80169120;
extern s32 D_8016924C;
extern s32 D_80169250;
extern s32 D_800F0B68[4][4];
extern s32 D_800F0BC0[4];

void func_80050FB0(void) {
    s32 i;

    if (D_801749B4 == 0) {
        for (i = 0; i < 4; i++) {
            if (gPlayerActors[i].active == 1) {
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

    for (i = 0; i < 4; i++) {
        if (gPlayerActors[i].active == 1) {
            if (++D_800F0B68[i][D_800F0BC0[i]] >= 100) {
                D_800F0B68[i][D_800F0BC0[i]] = 99;
            }
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_8005119C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_80051548.s")

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
        PLAYSFX(137, 0, 0X10);
    }
}

//https://decomp.me/scratch/900gG
#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_8005177C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_800517EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_80051910.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_80051B24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_80051F38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_80052094.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_800522A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_800523E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_800525E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_80052890.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_800536D8.s")
//prints "HURRY!" during MP Battle [9 times]
void Multiplayer_PrintHurry(void) {
    if ((D_80176824 <= 1800) && (D_80176824 > 1710) && ((D_80176824 % 10) < 5)) {
        SetTextGradientFromPalette(1); 
        PrintTextWrapper(100.0f, 10.0f, 0.0f, 1.0f, "ＨＵＲＲＹ！", 1);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_80053950.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_80053A70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_80053CA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_80053DA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_80053FA0.s")

void func_8005423C(void) {
    s32 i;
    for (i = 0; i != 6; i++){
        setPlayerContextEyes(i, 0, 0);
    };
}

//https://decomp.me/scratch/YLdZC
#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_80054284.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_8005444C.s")
// void func_8005444C(void) { matches, has jump table
//     if (D_801749B4 == 1) {
//         func_800771DC(&D_800FE404, 16.0f, 16.0f, 1, 5, &D_800F0B5C, 0.0f, 0.0f, 320.0f, 240.0f);
//     }
//     switch (D_800F0B5C) {
//     case -2:
//     case 1:
//         D_800F0B5C = -1;
//         return;
//     case 2:
//         D_800FE74C = 0;
//         D_800F0B5C = -1;
//         func_8005423C();
//         setProcessType(0xE);
//         return;
//     case 3:
//         D_800FE74C = 0;
//         D_800F0B5C = -1;
//         func_8005423C();
//         setProcessType(7);
//         return;
//     case 4:
//         D_800FE74C = 0;
//         D_800F0B5C = -1;
//         func_8005423C();
//         setProcessType(6);
//         /* fallthrough */
//     default:
//         return;
//     }
// }

//https://decomp.me/scratch/9z01z
#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_8005456C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_800546F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/2C3B0/func_80054864.s")

void Process_Ranking(void) {
    switch (gGameModeState) {
    case 0:
        D_800FFDF4 = 1;
        D_800FE708 = 0;
        DMAStruct_Print();
        func_800A1EC4();
        loadSprite(0xD4);
        loadSprite(SPRITE_PORTRAITDAVY);
        loadSprite(SPRITE_PORTRAITJACK);
        loadSprite(SPRITE_PORTRAITFRED);
        loadSprite(SPRITE_PORTRAITLINDA);
        loadSprite(SPRITE_PORTRAITBLACK);
        loadSprite(SPRITE_PORTRAITWHITE);
        loadSprite(0x6E);
        loadSprite(0xBD);
        loadSprite(0xBE);
        loadSprite(0xBF);
        loadSprite(0xC0);
        loadSprite(0xC1);
        loadSprite(0xC2);
        TaskInit();
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
        setProcessType(GAME_MODE_TITLE_SCREEN);
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

        for (i = 0; i < 4; i++) {
            gPlayerActors[i].exists = gPlayerActors[i].active;
        }

        loadSprite(0xCE);
        loadSprite(0x6E);
        loadSprite(0xD5);
        loadPlayerEyes(CHARA_DAVY);
        loadPlayerEyes(CHARA_JACK);
        loadPlayerEyes(CHARA_FRED);
        loadPlayerEyes(CHARA_LINDA);
        loadPlayerEyes(CHARA_BLACK);
        loadPlayerEyes(CHARA_WHITE);
        TaskInit();
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
        setProcessType(GAME_MODE_TITLE_SCREEN);
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
        loadSprite(94);
        TaskInit();
        func_8002E0CC();
        gGameModeState += 1;
        UseFixedRNGSeed = FALSE;
        D_800FFDF0 = 2;
        D_801FC9AC = 0;
        func_8008F114();
        break;
    case 1:
        checkControllerRumble();
        gGameModeState += 1;
        func_8008F114();
        break;
    case 2:
        func_8008F16C();
        D_8017499C += 1;
        break;
    case 3:
        setProcessType(GAME_MODE_SUPPLY_SYSTEM_LOGO);
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
        loadSprite(0xCD);
        TaskInit();
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
        setProcessType(GAME_MODE_SUPPLY_SYSTEM_LOGO);
        break;
    }
    
    func_8008C094();
}