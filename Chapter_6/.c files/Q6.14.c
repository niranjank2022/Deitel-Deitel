#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

void createArr( int [] );
void printArr( const int [] );
void mean( const int [] );
void median( int [] );
void mode( int [], const int [] );
void bubbleSort( int [] );

void main() {

    int arr[SIZE], freq[10] = {0};

    printf("The array we are going to use...\n");
    createArr(arr);
    printArr(arr);

    mean(arr);
    median(arr);

    // printf("\n\n\n\n\n\n");
    // printArr(freq);
    mode(freq, arr);
}

void createArr( int arr[] )
{
    srand( time(NULL) );
    for (int i = 0; i < SIZE; i++)
        arr[i] = 1 + rand() % 10;
}

void printArr( const int arr[] )
{
    for (int i = 0; i < SIZE; i++) {
        printf("%-2d ", arr[i]);
        if ( (i + 1) % 20 == 0 )
            printf("\n");
    }
}

void bubbleSort( int arr[] )
{
    int hold, sorted;

    for (int i = SIZE; i > 0; i--) {
        
        sorted = 1;
        for (int j = 0; j < i - 1; j++)
            if ( arr[j] > arr[j + 1] ) {

                hold = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = hold;
                sorted = 0;
            }
            
        if (sorted)
            break;
    }
}

void mean( const int arr[] )
{
    int total = 0;

    printf("\n%s\n  %s\n%s\n", "********", "MEAN", "********");

    for (int i = 0; i < SIZE; i++)
        total += arr[i];
    
    printf("\nMean of the data ==> %.4lf\n", (double) total / SIZE);
}

void median( int arr[] )
{
    printf("\n\n\n%s\n %s\n%s\n%s\n", "********", "MEDIAN", "********", "\nThe unsorted array ...\n");
    printArr(arr);

    bubbleSort(arr);

    printf("\nThe Sorted array ...\n\n");
    printArr(arr);

    float median;
    if (SIZE % 2 != 0)
        median = arr[ SIZE / 2 ];
    else
        median = (float) ( arr[ SIZE / 2 ] + arr[ SIZE / 2 + 1 ] ) / 2;
    
    printf("Median of the data ==> %.2f\n", median);
}

void mode( int freq[], const int arr[] )
{
    printf("\n\n\n%s\n  %s\n%s\n", "********", "MODE", "********");

    for (int i = 0; i < SIZE; i++)
        ++freq[ arr[i] ];
    
    printf("%s%11s%19s\n\n%54s\n%54s\n\n", "Response", "Frequency", "Histogram", "1    1    2    2", "5    0    5    0    5");

    int large = 0;
    for (int i = 0; i < 10; i++) {
        
        printf("%8d%11d%10s", i, freq[i], " ");
        for (int j = 0; j < freq[i]; j++)
            printf("*");
        printf("\n");

        if (large < freq[i])
            large = freq[i];
    }

    printf("\nThe mode(s) with frequency %d is/are ...", large);
    for (int i = 0; i < 9; i++)
        if (freq[i] == large)
            printf(" %d ", i);   
}