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
    std::cout << "after x %= y, x=" << x << "\n\n";

    int a {8};
    int b {5};
    std::cout << "int / int: " << a << " / " << b << " = " << a / b << '\n';
    std::cout << "double / int: " << static_cast<double>(a) << " / " << b << " = " << static_cast<double>(a) / b << '\n';
    std::cout << "int / double: " << a << " / " << static_cast<double>(b) << " = " << a / static_cast<double>(b) << '\n';
    std::cout << "double / double: " << static_cast<double>(a) << " / " << static_cast<double>(b) << " = " << static_cast<double>(a) / static_cast<double>(b) << '\n';

    return 0;
}
