#include <stdio.h>

void main() {

    int count = 0;
    long long int num, num_cp, remain;

    printf("\nEnter the number : ");
    scanf("%lld", &num);
    num_cp = num;

    while (num != 0)
    {
        remain = num % 10;
        num = (num - remain) / 10;

        if (remain == 7)
            count += 1;
    }
    // printf("%lld %d", sizeof(num), sizeof(count));
    printf("\nNo. of '7's in %lld ==> %d", num_cp, count);
}