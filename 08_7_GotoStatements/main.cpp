#include <iostream>

int main() { // bad use of goto, just here for syntax
choice:
    std::cin >> std::boolalpha;
    std::cout << "true or false? ";
    bool again;
    std::cin >> again;

    if (again) {
        goto choice;
    }

    return 0;
}
