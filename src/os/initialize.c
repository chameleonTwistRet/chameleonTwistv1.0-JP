#include "common.h"
#include "PR/os_internal.h"



#define	OS_CLOCK_RATE		62500000LL
#define	OS_CPU_COUNTER		(OS_CLOCK_RATE*3/4)

#define PI_DOM2_ADDR1 0x05000000  /* to 0x05FFFFFF */
#define PI_DOM2_DD   (PI_DOM2_ADDR1+0x508)

typedef struct
{
   /* 0x0 */ unsigned int inst1;
   /* 0x4 */ unsigned int inst2;
   /* 0x8 */ unsigned int inst3;
   /* 0xC */ unsigned int inst4;
} __osExceptionVector;
extern __osExceptionVector __osExceptionPreamble;

OSTime osClockRate = 0x0000000003B9ACA0;
u32 D_80109018 = 0x00000000; //?
OSIntMask __OSGlobalIntMask = 0x003FFF01;
s32 __osShutdown = 0;
u32 __osFinalrom;    //= 0; | bss

void __createSpeedParam(void);
s32 __osGetHWIntrRoutine();

void __osInitialize_common(void) {
    u32 pifdata;
    u32 sp38 = 0;
    u32 sp34;
    u32 sp30;

    __osFinalrom = TRUE;

    __osSetSR(__osGetSR() | SR_CU1);    //enable fpu
    __osSetFpcCsr(FPCSR_FS | FPCSR_EV); //flush denorm to zero, enable invalid operation

    while (__osSpRawReadIo(PIF_RAM_END - 3, &pifdata)) { //last byte of joychannel ram
        ;
    }
    while (__osSpRawWriteIo(PIF_RAM_END - 3, pifdata | 8)) {
        ; //todo: magic contant
    }
    *(__osExceptionVector *)UT_VEC = __osExceptionPreamble;
    *(__osExceptionVector *)XUT_VEC = __osExceptionPreamble;
    *(__osExceptionVector *)ECC_VEC = __osExceptionPreamble;
    *(__osExceptionVector *)E_VEC = __osExceptionPreamble;
    osWritebackDCache((void *)UT_VEC, E_VEC - UT_VEC + sizeof(__osExceptionVector));
    osInvalICache((void *)UT_VEC, E_VEC - UT_VEC + sizeof(__osExceptionVector));
    __createSpeedParam();
    osPiRawReadIo(4, &sp38);
    sp38 &= ~0x0F;
    
    if (sp38) {
        osClockRate = sp38;
    }
    osClockRate = osClockRate * 3 / 4;

    if (osResetType == 0 ) { // cold reset
        _bzero(osAppNMIBuffer, OS_APP_NMI_BUFSIZE);
    }

    sp30 = IO_READ(PI_STATUS_REG);
    
    while (sp30 & 3) {
        sp30 = IO_READ(PI_STATUS_REG);
    }
    
    sp34 = IO_READ(PI_DOM2_DD);
    
    if (!(sp34 & 0xFFFF)) {
        __osShutdown = 1;
        __osSetHWIntrRoutine(1, __osLeoInterrupt);
    } else {
        __osShutdown = 0;
    }
}