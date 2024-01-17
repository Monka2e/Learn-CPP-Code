#include <bitset>
#include <iostream>

int main()
{
    // Authors code
    int x { 12 };
    std::cout << x << '\n'; // decimal (by default)
    std::cout << std::hex << x << '\n'; // hexadecimal
    std::cout << x << '\n'; // now hexadecimal
    std::cout << std::oct << x << '\n'; // octal
    std::cout << std::dec << x << '\n'; // return to decimal
    std::cout << x << '\n'; // decimal

    // My code
    std::bitset<4> bin1 {5};
    std::cout << bin1 << '\n';
    std::cout << std::bitset<8>{0b1000'1100} << '\n';

    return 0;
}
