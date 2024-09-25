#include <libaudio.h>

void alSeqpSetChlPan(ALSeqPlayer *seqp, u8 chan, ALPan pan)
{
    ALEvent       evt;

    evt.type            = AL_SEQP_MIDI_EVT;
    evt.msg.midi.ticks  = 0;
    evt.msg.midi.status = AL_MIDI_ControlChange | chan;
    evt.msg.midi.byte1  = AL_MIDI_PAN_CTRL;
    evt.msg.midi.byte2  = pan;
                    
    alEvtqPostEvent(&seqp->evtq, &evt, 0);
}
