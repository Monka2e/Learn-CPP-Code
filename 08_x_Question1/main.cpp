/*
In the chapter 4 comprehensive quiz, we wrote a program to simulate a ball falling off of a tower.
Because we didn’t have loops yet, the ball could only fall for 5 seconds.

Take the program below and modify it so that the ball falls for as many seconds as needed until it reaches the ground.
*/

#include <iostream>
#include "constants.h"

double calculateHeight(double initialHeight, int seconds)
{
    double distanceFallen { myConstants::gravity * seconds * seconds / 2 };
    double heightNow { initialHeight - distanceFallen };

    // Check whether we've gone under the ground
    // If so, set the height to ground-level
    if (heightNow < 0.0)
        return 0.0;
    else
        return heightNow;
}

bool calculateAndPrintHeight(double initialHeight, int time)
{
    double currentHeight {calculateHeight(initialHeight, time)};
    std::cout << "At " << time << " seconds, the ball is at height: " << currentHeight << '\n';
    return currentHeight == 0;
}

int main()
{
    std::cout << "Enter the initial height of the tower in meters: ";
    double initialHeight {};
    std::cin >> initialHeight;

    int seconds {0};
    while(!calculateAndPrintHeight(initialHeight, seconds)) {
        ++seconds;
    }

    return 0;
}
