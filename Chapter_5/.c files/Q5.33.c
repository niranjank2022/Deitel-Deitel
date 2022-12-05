#include <stdio.h>
#include <stdlib.h>

void correctResponse();
void wrongResponse();

void  main() {

    int  num1, num2, resp;    
    for (int i = 1; i <= 10; i++)
    {
        num1 = rand() % 10;
        num2 = rand() % 10;
        printf("How much is %d times %d?...", num1, num2);
        scanf("%d", &resp);

        while (resp != num1 * num2) {
            wrongResponse();
            scanf("%d", &resp);
        }
        correctResponse();
    }
}

void correctResponse() {
    
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

void wrongResponse() {

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