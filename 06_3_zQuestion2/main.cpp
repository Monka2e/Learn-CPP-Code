#include <iostream>

constexpr bool isEven(int x) {
    return (x % 2) == 0;
}

void printIsEven(int x) {
    if (isEven(x))
        std::cout << x << " is even" << '\n';
    else
        std::cout << x << " is odd" << '\n';
}

int getInput() {
    std::cout << "Enter an integer: ";
    int x {};
    std::cin >> x;
    return x;
}

int main() {
    int x {getInput()};
    printIsEven(x);

    return 0;
}
