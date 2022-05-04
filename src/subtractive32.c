#include <stdint.h>
#include <stdlib.h>
#include "libdpnc.h"
#include "dpnc_internal.h"

void subInt32(DPN32_t *a, int32_t Int)
{
    Int <<= a->pointDigit;
    a->val -= Int;
}
void subFloat32(DPN32_t *a, float Float)
{
    DPN32_t *b = initDPN32Point(a->pointDigit);
    assignFloat32(b, Float);
    subDPN32(a, b);
    free(b);
}
void subDPN32(DPN32_t *a, DPN32_t *b)
{
    DPN32_t *stash = initDPN32Point(b->pointDigit);
    assignDPN32(stash, b);
    adjustDPN32(a, b);
    a->val -= b->val;
    assignDPN32(b, stash);
    free(stash);
}

void divInt32(DPN32_t *a, int32_t Int)
{
    Int <<= a->pointDigit;
    a->val /= Int;
}
void divFloat32(DPN32_t *a, float Float)
{
    DPN32_t *b = initDPN32Point(a->pointDigit);
    assignFloat32(b, Float);
    divDPN32(a, b);
    free(b);
}
void divDPN32(DPN32_t *a, DPN32_t *b)
{
    DPN32_t *stash = initDPN32Point(b->pointDigit);
    assignDPN32(stash, b);
    adjustDPN32(a, b);
    a->val /= b->val;
    assignDPN32(b, stash);
    free(stash);
}