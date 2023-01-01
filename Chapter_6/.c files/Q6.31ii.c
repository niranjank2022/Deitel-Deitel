/* Bucket Sort */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 20

void createArr( int [], int );
void bucketSort( int [], int );
void printArr( int [], int );

void main()
{
    int array[SIZE];

    createArr(array, SIZE);
    printArr(array, SIZE);

    bucketSort(array, SIZE);

    printArr(array, SIZE);
}

void bucketSort( int arr[], int n )
{   
    int bucket1[10][n], bucket2[10][n], place = 1, result;
    
    // Finding the largest number
    int large = 0;
    for (int i = 0; i < n; i++)
        if (large < arr[i])
            large = arr[i];
    // Intitialization of buckets array
        for (int i = 0; i <= 9; i++)
            for (int j = 0; j < n; j++)
                bucket1[i][j] = bucket2[i][j] = 0;
                
    // Sorting
    do {    
        
        // Performing the sort        
        for (int i = 0; i < n; i++) {
            result = arr[i] / place;
            result %= 10;
            bucket1[result][i] = arr[i];
        }
        // Copying the sorted values to the bucket2[] array
        for (int i = 0, k = 0; i <= 9; i++)
            for (int j = 0; j < n; j++) {
                if (bucket1[i][j] != 0)
                    arr[k++] = bucket1[i][j];
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

void createArr( int arr[], int n)
{
    for (int i = 0; i < n; i++)
        arr[i] = 1 + rand() % 100;
}