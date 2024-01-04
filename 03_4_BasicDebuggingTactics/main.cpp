#include <iostream>

int addFive(int x) {
    x = x + 5;
    return x;
}

int getInput() {
    int x{};
    std::cout << "Enter an integer ";
    std::cin >> x;
    return x;
}

void printValuePlusFive(int x) {
    x = addFive(x);
    std::cout << "Your value plus 5 is " << x << '\n';
}

int main() {
    int x {getInput()};
    printValuePlusFive(x);
}
