#include <stdio.h>
#include <string.h>

void main()
{
    char *verbs[] = { "RESTED", "fASTED", "SLEEPED", "fAINTED", "wON", "licked", "CLICKED", "BlendED", "WeldED", "GLARED" };
    char *ptr;

    for ( int i = 0; i < 10; i++ ) {

        ptr = strchr( verbs[ i ], '\0' );
        if ( *(ptr - 2) == 'E' && *(ptr - 1) == 'D' )
            printf( "\n%s", verbs[ i ] );
    }

}