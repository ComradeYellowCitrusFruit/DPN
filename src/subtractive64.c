#include <stdint.h>
#include <stdlib.h>
#include "libdpnc.h"
#include "dpnc_internal.h"

void subInt64(DPN64_t *a, int64_t Int)
{
    Int <<= a->pointDigit;
    a->val -= Int;
}
void subdouble64(DPN64_t *a, double Double)
{
    DPN64_t *b = initDPN64Point(a->pointDigit);
    assignDouble64(b, Double);
    subDPN64(a, b);
    free(b);
}
void subDPN64(DPN64_t *a, DPN64_t *b)
{
    DPN64_t *stash = initDPN64Point(b->pointDigit);
    assignDPN64(stash, b);
    adjustDPN64(a, b);
    a->val -= b->val;
    assignDPN64(b, stash);
    free(stash);
}

void divInt64(DPN64_t *a, int64_t Int)
{
    Int <<= a->pointDigit;
    a->val /= Int;
}
void divDouble64(DPN64_t *a, double Double)
{
    DPN64_t *b = initDPN64Point(a->pointDigit);
    assigndouble64(b, Double);
    divDPN64(a, b);
    free(b);
}
void divDPN64(DPN64_t *a, DPN64_t *b)
{
    DPN64_t *stash = initDPN64Point(b->pointDigit);
    assignDPN64(stash, b);
    adjustDPN64(a, b);
    a->val /= b->val;
    assignDPN64(b, stash);
    free(stash);
}