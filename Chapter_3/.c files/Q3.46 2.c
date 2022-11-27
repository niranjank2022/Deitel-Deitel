#include <stdio.h>

void main() {

    int ennum, denum = 0;
    int digit, val;
    
    printf("\nEnter the encrypted number : ");
    scanf("%d", &ennum);

    digit = 1000;
    while (digit >= 1)
    {
        val = ennum / digit;
        ennum -= val * digit;

        if (val >= 0 && val <= 2)
            val += 7;

        else if (val >= 3 && val <= 9)
            val -= 3;

        denum += val * digit;

        digit /= 10;
        
    }

    printf("\nThe decrypted number : %d", denum);

    




}