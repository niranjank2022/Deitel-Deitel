#include <stdio.h>

void main() {

    int counts[10] = {0};

    int bonus[15];
    for (int i = 0; i < 15; i++) 
        ++bonus[i];
    
    float monthlyTemperatures[12];
    for (int i = 0; i < 12; i++) {
        printf(">>>");
        scanf("%d", &monthlyTemperatures[i]);
    }

    int bestScores[5];
    for (int i = 0; i < 5; i++)
        printf("%d\n", bestScores[i]);

}