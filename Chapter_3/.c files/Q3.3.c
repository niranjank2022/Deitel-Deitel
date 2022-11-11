/* Q. NO. 3.3
Write a single C statement to accomplish the following
a) Assign the sum of x and y to z and increment the value of x by 1 after calculation.
b), c) Multiply the variable product by 2 using *= and (+ and *) operators.
d) Test if the value of the variable count is greater than 10. If it is, print "Count is greater than 10".
e) Decrement the variable x by 1 then subtract it from the variable total.
f) Add the variable x to the variable total, then decrement x by 1.
g) Calculate the remainder after q is divided by divisor and assign the result to q. Write in two different ways.
h) Print the value 123.4567 with 2 digits of precision. What value is printed?
i) Print 3.14159 with three digits to the right of the decimal point.
 */

#include <stdio.h>

int main() {
    int x1, y, z;    /* a */
    z = ++x1 + y;

    int product;    
    product *= 2;   /* b */
    product = product * 2;  /* c */

    int count;  /* d */
    if (count > 10)
        printf("\n%d is greater than 10.", count);
    
    int x2, total;
    total -= --x2;   /* e */

    total += x2--;   /* f */

    int q, divisor; /* g */
    q = q % divisor;
    q %= divisor;

    float val = 123.4567;   /* h */
    printf("\nThe value with 2 digits of precision : %.2f", val);

    float pi = 3.14159; /* i */
    printf("\nThe value with 3 digits of precision : %.3f", pi);
}