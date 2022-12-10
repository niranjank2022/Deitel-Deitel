#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {

    int num, notCorrect = 1, inp;
    char resp, inpchar;

    srand(time(NULL));
    num = 1 + rand() % 1000;
    printf("I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess...");
    
    while ((resp == 'y') || notCorrect) {

            
            printf("\n");
            if (resp == 'y')
                printf("\nHere we go...");

            scanf("%d", &inp);

            if (inp > num) {
                printf("Too high. Try again...");
                notCorrect = 1;
            }
            if (inp < num) {
                printf("Too low. Try again...");
                notCorrect = 1;
            }

            if (inp == num) {
                printf("Excellent! You guessed the number!\nWould you like to play again (y/n)...");
                resp = getchar();

                scanf("%c", &resp);
                printf("%c", resp);
                notCorrect = 0;
            }


    }
}