#include <stdio.h>
#define SIZE 10

int binarySearch( int [], int, int, int );

void main()
{
    int arr[SIZE] = { 23, 45, 67, 78, 89, 90, 123, 234, 567, 678 };

    

    printf("\n%d ", binarySearch(arr, 18, 0, SIZE - 1));
}

int binarySearch( int arr[], int key, int start, int end)
{
    int mid = (start + end) / 2;
    if (key == arr[mid])
        return mid;
    else if (mid == 0)
        return -1;
    else if (key > arr[mid])
        binarySearch(arr, key, mid + 1, end);
    else if (key < arr[mid])
        binarySearch(arr, key, start, mid - 1);
}