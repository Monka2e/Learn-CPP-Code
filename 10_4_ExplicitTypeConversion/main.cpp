#include <iostream>

int main() {
    int x {10};
    int y {4};

    // C-style cast - avoid this
    double d {(double)x / y};
    std::cout << d << '\n';
    d = double(x) / y;
    std::cout << d << '\n';

    // C++ style - prefer this
    char c {'a'};
    std::cout << static_cast<int>(c) << '\n';

    return 0;
}
