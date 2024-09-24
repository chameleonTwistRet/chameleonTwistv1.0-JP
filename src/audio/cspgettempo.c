#include "common.h"

#include <libaudio.h>

s32 alCSPGetTempo(ALCSPlayer *seqp) 
{
    /* sct 1/8/96 - If no target sequence has been set, just return zero (instead of crashing). */
    if (seqp->target == NULL)
	return 0;

    return seqp->uspt/seqp->target->qnpt;
}