/* Q. No. 3.8!
Write a C program that used the statements in Q. No. 3.7 to calculate x raised to the y power. The program
should have a while repetition control structure.
*/
#include <stdio.h>

int main() {
    int x, y, i = 1, val = 1;
    printf("\nEnter number X : ");
    scanf("%d", &x);
    printf("\nEnter number Y : ");
    scanf("%d", &y);
    
    /* Conditional operator */
    printf("%s\n", x >= y ? "No. X is greater than No. Y" : "No. Y is greater than No. X");

    if (y = 0)
        x = 1;
    else if (y = 1)
        x = x;

    while (i < y) {
        /* val *= x; */
        ++i;
    };
    x = val;
    printf("X to the power of Y : %d", x);
    
}