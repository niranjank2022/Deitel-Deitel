#include <stdio.h>

int mystery2( const char * ); /* mystery2() returns the length of the string i.e. strlen() in <string.h> */
void main()
{
    char string[ 80 ];

    printf( "Enter a string: " );
    scanf( "%s", string );
    printf( " %d\n", mystery2( string ) );
}

int mystery2( const char *s )
{
    int x;

    for ( x = 0; *s != '\0'; s++ )
        ++x;
    
    return x;
}