#ifndef MATH_H
#define MATH_H

namespace math {
    // When wanting more runtime efficiency
    constexpr double gravity {9.8};

    // When wanting faster compile time (cant be constexpr) ex: if tuning numbers
    extern const double pi; // defined in math.cpp

    // No problems with one definition rule - and avoids downsides of duplicated variables
    inline constexpr double e {2.71828};
}

#endif
