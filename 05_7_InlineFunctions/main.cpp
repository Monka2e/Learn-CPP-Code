#include "pi.h"
#include <iostream>

double calcCircleArea(double r) {
    return pi() * r * r;
}

int main() {
    double r = 6.5;
    std::cout << "Area of a circle with radius: " << r << " = " << calcCircleArea(r) << '\n';

    return 0;
}
