#include "common.h"

extern s32 gameModeCurrent;
extern s32 D_800F06E8;
extern OSMesgQueue D_801192E8;
extern char D_8010DB20[];
extern Addr* mod_ROM_START;
extern Addr* mod_VRAM;
extern Addr* mod_ROM_END;
extern Addr* mod_ROM_START;
void mod_main_per_frame(void);
void mod_boot_func(void);

char testing[] = "ＯＫ";

void hookCode(s32* patchAddr, void* jumpLocation, s32* instructionBuffer) {
    jumpLocation = (void*)(u32)((((u32)jumpLocation & 0x00FFFFFF) >> 2) | 0x08000000);
    instructionBuffer[0] = patchAddr[0];
    patchAddr[0] = (s32)jumpLocation; //write j instruction
    instructionBuffer[1] = patchAddr[1];
    patchAddr[1] = 0; //write nop
}

void patchInstruction(void* patchAddr, s32 patchInstruction) {
    *(s32*)patchAddr = patchInstruction;
}

s32 newFunc(void) {
    return 1;
}

void mod_boot_func(void) {
    // s32 instructionBuffer[2];
    // hookCode((s32*)0x8002D660, &newFunc, instructionBuffer);
}

void mod_main_per_frame(void) {
    //per frame function
    PrintTextWrapper(64.0f, 32.0f, 0.0f, 1.0f, testing, 1);
}

// enum GameModes {
// 	GAME_MODE_OVERWORLD = 0,
// 	GAME_MODE_JUNGLE_LAND_MENU = 1,
// 	GAME_MODE_SAVE_MENU = 2,
// 	GAME_MODE_LOAD_GAME_MENU = 3,
// 	GAME_MODE_DEMO = 4,
// 	GAME_MODE_DEMO_2 = 5,
// 	GAME_MODE_TITLE_SCREEN = 6,
// 	GAME_MODE_BATTLE_MENU = 7,
// 	GAME_MODE_OPTIONS_MENU = 8,
// 	GAME_MODE_GAME_OVER = 9,
// 	GAME_MODE_SUPPLY_SYSTEM_LOGO = 10,
// 	GAME_MODE_PRE_CREDITS = 11,
// 	GAME_MODE_NEW_GAME_MENU = 12,
// 	GAME_MODE_JUNGLE_LAND = 13,
// 	GAME_MODE_STAGE_SELECT = 14,
// 	GAME_MODE_UNK_15 = 15,
// 	GAME_MODE_RANKING = 16,
// 	GAME_MODE_BOOT = 18,
// 	GAME_MODE_SUNSOFT_LOGO = 19,
// 	GAME_MODE_CREDITS = 20,
// 	GAME_MODE_OPENING_CUTSCENE = 21
// };

//Thread 3 osStartThread function
//name is hardcoded in configure script. if name is changed, change it there too
void mod_main_func(void) {
    // func_8002D080(); //is already ran in MainLoop.s patch
    
    if (D_800F06E8 != -1) {
        gameModeCurrent = D_800F06E8;
    }
    
    D_800FFEB8 = 0;
    osRecvMesg(&D_801192E8, 0, 1);
    func_800A847C(&D_80200C00.flags0[0]);
    
    if (func_800A7F70() != D_80200C00.flags0[0]) {
        func_800A8944();
    }

    D_800FF5FC = D_80200C00.flags0[1] & 1;
    osRecvMesg(&D_801192E8, 0, 1);
    mod_boot_func();
    //step current game mode
    loop:
    mod_main_per_frame();
    switch(gameModeCurrent) {
        case GAME_MODE_OVERWORLD:
            func_8008FF84();
            goto loop;
        case GAME_MODE_JUNGLE_LAND_MENU:
            func_80097910();
            goto loop;
        case GAME_MODE_SAVE_MENU:
            FileWork();
            goto loop;
        case GAME_MODE_LOAD_GAME_MENU:
            func_8009C904();
            goto loop;
        case GAME_MODE_DEMO:
            func_800A9F84();
            goto loop;
        case GAME_MODE_DEMO_2:
            func_800AA3F0();
            goto loop;
        case GAME_MODE_CREDITS:
            func_800ADE70();
            goto loop;
        case GAME_MODE_OPENING_CUTSCENE:
            func_800AE4AC();
            goto loop;
        case GAME_MODE_TITLE_SCREEN:
            func_800A2BDC();
            goto loop;
        case GAME_MODE_BATTLE_MENU:
            func_800A0810();
            goto loop;
        case GAME_MODE_OPTIONS_MENU:
            func_800A4320();
            goto loop;
        case GAME_MODE_GAME_OVER:
            func_800A4EC8();
            goto loop;
        case GAME_MODE_SUPPLY_SYSTEM_LOGO:
            func_800A5570();
            goto loop;
        case GAME_MODE_PRE_CREDITS:
            func_8009553C();
            goto loop;
        case GAME_MODE_NEW_GAME_MENU:
            func_800A1D38();
            goto loop;
        case GAME_MODE_JUNGLE_LAND:
            func_800A6DD8();
            goto loop;
        case GAME_MODE_STAGE_SELECT:
            func_800A07E0();
            goto loop;
        case GAME_MODE_RANKING:
            func_8005564C();
            goto loop;
        case 17:
            func_800557F8();
            goto loop;
        case GAME_MODE_BOOT:
            func_80055994();
            goto loop;
        case GAME_MODE_SUNSOFT_LOGO:
            func_80055AA0();
            goto loop;
        case GAME_MODE_UNK_15:
            DummiedPrintf(D_8010DB20, gameModeCurrent);
            goto loop;
    }
}