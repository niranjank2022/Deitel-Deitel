#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 12

void mazeTraverse( char *[], int, int, int );
int rightIsWall( char *[], int, int, int );

void displayMaze( char *[], int , int );

void main()
{
    char *maze[ SIZE ] = { "111111111111", "100010000001", "001010111101", "111010000101", "100001110100", "111101010101",
                                  "100101010101", "110101010101", "100000000101", "111111011101", "100000010001", "111111111111" };

    srand( time( NULL ) );
    
    // printf( "--> %c\n", maze[ 2 ][ 0 ] );
    // displayMaze( maze );

    // char p = 'A';

    // maze[4][2] = p;

    // printf(">>%s<<\n", maze[4]);

    // if ( maze[4][12] == '\0' )
    //     printf("You got it right");
    

    mazeTraverse( maze, 2, 0, 1 );
}


void displayMaze( char *maze[], int row, int col )
{
    printf( "\n" );
    for ( int i = 0; i < SIZE; i++ ) {
        for ( int j = 0; j < SIZE + 1 ; j++ ) {
            
            if ( i = row && j == col )
                printf("x ");
            else if ( maze[i][j] == '0' )
                printf( ". " );
            else if ( maze[i][j] == '1' )
                printf( "# " );
        }
        printf( "\n" );
    }
    printf( "\n\n\n" );
}

void mazeTraverse( char *maze[], int row, int col, int direction )
{
    // Base condition
    if ( maze[ row ][ col ] == '\0' )
        return;
    
    int move, next_row, next_col;
    int horizontal[] = { 0, 1, -1, 0 }, vertical[] = { -1, 0, 0, 1 };

    // Finding the next X and next Y
    do {
        move = rand() % 4;
        next_row = row + vertical[ move ];
        next_col = col + horizontal[ move ];
    } while( maze[next_row][next_col] != '0' && rightIsWall( maze, next_row, next_col, direction ) );
    direction = move;

    displayMaze( maze,  row, col );
    mazeTraverse( maze, row, col, direction );
}

int rightIsWall( char *maze[], int row, int col, int dir )
{
    switch( dir ) {

        case 0:
            if ( maze[ row ][ col + 1 ] == '0' )
                return 1;
            break;        
        case 1:
            if ( maze[ row + 1 ][ col ] == '0' )
                return 1;
            break;        
        case 2:
            if ( maze[ row - 1][ col ] == '0' )
                return 1;
            break;        
        case 3:
            if ( maze[ row ][ col - 1] == '0' )
                return 1;
            break;
        default:
            return 0;
    }
}
