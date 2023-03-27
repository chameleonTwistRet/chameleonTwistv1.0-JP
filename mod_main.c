#include "common.h"

extern s32 gameModeCurrent;
extern s32 D_800F06E8;
extern OSMesgQueue D_801192E8;
extern s32 D_8010DB20;

void func_8002D080(void);
s32 func_800A7F70(void);
void func_8008FF84(void);
void func_800A8944(void);
void func_800A847C(u8*);
void func_80097910(void);
void FileWork(void);
void func_8009C904(void);
void func_800A9F84(void);
void func_800AA3F0(void);
void func_800ADE70(void);
void func_800AE4AC(void);
void func_800A2BDC(void);
void func_800A0810(void);
void func_800A4320(void);
void func_800A4EC8(void);
void func_800A5570(void);
void func_8009553C(void);
void func_800A1D38(void);
void func_800A6DD8(void);
void func_800A07E0(void);
void func_8005564C(void);
void func_800557F8(void);
void func_80055994(void);
void func_80055AA0(void);
void DummiedPrintf(char*, ...);

extern Addr* mod_ROM_START;
extern Addr* mod_VRAM;
extern Addr* mod_ROM_END;
extern Addr* mod_ROM_START;

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

    //step current game mode
    loop:
    switch(gameModeCurrent) {
        case 0:
            func_8008FF84();
            goto loop;
        case 1:
            func_80097910();
            goto loop;
        case 2:
            FileWork();
            goto loop;
        case 3:
            func_8009C904();
            goto loop;
        case 4:
            func_800A9F84();
            goto loop;
        case 5:
            func_800AA3F0();
            goto loop;
        case 20:
            func_800ADE70();
            goto loop;
        case 21:
            func_800AE4AC();
            goto loop;
        case 6:
            func_800A2BDC();
            goto loop;
        case 7:
            func_800A0810();
            goto loop;
        case 8:
            func_800A4320();
            goto loop;
        case 9:
            func_800A4EC8();
            goto loop;
        case 10:
            func_800A5570();
            goto loop;
        case 11:
            func_8009553C();
            goto loop;
        case 12:
            func_800A1D38();
            goto loop;
        case 13:
            func_800A6DD8();
            goto loop;
        case 14:
            func_800A07E0();
            goto loop;
        case 16:
            func_8005564C();
            goto loop;
        case 17:
            func_800557F8();
            goto loop;
        case 18:
            func_80055994();
            goto loop;
        case 19:
            func_80055AA0();
            goto loop;
        case 15:
            DummiedPrintf(&D_8010DB20, gameModeCurrent);
            goto loop;
    }        
}