#ifndef LIB_DYNAMIC_POINT_NUMBERS_C
#define LIB_DYNAMIC_POINT_NUMBERS_C

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

enum DPN32_point_t
{
    D30 = 1<<30,
    D29 = 1<<29,
    D28 = 1<<28,
    D27 = 1<<27,
    D26 = 1<<26,
    D25 = 1<<25,
    D24 = 1<<24,
    D23 = 1<<23,
    D22 = 1<<22,
    D21 = 1<<21,
    D20 = 1<<20,
    D19 = 1<<19,
    D18 = 1<<18,
    D17 = 1<<17,
    D16 = 1<<16,
    D15 = 1<<15,
    D14 = 1<<14,
    D13 = 1<<13,
    D12 = 1<<12,
    D11 = 1<<11,
    D10 = 1<<10,
    D9 = 1<<9,
    D8 = 1<<8,
    D7 = 1<<7,
    D6 = 1<<6,
    D5 = 1<<5,
    D4 = 1<<4,
    D3 = 1<<3,
    D2 = 1<<2,
    D1 = 1<<1,
    D0 = 1<<0
};

enum DPN64_point_t
{
    D62 = 1<<62,
    D61 = 1<<61,
    D60 = 1<<60,
    D59 = 1<<59,
    D58 = 1<<58,
    D57 = 1<<57,
    D56 = 1<<56,
    D55 = 1<<55,
    D54 = 1<<54,
    D53 = 1<<53,
    D52 = 1<<52,
    D51 = 1<<51,
    D50 = 1<<50,
    D49 = 1<<49,
    D48 = 1<<48,
    D47 = 1<<47,
    D46 = 1<<46,
    D45 = 1<<45,
    D44 = 1<<44,
    D43 = 1<<43,
    D42 = 1<<42,
    D41 = 1<<41,
    D40 = 1<<40,
    D39 = 1<<39,
    D38 = 1<<38,
    D37 = 1<<37,
    D36 = 1<<36,
    D35 = 1<<35,
    D34 = 1<<34,
    D33 = 1<<33,
    D32 = 1<<32,
    D31 = 1<<31,
    D30 = 1<<30,
    D29 = 1<<29,
    D28 = 1<<28,
    D27 = 1<<27,
    D26 = 1<<26,
    D25 = 1<<25,
    D24 = 1<<24,
    D23 = 1<<23,
    D22 = 1<<22,
    D21 = 1<<21,
    D20 = 1<<20,
    D19 = 1<<19,
    D18 = 1<<18,
    D17 = 1<<17,
    D16 = 1<<16,
    D15 = 1<<15,
    D14 = 1<<14,
    D13 = 1<<13,
    D12 = 1<<12,
    D11 = 1<<11,
    D10 = 1<<10,
    D9 = 1<<9,
    D8 = 1<<8,
    D7 = 1<<7,
    D6 = 1<<6,
    D5 = 1<<5,
    D4 = 1<<4,
    D3 = 1<<3,
    D2 = 1<<2,
    D1 = 1<<1,
    D0 = 1<<0
};

struct DPN32_t
{
    int32_t val;
    DPN32_point_t pointDigit;
};

struct DPN64_t
{
    int64_t val;
    int64_t pointDigit;
};

void assignInt32(DPN32_t *a, int32_t Int);
void assignFloat32(DPN32_t *a, float Float);
void assignDPN32(DPN32_t *a, DPN32_t *b);

void addInt32(DPN32_t *a, int32_t Int);
void addFloat32(DPN32_t *a, float Float);
void addDPN32(DPN32_t *a, DPN32_t *b);

void subInt32(DPN32_t *a, int32_t Int);
void subFloat32(DPN32_t *a, float Float);
void subDPN32(DPN32_t *a, DPN32_t *b);

void multInt32(DPN32_t *a, int32_t Int);
void multFloat32(DPN32_t *a, float Float);
void multDPN32(DPN32_t *a, DPN32_t *b);

void divInt32(DPN32_t *a, int32_t Int);
void divFloat32(DPN32_t *a, float Float);
void divDPN32(DPN32_t *a, DPN32_t *b);

void setPoint32(DPN32_t *a, DPN32_point_t digit);

void assignInt64(DPN64_t *a, int64_t Int);
void assignFloat64(DPN64_t *a, float Float);
void assignDPN64(DPN64_t *a, DPN64_t *b);

void addInt64(DPN64_t *a, int64_t Int);
void addFloat64(DPN64_t *a, float Float);
void addDPN64(DPN64_t *a, DPN64_t *b);

void subInt64(DPN64_t *a, int64_t Int);
void subFloat64(DPN64_t *a, float Float);
void subDPN64(DPN64_t *a, DPN64_t *b);

void multInt64(DPN64_t *a, int64_t Int);
void multFloat64(DPN64_t *a, float Float);
void multDPN64(DPN64_t *a, DPN64_t *b);

void divInt64(DPN64_t *a, int64_t Int);
void divFloat64(DPN64_t *a, float Float);
void divDPN64(DPN64_t *a, DPN64_t *b);

void setPoint64(DPN64_t *a, DPN64_point_t digit);

#ifdef __cplusplus
}
#endif

#endif