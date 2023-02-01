#include "common.h"
//AOF=2

typedef struct {
    int quot;			/* Quotient.  */
    int rem;			/* Remainder.  */
} div_t;

typedef struct {
    long int quot;		/* Quotient.  */
    long int rem;		/* Remainder.  */
} ldiv_t;

typedef struct {
    long long int quot;		/* Quotient.  */
    long long int rem;		/* Remainder.  */
} lldiv_t;


lldiv_t lldiv(long long num, long long denom) {
    lldiv_t ret;

    ret.quot = num / denom;
    ret.rem = num - denom * ret.quot;

    if (ret.quot < 0 && ret.rem > 0) {
        ret.quot++;
        ret.rem -= denom;
    }

    return ret;
}

ldiv_t ldiv(long num, long denom) {
    ldiv_t ret;

    ret.quot = num / denom;
    ret.rem = num - denom * ret.quot;

    if (ret.quot < 0 && ret.rem > 0) {
        ret.quot++;
        ret.rem -= denom;
    }

    return ret;
}
