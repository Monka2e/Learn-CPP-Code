#include <bitset>
#include <iostream>

int main() {
    std::bitset<4> bs {0b0110};
    std::cout << (bs << 1) << '\n';
    std::cout << (bs >> 2) << '\n';

    std::cout << (~bs) << '\n';

    std::bitset<4> bs2 {0b0011};
    // Any bits compared in the same position with a value of true will be true
    std::cout << (bs | bs2) << '\n';

    // All bits compared in the same position will be true only if they are all true
    std::cout << (bs & bs2) << '\n';

    // Bits compared in the same position will be true only if exactly 1 bit is true
    std::cout << (bs ^ bs2) << '\n';

    bs <<= 1;
    std::cout << bs << '\n';
    bs >>= 3;
    std::cout << bs << '\n';    
    bs |= bs2;
    std::cout << bs << '\n';
    bs &= bs2;
    std::cout << bs << '\n';
    bs = ~bs; // Unary operator so ~= does not exist
    std::cout << bs << '\n';

    return 0;
}
