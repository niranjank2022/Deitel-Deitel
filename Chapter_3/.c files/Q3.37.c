#include <stdio.h>

void main() {

    int count;
    while (count <= 3000000)
    {   
        count += 1;
        if (count % 1000000 == 0)
            printf("\n%d", count);
    }
}