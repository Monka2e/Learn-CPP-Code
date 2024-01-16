#include <cstdint> // for fast and least types
#include <iostream>

int main()
{
    std::cout << "Size of std::int8_t: " << sizeof(std::int8_t) << '\n';
    std::cout << "Size of std::int16_t: " << sizeof(std::int16_t) << '\n';
    std::cout << "Size of std::int32_t: " << sizeof(std::int32_t) << '\n';
    std::cout << "Size of std::int64_t: " << sizeof(std::int64_t) << '\n';

    std::cout << '\n';

    std::cout << "Size of std::uint8_t: " << sizeof(std::uint8_t) << '\n';
    std::cout << "Size of std::uint16_t: " << sizeof(std::uint16_t) << '\n';
    std::cout << "Size of std::uint32_t: " << sizeof(std::uint32_t) << '\n';
    std::cout << "Size of std::uint64_t: " << sizeof(std::uint64_t) << '\n';

    std::cout << '\n';

    std::cout << "Size of std::size_t: " << sizeof(std::size_t) << '\n';

	return 0;
}
