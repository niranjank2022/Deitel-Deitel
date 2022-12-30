/* Q. No. 4.26 */

#include <stdio.h>
#include <math.h>

int main() {
    double pi = 0, val;
    double count = 1.0;

    val = 1;
    while (count <= 10) {

        pi += (4/val) * pow(-1.0, count + 1.0);

        // pi += sum;
        printf("\nValue approximated by %.1f terms : %f", count, pi);
        
        ++count;    // count increments by 1
        val += 2;      // val increments by 2
    }
}