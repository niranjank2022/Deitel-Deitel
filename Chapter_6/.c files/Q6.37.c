#include <stdio.h>
#define SIZE 10

void printArray( int [], int );

void main()
{
    int arr[SIZE] = { 34, 2, 4, 56, 3, 43, 4, 3422, 4, 3 };

    printArray(arr, SIZE);
}

void printArray( int arr[], int n )
{
    if (n > 0) {
        printArray(arr, n - 1);
        printf("%d ", arr[n - 1]);
    }
}