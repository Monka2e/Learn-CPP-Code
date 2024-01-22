#include <iostream>

int getID() {
    static int ID {0}; // Will only initialize once, scope it limited to getID()
    return ID++;
}

int main() {
    std::cout << getID() << '\n';
    std::cout << getID() << '\n';
    std::cout << getID() << '\n';

    return 0;
}
