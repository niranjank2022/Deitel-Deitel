/* Q. No. 4.9 */

#include <stdio.h>

int main() {
    int num, sum = 0, count;

    printf("\nEnter no. of values : ");
    scanf("%d", &count);

    for (count; count > 0; count--)
    {
        printf("\nEnter value : ");
        scanf("%d", &num);
        sum += num;
    }
    printf("\nThe sum = %d", sum);

}