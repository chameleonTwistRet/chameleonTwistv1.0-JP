#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/code/5FEB0/func_80084AB0.s")
//void func_80084AB0(s32 arg0, ? arg1, ? arg2, ? arg3){}


#pragma GLOBAL_ASM("asm/nonmatchings/code/5FEB0/func_80084ACC.s")
/*
extern OSThread D_801B1EF0

void func_80084ACC(void) {
    D_800FF5C4 = 0;
    D_800FF5C8 = 0;
    osCreateThread(&D_801B1EF0, 5, &D_80084B30, 0, &D_801B30A0, 0x64);
                    // OSThread ptr: D_801B1EF0
                    // OSId - thread ID: 5  
                    // entry - pc: &D_80084B30
                    // arg - a0: 0
                    // sp - stack pointer: &D_801B30A0
                    // OSPri p - thread priority: 0x64
    osStartThread(&D_801B1EF0);
                    // Start the new thread
}
*/
