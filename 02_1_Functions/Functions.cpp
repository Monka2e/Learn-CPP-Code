#include <iostream>

void printB() {
    std::cout << "Printing B\n";
}

void printA() {
    std::cout << "Printing A\n";
    printB();
}

int main() {
    printA();
    printB();

    return 0;
}
