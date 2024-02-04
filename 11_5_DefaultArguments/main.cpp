#include <iostream>

void pasta(bool sauce=true) {
    if (sauce) {
        std::cout << "mm yes sauce\n";
    } else {
        std::cout << "n-no sauce?..\n";
    }
}

int main() {
    pasta();
    pasta(false);

    return 0;
}
