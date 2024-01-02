#include <iostream>

int main() {
    int a;
    a = 4;
    int b = 6;
    int c(1);
    int d{9};
    int e = {3};

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    std::cout << e << std::endl;

    return 0;
}
