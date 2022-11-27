/* Q.No. 5.9 */

#include <stdio.h>

float calculateCharges(float);

int main() {

    int car;
    float hrs, totalc = 0, totalh = 0;

    printf("|%7s|%7s|%7s|", "Car", "Hours", "Charge");
    for (car = 1; car <= 3; car++)
    {   
        printf("\nCar %d, enter no. of hours : ", car);
        scanf("%f", &hrs);

        printf("|%7d|%7.1f|%7.2f|", car, hrs, calculateCharges(hrs));
        totalc += calculateCharges(hrs);
        totalh += hrs;
    }
    printf("\n|%7s|%7.1f|%7.2f", "TOTAL", totalh, totalc);

}

float calculateCharges(float hrs) {
    float charge;

    if (hrs <= 3.0)
        charge = 2.00;
    else if (hrs > 3 && hrs <= 24)
    {
        charge = 2 + (hrs - 3) * .5;
        if (charge >= 10.)
            charge = 10.;
    }
    else if (hrs > 24)
        charge = 10 + (hrs - 24) * .5;

    return charge;
}
