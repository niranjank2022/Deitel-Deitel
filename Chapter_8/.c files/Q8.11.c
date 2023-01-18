#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

void main()
{
    srand( time( NULL ) );

    char *article[] = { "the", "a", "one", "some", "any" }, *noun[] = { "boy", "girl", "dog", "town", "car" };
    char *verb[] = { "drove", "jumped", "ran", "walked", "skipped" }, *preposititon[] = { "to", "over", "from", "under", "on" };
    char **components[] = { article, noun, verb, preposititon, article, noun };

    char sentence[ 100 ];

    for ( int i = 0; i < 20; i++ ) {
    
        int  j;
        char word[ 10 ];
        strcpy( word, article[ rand() % 5 ] );
        word[ 0 ] = toupper( word[ 0 ] );
        strcat( sentence, word );

        for ( j = 1; j < 6; j++ ) {
            strcat( sentence, " " );
            strcat( sentence, components[ j ][ rand() % 5 ] );
        }
        printf( "%s.\n", sentence );
        
        // Assigning empty string to sentence
        for ( j = 0; sentence[ j ] != '\0'; j++ )
            sentence[ j ] = '\0';
    }
}