#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int num, guess, tries = 0;
    srand(time(0));
    num = rand() % 100 + 1;
    printf("Enter a guess between 1 and 100: ");
    scanf("%d", &guess);
    
    do {
        tries++;
        if (guess > num) {
            printf("\nThe guess is too high!");
        }    
        else if (guess < num) {
            printf("\nThe guess is too low!");
        } 
        printf("\nEnter a guess between 1 and 100: ");
        scanf("%d", &guess); 
    } while (num != guess);
    printf("\nCorrect! You got it in %d guesses\n", tries);
    return 0;
}
