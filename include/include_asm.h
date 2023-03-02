#ifndef __INCLUDE_ASM_H__
#define __INCLUDE_ASM_H__

#define STRINGIFY_(x) #x
#define STRINGIFY(x) STRINGIFY_(x)

__asm__(".include \"include/macro.inc\"\n");


#endif
