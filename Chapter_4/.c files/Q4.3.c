/* Q. No. 4.3
Write statements to accomplish each of the following tasks.
*/
#include <stdio.h>
#include <math.h>

int main() {

    /* i) Sum the odd integers between 1 and 99 using a for structure */
    int sum = 0, count = 1, i = 1;
    for (count = 1; count <= 99; count += 2) {
        sum += count;
        printf("\n%2d) Sum = %d", i++, sum);
    }

    /* ii) print the value 333.546372 in a field width of 15 characters with precisions of 1, 2, 3, 4 and 5.
    Left justify the output. What are the five values that print? */
    float n1 = 333.546372;

    printf("\n%-15.1f", n1);
    printf("\n%-15.2f", n1);
    printf("\n%-15.3f", n1);
    printf("\n%-15.4f", n1);
    printf("\n%-15.5f", n1);

    /* iii) Calculate the value of 2.5 raised to the power of 3 using the pow function. Print the result with
    precision 2 and field width 10. */
    printf("\n2.5 raised to the power of 3 : %10.2f\n", pow(2.5, 3));

    /* iv) Print from 1 to 20 using a while loop and a counter variable x. Print only 5 integers per line. */
    int x = 0;

    while (++x <= 20) {
        printf("%d", x);
        if (x % 5 == 0)
            printf("\n");
        else
            printf("\t");
    }



    
}
