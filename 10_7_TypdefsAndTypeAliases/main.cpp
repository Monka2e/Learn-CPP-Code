#include <iostream>

int main() {
    using Speed = double; // Type alias - prefer this - use capital first letter
    Speed spd {35.5};
    std::cout << spd << '\n';

    typedef double Distance; // Type def - not preffered
    Distance d {50.5};
    std::cout << d << '\n';

    return 0;
}
