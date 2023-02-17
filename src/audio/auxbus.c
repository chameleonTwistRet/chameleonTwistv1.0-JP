#include "common.h"
#include <libaudio.h>
#include "PR/synthInternals.h"

s32 alAuxBusParam(void *filter, s32 paramID, void *param)
{
    ALAuxBus     *m = (ALAuxBus *) filter;
    ALFilter    **sources = m->sources;
    
    switch (paramID) {

        case (AL_FILTER_ADD_SOURCE):
            sources[m->sourceCount++] = (ALFilter *) param;
            break;
            
        default:
            /* ??? */
            break;
    }

    return 0;
    
}

#pragma GLOBAL_ASM("asm/nonmatchings/audio/auxbus/alAuxBusPull.s")
