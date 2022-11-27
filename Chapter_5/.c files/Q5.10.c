/* Q. No. 5.10 */

#include <stdio.h>
#include <math.h>

int main() {

    double num;

    while (num != -1)
    {
        printf("\nEnter the number : ");
        scanf("%lf", &num);

        printf("Original No. : %.2f\t\tRounded No. : %.2f", num, floor(num + .5) );
    }

    return 0;
}