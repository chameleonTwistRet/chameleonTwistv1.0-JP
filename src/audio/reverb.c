#include "common.h"

#include <libaudio.h>
#include <ultraerror.h>
#include "PR/synthInternals.h"
#include <os.h>
#include <os_internal.h>
#include <assert.h>
#include "PR/initfx.h"

#define RANGE 2.0

#define SWAP(in, out)	\
{			\
     s16 t = out;	\
     out = in;		\
     in = t;		\
}

/***********************************************************************
 * Reverb filter public interfaces
 ***********************************************************************/

/*
 * Generate a triangle wave from -1 to 1, and find the current position
 * in the wave. (Rate of the wave is controlled by d->rsinc, which is chorus
 * rate) Multiply the current triangle wave value by d->rsgain, (chorus depth)
 * which is expressed in number of samples back from output pointer the chorus
 * should go at it's full chorus. In otherwords, this function returns a number
 * of samples the output pointer should modulate backwards.
 */
f32 _doModFunc(ALDelay* d, s32 count) {
    f32 val;

    d->rsval += d->rsinc * count;
    d->rsval = (d->rsval > RANGE) ? d->rsval-(RANGE*2) : d->rsval;
    
    val = d->rsval;
    val = (val < 0) ? -val : val;
    
    val -= RANGE/2;

    return(d->rsgain * val);
}

#pragma GLOBAL_ASM("asm/nonmatchings/audio/reverb/func_800ED488.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/reverb/func_800ED540.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/reverb/func_800ED6C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/reverb/func_800ED854.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/reverb/alFxParamHdl.s")

s32 alFxParam(void *filter, s32 paramID, void *param)
{
    if(paramID == AL_FILTER_SET_SOURCE)
    {
	ALFilter    *f = (ALFilter *) filter;
	f->source = (ALFilter*) param;
    }
    return 0;
}


#pragma GLOBAL_ASM("asm/nonmatchings/audio/reverb/alFxPull.s")
