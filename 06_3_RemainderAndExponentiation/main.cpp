#include <iostream>
#include <cmath>

int main() {
    constexpr double base {2.0};
    constexpr double pow {4.0};
    std::cout << std::pow(base, pow) << '\n';

    constexpr int dividend {8};
    constexpr int divisor {5};
    std::cout << dividend % divisor << '\n';

    return 0;
}
