/*====================================================================
 * synthesizer.c
 *
 * Copyright 1993, Silicon Graphics, Inc.
 * All Rights Reserved.
 *
 * This is UNPUBLISHED PROPRIETARY SOURCE CODE of Silicon Graphics,
 * Inc.; the contents of this file may not be disclosed to third
 * parties, copied or duplicated in any form, in whole or in part,
 * without the prior written permission of Silicon Graphics, Inc.
 *
 * RESTRICTED RIGHTS LEGEND:
 * Use, duplication or disclosure by the Government is subject to
 * restrictions as set forth in subdivision (c)(1)(ii) of the Rights
 * in Technical Data and Computer Software clause at DFARS
 * 252.227-7013, and/or in similar or successor clauses in the FAR,
 * DOD or NASA FAR Supplement. Unpublished - rights reserved under the
 * Copyright Laws of the United States.
 *====================================================================*/

#include "PR/synthInternals.h"
#include <assert.h>

#ifdef AUD_PROFILE
#include <os.h>
extern u32 cnt_index, drvr_num, drvr_cnt, drvr_max, drvr_min, lastCnt[];
extern u32 client_num, client_cnt, client_max, client_min;
#endif

#ifndef MIN
#   define MIN(a,b) (((a)<(b))?(a):(b))
#endif

void func_800DE990(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/audio/synthesizer/_timeToSamples.s")
/* RODATA Needed */
//s32 _timeToSamplesNoRound(ALSynth *synth, s32 micros)
//{
//    f32 tmp = ((f32)micros) * synth->outputRate / 1000000.0 + 0.5;
//
//    return (s32)tmp;
//}

void _freePVoice(ALSynth *drvr, PVoice* pvoice) {
    alUnlink((ALLink*)pvoice);
    alLink((ALLink*)pvoice, &drvr->pLameList);
}

#pragma GLOBAL_ASM("asm/nonmatchings/audio/synthesizer/_collectPVoices.s")
// _collectPVoices

void __freeParam(ALParam* param) {
    ALSynth *drvr = &alGlobals->drvr;
    param->next = drvr->paramList;
    drvr->paramList = param;
}

#pragma GLOBAL_ASM("asm/nonmatchings/audio/synthesizer/__allocParam.s")
// __allocParam

void func_800DEAD0(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/audio/synthesizer/alAudioFrame.s")
// alAudioFrame

//#pragma GLOBAL_ASM("asm/nonmatchings/audio/synthesizer/alSynNew.s")
void alSynNew(ALSynth *drvr, ALSynConfig *c)
{
    s32         i;
    ALVoice     *vv;
    PVoice      *pv;
    ALVoice     *vvoices;
    PVoice      *pvoices;
    ALHeap      *hp = c->heap;
    ALSave      *save;
    ALFilter    *sources;
    ALParam     *params;
    ALParam     *paramPtr;
    
    drvr->head            = NULL;
    drvr->numPVoices      = c->maxPVoices;
    drvr->curSamples      = 0;
    drvr->paramSamples    = 0;
    drvr->outputRate      = c->outputRate;
    drvr->maxOutSamples   = AL_MAX_RSP_SAMPLES;
    drvr->dma             = (ALDMANew) c->dmaproc;

    save = alHeapAlloc(hp, 1, sizeof(ALSave));
    alSaveNew(save);
    drvr->outputFilter = (ALFilter *)save;

    /*
     * allocate and initialize the auxilliary effects bus. at present
     * we only support 1 effects bus.
     */
    drvr->auxBus = alHeapAlloc(hp, 1, sizeof(ALAuxBus));
    drvr->maxAuxBusses = 1;
    sources = alHeapAlloc(hp, c->maxPVoices, sizeof(ALFilter *));
    alAuxBusNew(drvr->auxBus, sources, c->maxPVoices);

    /*
     * allocate and initialize the main bus.
     */
    drvr->mainBus = alHeapAlloc(hp, 1, sizeof(ALMainBus));
    sources = alHeapAlloc(hp, c->maxPVoices, sizeof(ALFilter *));
    alMainBusNew(drvr->mainBus, sources, c->maxPVoices);

    if (c->fxType != AL_FX_NONE){
        /*
         * Allocate an effect and set parameters
         */
        alSynAllocFX(drvr, 0, c, hp);
    } else
        /*
         * Connect the aux bus to the main bus
         */
    	alMainBusParam(drvr->mainBus, AL_FILTER_ADD_SOURCE, &drvr->auxBus[0]);
    
    /*
     * Build the physical voice lists
     */
    drvr->pFreeList.next = 0;
    drvr->pFreeList.prev = 0;
    drvr->pLameList.next = 0;
    drvr->pLameList.prev = 0;
    drvr->pAllocList.next = 0;
    drvr->pAllocList.prev = 0;

    pvoices = alHeapAlloc(hp, c->maxPVoices, sizeof(PVoice));
    for (i = 0; i < c->maxPVoices; i++) {
        pv = &pvoices[i];
        alLink((ALLink *)pv, &drvr->pFreeList);
        pv->vvoice = 0;

        alLoadNew(&pv->decoder, drvr->dma, hp);
        alLoadParam(&pv->decoder, AL_FILTER_SET_SOURCE, 0);
    
        alResampleNew(&pv->resampler, hp);
        alResampleParam(&pv->resampler, AL_FILTER_SET_SOURCE, &pv->decoder);

        alEnvmixerNew(&pv->envmixer, hp);
        alEnvmixerParam(&pv->envmixer, AL_FILTER_SET_SOURCE, &pv->resampler);

        alAuxBusParam(drvr->auxBus, AL_FILTER_ADD_SOURCE, &pv->envmixer);
        
        pv->channelKnob   = (ALFilter *)&pv->envmixer;
    }
    
    alSaveParam(save, AL_FILTER_SET_SOURCE, drvr->mainBus);

    /*
     * build the parameter update list
     */
    params = alHeapAlloc(hp, c->maxUpdates, sizeof(ALParam));
    drvr->paramList = 0;
    for (i = 0; i < c->maxUpdates; i++) {
        paramPtr= &params[i];
        paramPtr->next = drvr->paramList;
        drvr->paramList = paramPtr;
    }
    
    drvr->heap = hp;
}
