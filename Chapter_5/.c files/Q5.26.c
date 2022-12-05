#include <stdio.h>

int perfect( int );
void printFactors( int );

void main() {

    printf("Perfect numbers : \n");
    for (int i = 1; i <= 1000000; i++)
    {
        if (perfect(i))
            // printf("%d is a perfect number.\n", i);
            printFactors(i);
    }

}

int perfect(int num) {

    int sum = 0;
    for (int i = 1; i < num; i++)
        if (num % i == 0)
            sum += i;
    
    if (num == sum)
        return 1;
    else
        return 0;
}

void printFactors( int num ) {
    printf("\n%d = 1", num);

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            printf(" + %d", i);
    }
    printf("\n");
}
