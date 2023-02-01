#include "common.h"
//AOF=1

void osSpTaskYield(void) {
    __osSpSetStatus(SP_SET_YIELD);
}
