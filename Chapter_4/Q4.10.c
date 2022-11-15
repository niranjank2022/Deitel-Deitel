/* Q. No. 4.10 */

#include <stdio.h>

int main()
{
    int num, sum = 0, count = 0, avg;

    printf("\nEnter the number : ");
    scanf("%d", &num);

    while (num != 9999) {
        sum += num;
        ++count;
        printf("\nEnter the number : ");
        scanf("%d", &num);
    }

    if (num == 9999 && count == 0)
        printf("\nAverage can't be found");
    
    else {
        avg = (float) sum/count;
        printf("The average value is %d", avg);
    }
}