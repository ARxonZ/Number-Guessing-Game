#include <iostream>
#include <random>
#include <limits>
#include <cstdlib>

int readGuess() {
    int guess;
    while (!(std::cin >> guess)) {
        if (std::cin.eof()) std::exit(0);
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Please enter a valid number: ";
    }
    return guess;
}

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(1, 100);

    char playAgain = 'y';
    while (playAgain == 'y' || playAgain == 'Y') {
        const int secret = dist(gen);
        int attempts = 0;
        int guess = 0;

        std::cout << "\n=== GUESSING GAME ===\n";
        std::cout << "I have chosen a number between 1 and 100.\n";

        while (guess != secret) {
            std::cout << "Enter your guess: ";
            guess = readGuess();
            ++attempts;

            if (guess < 1 || guess > 100) {
                std::cout << "Out of range! Pick between 1 and 100.\n";
            } else if (guess > secret) {
                std::cout << "Too High!\n";
            } else if (guess < secret) {
                std::cout << "Too Low!\n";
            } else {
                std::cout << "Correct! You got it in " << attempts << " attempts.\n";
            }
        }

        std::cout << "Play again? (y/n): ";
        std::cin >> playAgain;
    }

    std::cout << "Thanks for playing!\n";
    return 0;
}
