/* Printing Dates in Various Formats */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    char *segment, *months[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

    char date1[ 10 ];
    puts( "Enter the date (format: MM/DD/YYYY): ");
    gets( date1 );

    // Month
    segment = strtok( date1, "/" );
    printf( "\n%s ", months[ atoi( segment ) - 1 ] );

    // Day
    segment = strtok( NULL, "/" );
    printf( "%d, ", atoi(segment) );

    // Year
    segment = strtok( NULL, "\0" );
    printf( "%s\n", segment );

    char date2[ 10 ];
    printf( "\n\nEnter the date in (format: DD/MM/YYYY): ");
    gets( date2 );

    // Day
    segment = strtok( date2, "/" );
    int day = atoi( segment );
    printf( "%d", day );
    if ( day >= 4 && day <= 20 )
        printf( "th" );
    else if ( day % 10 == 1 )
        printf( "st" );
    else if ( day % 10 == 2 )
        printf( "nd" );
    else if ( day % 10 == 3 )
        printf( "rd" );
    else
        printf( "th" );

    // Month
    segment = strtok( NULL, "/" );
    printf( " %s", months[ atoi( segment ) - 1 ] );
    
    // Year
    segment = strtok( NULL, "\0" );
    printf( " %s\n", segment );   
}