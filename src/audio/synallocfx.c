#include "common.h"

#include "PR/synthInternals.h"

//https://decomp.me/scratch/92Xup

/*
ALFxRef* alSynAllocFX(ALSynth* s, s16 bus, ALSynConfig* c, ALHeap* hp) {
    alFxNew(&s->auxBus[bus].fx[0], c, hp);
    alFxParam(&s->auxBus[bus].fx[0], AL_FILTER_SET_SOURCE,
                  &s->auxBus[bus]);
    alMainBusParam(s->mainBus, AL_FILTER_ADD_SOURCE,&s->auxBus[bus].fx[0]);

    return (ALFxRef)(&s->auxBus[bus].fx[0]);
}
*/

#pragma GLOBAL_ASM("asm/nonmatchings/audio/synallocfx/alSynAllocFX.s")
