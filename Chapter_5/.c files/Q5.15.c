/* Q. No. 5.15 */

#include <stdio.h>                              /* Header file */
#include <math.h>

double hypotenuse(double, double);              /* Function Prototype */

void main() {

    double side1, side2;                        /* Variable declaration */
    
    for (int count = 1; count <= 3; count++)    /* Loop */
    {
        printf("\nEnter the side 1 : ");
        scanf("%lf", &side1);

        printf("\nEnter the side 2 : ");
        scanf("%lf", &side2);

        printf("%-10s%-10s%-10s%-12s", "Triangle", "Side 1", "Side 2", "Hypotenuse");
        printf("\n%-10d%-10.2f%-10.2f%-12.2f", count, side1, side2, hypotenuse(side1, side2));
    }
}

double hypotenuse(double x, double y) {         /* Function definition */

    double result;

    result = x*x + y*y;
    result = pow(result, .5);
    return result;
}