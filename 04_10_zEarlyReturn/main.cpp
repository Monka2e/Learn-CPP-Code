#include <iostream>

int biggerThan(int x) {
    if (x > 100)
        return 100;
    if (x > 90)
        return 90;
    if (x > 80)
        return 80;
    if (x > 70)
        return 70;
    if (x > 60)
        return 60;
    if (x > 50)
        return 50;
    if (x > 40)
        return 40;
    if (x > 30)
        return 30;
    if (x > 20)
        return 20;
    if (x > 10)
        return 10;

    return x - 1;
}

int main() {
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    std::cout << x << " is bigger than " << biggerThan(x) << "!\n";

    return 0;
}
