/* Q. No. 3.20 */

#include <stdio.h>

int main() {

    int days;
    float principal, rate, interest;

    printf("\nEnter loan principal (-1 to end) : ");
    scanf("%f", &principal);

    while (principal != -1) {

        printf("\nEnter interest rate : ");
        scanf("%f", &rate);

        printf("\nEnter term of loan in days : ");
        scanf("%d", &days);

        interest = (float) (principal * rate * days) / 365;
        printf("\nThe  interest charge is $%.2f", interest);

        // Beginning of next iteration
        printf("\nEnter loan principal (-1 to end) : ");
        scanf("%f", &principal);
    }
}