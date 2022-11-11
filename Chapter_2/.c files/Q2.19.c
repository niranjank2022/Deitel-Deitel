/* Q.No. 2.19
Write a program that inputs three different integers from the keyboard, then prints the sum, the average, the product,
the smallest and the largest of these numbers. Use only the single selection form of if-statements.
*/
#include <stdio.h>

int main() {
    /* Initial declaration */
    int n1, n2, n3;
    printf("Input three different integers : ");;
    scanf("%d   %d  %d", &n1, &n2, &n3);

    /* Final declaration */
    int sum, avg, prod, small, large;

    sum = n1 + n2 + n3;
    avg = sum / 3;
    prod = n1 * n2 * n3;

    /* Finding the largest */
    large = n1;
    if (n2 > large)
        large = n2;
    if (n3 > large)
        large = n3;

    /* Finding the smallest */
    small = n1;
    if (n2 < small)
        small = n2;
    if (n3 < small)
        small = n3;

    /* Printing the results */
    printf(
    "\nSum : %d\nAverage : %d\nProduct : %d\nLargest number : %d\nSmallest number : %d", sum, avg, prod, large, small
    );

}