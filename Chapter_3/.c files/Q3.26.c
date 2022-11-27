/* Q. No. 3.26 */

#include <stdio.h>

int main() {

    int count;

    printf("%6s %6s %6s %6s", "A", "A+2", "A+4", "A+6");
    for (count = 3; count <= 15; count += 3) {
        
        printf("\n%6d %6d %6d %6d", count, count+2, count+4, count+6);
    }
}