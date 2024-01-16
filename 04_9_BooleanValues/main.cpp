#include <iostream>

int main()
{
    std::cout << true << '\n';
    std::cout << !true << '\n';

    bool b {false};
    std::cout << b << '\n';
    std::cout << !b << '\n';

    std::cout << std::boolalpha;

    std::cout << true << '\n';
    std::cout << false << '\n';

    std::cout << std::noboolalpha;

    std::cout << true << '\n';

    return 0;
}
