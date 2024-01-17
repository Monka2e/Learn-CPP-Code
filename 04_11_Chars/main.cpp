#include <iostream>

int main()
{
    std::cout << "Enter a character ";
    char c{};
    std::cin >> c;

    std::cout << "You entered " << c << '\n';

    std::cout << "Woah a backslash \\\n";

    return 0;
}
