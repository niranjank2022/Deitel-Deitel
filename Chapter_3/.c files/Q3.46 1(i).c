/* Q. No. 3.46 */

#include <stdio.h>

void main() {

    int num, result = 0;
    int one, ten, hund, thous;
    
    printf("\nEnter a four-digit number to encrypt : ");
    scanf("%d", &num);

    thous = num / 1000;
    num -= thous * 1000;
    result += (thous + 7) % 10 * 1000;

    hund = num / 100;
    num -= hund * 100;
    result += (hund + 7) % 10 * 100;

    ten = num / 10;
    num -= ten * 10;
    result += (ten + 7) % 10 * 10;

    result += (num + 7) % 10;

    printf("\nEncrypted number : %d", result);

}