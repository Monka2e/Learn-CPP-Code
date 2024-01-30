/*
In a quiz for lesson 8.x -- Chapter 8 summary and quiz, we implemented a game of Hi-Lo.

Update your previous solution to handle invalid guesses (e.g. ‘x’), out of bounds guesses (e.g. 0 or 101),
or valid guesses that have extraneous characters (e.g. 43x).
Also handle the user entering extra characters when the game asks them whether they want to play again.

Hint: Write a separate function to handle the user inputting their guess (along with the associated error handling).
*/

#include "Random.h"
#include <limits>
#include <iostream>

void ignoreLine() {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

bool validateInput(bool allowPartialExtraction=false) {
    if (!std::cin) {
        if (std::cin.eof()) {
            exit(0);
        }

        std::cin.clear();
        ignoreLine();
        return false;
    } else if (!std::cin.eof() && std::cin.peek() != '\n') {
        ignoreLine();
        return allowPartialExtraction;
    }
    return true;
}

bool queryReplay() {
    char input {};
    while (true) {
        std::cout << "Would you like to play again (y/n)? ";
        std::cin >> input;

        if (validateInput() && (input == 'y' || input == 'n')) {
            return input == 'y';
        }
        std::cout << "Oops! Invalid input, remember to enter 'y' or 'n'\n";
    }
}

int getGuess(int g) {
    int guess {};
    while (true) {
        std::cout << "Guess #" << g << ": ";
        std::cin >> guess;

        if (validateInput() && (guess >= 1 && guess <= 100)) {
            return guess;
        }
        std::cout << "Oops! Invalid input, remember to enter an integer between 1-100\n";
    }
}

void play() {
    int answer {Random::get(1, 100)};
    int guess {};

    std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is.\n";

    constexpr int guesses {7};
    for (int g {1}; g <= guesses; ++g) {
        guess = getGuess(g);
        
        if (guess > answer) {
            std::cout << "Your guess is too high.\n";
        } else if (guess < answer) {
            std::cout << "Your guess is too low.\n";
        } else {
            std::cout << "Correct! You win!\n";
            return;
        }
    }

    std::cout << "Sorry, you lose. The correct number was " << answer << ".\n";
}

int main() {
    bool playing {true};
    while (playing) {
        play();

        playing = queryReplay();
    }

    return 0;
}
