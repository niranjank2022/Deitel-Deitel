/* Q.No. 2.16 */
/* Write a  program that asks the user to enter two numbers, obtains the two numbers from the user and prints the 
sum, difference, product, quotient and modulus of the two numbers.*/

#include <stdio.h>

int main() {
    /* Initial declaration */
    int num1, num2;
    printf("Enter number 1 : ");
    scanf("%d", &num1);
    printf("Enter number 2 : ");
    scanf("%d", &num2);

    /*New declarations*/
    int sum, difference, product, quotient, modulus;
    sum = num1 + num2;
    difference = num1 - num2;
    product = (num1 * num2);
    quotient = num1 / num2;
    modulus = num1 % num2;

    printf("Sum : %d\nDifference : %d\nProduct : %d\nQuotient : %d\nModulus : %d", sum, difference, product, quotient, modulus);
    return 0;
}