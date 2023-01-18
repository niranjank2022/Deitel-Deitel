/* Five-Card Poker */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle( int [][13] );
void deal( const int [][13], int *, const char *[], const char *[] );

int isPair( const int [][13], int * );
int isDouble( const int [][13], int * );
int isTriple( const int [][13], int * );
int isQuadruple( const int [][13], int * );
int isFlush( const int [][13], int * );
int isStraight( const int [][13], int * );

void main()
{
    const char *suit[4] = { "Hearts", "Diamonds", "Clubs", "Spades" };
    const char *face[13] = { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };

    int deck[4][13] = { 0 }, hand1[5];
    int ( *pokerFuncs[ 6 ] )( const int [][13], int * ) = { isPair, isDouble, isTriple, isQuadruple, isFlush, isStraight };

    srand( time( NULL ) );

    shuffle( deck );
    deal( deck, hand1, face, suit );

    if ( isPair( deck, hand1) )
        printf("\nThe hand contains a pair.");
    
    if ( isDouble( deck, hand1) )
        printf("\nThe hand contains a double/two pair.");

    if ( isTriple( deck, hand1 ) )
        printf("\nThe hand contains a triple.");

    if ( isQuadruple( deck, hand1 ) )
        printf("\nThe hand contains a Quadruple");

    if ( isFlush( deck, hand1 ) )
        printf( "\nThe hand contains a Flush.\n");
    
    if ( isStraight( deck, hand1 ) )
        printf("\nThe hand contains a straight.\n");

    if ( getchar() != EOF )
        main();
}

void shuffle( int wDeck[][13] )
{
    int row, column;
    for (int card = 1; card <= 52; card++) {
        
        do {
            row = rand() % 4;
            column = rand() % 13;
        } while ( wDeck[row][column] != 0 );

        wDeck[row][column] = card;
    }
}

void deal( const int wDeck[][13], int *hand, const char *wFace[], const char *wSuit[] )
{
    int count = 0;
    for (int card = 1; card <= 52; card++)
        for (int row = 0; row < 4; row++)
            for (int column = 0; column < 13; column++) {

                if ( wDeck[row][column] == card ) {                    
                    // Dealing some random cards to the hand
                    if ( count < 5 && card % 4 == 3 ) {
                        hand[count++] = card;
                        printf("%d.", count);
                    }
                    printf("%5s of %-8s%c", wFace[column], wSuit[row], card % 2 == 0 ? '\n' : '\t');   
                }
            }
}

int isPair( const int deck[][13], int *hand )
{
    for (int i = 0; i < 5; i++)
        for (int suit1 = 0; suit1 < 4; suit1++)
            for (int face1 = 0; face1 < 13; face1++)
                if ( deck[suit1][face1] == hand[i] ) {

                    for ( int j = i + 1; j < 5; j++ )
                        for (int suit2 = 0; suit2 < 4; suit2++ )
                            for (int face2 = 0; face2 < 13; face2++)
                                if ( deck[suit2][face2] == hand[j] && face1 == face2 )
                                    return 1;
                }
    return 0;
}

int isDouble( const int deck[][13], int *hand )
{
    int count = 0;
    for (int i = 0; i < 5; i++)
        for (int suit1 = 0; suit1 < 4; suit1++)
            for (int face1 = 0; face1 < 13; face1++)
                if ( deck[suit1][face1] == hand[i] ) {

                    for ( int j = i + 1; j < 5; j++ )
                        for (int suit2 = 0; suit2 < 4; suit2++ )
                            for (int face2 = 0; face2 < 13; face2++)
                                if ( deck[suit2][face2] == hand[j] && face1 == face2 )
                                    ++count;    
                }
    if (count == 2)
        return 1;
    return 0;
}

int isTriple( const int deck[][13], int *hand )
{
    int count = 0;
    for (int i = 0; i < 3; i++)
        for (int suit1 = 0; suit1 < 4; suit1++)
            for (int face1 = 0; face1 < 13; face1++)
                if ( deck[suit1][face1] == hand[i] ) {

                    for ( int j = i + 1; j < 5; j++ )
                        for (int suit2 = 0; suit2 < 4; suit2++ )
                            for (int face2 = 0; face2 < 13; face2++)
                                if ( deck[suit2][face2] == hand[j] && face1 == face2 ) {
                                
                                    ++count;
                                    if (count >= 3)
                                        return 1;
                                    }
                }
    return 0;
}

int isQuadruple( const int deck[][13], int *hand )
{
    int count = 0;
    for (int i = 0; i < 2; i++)
        for (int suit1 = 0; suit1 < 4; suit1++)
            for (int face1 = 0; face1 < 13; face1++)
                if ( deck[suit1][face1] == hand[i] ) {

                    for ( int j = i + 1; j < 5; j++ )
                        for (int suit2 = 0; suit2 < 4; suit2++ )
                            for (int face2 = 0; face2 < 13; face2++)
                                if ( deck[suit2][face2] == hand[j] && face1 == face2 ) {
                                
                                    ++count;
                                    if (count >= 4)
                                        return 1;
                                }   
                }
    return 0;
}

int isFlush( const int deck[][13], int *hand )
{
    int flagSuit;
    for ( int i = 0; i < 5; i++ )
        for ( int suit = 0; suit < 4; suit++ )
            for ( int face = 0; face < 13; face++ )
                if ( deck[suit][face] == hand[i] ) {
                    if ( i == 0 )
                        flagSuit = suit;
                    if ( suit != flagSuit )
                        return 0;
                }
    return 1;
}

int isStraight( const int deck[][13], int *hand )
{
    void quickSort( int *, int, int );
    int partition( int *, int, int );
    void swap( int *, int * );

    if ( isPair( deck, hand ) )
        return 0;

    // Storing the face values of the cards in an array
    int faceArr[5] = { 0 };
    for ( int i = 0; i < 5; i++ )
        for ( int suit = 0; suit < 4; suit++ )
            for ( int face = 0; face < 13; face++ )
                if ( hand[ i ] == deck[ suit ][ face ] )
                    faceArr[ i ] = face;
    
    // Sorting faceArr[]
    quickSort( faceArr, 0, 4 );

    // Checking if the faceArr[] contains consecutive values
    for ( int i = 0; i < 4; i++ )
        if ( !(faceArr[ i ] + 1 == faceArr[ i + 1 ] || faceArr[ i ] + 9 == faceArr[ i + 1 ]) )
            return 0;
    return 1;
}

void swap( int *num1, int *num2 )
{
    int hold = *num1;
    *num1 = *num2;
    *num2 = hold;
}

int partition( int *arr, int low, int high )
{
    int i = low, j, pivot = arr[ high ];

    for ( j = low; j < high; j++ )
        if ( arr[ j ] < pivot ) {

            swap( &arr[ i ], &arr[ j ] );
            i++;
        }
    swap( &arr[ i ], &arr[ high ] );
    return i;
}

void quickSort( int *arr, int low, int high )
{
    if ( low >= high )
        return;
    
    int index = partition( arr, low, high );
    quickSort( arr, low, index - 1 );
    quickSort( arr, index + 1, high );
}