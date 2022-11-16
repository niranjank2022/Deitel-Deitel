/* Q. No. 4.11 */

#include <stdio.h>

int main() {
    int num, small, count;

    printf("\nEnter no. of values : ");
    scanf("%d", &count);
    
    small = count;

    for (count; count > 0; --count)
    {
        printf("\nEnter the value : ");
        scanf("%d", &num);
        
        if (count == count + 1)
            small = num;

        if (num <= small)
            small = num;
    }
    printf("\nSmallest integer : %d", small);


}