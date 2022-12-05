#include <stdio.h>

void square(int, char);

void main() {
    int num;
    char ch;

    printf("Enter the character : ");
    scanf("%c", &ch);

    printf("\nEnter the side of square to print : \n");
    scanf("%d", &num);

    if (num > 0)
        square(num, ch);
}

void square(int side, char fillCharacter) {

    for (int i = side; i >= 1; i--)
    {
        for (int j = side; j >= 1; j--)
            printf("%c", fillCharacter);
        printf("\n");
    }

}
