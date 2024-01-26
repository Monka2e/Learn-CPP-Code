#include <iostream>

int main() {
    int count {1};
    while (count < 100) {
        if (count < 10) {
            std::cout << '0';
        }

        std::cout << '0' << count << ' ';

        if (count % 10 == 0) {
            std::cout << '\n';
        }
        ++count;
    }
    std::cout << count;

    return 0;
}
