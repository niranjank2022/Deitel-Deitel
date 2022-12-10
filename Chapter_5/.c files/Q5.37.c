#include <stdio.h>

int power( int, int );

void main() {

    int num1, num2;

    printf("\nEnter base : ");
    scanf("%d", &num1);
    printf("\nEnter exponent : ");
    scanf("%d", &num2);

    printf("\n%d power %d ==> %d", num1, num2, power(num1, num2));
}

int power(int base, int exponent) {

    // Recursive function
    int result;
    if (exponent == 0)
        result = 1;
    
    else if (exponent == 1)
        result = base;

    else
        result = base * power(base, (exponent - 1));
    
    return result;
}       
