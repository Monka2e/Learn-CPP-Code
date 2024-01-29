#include "Random.h"
#include <iostream>

int main() {
    std::cout << Random::get(0, 6) << '\n';
    std::cout << Random::get(0, 6) << '\n';
    std::cout << Random::get(0, 6) << '\n';
    std::cout << Random::get(0, 6) << '\n';

    return 0;
}
