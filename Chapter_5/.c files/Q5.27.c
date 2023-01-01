/* The upper limit off the for loop can be n, n / 2 or sqrt(n) */

#include <stdio.h>
#include <math.h>

int isPrime( int );

void main() {
    int count = 0;
    for (int i = 2; i <= 1000; i++)
    {
        if (isPrime(i)) {
            printf("%d   ", i);
            count++;
            }
    }
    printf("\nCount = %d", count);
}

int isPrime(int num) {

    for (int i = 2; i <= sqrt(num); i++)
    {   
        if (num % i == 0) {         /* The function returns 0 (false, not prime) if the loop breaks */
            return 0;               /* If num is not divisible by any number, the control will exit the loop */
            break;                  /* after all the iterations and returns 1 (true, is prime). */
        }
    }

    return 1;
}