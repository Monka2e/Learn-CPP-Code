#include <iostream>

int main() {
    std::cout << (3 + 3) * 5 << '\n';

    int x {6};
    std::cout << (x = 5) << '\n';
    std::cout << x << '\n';
    return 0;
}
