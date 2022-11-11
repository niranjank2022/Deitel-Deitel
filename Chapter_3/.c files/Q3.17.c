#include <stdio.h>

int main() {
    float gallon, mile, div, totalGallon = 0, totalMile = 0;
    
    while (gallon != -1) {
        printf("\nEnter the gallons used (-1 to end) : ");
        scanf("%f", &gallon);
        printf("\nEnter the miles driven : ");
        scanf("%d", &mile);

        div = (float) gallon/mile;

        printf("The mile / gallon for this tank was %f", div);
        totalGallon += gallon;
        totalMile += mile;
    }

    printf("The overall average miles/gallon was %f", (totalGallon/totalMile));

}