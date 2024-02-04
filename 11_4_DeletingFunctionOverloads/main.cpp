#include <iostream>

void printX(int x) {
    std::cout << x << '\n';
}

void printX(bool) = delete; // use to require printX is not called with bool type

// template <typename T>
// void printX(T x) = delete; // use to require printX is only called with integer type

int main() {
    printX(5);
    printX('a');
    // printX(true);
    // printX(6.0); // ambiguous match because deleted functions are checked (does it fit printX(bool) or printX(int) better?)

    return 0;
}
