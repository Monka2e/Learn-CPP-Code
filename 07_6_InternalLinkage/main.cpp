#include <iostream>

static constexpr int g_someValue {444}; // okay to have static variable initialized here (scope is this file)

// static void printSomething(); not okay, static functions and variables can only be used in the same file

static void printSomething() { // okay to have same name static function defined
    std::cout << g_someValue * 2 << '\n';
}

int main() {
    printSomething();
    std::cout << g_someValue << '\n';

    return 0;
}
