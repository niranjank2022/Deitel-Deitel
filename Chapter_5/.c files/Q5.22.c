#include <stdio.h>
#include <stdbool.h>

void sepTwoSpaces( int );

void main() {

    short int num;

    printf("\nEnter a number between 1 and 32767 : ");
    scanf("%hd", &num);

    sepTwoSpaces(num);
}

void sepTwoSpaces(int num) {
    int tenBase = 10000, quo;
    bool zeroAtStart = true;

    while (num != 0)
    {
        quo = num / tenBase;
        if (quo != 0)
            zeroAtStart = false;
        
        num %= tenBase;
        tenBase /= 10;
        
        if (quo == 0 && zeroAtStart)
            continue;

        printf("%hd  ", quo);       
    }
}