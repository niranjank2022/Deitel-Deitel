#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {

    int n;
    srand(time(NULL));

    n = (rand() % 2) + 1;
    printf("%d\n", n);

    n = (rand() % 100)  + 1;
    printf("%d\n", n);

    n = rand() % 9;
    printf("%d\n", n);

    n = (rand() % 113) + 1000;
    printf("%d\n", n);

    n = (rand() % 3) - 1;
    printf("%d\n", n);

    n = (rand() % 15) - 3;
    printf("%d\n", n);

    n = ((rand() % 5) + 1) * 2;
    printf("%d\n", n);

    n = (rand() % 5) * 2 + 3;
    printf("%d\n", n);

    n = (rand() % 5) * 4 + 6;
    printf("%d\n", n);
}