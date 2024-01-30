#include <iostream>

auto foo() { // can't use forward decleration on auto return function
    return 5;
}

int main() {
    std::cout << foo() << '\n';

    return 0;
}
