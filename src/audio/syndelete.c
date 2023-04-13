#include "common.h"
#include <PR/libaudio.h>

void alSynDelete(ALSynth *drvr){
    drvr->head = 0;
}
