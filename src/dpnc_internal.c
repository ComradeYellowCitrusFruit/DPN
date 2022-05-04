#include "libdpnc.h"
#include "dpnc_internal.h"

void adjustDPN32(DPN32_t *a, DPN32_t *b)
{
    if(a->pointDigit > b->pointDigit)
    {
        b->pointDigit = a->pointDigit;
        b->val <<= a->pointDigit - stash->pointDigit;
    }
    else if(a->pointDigit < b->pointDigit)
    {
        b->pointDigit = a->pointDigit;
        b->val >>= stash->pointDigit - a->pointDigit;
    }
}

void adjustDPN64(DPN64_t *a, DPN64_t *b)
{
    if(a->pointDigit > b->pointDigit)
    {
        b->pointDigit = a->pointDigit;
        b->val <<= a->pointDigit - stash->pointDigit;
    }
    else if(a->pointDigit < b->pointDigit)
    {
        b->pointDigit = a->pointDigit;
        b->val >>= stash->pointDigit - a->pointDigit;
    }
}