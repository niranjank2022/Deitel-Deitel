/* Q. No. 4.32 */

#include <stdio.h>

int main() {

    int size, line, i, j, mid;

    //  Getting the input size
    printf("\nEnter the size of the diamond : ");
    scanf("%d", &size);
    printf("\n");

    mid = size/2 + 1;

    // Lines above the middle line
    for (line = 1; line <= mid-1; line++) {
         // Printing ' 's
         for (i = mid-line; i >= 1; i--)
            printf(" ");
        
        // Printing '*'s
        for (j = 1; j <= (line*2 - 1); j++)
            printf("*");
        
        printf("\n");
    }

    // The middle line
    for (j = 1; j <= size; j++)
        printf("*");
    printf("\n");

    // Lines after the middle line
    for (line = mid-1; line >= 1; line--) {

        // Printing ' 's
        for (i = mid-line; i >= 1; i--)
            printf(" ");
        
        // Printing '*'s
        for (j = (line*2 - 1); j >= 1; j--)
            printf("*");
        
        printf("\n");
    }

}