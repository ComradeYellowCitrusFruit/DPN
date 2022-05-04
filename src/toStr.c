#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "libdpnc.h"

char *DPN32toStr(DPN32_t *a)
{
    /* Let's pray this is enough */
    char buffer[200];
    for(int i = 0; i < 200; i++) buffer[i] = '\0';
    int32_t x = (a->val >> a->pointDigit);
    if(a->pointDigit != 0)
    {
        int filter;
        for(int i = 0; i < a->pointDigit; i++) filter |= 1<<i;
        int32_t y = a->val & filter;
        sprintf(&buffer, "%i.%i", x, y);
    }
    else
    {
        sprintf(&buffer, "%i", x);
    }
    char *ret = (char*)malloc(strlen(buffer) + 1);
    strncpy(ret, buffer, strlen(buffer) + 1);
    return ret;
}

char *DPN64toStr(DPN64_t *a)
{
    /* Let's pray this is enough */
    char buffer[300];
    for(int i = 0; i < 300; i++) buffer[i] = '\0';
    int64_t x = (a->val >> a->pointDigit);
    if(a->pointDigit != 0)
    {
        int filter;
        for(int i = 0; i < a->pointDigit; i++) filter |= 1<<i;
        int64_t y = a->val & filter;
        sprintf(&buffer, "%ll.%ll", x, y);
    }
    else
    {
        sprintf(&buffer, "%ll", x);
    }
    char *ret = (char*)malloc(strlen(buffer) + 1);
    strncpy(ret, buffer, strlen(buffer) + 1);
    return ret;
}