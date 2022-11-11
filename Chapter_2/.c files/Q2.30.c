/* Q. No. 2.30
Write a program that inputs one five-digit number, separates the number into its individual digits and prints the
digits separated from one another by three spaces each. Hint: Use combinations of integer division and modulus.
*/
#include <stdio.h>

int main() {
    int num;
    printf("Enter a five-digit number : ");
    scanf("%d", &num);

    int _5, _4, _3, _2, _1;
    _1 = num % 10;
    num -= _1;

    _2 = (num % 100) / 10;
    num -= _2;

    _3 = (num % 1000) / 100;
    num -= _3;

    _4 = (num % 10000) / 1000;
    num -= _4;

    _5 = (num % 100000) / 10000;

    printf("\n%d\t%d\t%d\t%d\t%d\n", _5, _4, _3, _2, _1);
}