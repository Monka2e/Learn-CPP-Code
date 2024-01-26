#include <iostream>

int main() {
    int sum {0};
    while (true) {
        std::cout << "Enter a number to add (0 to exit) ";
        int input {};
        std::cin >> input;

        if (input == 0) {
            break;
        }

        sum += input;
    }
    std::cout << "Your total sum was " << sum << "!\n\n";

    std::cout << "Numbers 0-13 excluding multiples of 4:\n";
    for (int i {0}; i <= 13; ++i) {
        if (i %4 == 0) {
            continue;
        }
        std::cout << i << '\n';
    }

    return 0;
}
