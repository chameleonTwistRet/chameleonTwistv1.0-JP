#include "common.h"
//AOF=1

// extern u8 D_80109DB0;

// s32 osAiSetNextBuffer(void *bufPtr, u32 size) {
// 	char *bptr;

//     bptr = bufPtr;

// 	if (D_80109DB0) {
// 		bptr -= 0x2000;
// 	}

// 	if ((((u32)bufPtr + size) & 0x3fff) == 0x2000) {
// 		D_80109DB0 = TRUE;
// 	} else {
// 		D_80109DB0 = FALSE;
// 	}
    
// 	if (__osAiDeviceBusy()) {
// 		return -1;
// 	}
    
// 	IO_WRITE(AI_DRAM_ADDR_REG, osVirtualToPhysical(bptr));
// 	IO_WRITE(AI_LEN_REG, size);
// 	return 0;
// }

//with static variable
s32 osAiSetNextBuffer(void *bufPtr, u32 size) {
	static u8 hdwrBugFlag = FALSE;
	char *bptr;

    bptr = bufPtr;

	if (hdwrBugFlag) {
		bptr -= 0x2000;
	}

	if ((((u32)bufPtr + size) & 0x3fff) == 0x2000) {
		hdwrBugFlag = TRUE;
	} else {
		hdwrBugFlag = FALSE;
	}
    
	if (__osAiDeviceBusy()) {
		return -1;
	}
    
	IO_WRITE(AI_DRAM_ADDR_REG, osVirtualToPhysical(bptr));
	IO_WRITE(AI_LEN_REG, size);
	return 0;
}

