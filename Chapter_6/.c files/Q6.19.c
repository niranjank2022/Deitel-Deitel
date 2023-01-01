#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDice();

void main()
{
    int dice1, dice2, sum, freq[11] = {0};
    srand( time(NULL) );

    for (int i = 1; i <= 36000; i++)
    {
        dice1 = rollDice();
        dice2 = rollDice();
        sum = dice1 + dice2;
        ++freq[sum - 2];
    }

    printf("|| Value | Frequency ||\n");
    for (int i = 0; i < 11; i++)
    {
        printf("|| %5d | %9d ||\n", i + 2, freq[i]);
    }
}

int rollDice()
{
    int num;
    num = 1 + rand() % 6;
    return num;
}