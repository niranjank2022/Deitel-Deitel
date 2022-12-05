#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int flip();

void main() {

    int toss, hCount = 0, tCount = 0;
    for (int i = 1; i <= 100; i++)
    {
        toss = flip();
        switch (toss)
        {
            case 0:
                ++tCount;
                break;
            case 1:
                ++hCount;
                break;
        }
    }

    printf("\nCount of Heads ==> %d\nCount of Tails ==> %d", hCount, tCount);
}

int flip() {
    int result;
    result = rand() % 2;
    return result;
}