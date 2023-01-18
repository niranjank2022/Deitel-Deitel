#include <stdio.h>
#include <string.h>

void main()
{
    char *strings[] = { "Benjamin", "Adam", "Julian", "Williams", "Bruce", "Lisa", "Bronchia", "Betty", "Britney", "Johnson", "Margaret" };

    printf( "Names starting with \'B\'...\n" );
    for ( int i = 0; i < 11; i++ ) {

        if ( strings[ i ][ 0 ] == 'B' )
            printf( "\n%s", strings[ i ] );
    }
}