#include "common.h"

//prints 
void DummiedPrintf(char* arg0, ...) {
    s32 pad;
}

extern s16 gSchedReset;
extern s32 gGfxTaskPending;
extern OSThread gSchedThread;
void* D_80084B30(void);
extern u8 gSchedThreadStack[];

void Sched_StartThread(void) {
    gSchedReset = FALSE;
    gGfxTaskPending = FALSE;
    osCreateThread(&gSchedThread, 5, (void*)schedproc, 0, (void*)&gSchedThreadStack[0x1000], 100);
                    // OSThread ptr: gSchedThread
                    // OSId - thread ID: 5  
                    // entry - pc: &D_80084B30
                    // arg - a0: 0
                    // sp - stack pointer: &gSchedThreadStack[0x1000]
                    // OSPri p - thread priority: 0x64
    osStartThread(&gSchedThread);
                    // Start the new thread
}