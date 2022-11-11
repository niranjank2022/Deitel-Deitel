/* Q No. 2.23
Write a program that reads in five integers and then determines and prints the largest and the smallest integers
in the group*/

#include <stdio.h>

int main() {
    /* Getting the input*/
    int n1, n2, n3, n4, n5;

    printf("Enter number 1 : ");
    scanf("%d", &n1);
    printf("\nEnter number 2 : ");
    scanf("%d", &n2);
    printf("\nEnter number 3 : ");
    scanf("%d", &n3);
    printf("\nEnter number 4 : ");
    scanf("%d", &n4);
    printf("\nEnter number 5 : ");
    scanf("%d", &n5);

    int large, small;

    /* Finding the largest number*/
    large = n1;
    if (n2 > large)
        large = n2;

    if (n3 > large)
        large = n3;

    if (n4 > large)
        large = n4;

    if (n5 > large)
        large = n5;

    /* Finding the smallest number*/
    small = n1;
    if (n2 < small)
        small = n2;

    if (n3 < small)
        small = n3;

    if (n4 < small)
        small = n4;

    if (n5 < small)
        small = n5;

    /* Printing the results */
    printf(" Largest number : %d\n Smallest number : %d", large, small);
}