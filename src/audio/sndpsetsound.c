#include "common.h"

#include <libaudio.h>

void alSndpSetSound(ALSndPlayer* sndp, s16 id) {
    sndp->target = (s32) id;
}
