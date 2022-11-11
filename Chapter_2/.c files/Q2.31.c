/* Q. No. 2.31
Write a program that calculates the squares and cubes of the numbers from 0 to 10 and uses tabs to print a table.
*/
#include <stdio.h>

int main() {
    int num = 0;

    printf("\nnumber\tsquare\tcube\n");

    printf("%d\t%d\t%d\n", num, (num * num), (num * num * num));
    num += 1;

    printf("%d\t%d\t%d\n", num, (num * num), (num * num * num));
    num += 1;
    
    printf("%d\t%d\t%d\n", num, (num * num), (num * num * num));
    num += 1;
    
    printf("%d\t%d\t%d\n", num, (num * num), (num * num * num));
    num += 1;
    
    printf("%d\t%d\t%d\n", num, (num * num), (num * num * num));
    num += 1;
    
    printf("%d\t%d\t%d\n", num, (num * num), (num * num * num));
    num += 1;
    
    printf("%d\t%d\t%d\n", num, (num * num), (num * num * num));
    num += 1;
    
    printf("%d\t%d\t%d\n", num, (num * num), (num * num * num));
    num += 1;
    
    printf("%d\t%d\t%d\n", num, (num * num), (num * num * num));
    num += 1;
    
    printf("%d\t%d\t%d\n", num, (num * num), (num * num * num));
    num += 1;
    
    printf("%d\t%d\t%d\n", num, (num * num), (num * num * num));

    printf("\n");   
}
