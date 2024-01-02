#include <iostream>

int main() {
    std::cout << "Enter a number: ";

    int x{};
    std::cin >> x;

    std::cout << "You entered: " << x << '\n';

    std::cout << "Enter two numbers seperated by a space: ";

    int a{};
    int b{};
    std::cin >> a >> b;

    std::cout << "You entered " << a << " and " << b << '\n';
    return 0;
}
