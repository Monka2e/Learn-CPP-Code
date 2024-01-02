#include <iostream>

int multiply(int x, int y);

int main()
{
    std::cout << multiply(3, 5) << '\n';

    return 0;
}

int multiply(int x, int y) {
    return x * y;
}
