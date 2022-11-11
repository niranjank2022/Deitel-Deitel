/* Q. NO. 3.7
Write single C statements... 
*/
#include <stdio.h>

int main() {
    int x, y;
    printf("\nEnter number X : ");
    scanf("%d", &x);
    printf("\nEnter number Y : ");
    scanf("%d", &y);

    int i = 1, power = 1;
    power = power * x;
    y++;

    if (y >= x)
        printf("\n%d is less than or equal to %d", x, y);
    else
        printf("\n%d is not less than or equal to %d", x, y);
    
    printf("\nvar power = %d", power);

}
