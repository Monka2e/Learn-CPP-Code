#include <iostream>

int main() {
    constexpr int xC {6};
    constexpr int y {4};

    int x {xC};
    std::cout << "(x, y) = " << '(' << x << ", " << y << ")\n";

    x += y;
    std::cout << "after x += y, x=" << x << '\n';

    x = xC;
    x -= y;
    std::cout << "after x -= y, x=" << x << '\n';

    x = xC;
    x *= y;
    std::cout << "after x *= y, x=" << x << '\n';

    x = xC;
    x /= y;
    std::cout << "after x /= y, x=" << x << '\n';
    
    x = xC;
    x %= y;
    std::cout << "after x %= y, x=" << x << '\n';

    return 0;
}
