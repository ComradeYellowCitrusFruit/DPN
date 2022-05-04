#ifndef LIB_DYNAMIC_POINT_NUMBERS_C
#define LIB_DYNAMIC_POINT_NUMBERS_C

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

// 32 Bit Dynamic Point number
typedef struct DPN32_t
{
    int32_t val;
    int pointDigit;
};

// 64 Bit Dynamic Point number
typedef struct DPN64_t
{
    int64_t val;
    int pointDigit;
};

// 32 Bit DPN Section

// Initate DPN32_t
struct DPN32_t *initDPN32();
// Initate DPN32_t with preset point digit
struct DPN32_t *initDPN32Point(int digit);

void assignInt32(struct DPN32_t *a, int32_t Int);
void assignFloat32(struct DPN32_t *a, float Float);
void assignDPN32(struct DPN32_t *a, struct DPN32_t *b);

void addInt32(struct DPN32_t *a, int32_t Int);
void addFloat32(struct DPN32_t *a, float Float);
void addDPN32(struct DPN32_t *a, struct DPN32_t *b);

void subInt32(struct DPN32_t *a, int32_t Int);
void subFloat32(struct DPN32_t *a, float Float);
void subDPN32(struct DPN32_t *a, struct DPN32_t *b);

void multInt32(struct DPN32_t *a, int32_t Int);
void multFloat32(struct DPN32_t *a, float Float);
void multDPN32(struct DPN32_t *a, struct DPN32_t *b);

void divInt32(struct DPN32_t *a, int32_t Int);
void divFloat32(struct DPN32_t *a, float Float);
void divDPN32(struct DPN32_t *a, struct DPN32_t *b);

void setPoint32(struct DPN32_t *a, int digit);

// 64 Bit DPN Section

// Initate DPN64_t
struct DPN64_t *initDPN64();
// Initate DPN64_t with preset point digit
struct DPN64_t *initDPN64Point(int digit);

void assignInt64(struct DPN64_t *a, int64_t Int);
void assignFloat64(struct DPN64_t *a, float Float);
void assignDPN64(struct DPN64_t *a, struct DPN64_t *b);

void addInt64(struct DPN64_t *a, int64_t Int);
void addFloat64(struct DPN64_t *a, float Float);
void addDPN64(struct DPN64_t *a, struct DPN64_t *b);

void subInt64(struct DPN64_t *a, int64_t Int);
void subFloat64(struct DPN64_t *a, float Float);
void subDPN64(struct DPN64_t *a, struct DPN64_t *b);

void multInt64(struct DPN64_t *a, int64_t Int);
void multFloat64(struct DPN64_t *a, float Float);
void multDPN64(struct DPN64_t *a, struct DPN64_t *b);

void divInt64(struct DPN64_t *a, int64_t Int);
void divFloat64(struct DPN64_t *a, float Float);
void divDPN64(struct DPN64_t *a, struct DPN64_t *b);

void setPoint64(struct DPN64_t *a, int digit);

#ifdef __cplusplus
}
#endif

#endif