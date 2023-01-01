/* Bucket Sort */
#include <stdio.h>
#define SIZE 20

void bucketSort( int [], int );
void printArr( int [], int );

void main()
{
    int array[SIZE] = {21, 14, 509, 76, 13, 34, 27, 654, 12, 8, 45, 23, 23, 455, 7, 4, 6, 90, 17, 619};

    printArr(array, SIZE);

    bucketSort(array, SIZE);

    printArr(array, SIZE);
}

void bucketSort( int arr[], int n )
{   
    int bucket[10][n], place = 1, result;
    
    // Finding the largest number
    int large = 0;
    for (int i = 0; i < n; i++)
        if (large < arr[i])
            large = arr[i];

    // Sorting
    do {    
        // Intitialization of buckets array
        for (int i = 0; i <= 9; i++)
            for (int j = 0; j < n; j++)
                bucket[i][j] = 0;
        // Performing the sort        
        for (int i = 0; i < n; i++) {
            result = arr[i] / place;
            result %= 10;
            bucket[result][i] = arr[i];
        }
        // Copying the sorted values to the original array
        for (int i = 0, k = 0; i <= 9; i++)
            for (int j = 0; j < n; j++) {
                if (bucket[i][j] != 0)
                    arr[k++] = bucket[i][j];
            }
        place *= 10;
    } while (large / place != 0);
}

void printArr( int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}