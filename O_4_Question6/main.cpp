#include <iostream>

int printAsBinary(int x, int power) {
    if (x >= power) {
        std::cout << '1';
        return x - power;
    }
    
    std::cout << '0';
    return x;
}

int main() {
    std::cout << "Enter an integer between 0 and 255: ";
    int x {};
    std::cin >> x;
    x = printAsBinary(x, 128);
    x = printAsBinary(x, 64);
    x = printAsBinary(x, 32);
    x = printAsBinary(x, 16);

    std::cout << ' ';

    x = printAsBinary(x, 8);
    x = printAsBinary(x, 4);
    x = printAsBinary(x, 2);
    x = printAsBinary(x, 1);

    std::cout << '\n';

    return 0;
}
