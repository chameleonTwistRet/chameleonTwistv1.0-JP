#include "common.h"
#include "osint.h"



#pragma GLOBAL_ASM("asm/nonmatchings/os/timerintr/__osTimerServicesInit.s")
//__osTimerList needs to be static
// void __osTimerServicesInit(void) {
// 	__osCurrentTime = 0;
// 	__osBaseCounter = 0;
// 	__osViIntrCount = 0;
// 	__osTimerList->prev = __osTimerList;
// 	__osTimerList->next = __osTimerList->prev;
// 	__osTimerList->value = 0;
// 	__osTimerList->interval = __osTimerList->value;
// 	__osTimerList->mq = NULL;
// 	__osTimerList->msg = 0;
// }

//https://decomp.me/scratch/jmtY4
#pragma GLOBAL_ASM("asm/nonmatchings/os/timerintr/__osTimerInterrupt.s")

void __osSetTimerIntr(OSTime tim) {
	OSTime NewTime;
	u32 savedMask;

	savedMask = __osDisableInt();
	__osTimerCounter = osGetCount();
	NewTime = __osTimerCounter + tim;
	__osSetCompare(NewTime);
	__osRestoreInt(savedMask);
}

//https://decomp.me/scratch/nMwzq
#pragma GLOBAL_ASM("asm/nonmatchings/os/timerintr/__osInsertTimer.s")
