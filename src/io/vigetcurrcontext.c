#include "common.h"
#include "viint.h"

__OSViContext* __osViGetCurrentContext(void)
{
    return __osViCurr;
}
