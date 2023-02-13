#include "common.h"

void osSpTaskYield(void) {
    __osSpSetStatus(SP_SET_YIELD);
}
