#include <stdio.h>
#include <stdlib.h>

void main() {
    
    int  num1, num2, resp;    
    for (int i = 1; i <= 10; i++)
    {
        num1 = rand() % 10;
        num2 = rand() % 10;
        printf("How much is %d times %d?...", num1, num2);
        scanf("%d", &resp);

        while (resp != num1 * num2)
        {
            printf("\nNo, please try again!");
            scanf("%d", &resp);
        }
        printf("\nVery Good. Let's move on to the next question.\n");
    }
}

