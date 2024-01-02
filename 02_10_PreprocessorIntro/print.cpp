#include <iostream>

void printSomething() {
#ifdef DO_SOMETHING
    std::cout << "DO_SOMETHING is defined here\n";
#endif

#ifndef DO_SOMETHING
    std::cout << "DO_SOMETHING is not defined here\n";
#endif
}
