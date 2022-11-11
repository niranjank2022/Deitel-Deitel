#include <stdio.h>

int main() {
    int sum;
    printf("\nSum : %d", sum);  /* Why sum's value is 8. */
    sum = sum + 2;
    printf("\nSum : %d", sum);

    int prod = 2;
    float val;

    while (prod < 2000) {
        prod = prod * 2;
        printf("\nprod value : %d", prod);
    }
    scanf("\n%f", &val); 
    printf("Val = %.3f", val);
}