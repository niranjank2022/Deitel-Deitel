#include <stdio.h>

int isdigit( int );
int isalpha( int );
int isalnum( int );
int isxdigit( int );
int islower( int );
int isupper( int );
int tolower( int );
int toupper( int );
int isspace( int );
int iscntrl( int );
int ispunct( int );
int isprint( int );
int isgraph( int );

void main()
{

}

int isdigit( int ch )
{
    if ( ch >= 48 && ch <= 57 )
        return 1;
    
    return 0;
}

int isalpha( int ch )
{
    if ( ch >= 65 && ch <= 90 )
        return 1;

    if ( ch >= 97 && ch <= 122 )
        return 1;
    
    return 0;
}

int isalnum( int ch )
{
    if ( isalpha( ch ) && isdigit( ch ) )
        return 1;

    return 0;
}

int isxdigit( int ch )
{
    if ( isdigit( ch ) )
        return 1;

    if ( ( ch >= 65 && ch <= 70 ) || (ch >= 97 && ch <= 102) )
        return 1;

    return 0;
}

int islower( int ch )
{
    if ( ch >= 97 && ch <= 102 )
        return 1;
    
    return 0;
}

int isupper( int ch )
{
    if ( ch >= 65 && ch <= 90 )
        return 1;
    
    return 0;
}

int isspace( int ch )
{
    if ( ( ch >= 9 && ch <= 13 ) || ( ch == 46 ) )
        return 1;

    return 0;
}

int toupper( int ch )
{
    if ( islower( ch ) )
        return ch - 32;

    return ch;
}

int tolower( int ch )
{
    if ( isupper( ch ) )
        return ch + 32;

    return ch;
}

int iscntrl( int ch )
{

}

int ispunct( int ch )
{
    
}