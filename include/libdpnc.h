#ifndef LIB_DYNAMIC_POINT_NUMBERS_C
#define LIB_DYNAMIC_POINT_NUMBERS_C

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

/* 32 Bit Dynamic Point number */
typedef struct DPN32_DEF_t
{
    int32_t val;
    int pointDigit;
} DPN32_t;

/* 64 Bit Dynamic Point number */
typedef struct DPN64_DEF_t
{
    int64_t val;
    int pointDigit;
} DPN64_t;

/* 32 Bit DPN Section */

/* Initate DPN32_t */
DPN32_t *initDPN32();
/* Initate DPN32_t with preset point digit */
DPN32_t *initDPN32Point(int digit);

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

void setPoint32(DPN32_t *a, int digit);

char *DPN32toStr(DPN32_t *a);
int DPN32toInt(DPN32_t *a);
float DPN32toFloat(DPN32_t *a);

/* 64 Bit DPN Section */

/* Initate DPN64_t */
struct DPN64_t *initDPN64();
/* Initate DPN64_t with preset point digit */
struct DPN64_t *initDPN64Point(int digit);

void assignInt64(struct DPN64_t *a, int64_t Int);
void assignDouble64(struct DPN64_t *a, double double);
void assignDPN64(struct DPN64_t *a, struct DPN64_t *b);

void addInt64(struct DPN64_t *a, int64_t Int);
void addDouble64(struct DPN64_t *a, double double);
void addDPN64(struct DPN64_t *a, struct DPN64_t *b);

void subInt64(struct DPN64_t *a, int64_t Int);
void subDouble64(struct DPN64_t *a, double double);
void subDPN64(struct DPN64_t *a, struct DPN64_t *b);

void multInt64(struct DPN64_t *a, int64_t Int);
void multDouble64(struct DPN64_t *a, double double);
void multDPN64(struct DPN64_t *a, struct DPN64_t *b);

void divInt64(struct DPN64_t *a, int64_t Int);
void divDouble64(struct DPN64_t *a, double double);
void divDPN64(struct DPN64_t *a, struct DPN64_t *b);

void setPoint64(struct DPN64_t *a, int digit);

char *DPN64toStr(struct DPN64_t *a);
int DPN64toInt(struct DPN64_t *a);
double DPN64toDouble(struct DPN64_t *a);

#ifdef __cplusplus
}
#endif

#endif