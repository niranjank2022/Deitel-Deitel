/* Q. No. 4.16 */
#include <stdio.h>

int main() {
    
    // Loop 1
    for (int i = 1; i <= 10; i++) {
        
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    printf("\n\n\n");

    // Loop 2
    for (int i = 12; i >= 1; i--) {

        if (i == 10 || i == 8)
            --i;
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
    
    printf("\n\n\n");

    // Loop 3
    for (int i = 12; i >= 1; i--) {

        if (i == 8)
            i -= 2;
        for (int j = 1; j <= 12 - i; j++)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    printf("\n\n\n");

    // Loop 4
    for (int i = 1; i <= 10; i++) {

        for (int j = 1; j <= 10 - i; j++)
            printf(" ");
        for (int j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }

    printf("\n\n\n");
}
    
