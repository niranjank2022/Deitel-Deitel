/* someFunction() uses recursion to print the array in reverse */

#include <stdio.h>
#define SIZE 10

void someFunction( const int [], int );

void main()
{
    int a[SIZE] = { 8, 3, 1, 2, 6, 0, 9, 7, 4, 5 };

    printf("Answer is : \n");
    someFunction(a, SIZE);
    printf("\n");
}

void someFunction( const int b[], int size )
{
    if (size > 0) {
        someFunction( &b[1], size - 1);
        printf("%d ", b[0]);
    }
}