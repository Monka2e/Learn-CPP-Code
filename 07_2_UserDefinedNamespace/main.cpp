#include "foo.h"
#include "goo.h"
#include <iostream>

int main() {
    foo::printSomething();
    goo::printSomething();

    namespace activeNamespace = foo;

    activeNamespace::printSomething();

    return 0;
}
