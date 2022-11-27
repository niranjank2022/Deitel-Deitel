/* Q. No. 3.25 */

#include <stdio.h>

int main() {

    int count;

    printf("%6s %6s %6s %6s", "N", "10*N", "100*N", "1000*N");
    for (count = 1; count <= 10; count++) {
        
        printf("\n%6d %6d %6d %6d", count, 10*count, 100*count, 1000*count);
    }
}