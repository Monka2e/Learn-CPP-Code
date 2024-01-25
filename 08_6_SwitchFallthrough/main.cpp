#include <iostream>

int main() {
    char c {'A'};
    switch(c) {
    case 'a':
    case 'A':
        std::cout << "The letter is a\n";
        break;
    default:
        std::cout << "The letter is not a\n";
        break;
    }

    int x {2};
    switch(x) {
    case 1:
        std::cout << "one\n";
        break;
    case 2:
        std::cout << "two\n";
        [[fallthrough]];
    case 3:
        std::cout << "three\n";
        break;
    default:
        std::cout << "no\n";
        break;
    }

    return 0;
}
