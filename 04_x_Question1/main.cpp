#include <iostream>

double getNumberInput() {
    std::cout << "Enter a double value: ";
    double d;
    std::cin >> d;
    return d;
}

char getCharInput() {
    std::cout << "Enter +, -, *, or /: ";
    char c;
    std::cin >> c;
    return c;
}

void print(double x, double y, char op) {
    if (op == '+')
        std::cout << x << " + " << y <<  " is " << x + y << '\n';
    else if (op == '-')
        std::cout << x << " - " << y <<  " is " << x - y << '\n';
    else if (op == '*')
        std::cout << x << " * " << y <<  " is " << x * y << '\n';
    else if (op == '/')
        std::cout << x << " / " << y <<  " is " << x / y << '\n';
}

int main() {
    double x {getNumberInput()};
    double y {getNumberInput()};
    char op {getCharInput()};
    print(x, y, op);

    return 0;
}
