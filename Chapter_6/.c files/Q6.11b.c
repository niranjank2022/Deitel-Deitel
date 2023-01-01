#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void bubbleSort( int [], int );
void printArr( int [], int );

void main() {

    srand( time(NULL) );
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++)
        arr[i] = 1 + rand() % 50;
    
    printArr(arr, SIZE);
    bubbleSort(arr, SIZE);
    printArr(arr, SIZE);
}

void printArr( int arr[], int n ) {

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        if ( (i + 1) % 20 == 0 )
            printf("\n");
    }
    printf("\n");
}

void bubbleSort( int arr[], int n ) {

    int hold, sorted, count = 0;
    for (int j = n; j >= 0; j--) {
        sorted = 1;
        for (int i = 0; i < j - 1; i++) {
            
            if (arr[i] > arr[i + 1]) {

                hold = arr[i]; 
                arr[i] = arr[i + 1];
                arr[i + 1] = hold;
                ++count;
                sorted = 0;
                // printArr(arr, n);
            }
        }
        if (sorted)    /* Not sure whether we can keep this condition in for loop condition itself */
            break;
        }
    printf("%d\n", count);
}