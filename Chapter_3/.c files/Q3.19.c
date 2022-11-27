/* Q. No. 3.19 */

#include <stdio.h>

int main() {

    float weekGross, pay;

    printf("\nEnter this week gross : $ ");
    scanf("%f", &weekGross);

    pay = weekGross*0.09 + 200;

    printf("\nYour pay is $ %.2f", pay);

}