#include "common.h"

//#include "sndp.h"
#include <os_internal.h>
#include <ultraerror.h>
#include <assert.h>

#pragma GLOBAL_ASM("asm/nonmatchings/audio/sndpplayer/func_800DE220.s")

void func_800DE29C(void) {
}

void func_800DE2A4(void) {
}


#pragma GLOBAL_ASM("asm/nonmatchings/audio/sndpplayer/_sndpVoiceHandler.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/sndpplayer/alSndpNew.s")
//void alSndpNew(ALSndPlayer *sndp, ALSndpConfig *c) 
//{    
//    u8            *ptr;
//    ALEvent       evt;
//    ALSoundState  *sState;
//    u32           i;
//
//    /*
//     * Init member variables
//     */
//    sndp->maxSounds = c->maxSounds;
//    sndp->target = -1;
//    sndp->frameTime = AL_USEC_PER_FRAME;        /* time between API events */
//    sState = (ALSoundState*)alHeapAlloc(c->heap, 1,
//                                        c->maxSounds * sizeof(ALSoundState));
//    sndp->sndState = sState;
//
//    for(i = 0; i < c->maxSounds; i++)
//	sState[i].sound = 0;
//
//    /*
//     * init the event queue
//     */
//    ptr = alHeapAlloc(c->heap, 1, c->maxEvents * sizeof(ALEventListItem));
//    alEvtqNew(&sndp->evtq, (ALEventListItem *)ptr, c->maxEvents);
//    
//    /*
//     * add ourselves to the driver
//     */
//    sndp->drvr = &alGlobals->drvr;
//    sndp->node.next = NULL;
//    sndp->node.handler = _sndpVoiceHandler;
//    sndp->node.clientData = sndp;
//    alSynAddPlayer(sndp->drvr, &sndp->node);
//
//    /*
//     * Start responding to API events
//     */
//    evt.type = AL_SNDP_API_EVT;
//    alEvtqPostEvent(&sndp->evtq, (ALEvent *)&evt, sndp->frameTime);
//    sndp->nextDelta = alEvtqNextEvent(&sndp->evtq, &sndp->nextEvent);
//
//}
