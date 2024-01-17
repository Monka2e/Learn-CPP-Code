#include <iostream>

bool isEqual(int x, int y) {
    return x == y;
}

int getInput() {
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;
    return x;
}

int main() {
    int x{getInput()};
    int y{getInput()};

    if (isEqual(x, y))
        std::cout << x << " equals " << y << '\n';
    else
        std::cout << x << " does not equal " << y << '\n';

    return 0;
}
