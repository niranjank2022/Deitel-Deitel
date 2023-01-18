#include <stdio.h>
#include <stdlib.h>

void main()
{
    char in1[ 10 ], in2[ 10 ], in3[ 10 ], in4[ 10 ];

    printf( "Enter four integers: \n" );
    
    gets( in1 );
    gets( in2 );
    gets( in3 );
    gets( in4 );

    printf( "The sum of the values %s, %s, %s and %s ==> %.3lf.",
            in1, in2, in3, in4, atof( in1 ) + atof( in2 ) + atof( in3 ) + atof( in4 ) );
}