#include <iostream>

int readNumber() {
    std::cout << "Enter a number to add: ";
    int x{};
    std::cin >> x;
    return x;
}

void writeAnswer(int value) {
    std::cout << "The answer is " << value << '\n';
}
