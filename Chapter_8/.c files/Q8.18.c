#include <stdio.h>
#include <string.h>

void main()
{
    char text[ 1024 ], chr, *ptr;

    puts( "Enter some text: " );
    gets( text );

    printf( "Enter a character: " );
    chr = getchar();

    int count = 0;
    ptr = strchr( text, chr );

    while ( ptr != NULL ) {
        ++count;
        ptr = strchr( ++ptr, chr );
    }

    printf( "\nNo. of occurences of %c is: %d.", chr, count );

}