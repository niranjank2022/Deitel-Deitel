#include <stdio.h>

void main() {

    int n1 = 0, n2 = 1, n3, limit;

    printf("Enter n (to find the nth Fibonacci number) : ");
    scanf("%d", &limit);

    if (limit == 1)
        printf("%d", n1);

    if (limit > 1)
        printf("%d, %d", n1, n2);

    for (int i = 3; i <= limit; i++) {

        n3 = n1 + n2;
        printf(", %d", n3);
        n1 = n2;
        n2 = n3;
    }
}