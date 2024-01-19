#include <iostream>
#include <string>
#include <typeinfo>
int main()
{
    std::cout << "Pick 1 or 2: ";
    int choice {};
    std::cin >> choice;

    std::cout << "Now enter your name: ";
    std::string name {};
    std::getline(std::cin >> std::ws, name);

    std::cout << "Hello, " << name << ", you picked " << choice << '\n';
    std::cout << "The length of your name is " << name.length() << " characters\n";

    return 0;
}
