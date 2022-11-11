/* Write C statements to accomplish the following
a) Declare variables sum and x to type be int.
b) Initialize variable x to 1.
c) Initialize variable sum to 0.
d) Add x to sum and assign the result to sum.
e) Print "The sum is : " followed by the value of sum.
*/
#include <stdio.h>

int main() {
    int sum, x;
    x = 1;
    sum = 0;
    sum += x;
    printf("The sum is : %d", sum);
}