#include <stdio.h>

void main() {

    int num, num_copy, bin_digit, pow = 0,  result = 0;

    printf("\nEnter a binary number : ");
    scanf("%d", &num);

    num_copy = num;

    while (num != 0)
    {
        bin_digit = num % 10;
        num -= bin_digit;
        num /= 10;

        if (pow > 0)
            for (int i = pow; i >= 1; i--)
                bin_digit *= 2;
        pow++;
        
        result += bin_digit;
    }

    printf("\nBinary equivalent of %d ==> %d.", num_copy, result);
}