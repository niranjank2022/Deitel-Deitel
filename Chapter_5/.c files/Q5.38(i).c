// 47th fibonacci number is the largest number printed using 'int'

#include <stdio.h>

int fibonacci( int );

void main() {

    int num;

    printf("Enter n (to find the nth fibonacci number) : ");
    scanf("%d", &num);

    printf("%d", fibonacci(num));
}

int fibonacci(int limit) {
    
    int n1 = 0, n2 = 1, n3;

    if (limit == 1)
        return 0;

    else if (limit == 2)
        return 1;

    else {
        for (int i = 3; i <= limit; i++) {
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
        }
        return n3;
    }   
}