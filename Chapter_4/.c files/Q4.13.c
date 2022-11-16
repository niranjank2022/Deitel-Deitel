/* Q. No. 4.12 */
#include <stdio.h>

int main() {

    int prod = 1, num;

    for (num = 1; num <= 15; num += 2)
        prod *= num;

    printf("\nProduct of odd integers from 1 to 15 : %d", prod);
}