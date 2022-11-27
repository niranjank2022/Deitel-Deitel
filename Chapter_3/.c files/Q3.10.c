#include <stdio.h>

void main() {

    int passes = 0, failures = 0, student = 1, result;

    while (student <= 10)
    {
        do {
            printf("\nEnter result : ");
            scanf("%d", &result);
        } while (result != 1 && result != 2);

        if (result == 1)
            passes += 1;

        else 
            failures += 1;
        
        student += 1;
    }

    printf("\nPasses %d", passes);
    printf("\nFailed %d", failures);

    if (passes > 8)
        printf("\nRaise tuition");

}