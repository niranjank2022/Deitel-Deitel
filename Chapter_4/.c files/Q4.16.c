/* Q. No. 4.16 */
#include <stdio.h>

int main() {
    int line, count;

    /* Loop 1 */
    printf("\n");
    for (line = 1; line <= 10; ++line) {
        for (count = 1; count <= line; ++count)
            printf("*");
        
        printf("\n");
    }

    /* Loop 2 */
    printf("\n\n");
    for (line = 1; line <= 10; ++line) {
        for (count = 10; count >= line; --count)
            printf("*");
        
        printf("\n");
    }

    /* Loop 3 */
    printf("\n\n");
    for (line = 1; line <= 10; ++line) {
        for (count = 10; count >= line; --count)
            printf("*");
        
        printf("\n");

        for (count = 1; count <= line; ++count)
            printf(" ");
        
    }

    /* Loop 4 */
    printf("\n\n");
    for (line = 1; line <= 10; ++line) {
        for (count = 9; count >= line; --count)
            printf(" ");

        for (count = 1; count <= line; ++count)
            printf("*");
        
        printf("\n");
    }


}
    
