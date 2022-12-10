#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void remark( int );
void main() {

    int inp, num;
    char resp;

    srand(time(NULL));

    printf("I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess...");
    resp = 'y';
    do {
        int tries = 0;
        num = 1 + rand() % 1000;
        printf("\n");
        scanf("%d", &inp);
        ++tries;

        while (inp != num) {
            if (inp > num) {
                printf("Too high. Try again.\n");
                scanf("%d", &inp);
                ++tries;
            }

            if (inp < num) {
                printf("Too low. Try again.\n");
                scanf("%d", &inp);
                ++tries;
            }
        }

        remark(tries);
        printf("\nWould you like to play again...(y/n)?");
        scanf(" %c", &resp);

        if (resp == 'n')
            break;
        if (resp == 'y') 
            printf("Here we go! Guess a new number...");    
    } while (resp == 'y');
}

void remark (int num) {
    
    if (num < 10)
        printf("Either you know the secret or you got lucky!\n");

    else if (num == 10)
        printf("Ahah! You know the secret!\n");

    else if (num > 10)
        printf("You should be able to do better!\n");
}