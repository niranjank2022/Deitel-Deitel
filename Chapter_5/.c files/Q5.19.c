
#include <stdio.h>

void square(int);

void main() {

    int num;

    printf("\nEnter the side of square to print : ");
    scanf("%d", &num);

    if (num > 0)
        square(num);
}

void square(int side) {

    for (int i = side; i >= 1; i--)
    {
        for (int j = side; j >= 1; j--)
            printf("*");
        printf("\n");
    }
}