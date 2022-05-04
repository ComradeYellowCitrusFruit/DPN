#include <stdint.h>
#include <stdlib.h>
#include "libdpnc.h"

int DPN32toInt(DPN32_t *a)
{
    return a->val >> a->pointDigit;
}
float DPN32toFloat(DPN32_t *a)
{
    float ret = (float)DPN32toInt(a);
    DPN32_t *b = initDPN32Point(a->pointDigit);
    assignDPN32(b, a);
    int32_t filter;
    for(int i = b->pointDigit; i < 30; i++) filter |= 1<<i;
    b->val ^= b->val & filter;
    float tmp = (float)b->val;
    while(tmp > 1) tmp /= 10;
    ret += tmp;
    free(b);
    return ret;
}

int DPN64toInt(struct DPN64_t *a)
{
    return a->val >> a->pointDigit;
}
double DPN64todouble(struct DPN64_t *a)
{
    double ret = (double)DPN64toInt(a);
    struct DPN64_t *b = initDPN64Point(a->pointDigit);
    assignDPN64(b, a);
    int64_t filter;
    for(int i = b->pointDigit; i < 30; i++) filter |= 1<<i;
    b->val ^= b->val & filter;
    double tmp = (double)b->val;
    while(tmp > 1) tmp /= 10;
    ret += tmp;
    free(b);
    return ret;
}
