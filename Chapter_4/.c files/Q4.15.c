/* Q. No. 4.15 */
#include <stdio.h>
#include <math.h>

int main() {
    int year;
    double amount, principal = 1000.0, rate;

    printf("\n|%-6s|%-6s|%-18s|", "Year", "Rate", "Amount on deposit");

    for (rate = .05; rate <= .1; rate += .01) {

        for (year = 1; year <= 10; ++year) {
            amount = principal * pow(rate + 1, year);
            printf("\n|%-6d|%-6.2f|%-18.2f|", year, rate, amount);
            }
        printf("\n");
    }
}