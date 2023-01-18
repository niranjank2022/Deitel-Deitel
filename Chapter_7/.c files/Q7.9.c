#include <stdio.h>
#define SIZE 5

void main()
{
    unsigned values[ SIZE ] = { 2, 4, 6, 8, 10 };

    unsigned *vPtr;

    // Printing elements using Array subscript notation
    for (int i = 0; i < SIZE; i++)
        printf("%u ", values[i]);
    printf("\n");

    vPtr = values;

    // Printing elements using Pointer/Offset notation
    for (int offset = 0; offset < SIZE; offset++)
        printf("%u ", *(vPtr + offset));
    printf("\n");

    // Printing elements uding Pointer/Offset notation with array name as pointer
    for (int offset = 0; offset < SIZE; offset++)
        printf("%u ", *(values + offset));
    printf("\n");

    // Printing the elements using Pointer subscript notation
    for (int i = 0; i < SIZE; i++)
        printf("%u ", vPtr[i]);
    printf("\n");
}