#include "common.h"

//prints 
void DummiedPrintf(char* arg0, ...) {
    s32 pad;
}

extern s16 D_800FF5C4;
extern s32 D_800FF5C8;
extern OSThread gVideoThread;
void* D_80084B30(void);
extern s32* D_801B30A0;

void Video_StartThread(void) {
    D_800FF5C4 = 0;
    D_800FF5C8 = 0;
    osCreateThread(&gVideoThread, 5, (void*)videoproc, 0, (void*)&D_801B30A0, 100);
                    // OSThread ptr: gVideoThread
                    // OSId - thread ID: 5  
                    // entry - pc: &D_80084B30
                    // arg - a0: 0
                    // sp - stack pointer: &D_801B30A0
                    // OSPri p - thread priority: 0x64
    osStartThread(&gVideoThread);
                    // Start the new thread
}

