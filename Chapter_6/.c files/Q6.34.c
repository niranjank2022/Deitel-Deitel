#include <stdio.h>
#define SIZE 10

int linearSearch( int [], int, int );

void main()
{
    int arr[SIZE] = {2, 5, 6, 54, 24, 98, 3, 10, 5, 345};

    linearSearch(arr, SIZE, 54);

    printf("%d", linearSearch(arr, SIZE, 2));

}

int linearSearch( int arr[], int n, int key )
{
    if (arr[n] == key)
        return n;
    else if (n < 0)
        return -1;
    else
        linearSearch(arr, (n - 1), key);
}