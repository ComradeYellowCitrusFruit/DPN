#include <stdint.h>
#include <stdlib.h>
#include "libdpnc.h"
#include "dpnc_internal.h"

void addInt64(DPN64_t *a, int64_t Int)
{
    Int <<= a->pointDigit;
    a->val += Int;
}
void addDouble64(DPN64_t *a, double double)
{
    DPN64_t *b = initDPN64Point(a->pointDigit);
    assignDouble64(b, double);
    addDPN64(a, b);
    free(b);
}
void addDPN64(DPN64_t *a, DPN64_t *b)
{
    DPN64_t *stash = initDPN64Point(b->pointDigit);
    assignDPN64(stash, b);
    adjustDPN64(a, b);
    a->val += b->val;
    assignDPN32(b, stash);
    free(stash);
}

void multInt64(DPN32_t *a, int64_t Int)
{
    Int <<= a->pointDigit;
    a->val *= Int;
}
void multDouble64(DPN64_t *a, double double)
{
    DPN64_t *b = initDPN64Point(a->pointDigit);
    assignDouble64(b, double);
    multDPN64(a, b);
    free(b);
}
void multDPN64(DPN64_t *a, DPN64_t *b)
{
    DPN64_t *stash = initDPN64Point(b->pointDigit);
    assignDPN64(stash, b);
    adjustDPN64(a, b);
    a->val *= b->val;
    assignDPN64(b, stash);
    free(stash);
}