/* Q. No. 3.44 */
#include <stdio.h>

void main() {

    float side1, side2, side3;

    printf("\nEnter side 1 : ");
    scanf("%f", &side1);

    printf("\nEnter side 2 : ");
    scanf("%f", &side2);
    
    printf("\nEnter side 3 : ");
    scanf("%f", &side3);

    if (side1 + side2 > side3)
        if (side2 + side3 > side1)
            if (side3 + side1 > side2)
                printf("\n%f, %f and %f form a triangle.", side1, side2, side3);

    else
        printf("\nThey doesn't form a triangle.");


}