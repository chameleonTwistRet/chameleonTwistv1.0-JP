#include "common.h"

void osSetEventMesg(OSEvent event, OSMesgQueue *mq, OSMesg msg) {
	register u32 saveMask = __osDisableInt();
	__OSEventState *es = &__osEventStateTab[event];

	es->messageQueue = mq;
	es->message = msg;

	__osRestoreInt(saveMask);
}
