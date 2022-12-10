#include <stdio.h>

int gcd( int, int );

void main() {

    int n1, n2;

    printf("Enter two numbers : ");
    scanf("%d%d", &n1, &n2);

    printf("\nThe GCD of %d and %d ==> %d", n1, n2, gcd(n1, n2));
}

int gcd(int a, int b) {
        
        // Storing the max. value in a and min. value in b
        if (b > a) {
            a = a + b;
            b = a - b;
            a -= b;
        }
        if (b == 0)
            return a;
        
        else
            return gcd(b, (a % b));
}