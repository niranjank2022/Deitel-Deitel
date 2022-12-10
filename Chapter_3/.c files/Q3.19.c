/* Q. No. 3.19 */

#include <stdio.h>

int main() {

    float weekGross, pay;

    printf("\nEnter this week gross : $ ");
    scanf("%f", &weekGross);

    while (weekGross != -1) {
        pay = weekGross*0.09 + 200;
        printf("Your pay is $ %.2f\n", pay);

        printf("\nEnter this week gross (-1 to end): $ ");
        scanf("%f", &weekGross);
    }
}