#include "common.h"
//AOF=1

struct __osThreadTail __osThreadTail = {NULL, -1};
OSThread *__osRunQueue = (OSThread *)&__osThreadTail;
OSThread *__osActiveQueue = (OSThread *)&__osThreadTail;
OSThread *__osRunningThread = {0};
OSThread *__osFaultedThread = {0};


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
