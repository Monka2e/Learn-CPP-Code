#include <random>
#include <iostream>
#include <chrono>

int main() {
    std::mt19937 mt{ static_cast<std::mt19937::result_type>(
		std::chrono::steady_clock::now().time_since_epoch().count()
        ) };
    // use std::chrono::high_resolution_clock for more granular time, but it could use system clock which can be changed

    for (int i = 1; i <= 10; ++i) {
        std::cout << mt() << '\t';
        if (i % 5 == 0) {
            std::cout << '\n';
        }
    }

    std::cout << '\n';

    // use std::random_device 
    std::mt19937 mt2 {std::random_device{}()};
    std::uniform_int_distribution die6 {1, 6};

    for (int i = 1; i <= 10; ++i) {
        std::cout << die6(mt2) << '\t';
        if (i % 5 == 0) {
            std::cout << '\n';
        }
    }

    std::cout << '\n';

    std::random_device rd{};
    std::seed_seq ss {rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd()}; // get 8 random integers from rd for seed
    std::mt19937 mt3 {ss}; // initialize mersenne twister with std::seed_seq

    for (int i = 1; i <= 10; ++i) {
        std::cout << die6(mt3) << '\t';
        if (i % 5 == 0) {
            std::cout << '\n';
        }
    }

    return 0;
}
