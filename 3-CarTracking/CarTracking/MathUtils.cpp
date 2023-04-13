#define _USE_MATH_DEFINES

#include "MathUtils.h"
#include <cmath>

long double MathUtils::ToRadians(const long double degree)
{
    long double one_deg = (M_PI) / 180;
    return (one_deg * degree);
}
