#include <iostream>

bool isPrime(int x) {
    if (x == 2)
        return true;
    if (x == 3)
        return true;
    if (x == 5)
        return true;
    if (x == 7)
        return true;

    return false;
}

int main() {
    std::cout << "Enter a number 0-9 ";
    int x{};
    std::cin >> x;

    if(isPrime(x))
        std::cout << "The digit is prime\n";
    else
        std::cout << "The digit is not prime\n";

    return 0;
}
