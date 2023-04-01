#include "common.h"

#include <libaudio.h>

s32 alCSPGetTempo(ALCSPlayer *seqp) 
{
    /* sct 1/8/96 - If no target sequence has been set, just return zero (instead of crashing). */
    if (seqp->target == NULL)
	return 0;

    return seqp->uspt/seqp->target->qnpt;
}

#pragma GLOBAL_ASM("asm/nonmatchings/audio/cspgettempo/func_800DF6C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/cspgettempo/func_800DF760.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/cspgettempo/func_800DF800.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/cspgettempo/func_800DF8C4.s")

void func_800DF91C(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/audio/cspgettempo/func_800DF924.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/cspgettempo/func_800DFC1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/cspgettempo/func_800DFD30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/cspgettempo/func_800DFE9C.s")

//typedef struct temp_func_800DFE9C {
//    char unk0[0xc];
//    s32 unkC;
//} temp_func_800DFE9C;
//
//s32 func_800DFE9C(temp_func_800DFE9C* arg0) {
//    return arg0->unkC;
//}

#pragma GLOBAL_ASM("asm/nonmatchings/audio/cspgettempo/func_800DFEA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/cspgettempo/func_800DFFA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/cspgettempo/func_800E000C.s")
