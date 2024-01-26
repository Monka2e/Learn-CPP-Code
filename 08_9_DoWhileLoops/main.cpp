#include <iostream>

int main() {
    int choice {0};
    do
    {
        std::cout << "Enter one of the following options\n";
        std::cout << " --------------------------------\n";
        std::cout << "1) numbah 1\n";
        std::cout << "2) numbah 2\n";
        std::cout << "3) numbah 3\n";
        std::cin >> choice;
    } while (choice != 1 && choice != 2 && choice != 3);
    
    std::cout << "You chose option " << choice << "!?\n";

    return 0;
}
