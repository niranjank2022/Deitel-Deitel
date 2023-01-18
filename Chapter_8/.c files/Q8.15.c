#include <stdio.h>
#include <string.h>

// void printTokenReverse( char * );

void main()
{
    char text[ 100 ], *ptr;

    puts( "Enter some text: " );
    gets( text );

    ptr = text;

    puts( "The words in the text in reverse order: " );
    // printTokenReverse( ptr );

    char *words[ 100 ];

    words[ 0 ] = strtok( text, " " );

    for ( int i = 1; words[ i - 1 ] != NULL; i++ ) {
        words[ i ] = strtok( NULL, " " );
        printf( "\n%s", words[ i ] );
    }

    // printf( "\n%d", strlen( words ) );

    for ( int i = strlen( *words ) - 1; i >= 0; i-- )
        printf( "\n%s", words[ i ] );
}

// void printTokenReverse( char *chr )
// {
//     if ( strtok( chr, " " ) == NULL )
//         return ;

//     printTokenReverse( chr );

//     printf( "%s ", strtok( chr, " " ) );
// }