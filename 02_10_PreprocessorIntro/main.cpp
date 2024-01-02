#include <iostream>
#define DO_SOMETHING

void printSomething();

int main()
{
#ifdef DO_SOMETHING
    std::cout << "Something done!\n";
#endif

#ifndef DO_SOMETHING
    std::cout << "Something is not being done!\n";
#endif

    printSomething();
    return 0;
}
