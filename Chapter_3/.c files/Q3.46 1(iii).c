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
        num = num % digit;

        if (val >= 0 && val <= 2)
            val += 7;
            
        else if (val >= 3 && val <= 9)
            val -= 3;

        printf("%d", val * digit);
        result += val;
    }

    printf("\nEncrypted number (ii) : %d", result);
}