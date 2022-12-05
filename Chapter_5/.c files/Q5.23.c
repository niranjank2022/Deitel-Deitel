#include <stdio.h>

int calculateTime(int, int, int);

void main() {

    int n1, n2, n3;
    printf("\nEnter the time (in format hr:mn:se): ");
    scanf("%d%d%d", &n1, &n2,&n3);

    printf("No. of seconds since the last time the clock struck 12 ==> %d", calculateTime(n1, n2, n3));
}

int calculateTime (int hr, int min, int sec) {

    int seconds;

    if (hr == 12)
        hr = 0;

    if (hr > 12 || min >= 60 || sec >= 60) {
        printf("\nThe hr:mn:se can be as high as 12 59 59 and low as 1 0 0.\n");
        return -1;
    }

    else {
    seconds = (hr * 3600) + (min * 60) + sec;
    return seconds;
    }
}