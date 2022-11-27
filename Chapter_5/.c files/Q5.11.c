/* Q. No. 5.11 */

#include <stdio.h>
#include <math.h>

double roundToInteger(double);
double roundToTenths(double);
double roundToHundredths(double);
double roundToThousandths(double);

void main() {

    double num;

    while (num != -1)
    {
        printf("\nEnter the number : ");
        scanf("%lf", &num);

        printf("\n|%-10s|%-15s|%-15s|%-15s|%-15s|", "Number", "Nearest Integer", "Nearest 10s", "Nearest 100s", "Nearest 1000s");
        printf("\n|%10f|%15f|%15f|%15f|%15f|", num, roundToInteger(num), roundToTenths(num), roundToHundredths(num), roundToThousandths(num));
    }
}

double roundToInteger(double x) {
    double y;
    y = floor(x + .5 );
    return y; 
}

double roundToTenths(double x) {
    double y;
    y = floor(x*10 + .5 ) / 10;
    return y; 
}

double roundToHundredths(double x) {
    double y;
    y = floor(x*100 + .5 ) / 100;
    return y;
}

double roundToThousandths(double x) {
    double y;
    y = floor(x*1000 + .5 ) / 1000;
    return y; 
}