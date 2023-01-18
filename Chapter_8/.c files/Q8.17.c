#include <stdio.h>
#include <string.h>

void main()
{
    char text[ 1023 ], word[ 10 ], *ptr;

    puts( "Enter some lengthy text: " );
    gets( text );

    printf( "Enter word to find: " );
    gets( word );

    int count = 0;
    ptr = strstr( text, word );

    while ( ptr != NULL ) {   
        ++count;
        ptr = strstr( ++ptr, word );        
    }
    printf( "\nNo. of occurences of \"%s\": %d", word, count );
}