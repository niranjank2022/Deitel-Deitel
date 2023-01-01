#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void correctResponse();
void wrongResponse();

void  main() {

    int  num1, num2, resp, totalResps = 0, rightResps = 0;
    srand( time(NULL) );

    for (int i = 1; i <= 10; i++)
    {
        num1 = rand() % 10;
        num2 = rand() % 10;
        printf("How much is %d times %d?...", num1, num2);
        scanf("%d", &resp);
        ++totalResps;

        while (resp != num1 * num2) {
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