/* Quick Sort */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 50

int partition( int *, int, int );
void quickSort( int *, int, int );
void printArr( int *, int );

void main()
{
    srand( time( NULL ) );
    int array[ SIZE ];

    // Array initialization
    for ( int i = 0; i < SIZE; i++ )
        array[ i ] = 1 + rand() % 200;

    printArr( array, SIZE );
    quickSort( array, 0, SIZE - 1 );
    printArr( array, SIZE );
}

int partition( int *arr, int low, int high )
{
    void swap( int *, int * );

    int i = low, j, pivot = arr[ high ];
    for ( j = low; j <= high - 1; j++ )
        if ( arr[ j ] <= pivot ) {

            // printArr( arr, SIZE );
            swap( &arr[ i ], &arr[ j ] );
            i++;
        }
    swap( &arr[ i ], &arr[ high ] );
    return i;
}

void quickSort( int *arr, int start, int end )
{
    if ( start > end )
        return;
        
    int index = partition( arr, start, end );
    quickSort( arr, start, index - 1 );
    quickSort( arr, index + 1, end );
}

void swap( int *n1, int *n2 )
{
    int hold = *n1;
    *n1 = *n2;
    *n2 = hold;
}

void printArr( int *arr, int n )
{
    for ( int i = 0 ; i < n; i++ )
        printf( "%d ", arr[ i ] );
    printf( "\n\n" );
}