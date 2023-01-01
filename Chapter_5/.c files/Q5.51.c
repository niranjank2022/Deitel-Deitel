/* Game Of Craps */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDice();
void winMess();
void loseMess();

int bankBalance = 1000;
void main()
{
    int gameStatus, sum, myPoint, wager;
    srand( time(NULL) );

    if (bankBalance == 0) {
        printf("Sorry, You busted!\n");
        return;
    }

    printf("\nEnter your bet : ");
    do
    {
        scanf("%d", &wager);
        if (wager > bankBalance)
            printf("Insufficient Balance !!!\n");
    } while (wager > bankBalance);
    
    char inp;

    if ( getchar() != EOF )
        sum = rollDice();

    switch(sum) {

        case 7: case 11:
            gameStatus = 1;
            break;
        case 2: case 3: case 12:
            gameStatus = 2;
            break;
        default:
            gameStatus = 0;
            myPoint = sum;
            printf("Point is %d.\n", myPoint);
    }

    while ( gameStatus == 0 ) {

        if (getchar() != EOF)
            sum = rollDice();

        if (sum == myPoint)
            gameStatus = 1;
        else if (sum == 7)
            gameStatus = 2;
    }

    if (gameStatus == 1) {
        bankBalance += wager;
        winMess();
    }
    else {
        bankBalance -= wager;
        loseMess();
    }        

    printf("\nRemaining Bank Balance : %d\n", bankBalance);
    main();
}

int rollDice()
{
    int die1, die2, sum;

    die1 = 1 + rand() % 6;
    die2 = 1 + rand() % 6;
    sum = die1 + die2;
    printf("\nPlayer rolled %d + %d = %d\n", die1, die2, sum);
    return sum;
}

void winMess()
{
    int key = rand() % 5;
    switch(key) {
        case 0:
            printf("Try again to maintain a streak.\n");
            break;
        case 1:
            printf("This is your luck day may be.\n");
            break;
        case 2:
            printf("That was epic.\n");
            break;
        case 3:
            printf("Very close to loosing. But managed to escape.\n");
            break;
        case 4:
            printf("Ooh! Congrats!\n");
            break;
    }
}

void loseMess()
{
    int key = rand() % 5;
    switch (key) {

        case 0:
            printf("Oh, you're going for broke, huh?\n");
            break;
        case 1:
            printf("Aw cmom, take a chance!\n");
            break;
        case 2:
            printf("You're up big. Now's the time to cash in your chips!\n");
            break;
        case 3:
            printf("Prove you're the best.\n");
            break;
        case 4:
            printf("I thought you are lucky today, so bad!\n");
            break;
    }
}