#include <iostream>

int five() {
    return 5;
}

int main() {
    // Initialized with constant expressions
    constexpr double gravity {9.8};
    constexpr char c {'t'};
    constexpr int sum {5 + 7};
    constexpr int total {sum};
    constexpr double num {static_cast<double>(total)};

    int x{};
    std::cin >> x;

    int u {5};

    // Initialized with non constant expression
    const int y {x};
    const int p {u};
    const int n {five()};

    return 0;
}
