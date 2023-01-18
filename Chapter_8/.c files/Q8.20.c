#include <stdio.h>
#include <string.h>

void main()
{
    char text[ 1024 ], *ptr;

    puts( "Enter some bunch of texts: " );
    gets( text );

    int count  = 0;

    ptr = strtok( text, " " );
    while ( ptr != NULL ) {
        ++count;
        ptr = strtok( NULL, " " );
    }

    printf( "\nCount of words: %d", count );

}