/* Q. No. 4.26 */

#include <stdio.h>
#include <math.h>

int main() {
    double pi, sum = 0, val;
    double count = 1.0;

    while (count <= 10) {

        val = count;
        sum += (1/val) * pow(-1.0, count + 1.0);

        pi += sum * 4;
        printf("\nValue approximated by %.1f terms : %f", count, pi);
        
        ++count;    // count increments by 1
        ++val;      // val increments by 2

    }
}