#include <bitset>
#include <iostream>

int main() {
    [[maybe_unused]] constexpr int firstThing {0};
    [[maybe_unused]] constexpr int secondThing {1};
    [[maybe_unused]] constexpr int thirdThing {2};
    [[maybe_unused]] constexpr int fourthThing {3};
    [[maybe_unused]] constexpr int fifthThing {4};
    [[maybe_unused]] constexpr int sixthThing {5};
    [[maybe_unused]] constexpr int seventhThing {6};
    [[maybe_unused]] constexpr int eighthThing {7};

    std::bitset<8> bs{0b0000'1000};
    bs.set(firstThing);
    bs.flip(secondThing);
    bs.reset(fourthThing);

    std::cout << "All the bits: " << bs << '\n';
    std::cout << "Bit value 4: " << bs.test(4) << '\n';
    std::cout << bs.size() << " Bits are in this bitset\n";
    std::cout << bs.count() << " Bits are true\n";

    std::cout << std::boolalpha;
    std::cout << "All bits are true: " << bs.all() << '\n';
    std::cout << "Some bits are true: " << bs.any() << '\n';
    std::cout << "No bits are true: " << bs.none() << '\n';

    return 0;
}
