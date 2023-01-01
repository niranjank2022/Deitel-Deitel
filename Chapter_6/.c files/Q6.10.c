#include <stdio.h>

void main() {

    int size;
    int counter[9] = {0}, salary;

    printf("Enter no. of salespersons : ");
    scanf("%d", &size);

    for (int i = 1; i <= size; i++) {

        printf("Enter salary of person %d : ", i);
        scanf("%d", &salary);

        if (salary >= 200 && salary <= 299)
            ++counter[0];
        else if (salary >= 300 && salary <= 399)
            ++counter[1];
        else if (salary >= 400 && salary <= 499)
            ++counter[2];
        else if (salary >= 500 && salary <= 599)
            ++counter[3];
        else if (salary >= 600 && salary <= 699)
            ++counter[4];
        else if (salary >= 700 && salary <= 799)
            ++counter[5];
        else if (salary >= 800 && salary <= 899)
            ++counter[6];
        else if (salary >= 900 && salary <= 999)
            ++counter[7];
        else if (salary >= 1000)
            ++counter[8];
        else
            printf("\nSalary should be greater than or equal to 200...");
    }

    for (int i = 0; i < 9; i++)
        printf("%d  ", counter[i]);
    printf("\n");
}