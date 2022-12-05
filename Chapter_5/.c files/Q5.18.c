#include <stdio.h>

int even(int);

void main() {

    int num;

    printf("\nEnter the number : ");
    scanf("%d", &num);
    
    while (num != -1) {

        if (even(num))
            printf("\n%d is an Even Number", num);
        else
            printf("\n%d is an Odd Number", num);
        
        printf("\nEnter the number : ");
        scanf("%d", &num);
    }
}

int even(int n) {

    if (n % 2 == 0)
        return 1;
    else
        return 0;
}