#include <stdio.h>

int multiple(int, int);

void main() {

    int num1, num2;
    do
    {
        printf("\n\nEnter two numbers : ");
        scanf("%d%d", &num1, &num2);

        printf("Result : %d", multiple(num1, num2));

        if (multiple(num1, num2))
            printf("\n%d is a multiple  of %d.", num1, num2);
        else
            printf("\n%d is not a multiple of %d.", num1, num2);

    } while (num1 != -1);
}

int multiple( int n1, int n2) {
    
    if (n1 % n2 == 0)
        return 1;
    else
        return 0;
}
