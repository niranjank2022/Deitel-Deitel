/* The Tortoise and the Hare - Simulation */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 70

int moveTortoise( int );
int moveHare( int );
void displayTrack( int, int );

void main()
{
    srand( time( NULL ) );

    int tortoisePosition = 0, harePosition = 0, raceIsNotOver = 1;

    while ( raceIsNotOver ) {

        tortoisePosition = moveTortoise( tortoisePosition );
        harePosition = moveHare( harePosition );

        displayTrack( tortoisePosition, harePosition );

        if ( tortoisePosition >= SIZE && harePosition >= SIZE ) {
            printf( "/n*****    IT'S A TIE    *****");
            raceIsNotOver = 0;    
        }
        else if ( tortoisePosition >= SIZE ) {
            printf("\n*****    TORTOISE WINS!!! YAY!!!    *****");
            raceIsNotOver = 0;
        }
        else if ( harePosition >= SIZE ) {
            printf("\n*****    HARE WINS!!! YAY!!!    *****");
            raceIsNotOver = 0;
        }
    }
}

int moveTortoise( int pos )
{
    int moveType = 1 + rand() % 10;
    int newPos;

    if ( moveType <= 5)                         // Fast plod
        newPos = pos + 3;     
    else if ( moveType >= 6 && moveType <= 7 )  // Slip
        newPos = pos - 6;
    else                                        // Slow plod
        newPos = pos + 1;
    
    return ( newPos >= 0 ? newPos : 0 );
    
}

int moveHare( int pos )
{
    int moveType = 1 + rand() % 10;
    int newPos;

    if ( moveType <= 2 )            // Sleep
        newPos = pos; 
    else if ( moveType <= 4 )       // Big hop
        newPos = pos + 9;
    else if ( moveType <= 5 )       // Big slip
        newPos = pos - 12;
    else if ( moveType <= 8)        // Small hop
        newPos = pos + 1;
    else                            // Small slip
        newPos = pos - 2;
    
    return ( newPos >= 0 ? newPos : 0 );
}

void displayTrack( int tPos, int hPos )
{
    printf( "START || " );
    for ( int i = 0; i < SIZE; i++ ) {

        if ( i == tPos && i == hPos )
            printf("*OUCH!!!*");
        else if ( i == tPos )
            printf( "T" );
        else if ( i == hPos )
            printf( "H" );
        else
            printf( "_" );
    }
    printf( " || END" );
    printf( "\n\n" );
}