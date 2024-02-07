#include <iostream>

const int g_z {9};

int main() {
    int x {6};
    const int& refX {x}; // constant reference to a non-constant int, modifying the value through this reference is illegal
    std::cout << x << ' ' << refX << '\n';
    x = 8;
    std::cout << x << ' ' << refX << '\n';

    static int s_y {7};
    constexpr int& refY {s_y}; // constexpr references can be made for static and global variables
    std::cout << refY << '\n';

    constexpr const int& refZ {g_z}; // need constexpr and const for references of a constant
    std::cout << refZ;

    return 0;
}
