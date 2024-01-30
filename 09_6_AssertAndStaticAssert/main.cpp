#include <cassert> // for assert()
#include <iostream>

static_assert(0 == 0, "0 must equal 0");

void printPositiveNumber(int x) {
    assert(x >= 0 && "User entered a negative number");
    std::cout << "The positive number entered is " << x << '\n';
}

int main() {
    std::cout << "Enter a positive number: ";
    int x{};
    std::cin >> x;
    printPositiveNumber(x);

    static_assert('a' == 'a'); // will not compile before c++17

    return 0;
}
