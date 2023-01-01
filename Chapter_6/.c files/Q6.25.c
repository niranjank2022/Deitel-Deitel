#include <stdio.h>
#define SIZE 8

void display( int [SIZE][SIZE] );
int notPossible( int, int );

int board[SIZE][SIZE] = {0};

void main()
{
    
    int horizontal[SIZE] = { 2, 1, -1, -2, -2, -1, 1, 2 };
    int vertical[SIZE] = { -1, -2, -2, -1, 1, 2, 2, 1 };
    int accessibility[SIZE][SIZE] = { 2, 3, 4, 4, 4, 4, 3, 2,
                                      3, 4, 6, 6, 6, 6, 4, 3, 
                                      4, 6, 8, 8, 8, 8, 6, 4, 
                                      4, 6, 8, 8, 8, 8, 6, 4,
                                      4, 6, 8, 8, 8, 8, 6, 4,
                                      4, 6, 8, 8, 8, 8, 6, 4,
                                      3, 4, 6, 6, 6, 6, 4, 3,
                                      2, 3, 4, 4, 4, 4, 3, 2 };
    int x = 0, y = 0;
    int next_x, next_y, flag_x, flag_y;

    display(board);

    board[x][y] = 1;
    for (int i = 2; i <= 64; i++) {

        int low = 8;

        // Finding the next x and y
        for (int j = 0; j < 8; j++) {

            next_x = x + horizontal[j];
            next_y = y + vertical[j];

            // Eliminating the invalid values
            if ( notPossible(next_x, next_y) )
                continue;
            
            // Finding the square with low accessibility
            if ( low > accessibility[next_x][next_y] ) {
                
                low = accessibility[next_x][next_y];
                flag_x = next_x;
                flag_y = next_y;
            }
            
            // Decrementing the accessbility for all the possible values
            --accessibility[next_x][next_y];
        }
        x = flag_x;
        y = flag_y;
        board[x][y] = i;
    }
    display(board);
    display(accessibility);
}

int notPossible( int x, int y )
{
    if (x >= 8 || x < 0 || y >= 8 || y < 0)
        return 1;
    else if ( board[x][y] != 0 )
        return 1;    
    return 0;
}

void display( int arr[SIZE][SIZE] )
{
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++)
            printf("%3d ", arr[i][j]);
        printf("\n");
    }
    printf("\n\n\n");
}