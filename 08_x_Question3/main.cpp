/*
Implement a game of Hi-Lo. First, your program should pick a random integer between 1 and 100.
The user is given 7 tries to guess the number.

If the user does not guess the correct number, the program should tell them whether they guessed too high or too low.
If the user guesses the right number, the program should tell them they won.
If they run out of guesses, the program should tell them they lost, and what the correct number is.
At the end of the game, the user should be asked if they want to play again.
If the user doesn’t enter ‘y’ or ‘n’, ask them again.

For this quiz, assume the user enters a valid number.

Use the Random.h header from 8.15 -- Global random numbers (Random.h).

Here’s what your output should look like:

Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is.
Guess #1: 64
Your guess is too high.
Guess #2: 32
Your guess is too low.
Guess #3: 54
Your guess is too high.
Guess #4: 51
Correct! You win!
Would you like to play again (y/n)? y
Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is.
Guess #1: 64
Your guess is too high.
Guess #2: 32
Your guess is too low.
Guess #3: 54
Your guess is too high.
Guess #4: 51
Your guess is too high.
Guess #5: 36
Your guess is too low.
Guess #6: 45
Your guess is too low.
Guess #7: 48
Your guess is too low.
Sorry, you lose. The correct number was 49.
Would you like to play again (y/n)? q
Would you like to play again (y/n)? n
Thank you for playing.
*/

#include "Random.h"
#include <iostream>

bool queryReplay() {
    char input {};
    while (input != 'y' && input != 'n') {
        std::cout << "Would you like to play again (y/n)? ";
        std::cin >> input;
    }
    return input == 'y';
}

void play() {
    int answer {Random::get(1, 100)};
    int guess {};

    std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is.\n";

    for (int g {1}; g <= 7; ++g) {
        std::cout << "Guess #" << g << ": ";
        std::cin >> guess;
        
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
