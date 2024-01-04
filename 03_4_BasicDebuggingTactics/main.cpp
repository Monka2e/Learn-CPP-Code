#include <iostream>

int addFive(int x) {
std::cerr << "--called addFive()\n";
    x = x + 5;
std::cerr << "--addFive::x=" << x << '\n';
    return x;
}

int getInput() {
std::cerr << "--called getInput()\n";
    int x{};
    std::cout << "Enter an integer ";
    std::cin >> x;
std::cerr << "--getInput::x=" << x << '\n';
    return x;
}

void printValuePlusFive(int x) {
std::cerr << "--called printValuePlusFive()\n";
std::cerr << "--printValuePlusFive::x=" << x << '\n';
    x = addFive(x);
    std::cout << "Your value plus 5 is " << x << '\n';
}

int main() {
std::cerr << "--called Main()\n";
    int x {getInput()};
std::cerr << "--main::x=" << x << '\n';
    printValuePlusFive(x);
}
