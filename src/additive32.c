#include <stdint.h>
#include <stdlib.h>
#include "libdpnc.h"
#include "dpnc_internal.h"

void addInt32(DPN32_t *a, int32_t Int)
{
    Int <<= a->pointDigit;
    a->val += Int;
}
void addFloat32(DPN32_t *a, float Float)
{
    DPN32_t *b = initDPN32Point(a->pointDigit);
    assignFloat32(b, Float);
    addDPN32(a, b);
    free(b);
}
void addDPN32(DPN32_t *a, DPN32_t *b)
{
    DPN32_t *stash = initDPN32Point(b->pointDigit);
    assignDPN32(stash, b);
    adjustDPN32(a, b);
    a->val += b->val;
    assignDPN32(b, stash);
    free(stash);
}

void multInt32(DPN32_t *a, int32_t Int)
{
    Int <<= a->pointDigit;
    a->val *= Int;
}
void multFloat32(DPN32_t *a, float Float)
{
    DPN32_t *b = initDPN32Point(a->pointDigit);
    assignFloat32(b, Float);
    multDPN32(a, b);
    free(b);
}
void multDPN32(DPN32_t *a, DPN32_t *b)
{
    DPN32_t *stash = initDPN32Point(b->pointDigit);
    assignDPN32(stash, b);
    adjustDPN32(a, b);
    a->val *= b->val;
    assignDPN32(b, stash);
    free(stash);
}