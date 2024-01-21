#include <iostream>

int main() {
    std::cout << std::boolalpha;
    std::cin >> std::boolalpha;

    std::cout << "Enter true or false: ";
    bool b1 {};
    std::cin >> b1;

    std::cout << "Enter true or false: ";
    bool b2 {};
    std::cin >> b2;

    std::cout << b1 << " && " << b2 << " = " << (b1 && b2) << '\n';
    std::cout << b1 << " || " << b2 << " = " << (b1 || b2) << '\n';

    std::cout << "!(" << b1 << " && " << b2 << ") = " << (!(b1 && b2)) << '\n';
    std::cout << "!" << b1 << " || !" << b2 << " = " << (!b1 || !b2) << '\n';

    std::cout << "!(" << b1 << " || " << b2 << ") = " << (!(b1 || b2)) << '\n';
    std::cout << "!" << b1 << " && !" << b2 << " = " << (!b1 && !b2) << '\n';

    // Way to do xor
    std::cout << b1 << " xor " << b2 << " = " << (b1 != b2) << '\n';    // Only works with bools
    std::cout << '\n';
    // Works with non-bool types that are okay to be cast to bool
    int n1 {0}; // 0 evaluates to false as a bool
    int n2 {4}; // non-0 evaluates to true as a bool
    std::cout << static_cast<bool>(n1) << " xor " << static_cast<bool>(n2) << " = " << (static_cast<bool>(n1) != static_cast<bool>(n2)) << '\n';
    std::cout << !!n1 << " xor " << !!n2 << " = " << (!!n1 != !!n2) << '\n';    // Implicitly cast int to bool using '!' twice

    return 0;
}
