/* Selection sort */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void selectionSort( int [], int, int );
void createArr( int [], int );
void printArr( int [], int );

void main() {

    int arr[SIZE];
    
    
    createArr(arr, SIZE);
    printArr(arr, SIZE);

    selectionSort(arr, 0, SIZE);

    printArr(arr, SIZE);

    

}

void selectionSort( int arr[], int start, int end )
{
    
    if (start == end)
        return;

    int hold, flag_index = start, small = arr[start];

    // Finding the small
    for (int i = start + 1; i < end; i++)
        if (small > arr[i]) {
            small = arr[i];
            flag_index = i;
        }
    // Swapping the small with the first element
    hold = arr[flag_index];
    arr[flag_index] = arr[start];
    arr[start] = hold;

    selectionSort( arr, start + 1, end );
}

void printArr( int arr[], int n ) {

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n\n");
}

void createArr( int arr[], int n ) {

    srand(time(NULL));
    for (int i = 0; i < n; i++)
        arr[i] = 1 + rand() % 20;
}