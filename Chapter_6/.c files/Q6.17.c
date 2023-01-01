/* whatIsThis function uses recursion to return the sum of elements in an array */

#include <stdio.h>
#define SIZE 10

int whatIsThis( const int [], int );

void main()
{
    int x, a[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    x = whatIsThis(a, SIZE);

    printf("Result is %d\n", x);

}

int whatIsThis( const int b[], int p )
{
    if (p == 1)
        return b[0];
    else
        return b[p - 1] + whatIsThis(b, p - 1);
}

