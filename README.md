# Number-Guessing-Game
A C++ console game where the computer picks a random number from 1 to 100 and you guess it, with "Too High" or "Too Low" hints until you get it right.
# Number Guessing Game (C++)

The computer randomly picks a number between 1 and 100. You guess it, and the
program replies "Too High" or "Too Low" until you find the number.

## Features
- Random number generation with `<random>`
- Hints after every guess
- Input validation (non-numbers and out-of-range values)
- Attempt counter and play-again option

## Build and run
```bash
g++ -std=c++11 main.cpp -o guessing_game
./guessing_game
```
