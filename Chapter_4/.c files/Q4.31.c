/* Q. No. 4.31 */
#include <stdio.h>

int main() {
    int line, i, j;

    // First four lines
    for (line = 1; line <= 4; line++) {

        // Printing ' 's
        for (i = 5 - line; i >= 1; i--)
            printf(" ");

        //Printing '*'s
        for (j = 1; j <= (line*2 - 1); j++)
            printf("*");
        
        printf("\n");
    }

    // Middle i.e. 5th line
    for (j = 1; j <= 9; j++)
        printf("*");
    printf("\n");
    
    // Last four lines
    for (line = 4; line >= 1; line--) {

        // Printing ' 's
        for (i = 5 - line; i >= 1; i--)
            printf(" ");
        
        // Printing '*'s
        for (j = (line*2 -1); j >= 1; j--)
            printf("*");
        
        printf("\n");

    }
    
}