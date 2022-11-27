/* Q. No. 3.42 */
#include <stdio.h>

void main() {
    float radius, pi = 3.14159;

    printf("\nEnter radius of circle : ");
    scanf("%f", &radius);

    printf("\nDiameter : %.4f", radius * 2);
    printf("\nCircumference : %.4f", 2 * pi * radius);
    printf("\nArea : %.4f", pi * radius * radius);
}