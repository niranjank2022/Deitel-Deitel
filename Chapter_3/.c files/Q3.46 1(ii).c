#include <stdio.h>

void main() {

    int digit, val;
    int num, toAdd = 0, result = 0;

    printf("\nEnter a four-digit number to encrypt : ");
    scanf("%d", &num);

    printf("\nEncrypted number (i) : ");
    for (digit = 1000; digit >= 1; digit /= 10)
    {   
        val = num / digit;
        num -= val * digit;
        toAdd = (val + 7) % 10 * digit;
        printf("%d", toAdd / digit);
        result += toAdd;
    }

    printf("\nEncrypted number (ii) : %d", result);
}