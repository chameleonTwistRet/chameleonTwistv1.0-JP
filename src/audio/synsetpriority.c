#include "common.h"

void alSynSetPriority(ALSynth *s, ALVoice *voice, s16 priority){
    voice->priority = priority;
}
