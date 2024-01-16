#include <iostream>

void printInt(unsigned int x) {
    std::cout << x << '\n';
}

int main() {
    printInt(-4);

    unsigned int x {4294967295};
    std::cout << x << '\n';

    x++;
    std::cout << x << '\n';
    
    return 0;
}
