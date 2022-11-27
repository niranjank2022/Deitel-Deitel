#include <stdio.h>

void main() {

    // Finding the factorial of a number
    int num, input, fact = 1;

    printf("\nEnter a number : ");
    scanf("%d", &input);

    num = input;
    if (num == 0)
        fact = 1;
    
    while (num >= 1)
        fact *= num--;
    
    printf("\nFactorial of %d ==> %d", input, fact);
}