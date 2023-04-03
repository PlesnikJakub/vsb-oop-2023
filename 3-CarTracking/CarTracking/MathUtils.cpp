#define _USE_MATH_DEFINES

#include "MathUtils.h"
#include <cmath>

long double MathUtils::ToRadians(const long double degree)
{
    // cmath library in C++
    // defines the constant
    // M_PI as the value of
    // pi accurate to 1e-30
    long double one_deg = (M_PI) / 180;
    return (one_deg * degree);
}
