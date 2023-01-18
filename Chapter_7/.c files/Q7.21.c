#include <stdio.h>

void  mystery1( char *, const char * ); /* mystery1 is a string concatenating function i.e. strcat() in <string.h> */
void main()
{
    char string1[ 80 ], string2[ 80 ];

    printf( "Enter two strings: ");
    scanf( "%s%s", string1, string2 );
    mystery1( string1, string2 );
    printf( " %s", string1 );
}

void mystery1( char *s1, const char *s2 )
{
    while ( *s1 != '\0' )
        ++s1;
    
    for ( ; *s1 = *s2; s1++, s2++ )
        ;
}