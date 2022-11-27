/* Q. No. 3.24 */

#include <stdio.h>

int main() {

    int counter, number, largest = 0;

    for (counter = 1; counter <= 10; counter++) {

        printf("\nEnter the number : ");
        scanf("%d", &number);

        if (number > largest)
            largest = number;
    }

    printf("\nLargest number is %d", largest);
}