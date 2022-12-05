#include <stdio.h>

int reverse1( int );
void reverse2( int );

void main() {

    int num;
    
    printf("Enter a number : ");
    scanf("%d", &num);

    printf("Reverse of %d ==> %d", num, reverse1(num));
    reverse2(num);
}

int reverse1(int number) {

    int num = number;
    // Finding no. of digits
    int quo, tenPower = 10, noOfDigit = 0;
    while (quo != 0) {

        quo = num / tenPower;
        tenPower *= 10;
        ++noOfDigit;
    }

    // Finding the reverse
    int rem, reverse = 0;
    for (int i = noOfDigit; i >= 1; i--)
    {
        rem = num % 10;
        num /= 10;
        for (int j = i; j > 1; j--)
            rem *= 10;
        reverse += rem;
    }

    return reverse;
}

void reverse2(int num) {

    int rem;
    printf("\nReverse of %d is ", num);

    while (num) {
        rem = num % 10;
        num /= 10;
        printf("%d", rem);
    }
    printf("\n");

}
