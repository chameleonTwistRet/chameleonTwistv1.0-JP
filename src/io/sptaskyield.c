#include "common.h"
#include "os_internal.h"

void osSpTaskYield(void) {
    __osSpSetStatus(SP_SET_YIELD);
}
