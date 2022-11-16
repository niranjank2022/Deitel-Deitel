/* Q. No. 4.12 */
#include <stdio.h>

int main() {

    int sum = 0, num;

    for (num = 2; num <= 30; num += 2)
        sum += num;

    printf("\nSum of even integers from 2 to 30 : %d", sum);
}