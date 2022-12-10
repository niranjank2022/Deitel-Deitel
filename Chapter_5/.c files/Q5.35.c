
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {

    int inp, num;
    char resp;

    srand(time(NULL));

    printf("I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess...");
    resp = 'y';
    do {

        num = 1 + rand() % 1000;
        printf("\n");
        scanf("%d", &inp);

        while (inp != num) {
            if (inp > num) {
                printf("Too high. Try again.\n");
                scanf("%d", &inp);
            }

            if (inp < num) {
                printf("Too low. Try again.\n");
                scanf("%d", &inp);
            }
        }

        printf("Excellent! You guessed the number.\nWould you like to play again?");
        scanf(" %c", &resp);
        if (resp == 'n')
            break;
        if (resp == 'y') 
            printf("Here we go! Guess a new number...");    
    } while (resp == 'y');
}
