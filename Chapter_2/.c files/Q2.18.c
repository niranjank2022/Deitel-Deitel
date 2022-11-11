/* Q. NO. 2.18
 Write a program that asks the user to enter two integers, obtains the numbers from the user, then prints the 
larger number followed by the words "is larger". If the numbers are equal prints the message "These numbers are
equal". Use only the single-selection form of if-statement. 
*/
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter the numbers : ");
    scanf("%d", &a);
    scanf("%d", &b);


    if (a > b)
        printf("%d is larger than %d", &a, &b);
    
    if (b > a)
        printf("%d is larger than %d", &b, &a);

    if (a == b)
        printf("%d and %d are equal.", &a, &b);
}
