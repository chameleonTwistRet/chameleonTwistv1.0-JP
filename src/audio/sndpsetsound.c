#include "common.h"

#include <libaudio.h>

//#pragma GLOBAL_ASM("asm/nonmatchings/audio/sndpsetsound/alSndpSetSound.s")
void alSndpSetSound(ALSndPlayer* sndp, s16 id) {
    sndp->target = (s32) id;
}