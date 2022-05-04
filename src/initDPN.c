#include <stdlib.h>
#include "libdpnc.h"

/* 32 Bit DPN Section */

/* Initate DPN32_t */
DPN32_t *initDPN32()
{
    DPN32_t *ret = (DPN32_t*)malloc(sizeof(DPN32_t));
    ret->pointDigit = 0;
    ret->val = 0;
    return ret;
}
/* Initate DPN32_t with preset point digit */
DPN32_t *initDPN32Point(int digit)
{
    DPN32_t *ret = (DPN32_t*)malloc(sizeof(DPN32_t));
    ret->pointDigit = digit;
    ret->val = 0;
    return ret;
}

/* 64 Bit DPN Section */

/* Initate DPN64_t */
struct DPN64_t *initDPN64()
{
    struct DPN64_t *ret = (struct DPN64_t*)malloc(sizeof(struct DPN64_t));
    ret->pointDigit = 0;
    ret->val = 0;
    return ret;
}
/* Initate DPN64_t with preset point digit */
struct DPN64_t *initDPN64Point(int digit)
{
    struct DPN64_t *ret = (struct DPN64_t*)malloc(sizeof(struct DPN64_t));
    ret->pointDigit = digit;
    ret->val = 0;
    return ret;
}