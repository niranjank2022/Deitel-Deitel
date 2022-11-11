/* Q. No. 3.6
*/
#include <stdio.h>

int main() {
    int x = 5, product = 5, result;

    product *= x++;
    result = ++x + x;

    printf("product : %d\nresult : %d", product, result);
}