#include <stdio.h>

void main() {

    int t[2][5];
    // t has 2 rows
    // t has 5 columns
    // t has 10 elements
    // In 2nd row, t[1][0], t[1][1], t[1][2], t[1][3], t[1][4]
    // In the 3rd column, t[0][2], t[1][2]
    t[1][2] = 0;
    // >>>
    t[0][0] = 0;
    t[0][1] = 0;
    t[0][2] = 0;
    t[0][3] = 0;
    t[0][4] = 0;
    t[1][0] = 0;
    t[1][1] = 0;
    t[1][2] = 0;
    t[1][3] = 0;
    t[1][4] = 0;
    // >>>
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 5; j++)
            t[i][j] = 0;
    // >>>
    int val;
    printf("Enter value to store in the array...\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 5; j++) {
            
            printf(">>>");
            scanf("%d", &val);
            t[i][j] = val;
        }
    // Find small
    int small;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 5; j++) {
            if (i == 0 && j == 0)
                small = t[i][j];
            if (t[i][j] < small)
                small = t[i][j];
        }
    printf("Smallest element is %d\n", small);
    // >>>
    for (int j = 0; j < 5; j++)
        printf("%d ", t[0][j]);
    // >>>
    int total = 0;
    for (int i = 0; i < 2; i++)
        total += t[i][3];
    // Tabular format
    printf("\n%3c%3d%3d%3d%3d%3d\n", ' ', 0, 1, 2, 3, 4);
    for (int i = 0; i < 2; i++) {
        printf("\n%-3d", i);
        for (int j = 0; j < 5; j++) {

            printf("%3d", t[i][j]);
        }

    }
}