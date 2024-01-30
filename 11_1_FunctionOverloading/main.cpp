#include <iostream>

int subtract(int x, int y) {
    return x - y;
}

double subtract(double x, double y) {
    return x - y;
}

int main() {
    std::cout << subtract(5, 6) << '\n';
    std::cout << subtract(4.5, 3.3) << '\n';

    return 0;
}
