#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void correctResponse();
void wrongResponse();
void getOperation( int );
int solution( int, int );

char operation;

void  main() 
{
    int  num1, num2, resp, totalResps = 0, rightResps = 0;
    
    for (int i = 1; i <= 10; i++)
    {   

        int choice;

        printf("Which operation you prefer\nAdd(1)\tSubtract(2)\tMultiply(3)\tDivide(4)\tAny(5)\n>>>");
        scanf("%d", &choice);
        getOperation(choice);

        num1 = rand() % 10;
        num2 = rand() % 10;
        printf(" %d %c %d = ? \n", num1, operation, num2);
        scanf("%d", &resp);
        
        ++totalResps;
        while (resp != solution(num1, num2)) {
            wrongResponse();
            scanf("%d", &resp);
            ++totalResps;
        }

        ++rightResps;
        correctResponse();
    }
    float winPercent = (float) rightResps * 100 / totalResps;
    printf("No. of correct responses : %d\nTotal no. of responses : %d\nPercentage of correct responses : %.2f\%.\n",
                rightResps, totalResps, winPercent);
    
    if (winPercent >= 75)
        printf("Great! Your performance is pleasing.\n");
    else
        printf("Please ask your instructor for extra help.\n");
}

void correctResponse() 
{    
    srand( time(NULL) );
    int num = rand() % 4;
    switch (num) {
        case 0:
            printf("Very Good!\n");
            break;
        case 1:
            printf("Excellent!\n");
            break;
        case 2:
            printf("Nice Work!\n");
            break;
        case 3:
            printf("Keep up the good work!\n");
            break;
    }
}

void wrongResponse() 
{
    srand( time(NULL) );
    int num = rand() % 4;
    switch (num) {
        case 0:
            printf("No. Please try again.\n");
            break;
        case 1:
            printf("Wrong. Try once more.\n");
            break;
        case 2:
            printf("Don't give up!\n");
            break;
        case 3:
            printf("No. Keep trying.\n");
            break;
    }
}

void getOperation( int n )
{
    srand( time(NULL) );
    switch (n) {

        case 1:
            operation = '+';
            break;
        case 2:
            operation = '-';
            break;
        case 3:
            operation = '*';
            break;
        case 4:
            operation = '/';
            break;
        case 5:
            n = 1 + rand() % 4;
            getOperation(n);
            break;
        default:
            printf("Invalid option choosen.\n");
            printf("Enter choice again : ");
            scanf("%d", &n);
            getOperation(n);
    }
}

int solution( int n1, int n2 )
{
    switch(operation) {

        case '+':
            return n1 + n2;
        case '-':
            return n1 - n2;
        case '*':
            return n1 * n2;
        case '/':
            return n1 / n2;
    }
}