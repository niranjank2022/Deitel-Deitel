#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20

void createArr( int [] );
int notFound( int [], int, int );

void main()
{
    int arr[SIZE];

    createArr(arr);

    for (int i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);
    printf("\n");

    for (int i = 0; i < SIZE; i++) {

        if ( notFound(arr, arr[i], i) )
            printf("%d ", arr[i]);
    }
}

void createArr( int arr[] )
{
    srand( time(NULL) );
    
    for (int i = 0; i < SIZE; i++)
        arr[i] = 10 + rand() % 91;
}

int notFound( int arr[], int target, int end )
{
    for (int i = 0; i < end; i++)
        if (arr[i] == target)
            return 0;
    return 1;
}