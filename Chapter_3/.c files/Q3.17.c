#include <stdio.h>

int main() {
    float gallon, mile, div, totalGallon = 0, totalMile = 0;
    
    do {
        printf("\nEnter the gallons used (-1 to end) : ");
        scanf("%f", &gallon);
        printf("\nEnter the miles driven : ");
        scanf("%f", &mile);

        div = gallon/mile;

        printf("The mile / gallon for this tank was %.4f", div);
        totalGallon += gallon;
        totalMile += mile;
    } while (gallon != -1);

    printf("\nThe overall average miles/gallon was %f", (totalGallon/totalMile));

}