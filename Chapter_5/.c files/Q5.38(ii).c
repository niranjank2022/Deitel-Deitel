// 1477th fibonacci number is the largest number in double type
#include <stdio.h>

double fibonacci( int );

void main() {

    int num;

    printf("Enter n (to find the nth fibonacci number) : ");
    scanf("%d", &num);

    printf("%.1lf", fibonacci(num));
}

double fibonacci(int limit) {
    
    double n1 = 0, n2 = 1, n3;

    if (limit == 1)
        return 0;

    else if (limit == 2)
        return 1;

    else {
        for (double i = 3; i <= limit; i++) {
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
        }

        return n3;
    }   
}