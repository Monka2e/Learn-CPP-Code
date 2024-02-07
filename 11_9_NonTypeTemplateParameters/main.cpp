#include <iostream>

template <int N>
void checkSize()
{
    constexpr int maxSize {5};
    static_assert(N <= maxSize, "checkSize(): N can not be greater than max size");
}

int main()
{
    checkSize<4>();
    std::cout << "Program run successfully.\n";

    return 0;
}
