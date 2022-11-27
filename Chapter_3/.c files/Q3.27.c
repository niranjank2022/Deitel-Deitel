/* Q. No. 3.27 */

#include <stdio.h>

int main() {

    int counter, number, largest1 = 0, largest2 = 0;

    for (counter = 1; counter <= 10; counter++) {

        printf("\nEnter the number : ");
        scanf("%d", &number);

        if (number > largest1)
            largest1 = number;
        
        else if (number > largest2)
            largest2 = number;
    }   

    printf("\nFirst Largest number is %d. Second Largest number is %d.", largest1, largest2);
}