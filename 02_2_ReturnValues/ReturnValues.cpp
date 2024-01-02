#include <iostream>

int getValueFromUser() {
    std::cout << "Enter an integer: ";
    int val{};
    std::cin >> val;

    return val;
}

int main() {
    std::cout << getValueFromUser() << '\n';

    int x {getValueFromUser()};
    std::cout << "Value entered into x: " << x << '\n';

    return 0;
}
