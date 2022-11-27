/* Q. No. 4.34 */

#include <stdio.h>

int main() {

    int deci, hex, oct;
    int rem, num;

    printf("Let's go...\n");

    
    for (num = 1; num <= 64; ++num)
    {   
        // Decimal to binary
        deci = num;
        int place = 1;
        int bin = 0;
        while (deci) {

            rem = deci % 2;
            deci /= 2;
            bin += rem * place;
            place *= 10;
        }
        printf("\n%d", bin);

        // Deciaml to octal
        deci = num;
        place = 1;
        int oct = 0;
        while (deci) {

            rem = deci % 8;
            deci /= 8;
            oct += rem * place;
            place *= 10;
        }
        printf("\n%d", oct);

        // Deci to Hex
        deci = num;
        place = 1;
        int hex = 0;
        while (hex) {

            rem = hex % 2;
            hex /= 2;
            hex += rem * place;
            place *= 10;
        }
        printf("\n%d", bin);
        
    }
}