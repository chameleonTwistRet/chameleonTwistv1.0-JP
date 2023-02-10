#include "common.h"
//AOF=2

void func_80084AB0(char* arg0, ...) {
    s32 pad;
}

extern s16 D_800FF5C4;
extern s32 D_800FF5C8;
extern OSThread D_801B1EF0;
void* D_80084B30(void);
extern s32* D_801B30A0;

void func_80084ACC(void) {
    D_800FF5C4 = 0;
    D_800FF5C8 = 0;
    osCreateThread(&D_801B1EF0, 5, (void*)func_80084B30, 0, (void*)&D_801B30A0, 100);
                    // OSThread ptr: D_801B1EF0
                    // OSId - thread ID: 5  
                    // entry - pc: &D_80084B30
                    // arg - a0: 0
                    // sp - stack pointer: &D_801B30A0
                    // OSPri p - thread priority: 0x64
    osStartThread(&D_801B1EF0);
                    // Start the new thread
}

