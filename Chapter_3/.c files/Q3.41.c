/* Q. No. 3.41 */
#include <stdio.h>

void main() {

    int exponent = 2;

    while (exponent % 2 == 0) {

        printf("\t%d", exponent);
        exponent = exponent * 2;
    }
}