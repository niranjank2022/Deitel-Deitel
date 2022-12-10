#include <stdio.h>

void main() {

    int line, letter;

    for (line = 1; line <= 8; line++)
    {
        if (line % 2 == 0)
            printf(" ");
            
        for (letter = 1; letter <= 8; letter++)
            printf("* ");

        printf("\n");

        
    }
}