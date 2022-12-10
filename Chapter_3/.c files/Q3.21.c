/* Q. No. 3.21 */

#include <stdio.h>

int main() {

    int numhour;
    float rate, pay;

    printf("\nEnter # of hours worked (-1 to end) : ");
    scanf("%d", &numhour);

    while (numhour != -1) {

        printf("Enter hourly rate of the worker : ");
        scanf("%f", &rate);

        if (numhour < 40)
            pay = (float) numhour * rate;
        
        else {
            pay = (float) 40 * rate + (numhour - 40) * (1.5 * rate);
            printf("Salary is $%.2f.", pay);
        }
        // For the next iteration
        printf("\nEnter # of hours worked (-1 to end) : ");
        scanf("%d", &numhour);
    }

}