#include "square.h"
#include <iostream>

int main()
{
    int len1 = 5;
    int len2 = 7;

    std::cout << "Area of a square with a length of: " << len1 << " = " << getSquareArea(len1) << '\n';
    std::cout << "Perimeter of a square with a length of: " << len1 << " = " << getSquarePerimeter(len1) << "\n\n";

    std::cout << "Area of a square with a length of: " << len2 << " = " << getSquareArea(len2) << '\n';
    std::cout << "Perimeter of a square with a length of: " << len2 << " = " << getSquarePerimeter(len2) << '\n';

    return 0;
}
