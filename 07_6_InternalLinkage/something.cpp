#include <iostream>

static int g_someValue {5};

[[maybe_unused]] static void printSomething() {
    std::cout << g_someValue << '\n';
}
