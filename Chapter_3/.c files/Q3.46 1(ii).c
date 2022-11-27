#include <stdio.h>

void main() {

    int digit, val;
    int num, result = 0;

    printf("\nEnter a four-digit number to encrypt : ");
    scanf("%d", &num);

    for (digit = 1000; digit >= 1; digit /= 10)
    {
        val = num / digit;
        num -= val * digit;
        result += (val + 7) % 10 * digit;
    }

    printf("\nEncrpted number : %d", result);
}