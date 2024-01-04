#include <iostream>

int addFive(int x) {
    x = x + 6;
    return x;
}

int getInput() {
    int input{};
    std::cout << "Enter an integer ";
    std::cin >> input;
    return input;
}

void printValuePlusFive(int x) {
    std::cout << "Your value plus 5 is " << addFive(x) << '\n';
}

int main() {
    int x {getInput()};
    printValuePlusFive;
}
