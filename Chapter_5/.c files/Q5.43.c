#include <stdio.h>

void main() {

    static int count = 1;

    printf("%d ", count++);
    if (count <= 50)
        main();


}