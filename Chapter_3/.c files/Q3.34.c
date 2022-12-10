#include <stdio.h>

void main() {

    int side, line, letter;

    printf("\nEnter side of the square : ");
    scanf("%d", &side);

    for (line = side; line >= 1; line--)
    {   
        if (line == side || line == 1)
            for (letter = side; letter >= 1; letter--)
                printf("*");
            
        else
            for (letter = side; letter >= 1; letter--)
                if (letter == 1 || letter == side)
                    printf("*");
                else
                    printf(" ");
        printf("\n");
    }

}