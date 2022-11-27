#include <stdio.h>

void main() {

    int num = 1, loop_num1, loop_num2, x;
    double e = 1;

    printf("\nEnter the power of x (i.e. e^^x) : ");
    scanf("%d", &x);

    while (getchar() != EOF)
    {   
        int fact = 1, xpow_n = 1;
        loop_num1 = loop_num2 = num;

        // Finding the factorial
        while (loop_num1 >= 1)
            fact *= loop_num1--;
        
        // Finding the vale of x^n
        while (x > 0 && loop_num2-- >= 1)
            xpow_n *= x;
            
        if (x == 0)
            xpow_n = 1;

        e += (double) xpow_n/fact;
        printf("\nValue of e ==> %lf\n", e);
        num++;

    }
}