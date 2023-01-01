#include <stdio.h>

void main() {

    char f[10];
    printf("%c", f[6]);

    float b[10];
    scanf("%d", &f[4]);

    int g[5] = {8};

    float c[100], total = 0;
    for (int i = 0; i < 100; i++)
        total += c[i];

    double a[11], b[34];
    for (int i = 0; i < 11; i++)
        b[i] = a[i];

    float w[99], small, large;
    small = large = w[0];
    for (int i = 1; i < 99; i++) {
        if (small > w[i])
            small = w[i];
        if (large < w[i])
            large = w[i];
    }

}