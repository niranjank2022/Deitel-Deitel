/* Q.No. 2.17
Write a program that prints the numbers 1 to 4 on the same line*/

#include <stdio.h>

int main() {
    /* Using one printf statement with no conversion specifiers (%d) */
    printf("1 2 3 4\n");
    printf("\n");

    /* Using one printf statement with 4 conversion specifiers */
    printf("%d %d %d %d\n", 1, 2, 3, 4);
    printf("\n");

    /* Using four printf statements */
    printf("1 ");
    printf("2 ");
    printf("3 ");
    printf("4");
}