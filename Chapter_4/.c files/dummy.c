/* Q. No. 4.34 */

#include <stdio.h>

int main() {

    int deci, place = 1;
    int rem, quo;

    for (deci = 1; deci <= 256; ++deci)
    {        
        // Decimal to binary
        while (quo == 0) {

            rem = deci % 2;
            quo = deci / 2;

            printf("%d", (rem * place));
            place *= 10;
        }
        printf("\n");
        
    }
}