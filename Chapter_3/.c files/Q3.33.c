#include <stdio.h>

void main() {

    int side, line, letter;

    printf("\nEnter side of the square : ");
    scanf("%d", &side);

    for (line = side; line >= 1; line--)
    {
        for (letter = side; letter >= 1; letter--)
            printf("*");
            
        printf("\n");
    }

}