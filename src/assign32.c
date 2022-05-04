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
    Int <<= a->pointDigit;
    /*
    *   Since the remainder could not be properly recovered from a rightwise bitshift, it is instead divided by ten until it is less than int.
    *   This probably won't work properly due to the way bits work, we will have to fix this.
    */
    while(Remainder > Int) Remainder /= 10;
    a->val = Int;
    a->val |= Remainder;
}
void assignDPN32(DPN32_t *a, DPN32_t *b)
{
    a->val = b->val;
    a->pointDigit = b->pointDigit;
}