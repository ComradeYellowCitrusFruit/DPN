#include <stdint.h>
#include "libdpnc.h"

void assignInt32(DPN32_t *a, int32_t Int)
{
    Int <<= a->pointDigit;
    a->val = Int;
}
void assignFloat32(DPN32_t *a, float Float)
{
    int32_t Int = (int32_t)Float;
    float tmp = Float - (float)Int;
    while(tmp - (float)(int32_t)tmp < 1) tmp *= 10;
    int32_t Remainder = (int32_t)tmp;
    Remainder >>= a->pointDigit;
    Int <<= a->pointDigit;
    while(Remainder > Int) Remainder >>= 1;
    a->val = Int;
    a->val |= Remainder;
}
void assignDPN32(DPN32_t *a, DPN32_t *b)
{
    a->val = b->val;
    a->pointDigit = b->pointDigit;
}