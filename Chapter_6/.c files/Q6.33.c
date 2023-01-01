#include <stdio.h>
#define SIZE 50

int testPalindrome( const char [], int, int );

void main()
{   
    char string[SIZE] = "able was i ere i saw elba";
    // printf("Enter a string : ");
    // scanf("%s", string);

    if (testPalindrome(string, 0, SIZE - 1))
        printf("'%s' is a Palindrome.\n", string);
    else
        printf("'%s' is not a Palindrome.\n", string);
}

int testPalindrome( const char str[], int start, int end )
{
    while (str[start] == '\0' || str[start] == ' ')
        ++start;
    while (str[end] == '\0' || str[end] == ' ')
        --end;

    if (str[start] == str[end]) {

        if (end - start == 0 || end - start == 1)
        return 1;
        testPalindrome( str, ++start, --end);
    }
    else
        return 0;
}