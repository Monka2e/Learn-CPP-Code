#include <iostream>

int getAsciiCode(int x) {
    return x;
}

int main() {
    std::cout << "Enter a single character: ";
    char ch{};
    std::cin >> ch;

    std::cout << "You entered \'" << ch << "\', which has ASCII code " << getAsciiCode(ch) << ".\n";

    return 0;
}
