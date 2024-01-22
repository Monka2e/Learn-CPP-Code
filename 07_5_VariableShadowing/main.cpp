#include <iostream>

int value {6};

void printValue() {
    std::cout << value << '\n';
}

int main() {
    int value {7}; // basically don't do this lol
    ++value;

    std::cout << value << '\n';

    printValue();
    std::cout << (::value) << '\n';

    std::cout << value << '\n';

    return 0;
}
