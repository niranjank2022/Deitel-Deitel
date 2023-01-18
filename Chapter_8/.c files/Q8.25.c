#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
    for ( int i = 0; i < 256; i++ ) {

        printf( "%03d -- ** %c **\n", i, i );
    }
}