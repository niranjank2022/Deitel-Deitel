/* Q. No. 3.21 */

#include <stdio.h>

int main() {

    int numhour;
    float rate, pay;

    do {
        printf("\nEnter # of hours worked (-1 to end) : ");
        scanf("%d", &numhour);

        printf("Enter hourly rate of the worker : ");
        scanf("%f", &rate);

        if (numhour < 40)
            pay = (float) numhour * rate;
        
        else {
            pay = (float) 40 * rate + (numhour - 40) * (1.5 * rate);
            printf("Salary is $%.2f.", pay);
        }
    } while (numhour != -1);

}