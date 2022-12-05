#include <stdio.h>

int qualityPoints( int );

void main() {

    int avg;
    printf("Enter your average : ");
    scanf("%d", &avg);

    printf("Your points ==> %d", qualityPoints(avg));
}

int qualityPoints(int num) {

    if (num >= 90)
        return 4;
    else if (num >= 80 && num <= 89)
        return 3;
    else if (num >= 70 && num <= 79)
        return 2;
    else if (num >= 60 && num <= 69)
        return 1;
    else
        return 0;
}