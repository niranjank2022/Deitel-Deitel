#include <stdio.h>
#define SIZE 10

int recursiveMinimum( int [], int );
void main()
{
    int arr[SIZE] = { 3, 4, 5, 11, 6, 7, 8, 11, 2, 13 };

    printf("Minimum value is %d.\n", recursiveMinimum(arr, SIZE));
}

int recursiveMinimum( int arr[], int n )
{
    if (n == 0)
        return arr[0];
    
    if (arr[n] < recursiveMinimum(arr, n - 1))
        return arr[n];
}