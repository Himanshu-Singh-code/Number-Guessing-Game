// NUMBER GUESSING GAME :

#include <stdio.h>
#include <stdlib.h> // for rand() and srand()
#include <time.h> // for time()

int main()
{
    srand(time(0));
    int randomNo = rand() % 100 + 1; // generates a random number between 1 and 100
    int no_of_guesses = 0;
    int guess;
    int won = 0; // flag to check if the user has won

    printf("Guess the number between 1 to 100 : ");

    do {
        scanf("%d", &guess);
        no_of_guesses++;

        if (guess > randomNo)
        {
            printf(" Try Lower number!\n");
        }
        else if (guess < randomNo)
        {
            printf(" Try Higher number!\n");
        }
        else
        {
            won = 1; // set the flag to indicate the user has won
        }

        if (no_of_guesses >= 10 && !won) // check if the user has exceeded the maximum number of guesses
        {
            printf("You have exceeded the maximum number of guesses.");
            printf(" The number was %d\n", randomNo);
            break;
        }

    } while (!won); 

    if (won)
    {
        printf("You guessed the number correctly!\n");
        printf("You took %d attempts\n", no_of_guesses);
    }

    return 0;
}