/* Q. No. 3.20 */

#include <stdio.h>

int main() {

    int days;
    float principal, rate, interest;

    do {
        printf("\nEnter loan principal (-1 to end) : ");
        scanf("%f", &principal);

        printf("\nEnter interest rate : ");
        scanf("%f", &rate);

        printf("\nEnetr term of loan in days : ");
        scanf("%d", &days);

        interest = (float) (principal * rate * days) / 365;
        printf("\nThe  interest charge is $%.2f", interest);
    } while (principal != 1);

}