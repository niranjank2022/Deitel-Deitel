/* Q. No. 3.22 */

#include <stdio.h>

int main() {

    int n1 = 10, n2 = 10, count = 1;

    printf("n1\t--n1\tn2\tn2--\n");
    while (count <= 10) {
        printf("\n%d\t%4d\t", n1, n2);
        printf("%d\t%4d", --n1, n2--);
        ++count;
    }
}