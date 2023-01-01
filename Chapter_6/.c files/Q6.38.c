#include <stdio.h>

void stringReverse( char [], int );
void main()
{
    char name[100] = "Malayalam is a language";
    stringReverse(name, 8);
    
}

void stringReverse( char string[], int len )
{
    if (string[0] != '\0') {
        stringReverse(&string[1], len - 1);
        printf("%c", string[0]);
    }
}