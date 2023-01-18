#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
    int countAlpha[ 26 ] = { 0 };
    char text[ 1024 ];

    puts( "Enter some text: " );
    gets( text );

    char *ptr;

    // For Lower case letters
    for ( int i = 'a'; i <= 'z'; i++ ) {

        ptr = strchr( text, i );
        while ( ptr != NULL ) {
            ++countAlpha[ i - 'a' ];
            ptr = strchr( ++ptr, i );
        }
    }

    for ( int j = 'A'; j <= 'Z'; j++ ) {

        ptr = strchr( text, j );
        while ( ptr != NULL ) {
            ++countAlpha[ j - 'A' ];
            ptr = strchr( ++ptr, j );
        }
    }

    printf( "\nDone!\n" );

    for ( char i = 'a'; i <= 'z'; i++ )

        printf( "%c ==> %d\n", i, countAlpha[ i - 'a' ] );


}