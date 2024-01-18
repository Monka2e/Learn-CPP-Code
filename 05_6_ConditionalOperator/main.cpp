#include <iostream>

int greater(int x, int y) {
    return x > y ? x : y;
}

void print(int x) {
    std::cout << "The greatest number is " << x << "!\n";
}

int getInput() {
    std::cout << "Enter and integer ";
    int x{};
    std::cin >> x;
    return x;
}

int main() {
    int x {getInput()};
    int y {getInput()};

    print(greater(x, y));

    return 0;
}
