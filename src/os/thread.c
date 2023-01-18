#include "common.h"

//AOF=1

void __osDequeueThread(OSThread **queue, OSThread *t) {
    register OSThread **pred;
    register OSThread *succ;

    pred = queue;
    succ = *pred;

    while (succ != NULL) {
        if (succ == t) {
            *pred = t->next;
            return;
        }
        pred = (OSThread**)succ;
        succ = *pred;
    }
}
