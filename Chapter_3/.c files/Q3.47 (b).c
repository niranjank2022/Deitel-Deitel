#include <stdio.h>

void main() {

    int num = 1, factLoop;
    double e = 1;

    printf("Here we go ...\n");
    while (getchar() != EOF)
    {   
        double fact = 1;
        factLoop = num;

        // Finding the factorial
        while (factLoop >= 1)
            fact *= factLoop--;
        e += 1/fact;
        num++;
    }
}