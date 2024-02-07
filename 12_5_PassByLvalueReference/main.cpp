#include <iostream>

void subtractOne(int& x) {
    --x;
}

int main() {
    int x {6};
    subtractOne(x);
    std::cout << x << '\n';

    return 0;
}
