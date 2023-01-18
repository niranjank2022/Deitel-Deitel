#include <stdio.h>
#include <ctype.h>

void main()
{
    int i;
    char s[ 100 ];

    printf( "Enter a string : " );
    gets( s );
    
    // To upper
    for ( i = 0; s[ i ] != '\0'; i++ )
        printf( "%c", toupper( s[ i ] ) );

    printf( "\n" );
    
    // To lower
    for ( i = 0; s[ i ] != '\0'; i++ )
        printf( "%c", tolower( s[ i ] ) );
}