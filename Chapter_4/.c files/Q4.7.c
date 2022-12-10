/* Q. No. 4.7 */
#include <stdio.h>

int main() {
    int i;
    /* Loop 1 */
    for ( int i = 1; i <= 7; i++)
        printf("%d  ", i);
    printf("\n");

    /* Loop 2 */
    for (i = 3; i <= 23; i += 5)
        printf("%d  ", i);
    printf("\n");

    /* Loop 3 */
    for ( int i = 20; i >= -10; i -= 6)
        printf("%d  ", i);
    printf("\n");

    /* Loop 4 */
    for ( int i = 19; i <= 51; i += 8)
        printf("%d  ", i);
    printf("\n");
}