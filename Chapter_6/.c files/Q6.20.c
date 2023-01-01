#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDice();

void main()
{
    srand( time(NULL) );
    int dice1, dice2, sum;
    int arr[2] = {0}, winFreq[1001] = {0}, loseFreq[1001] = {0};
    int wins = 0, losses = 0, point, gameIsOn, countOfRolls = 0;

    for (int i = 1; i <= 1000; i++) {

        dice1 = rollDice();
        dice2 = rollDice();
        
        sum = dice1 + dice2;
        ++countOfRolls;

        if (!gameIsOn) {
            switch (sum) {

                case 7: case 11:
                    ++winFreq[ countOfRolls ];
                    countOfRolls = 0;
                    gameIsOn = 0;
                    break;
                case 2: case 3: case 12:
                    ++loseFreq[ countOfRolls ];
                    countOfRolls = 0;
                    gameIsOn = 0;
                    break;
                default:
                    point = sum;
                    gameIsOn = 1;
                    break;                    
            }
            continue;
        }

        if (sum == point) {
            ++winFreq[ countOfRolls ];
            countOfRolls = 0;
            gameIsOn = 0;
        }
        else if (sum == 7) {
            ++loseFreq[ countOfRolls ];
            countOfRolls = 0;
            gameIsOn = 0;
        }
    }
    int total = 0;
    printf("Games won on...\n");
    for (int i = 1; i < 21; i++) {
        printf("%2d\t%2d\n", i, winFreq[i]);
        total += i * winFreq[i];
    }
    printf("20+\t");
    int sumW = 0;
    for (int i = 21; i <= 1000; i++) {
        sumW += winFreq[i];
        total += i * winFreq[i];
    }
    printf("%2d\n\n\n", sumW);
    
    // For checking
    printf(">>%d<<\n", total);
    

    printf("Games lost on...\n");
    for (int i = 1; i < 21; i++) {
        printf("%2d\t%2d\n", i, loseFreq[i]);
        total += i * loseFreq[i];
    }
    printf("20+\t");
    int sumL = 0;
    for (int i = 21; i <= 1000; i++) {
        sumL += loseFreq[i];
        total += i * loseFreq[i];
    }
    printf("%2d\n\n\n", sumL);
    
    // For checking
    printf(">>%d<<\n", total);
}

int rollDice()
{
    int num;
    num = 1 + rand() % 6;
    return num;
}