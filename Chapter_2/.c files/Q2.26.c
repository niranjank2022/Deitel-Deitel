/* Q. No. 2.26
Write a program that reads in two integers and determines ands prints if the first is a multiple of the second.
Hint : Use modulus operator
*/
#include <stdio.h>

int main() {
    int n1, n2;
    printf(" Enter number 1 : ");
    scanf("%d", &n1);
    printf(" Enter number 2 : ");
    scanf("%d", &n2);

    if (n1 % n2 == 0)
        printf("%d is a multiple of %d", n1, n2);
    
}