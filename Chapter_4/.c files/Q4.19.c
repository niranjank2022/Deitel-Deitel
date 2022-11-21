/* Q. No. 4.19 */

#include <stdio.h>

int main()
{
    int prod_no;
    float price, quant, total = 0;

    printf("Note : Enter -1 to end the operation.");
    while (prod_no != -1 || quant != -1)
    {
        printf("\nEnter the product number : ");
        scanf("%d", &prod_no);

        if (prod_no == -1)
            break;

        printf("\nEnter the quantity sold for 1 day : ");
        scanf("%f", &quant);

        switch(prod_no)
        {
            case 1:
                price = 2.98;
                break;
            case 2:
                price = 4.50;
                break;
            case 3:
                price = 9.98;
                break;
            case 4:
                price = 4.49;
                break;
            case 5:
                price = 6.87;
                break;
            default:
                printf("Invalid key product number");
                price = 0;
                break;
        }
        total += (price * quant);
    }

    printf("Total retail value of the sold products : %.2f", total);
    printf("\nProgram has been ended.");


}