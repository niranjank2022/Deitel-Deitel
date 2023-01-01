#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void correctResponse();
void wrongResponse();
int gradeQuest();

void  main() {

    int  grade, answer, resp;
    for (int i = 1; i <= 10; i++)
    {
        answer = gradeQuest();
        scanf("%d", &resp);
        while (resp != answer) {
            wrongResponse();
            scanf("%d", &resp);
        }
        correctResponse();
    }
}

/* Func. 1 */
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

/* Func. 2 */
void wrongResponse() {

    int num = rand() % 4;
    printf("\n");
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

/* Func. 3 */
int gradeQuest() {
    
    int num1, num2, grade;
    printf("\nWhich grade you wish to play?...\nGrade_(1)\tSingle digit numbers\nGrade_(2)\tDouble digit numbers\nEnter your choice : ");
    scanf("%d", &grade);

    switch (grade) {
        case 1:
            num1 = rand() % 10;
            num2 = rand() % 10;
            break;            
       case 2:
            num1 = 10 + rand() % 100;
            num2 = 10 + rand() % 100;
            break;
        }
    printf("How much is %d times %d?...", num1, num2);
    return num1 * num2;
}