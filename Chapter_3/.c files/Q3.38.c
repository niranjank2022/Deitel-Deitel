#include <stdio.h>

void main() {

    int count = 1;

    while (count <= 100)
    {
        printf("*");

        if (count % 10 == 0)
            printf("\n");

        count += 1;
    }
}