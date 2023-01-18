#include <stdio.h>
#include <string.h>

void main()
{
    char text[ 100 ], word[ 10 ];

    puts( "Enter some text: " );
    gets( text );

    printf( "Enter word to be searched: " );
    scanf( "%s", word );

    char *searchPtr;

    searchPtr = strstr( text, word );
    printf( "\n%s", searchPtr );

    searchPtr = strstr( searchPtr + 1, word );
    printf( "\n%s", searchPtr );

    searchPtr = strstr( searchPtr + 1, word );

    if ( searchPtr == NULL )
        printf( "You got this right!\n" );
}