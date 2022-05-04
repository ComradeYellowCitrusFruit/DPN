#include <stdint.h>
#include "libdpnc.h"

void assignInt64(DPN64_t *a, int64_t Int)
{
    Int <<= a->pointDigit;
    a->val = Int;
}
void assignDouble64(DPN64_t *a, double Double)
{
    int64_t Int = (int64_t)Double;
    double tmp = Double - (double)Int;
    while(tmp - (double)(int64_t)tmp < 1) tmp *= 10;
    int64_t Remainder = (int64_t)tmp;
    Int <<= a->pointDigit;
    /*
    *   Since the remainder could not be properly recovered from a rightwise bitshift, it is instead divided by ten until it is less than int.
    *   This probably won't work properly due to the way bits work, we will have to fix this.
    */
    while(Remainder > Int) Remainder /= 10;
    a->val = Int;
    a->val |= Remainder;
}
void assignDPN64(DPN64_t *a, DPN64_t *b)
{
    a->val = b->val;
    a->pointDigit = b->pointDigit;
}