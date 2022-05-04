#include <stdint.h>
#include "libdpnc.h"

void assignInt64(DPN64_t *a, int64_t Int)
{
    Int <<= a->pointDigit;
    a->val = Int;
}
void assigndouble64(DPN64_t *a, double double)
{
    int64_t Int = (int64_t)double;
    double tmp = double - (double)Int;
    while(tmp - (double)(int64_t)tmp < 1) tmp *= 10;
    int64_t Remainder = (int64_t)tmp;
    Remainder >>= a->pointDigit;
    Int <<= a->pointDigit;
    while(Remainder > Int) Remainder >>= 1;
    a->val = Int;
    a->val |= Remainder;
}
void assignDPN64(DPN64_t *a, DPN64_t *b)
{
    a->val = b->val;
    a->pointDigit = b->pointDigit;
}