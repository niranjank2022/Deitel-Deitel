#include <stdio.h>
#include <string.h>

void main()
{
    char *cities[] = { "Chennai", "Madurai", "Trichirappalli", "Namakkal", "Salem", "Theni", "Viluppuram", "Tiruchengodu", "Tanjore", "Vellore" };

    for ( int i = 0; i < 10; i++ ) {

        char city[ 20 ];

        strcpy( city, cities[ i ] );
        for ( int j = 0; j < city[ j ] != '\0'; j++ )
            printf( "%c ", city[ j ] );
        printf( "\n" );
    }
    
    printf( "\n%s $$$ %s", cities[ 2 ], cities[ 0 ] );
}