#include <stdio.h>

float smallf( float, float, float );

void main() {

    float n1, n2, n3;

    printf("\nEnter three floating point numbers : ");
    scanf("%f%f%f", &n1, &n2, &n3);

    printf("The smallest number is %.3f.", smallf(n1, n2, n3));
}

float smallf(float n1, float n2, float n3) {

    float small = n1;

    if (n2 < small)
        small = n2;
    
    if (n3 < small)
        small = n3;

    return small;
}
