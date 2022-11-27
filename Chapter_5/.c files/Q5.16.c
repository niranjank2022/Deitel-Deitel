/* Q. No. 5.16 */

#include <stdio.h>

int integerPower(int, int);

void main() {

    printf("\n5^4 ==> %d", integerPower(5, 4));
    printf("\n8^3 ==> %d", integerPower(8, 3));
}

int integerPower(int x, int y) {

    int result = 1;

    for (y; y >= 1; y--)
        result *= x;

    return result;
}