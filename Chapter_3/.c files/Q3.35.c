#include <stdio.h>

void main() {

    int num, num_cp, result = 0, remain;

    printf("\nEnter a five-digit number : ");
    scanf("%d", &num);

    num_cp = num;

    for (int i = 10000; i >=  1; i /= 10)
    {
        remain = num % 10;
        num = num / 10;

        result += remain * i;
    }

    if (num_cp == result)
        printf("\n%d is a palindrome.", num_cp);

    else
        printf("\n%d is not a palindrome.", num_cp);
}
