#include <stdio.h>

int gcd( int, int);

void main() {
     int n1, n2;

     printf("Enter three numbers : ");
     scanf("%d%d", &n1, &n2);

     printf("GCD of %d and %d ==> %d", n1, n2, gcd(n1, n2));
}

int gcd(int n1, int n2) {

    int small, large;

    if (n1 / n2 == 0)
        small = n1, large = n2;
    else
        small = n2, large = n1;
    
    for (int i = small; i >= 1; i--)
    {
        if ((small % i == 0) && (large % i == 0)) {
            return i;
            break;
        }
    }
}