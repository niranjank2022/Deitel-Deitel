#include <stdio.h>
#include <string.h>

void printLatinWord( char * );

void main()
{
    char text[ 100 ], *tokPtr;

    printf( "Enter a phrase: \n" );
    gets( text );

    tokPtr = strtok( text, " " );

    while ( tokPtr != NULL ) {

        printLatinWord( tokPtr );
        tokPtr = strtok( NULL, " " );   
    }

}

void printLatinWord( char *word )
{
    printf( "%s%cay ", word + 1, *word );
}