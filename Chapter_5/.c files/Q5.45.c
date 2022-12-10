#include <stdio.h>
#include <math.h>

double distance(double, double, double, double);

void main() {

    double n1, n2, n3, n4;

    printf("Enter point 1 (x1, y1) : ");
    scanf("%lf%lf", &n1, &n2);

    printf("Enter point 2 (x1, y1) : ");
    scanf("%lf%lf", &n3, &n4);

    printf("Distance between (%.2lf, %.2lf) and (%.2lf, %.2lf) ==> %.2lf units", n1, n2, n3, n4, distance(n1, n2, n3, n4));
}

double distance(double x1, double y1, double x2, double y2) {
    double result;
    
    result = pow( pow(x2 - x1, 2) + pow(y2 - y1, 2), .5 );
    return result;
}