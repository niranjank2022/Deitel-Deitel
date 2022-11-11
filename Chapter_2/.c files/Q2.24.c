/*Q No. 2.24
Write a program that reads an integer and then determines and prints whether it is odd or even.
Hint : Use modulus operator
*/
#include <stdio.h>

int main() {
    int num;
    printf("Enter a Number : ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d is an Even number.", num);

    if (num % 2 != 0)
        printf("%d is an Odd number.", num);
}