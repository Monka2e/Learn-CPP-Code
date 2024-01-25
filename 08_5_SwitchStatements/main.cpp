#include <iostream>

void print(int x) {
    std::cout << x << " - ";

    switch(x) {
    case 1:
        std::cout << "Number 1\n";
        break;
    case 2:
        std::cout << "Number 2\n";
        break;
    case 42:
        std::cout << "That's the answer\n";
        break;
    default:
        std::cout << "Not the answer\n";
        break;
    }

    std::cout << "more stuff\n";
}

int main() {
    print(1);
    print(2);
    print(3);
    print(42);

    return 0;
}
