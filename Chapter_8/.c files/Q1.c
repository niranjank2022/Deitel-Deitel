#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char c = 'j';
    int x, y, z;
    double d, e, f;
    char *ptr;
    char s1[ 100 ], s2[ 100 ];

    // (a)
    c = toupper( c );
    
    // (b)
    printf( "%c %s Digit.\n", c, isdigit( c ) ? "is a" : "is not a" );

    // (c)
    printf( "%s (string) is  converted to %ld (long).\n", "1234567", atol( "1234567" ) );

    // (d)
    printf( "%c %s Control character.\n", c, iscntrl( c ) ? "is a" : "is not a" );

    // (e)
    gets( s1 );

    // (f)
    puts( s1 );

    // (g)
    for ( int i = 0; s1[ i ] != '\0'; i++ )
        if ( s1[ i ] == c )
            ptr = &s1[ i ];
    
    // (h)
    putchar( c );

    // (i)
    printf( "%s (string) is converted to %lf (double) \n.", "8.63582", atof( "8.63582" ) );

    // (j)
    printf( "%c %s letter.\n", c, isalpha( c ) ? "is a" : "is not a" );

    // (k)
    c = getchar();

    // (l)

    // (m)
    printf( "%c %s Printing character.\n", c, isprint( c ) ? "is a" : "is not a" );

    // (n)
    sscanf( "1.27 10.3 9.432", "%d%d%d" );

    // (o)
    strcpy( s1, s2 );

    // (p)
    


}