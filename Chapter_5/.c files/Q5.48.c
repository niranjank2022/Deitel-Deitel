#include <stdio.h>

int mystery( int, int );

void main() {
    int x, y;

    printf("Enter two integers : ");
    scanf("%d%d", &x, &y);

    printf("The result is %d\n", mystery(x, y));
    return 0;
}

int mystery( int a, int b ) {
    if (b == 1)
        return a;
    
    else if (a < 0 || b < 0) {

    }
    else
        return a + mystery(a, b-1);
}