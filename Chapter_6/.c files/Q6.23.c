/* Turtle graphics */

/* Commands...
    1 - Pen Up
    2 - Pen Down
    3 - Turn right
    4 - Turn left
    5, a - Move forward by 'a' spaces
    6 - Print the array
    9 - Sentinel
*/

#include <stdio.h>
#define rows 50
#define cols 50
#define SIZE 40

void printArr( int arr[rows][cols] )
{
    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < cols; j++) {
            if (arr[i][j])
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void main()
{
    int floor[rows][cols] = {0};
    // commands[] array consists of the commands need to be done
    int commands[SIZE] = { 2, 4, 5, 10, 3, 5, 10, 3, 5, 10, 4, 5, 10, 3, 5, 10, 3, 5, 10, 4, 5, 10, 3, 5, 10, 3, 5,
                          10, 4, 5, 10, 3, 5, 10, 3, 5, 10, 1, 6, 9 };

    int row = 11, col = 11;
    int cmd, steps, right = 1, left = 0, up = 0, down = 0;
    int ink = 0, ready = 0;
    
    for (int k = 0; k < SIZE; k++) {

        cmd = commands[k];

        if (ready && ink) {
                
            steps = cmd - 1;            
            if (right) {
                for ( int i = row, j = col; j < col + steps; j++)
                    floor[i][j] = ink;
                col += steps;
            }
            if (left) {
                for ( int i = row, j = col; j > col - steps; j--)
                    floor[i][j] = ink;
                col -= steps;
            }
            if (up) {
                for ( int i = row, j = col; i > row - steps; i--)
                    floor[i][j] = ink;
                row -= steps;
            }
            if (down) {
                for ( int i = row, j = col; i < row + steps; i++)
                    floor[i][j] = ink;
                row += steps;
            }
            ready = 0;
            continue;
        }

        // For command 1
        if (cmd == 1)
            ink = 0;
        // For command 2
        if (cmd == 2)
            ink = 1;
        // For command 3 (turn right)
        if (cmd == 3) {
            if (right) {
                right = 0;
                down = 1;
                continue;
            }
            if (down) {
                down = 0;
                left = 1;
                continue;
            }
            if (left) {
                left = 0;
                up = 1;
                continue;
            }
            if (up) {
                up = 0;
                right = 1;
                continue;
            }
        }
        // For command 4 (turn left)
        if (cmd == 4) {
            if (right) {
                right = 0;
                up = 1;
                continue;
            }
            if (up) {
                up = 0;
                left = 1;
                continue;
            }
            if (left) {
                left = 0;
                down = 1;
                continue;
            }
            if (down) {
                down = 0;
                right = 1;
                continue;
            }
        }
        // For command 5 (get teady to iterate)
        if (cmd == 5)
            ready = 1;
        // For command 6, (Print the array)
        if (cmd == 6)
            printArr(floor);
        // For command 9, (Exit the loop)
        if (cmd == 9)
                break;
    }
}    