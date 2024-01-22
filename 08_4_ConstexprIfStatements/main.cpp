#include <iostream>

int main() {
    constexpr int answer {42};

    if constexpr (answer == 42) {
        std::cout << "The answer is 42\n";
    } else {
        std::cout << "The answer is not 42\n";
    }

    return 0;
}
