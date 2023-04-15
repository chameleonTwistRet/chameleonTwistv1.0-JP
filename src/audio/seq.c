#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/audio/seq/func_800ECD10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/seq/func_800ECD2C.s")


s32 alSeqGetTicks(ALSeq *seq)
{
    return seq->lastTicks;
}


void func_800ECD50(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/audio/seq/readVarLen.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/seq/alSeqNextEvent.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/seq/alSeqNewMarker.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/seq/alSeqSecToTicks.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/seq/alSeqTicksToSec.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/seq/__alSeqNextDelta.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/seq/_read32.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/seq/_read16.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/seq/alSeqNew.s")
