#include <stdio.h>

void main()
{
    long value1 = 200000, value2;

    long *lPtr;
    lPtr = &value1;
    printf("Value pointed by lPtr is %ld\n", *lPtr);

    value2 = *lPtr;

    printf("Value of variable value2 is %d\n", value2);

    printf("Address of value1 is %p\nAddress stored in lPtr is %p\n", &value1, 
    lPtr);
}