#include <stdio.h>
#include <string.h>

void main()
{
    char str1[ 50 ], str2[ 50 ];

    printf( "Enter a string 1: " );
    gets( str1 );

    printf( "Enter a string 2: " );
    gets( str2 );

    printf( "%s %s %s.",
            str1, strcmp( str1, str2 ) == 0 ? "is equal to" : strcmp( str1, str2 ) > 0 ? "is greater than" : "is lesser than", str2 );
}