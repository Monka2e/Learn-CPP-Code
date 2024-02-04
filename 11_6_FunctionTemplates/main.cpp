#include <iostream>

template <typename T>
T max(T x, T y) {
    return x > y ? x : y;
}

int main() {
    std::cout << max(5, 7) << '\n';
    std::cout << max(5.7, 7.5) << '\n';
    std::cout << max('a', 't') << '\n';

    return 0;
}
