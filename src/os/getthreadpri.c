#include "common.h"
#include "osint.h"
//AOF=1

OSPri osGetThreadPri(OSThread *thread) {
    if (thread == NULL) {
        thread = __osRunningThread;
    }
    
    return thread->priority;
}
