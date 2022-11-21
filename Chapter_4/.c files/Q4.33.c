/* Q. No. 4.33 */

#include <stdio.h>

int main() {

    int num, fif, tens, ones;

    do {
    printf("\n\nEnter any number from 1 to 100 : ");
    scanf("%d", &num);

    printf("\nRoman numeral equivalent of %d is --> ", num);
    // num == 100
    if (num == 100)
        printf("C");

    // num >= 90
    else if (num >= 90)
    {    printf("XC");
         num -= 90;
    }

    // num >= 50
    else if (num >= 50)
    {    
        printf("L");
        num -= 50;
    }

    // These are outside the above if-else selection structure
    // num >= 10
    tens = num / 10;
    if (num >= 10)
    {
        switch (tens)
        {
        case 1:
            printf("X");
            break;
        case 2:
            printf("XX");
            break;
        case 3:
            printf("XXX");
            break;
        case 4:
            printf("XL");
            break;

        default:
            break;
        };
    }
    // num < 10
    ones = num % 10;
    switch (ones)
    {
        case 1:
            printf("I");
            break;
        case 2:
            printf("II");
            break;
        case 3:
            printf("III");
            break;
        case 4:
            printf("IV");
            break;
        case 5:
            printf("V");
            break;
        case 6:
            printf("VI");
            break;
        case 7:
            printf("VII");
            break;
        case 8:
            printf("VIII");
            break;
        case 9:
            printf("IX");
            break;
        
        default:
            break;        
    }
} while (num != -1);
}