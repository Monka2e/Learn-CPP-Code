#include <iostream>

double calcHeightAtSecond(double dropHeight, int seconds) {
    double newHeight = dropHeight - 9.8 * (seconds * seconds) / 2.0;
    if (newHeight < 0)
        return 0;
    return newHeight;
}

void print(double height, int seconds) {
    if (height > 0)
        std::cout << "At " << seconds << " seconds, the ball is at height: " << height << '\n';
    else
        std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
}

int main() {
    std::cout << "Enter the height of the tower in meters: ";
    double height{};
    std::cin >> height;

    print(calcHeightAtSecond(height, 0), 0);
    print(calcHeightAtSecond(height, 1), 1);
    print(calcHeightAtSecond(height, 2), 2);
    print(calcHeightAtSecond(height, 3), 3);
    print(calcHeightAtSecond(height, 4), 4);
    print(calcHeightAtSecond(height, 5), 5);

    return 0;
}
