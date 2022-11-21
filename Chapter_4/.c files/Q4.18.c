/* Q. No. 4.18 */

#include <stdio.h>

int main()
{
    int line, num;

    printf("\nEnter any number between 1 and 30 ...");
    for (line = 1; line <= 5; ++line)
    {
        printf("\nEnter number %d : ", line);
        scanf("%d", &num);

        for (num; num >= 1; --num)
            printf("*");
        printf("\n");
    }
}