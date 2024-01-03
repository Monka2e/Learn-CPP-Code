#include <iostream>

int readNumber() {
    int x{};
    std::cin >> x;
    return x;
}

void writeAnswer(int value) {
    std::cout << "The answer is " << value << '\n';
}

int main() {
    writeAnswer(readNumber() + readNumber());
    return 0;
}
