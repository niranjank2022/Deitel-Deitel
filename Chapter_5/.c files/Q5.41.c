#include <stdio.h>

int dispFactorial( int );

void main() {

    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    printf("Factorial of %d is ...\n", num);
    dispFactorial(num);
}

int dispFactorial( int num ) {

    int result;

    if (num == 0 || num == 1) 
        result = 1;
    
    else {
        result = num * dispFactorial(num-1);
    }
    printf("%d! = %d\n", num, result);
    return result;
}