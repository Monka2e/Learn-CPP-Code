#include <iostream>

double getNumber() {
    return 5.0;
}

int main () {
    auto b {getNumber()};
    std::cout << typeid(b).name() << ' ' << b << '\n';

    return 0;
}
