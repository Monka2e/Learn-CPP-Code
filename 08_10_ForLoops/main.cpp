#include <iostream>

int main() {
    int range {6};
    for (int i {0}, j {range}; i <= range; ++i, --j) {
        std::cout << i << ' ' << j << '\n';
    }
    std::cout << '\n';

    for (int i {0}; i <= range; ++i) {
        std::cout << i << ' ';
    }
    std::cout << '\n';

    return 0;
}
