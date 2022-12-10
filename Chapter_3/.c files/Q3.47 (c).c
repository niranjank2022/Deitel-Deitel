#include <stdio.h>

void main() {

    int num = 1, factLoop, powLoop, x;
    double e = 1;

    printf("\nEnter the power of x (i.e. e^^x) : ");
    scanf("%d", &x);

    while (getchar() != EOF)
    {   
        double fact = 1, xpow_n = 1;
        factLoop = powLoop = num;

        // Finding the factorial
        while (factLoop >= 1)
            fact *= factLoop--;
        
        // Finding the value of x^n
        while (x > 0 && powLoop-- >= 1)
            xpow_n *= x;
        
        if (x == 0)
            xpow_n = 1;

        e += xpow_n/fact;
        printf("\nValue of e ==> %.20lf\n", e);
        num++;
    }
}