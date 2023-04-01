#include "common.h"

#include <libaudio.h>
#include "PR/synthInternals.h"

#pragma GLOBAL_ASM("asm/nonmatchings/audio/reverb/func_800ED3E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/reverb/func_800ED488.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/reverb/func_800ED540.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/reverb/func_800ED6C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/reverb/func_800ED854.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/reverb/alFxParamHdl.s")

//#pragma GLOBAL_ASM("asm/nonmatchings/audio/reverb/alFxParam.s")
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
