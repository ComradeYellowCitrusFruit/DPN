#ifndef LIB_DYNAMIC_POINT_NUMBERS_C
#define LIB_DYNAMIC_POINT_NUMBERS_C

#include <cstdint>
#include "libdpnc.h"

namespace DPNCPP
{
    // TODO: prefix operators.
    // TODO: More assignment operators.

    class DPN32
    {
        public:
            DPN32 operator+(int32_t a);
            DPN32 operator+(float a);
            DPN32 operator+(DPN32 a);
            DPN32 operator-(int32_t a);
            DPN32 operator-(float a);
            DPN32 operator-(DPN32 a);
            DPN32 operator*(int32_t a);
            DPN32 operator*(float a);
            DPN32 operator*(DPN32 a);
            DPN32 operator/(int32_t a);
            DPN32 operator/(float a);
            DPN32 operator/(DPN32 a);
            DPN32 operator=(DPN32 a);
            DPN32 operator=(int32_t a);
            DPN32 operator=(float a);
            DPN32 operator<<(int a);
            DPN32 operator>>(int a);
            void operator()(int a);
            int32_t toInt();
            float toFloat();
        private:
            DPN32_t core;
    };

    class DPN64
    {
        public:
            DPN64 operator+(int64_t a);
            DPN64 operator+(double a);
            DPN64 operator+(DPN64 a);
            DPN64 operator-(int64_t a);
            DPN64 operator-(double a);
            DPN64 operator-(DPN64 a);
            DPN64 operator*(int64_t a);
            DPN64 operator*(double a);
            DPN64 operator*(DPN64 a);
            DPN64 operator/(int64_t a);
            DPN64 operator/(double a);
            DPN64 operator/(DPN64 a);
            DPN64 operator=(DPN64 a);
            DPN64 operator=(int64_t a);
            DPN64 operator=(double a);
            DPN64 operator()(int a);
            int64_t toInt();
            double toDouble();
        private:
            DPN64_t core;
    };
}

#endif