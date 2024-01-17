#include <iostream>

double calcHeightAtSecond(double dropHeight, int seconds) {
    double newHeight = dropHeight - 9.8 * (seconds * seconds) / 2.0;
    if (newHeight < 0)
        return 0;
    return newHeight;
}

void printXSeconds(double height, int currentSecond, int maxSeconds) {
    if (currentSecond > maxSeconds)
        return;

    double heightAtSecond = calcHeightAtSecond(height, currentSecond);
    if (calcHeightAtSecond(height, currentSecond) > 0)
        std::cout << "At " << currentSecond << " seconds, the ball is at height: " << heightAtSecond << '\n';
    else
        std::cout << "At " << currentSecond << " seconds, the ball is on the ground.\n";

    printXSeconds(height, currentSecond + 1, maxSeconds);
}

int main() {
    std::cout << "Enter the height of the tower in meters: ";
    double height{};
    std::cin >> height;

    printXSeconds(height, 0, 5);

    return 0;
}
