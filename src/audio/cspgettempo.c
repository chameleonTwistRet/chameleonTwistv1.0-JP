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

#pragma GLOBAL_ASM("asm/nonmatchings/audio/cspgettempo/alCSeqSetLoc.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/cspgettempo/__getTrackByte.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/cspgettempo/__readVarLen.s")

void func_800DF91C(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/audio/cspgettempo/alCSeqNextEvent.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/cspgettempo/alCSeqNew.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/cspgettempo/alCSeqNewMarker.s")

s32 alCSeqGetTicks(ALCSeq *seq){
  return seq->lastTicks;
}



#pragma GLOBAL_ASM("asm/nonmatchings/audio/cspgettempo/alCSeqSecToTicks.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/cspgettempo/alCSeqTicksToSec.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/cspgettempo/__alCSeqNextDelta.s")
