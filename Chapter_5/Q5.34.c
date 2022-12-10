#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void correctResponse();
void wrongResponse();

void  main() {

    int  num1, num2, resp, percent;
    int count = 0, correct = 0, wrong = 0;
    while (++count <= 10)
    {   
        srand(time(NULL));
        num1 = rand() % 10;
        num2 = rand() % 10;
        printf("How much is %d times %d?...", num1, num2);
        scanf("%d", &resp);

        while (resp != num1 * num2) {
            wrongResponse();
            scanf("%d", &resp);
            ++wrong;
        }
        correctResponse();
        ++correct;
    }

    percent = (correct * 100) / (correct + wrong);

    if (percent < 75)
        printf("Please ask your instructor for extra help\n");
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