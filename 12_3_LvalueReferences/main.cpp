#include <iostream>

int main()
{
    int x {3};
    int& refX {x};

    std::cout << x << ' ' << refX << '\n';

    refX = 2;

    std::cout << x << ' ' << refX << '\n';

    int y {7};
    refX = y;

    std::cout << x << ' ' << refX << '\n';

    return 0;
}
