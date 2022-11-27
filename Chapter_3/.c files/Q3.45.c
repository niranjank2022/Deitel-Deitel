/* Q. No. 3.45 */
#include <stdio.h>

void main() {

    int s1, s2, s3, hypotenuse;

    printf("\nEnter side 1 : ");
    scanf("%d", &s1);

    printf("\nEnter side 2 : ");
    scanf("%d", &s2);
    
    printf("\nEnter side 3 : ");
    scanf("%d", &s3);

    if (s1 * s1 == s2 * s2 + s3 * s3)
        printf("\n%d, %d, %d form a right triangle", s1, s2, s3);

    else if (s2 * s2 == s1 * s1 + s3 * s3)
        printf("\n%d, %d, %d form a right triangle", s1, s2, s3);

    else if (s3 * s3 == s1 * s1 + s2 * s2)
        printf("\n%d, %d, %d form a right triangle", s1, s2, s3);
    
    else 
        printf("\n%d, %d, %d DON'T form a right triangle", s1, s2, s3);
    
    
}