/* Q.No. 2.20
Write a program that reads in the radius of a circle and print's the circle's 
diameter, circumference and area. Use the constant value 3.14159 for pi. Do each
of these calculations inside the printf statement(s) and use the conversion 
specifier %f.
*/
#include <stdio.h>

int main() {
    int radius;
    float pi = 3.14159;

    printf("Enter the radius : ");
    scanf("%d", &radius);

    printf("\nDiameter : %d\nCircumference : %f\nArea : %f", (radius * 2), (2 * pi * radius), (pi * radius * radius));
    

}