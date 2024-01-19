#include <iostream>
#include <string>

constexpr std::string getQuantityPhrase(int apples) {
    if (apples > 3)
        return "many";
    if (apples == 3)
        return "a few";
    if (apples == 2)
        return "a couple of";
    if (apples == 1)
        return "a single";
    if (apples == 0)
        return "no";
    return "negative";
}

constexpr std::string getApplesPluralized(int apples) {
    return (apples == 1) ? "apple" : "apples";
}

int main() {
    constexpr int maryApples { 3 };
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}
