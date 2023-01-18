#include <stdio.h>
#include <string.h>

void main()
{
    int num;
    char str1[ 50 ], str2[ 50 ];

    printf( "Enter a string 1: " );
    gets( str1 );

    printf( "Enter a string 2: " );
    gets( str2 );

    printf( "Enter the no. of characters: ");
    scanf( "%d", &num );

    printf( "\nFirst %d characters of \"%s\" %s the first %d characters of \"%s\".",
        num, str1, strncmp( str1, str2, num ) == 0 ? "is equal to" : strncmp( str1, str2, num ) > 0 ? "is greater than" : "is lesser than", num, str2 );
}