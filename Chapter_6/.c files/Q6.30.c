// Sieve of Eratosthenes
#include <stdio.h>
#define SIZE 1000

void main()
{
    int num[SIZE] = {0};

    for (int i = 2; i < SIZE; i++) {

        if (num[i] == 0)
            for (int j = i + 1; j < SIZE; j++)
                if  (j % i == 0)
                    num[j] = 1;
    }

    for (int i = 2; i < SIZE; i++)
        if (num[i] == 0)
            printf("%d ", i);
}