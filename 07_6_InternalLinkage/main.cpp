#include <iostream>

static constexpr int g_someValue {444};

// static void printSomething(); not okay, static functions and variables can only be used in the same file

int main() {
    // printSomething();
    std::cout << g_someValue << '\n';

    return 0;
}
