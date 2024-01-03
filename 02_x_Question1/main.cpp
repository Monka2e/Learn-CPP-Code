#include <iostream>

int readNumber() {
    int x{};
    std::cin >> x;
    return x;
}

void writeAnswer() {

}

int main() {
    std::cout << readNumber() << '\n';
    return 0;
}
