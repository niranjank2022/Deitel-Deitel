/* Q. No. 4.22 */
#include <stdio.h>

int main()
{
    int grade;
    int aCount = 0, bCount = 0, cCount = 0, dCount = 0, fCount = 0;

    int totalCount, total;
    printf("Enter grade : \n");

    while ((grade = getchar()) != EOF)
    {   printf("\n");
        switch (grade)
        {
            case 'a': case 'A':
                ++aCount;
                break;
            case 'b': case 'B':
                ++bCount;
                break;
            case 'c': case 'C':
                ++cCount;
                break;
            case 'd': case 'D':
                ++dCount;
                break;
            case 'f': case 'F':
                ++fCount;
                break;
            case '\n': case ' ':
                break;
            
            default:
                printf("\nIncorrect letter grade is entered.\nEnter a new grade.\n");
                break;
        }
    }
    printf("\nTotals for each letter grades are : \n");
    printf("\n'A' : %d\n'B' : %d", aCount, bCount);
    printf("\n'C' : %d\n'D' : %d", cCount, dCount);
    printf("\n'F' : %d", fCount);

    /* Calculating the class average grade */
    totalCount = aCount + bCount + cCount + dCount + fCount;
    total = aCount*(int)'a' + bCount*(int)'b' + cCount*(int)'c' + dCount*(int)'d' + fCount*(int)'f';

    printf("Class average grade is %c", total/totalCount);


}