#include <iostream>

int addFive(int x) {
std::cerr << "called addFive()\n";
    x = x + 6;
    return x;
}

int getInput() {
std::cerr << "called getInput()\n";
    int input{};
    std::cout << "Enter an integer ";
    std::cin >> input;
    return input;
}

void printValuePlusFive(int x) {
std::cerr << "called printValuePlusFive()\n";
    x = addFive(x);
    std::cout << "Your value plus 5 is " << x << '\n';
}

int main() {
std::cerr << "called Main()\n";
    int x {getInput()};
    printValuePlusFive(x);
}
