#include <iostream>

int calculate(int x, int y, char mathOperation) {
    switch (mathOperation) {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    default:
        std::cout << "Invalid operator " << mathOperation << '\n';
        return -1;
    }
}

int main() {
    std::cout << calculate(5, 6, '+') << '\n';
    std::cout << calculate(8, 6, '-') << '\n';
    std::cout << calculate(5, 6, '*') << '\n';
    std::cout << calculate(13, 6, '/') << '\n';
    std::cout << calculate(5, 6, 'd') << '\n';

    return 0;
}
