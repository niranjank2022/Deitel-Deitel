/* Q. No. 4.14 */
#include <stdio.h>

int main() {
    int num1, num2, result = 1;

    for (num1 = 1; num1 <= 5; ++num1) {
        if (num1 == 1)
            result = 1;
        else { /*  result = 1 in the beginning of each iteration */
            for (num2 = num1, result = 1; num2 > 1; --num2)
                result *= num2;
        }
        printf("\nFactorial of %d ==> %d", num1, result);
        // result = 1;
    }
}