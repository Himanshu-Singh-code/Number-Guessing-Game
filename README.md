# Number Guessing Game

A simple console-based number guessing game written in C.
The program generates a random number between 1 and 100. 
The player has to guess it within 10 attempts, with hints (higher/lower) after each guess.

## How it works

- A random number between 1 and 100 is generated.
- The player enters a guess.
- The program tells the player to guess higher or lower.
- The player has a maximum of 10 attempts to guess correctly.

## How to run

```bash
gcc guessing_game.c -o guess
./guess
```

## Tech used

- C
