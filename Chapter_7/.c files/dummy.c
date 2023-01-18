#include <stdio.h>

void main()
{

    char *names[ 4 ] = { "Niranjan", "Vignesh", "Adithyan", "Jaasim" };

    char var = 'M', *p = &var;
    names[ 0 ][ 0 ] = p;

    for ( int i = 0; i < 4; i++ ) {
        
        for ( int j = 0; names[ i ][ j ] != '\0'; j++ )
            printf("%c", names[ i ][ j ] );
        
        printf( "\n" );

        for ( int j = 0; names[ i ][ j ] != '\0'; j++ )
            printf("%p ", &names[ i ][ j ] );

        printf( "\n" );
        }
}