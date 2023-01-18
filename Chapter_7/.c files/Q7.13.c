/* Five-Card Poker */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void displayDeck( int arr[][13] )
{
    for ( int i = 0; i < 4; i++ ) {
        for ( int j = 0; j < 13; j++ )
            printf("%3d ", arr[i][j] );
        printf( "\n\n" );       
    }
}

void shuffle( int [][13] );
void deal( const int [][13], const char *[], const char *[] );
void swap( int *, int * );

int isPair( const int [][13], int * );
int isDouble( const int [][13], int * );
int isTriple( const int [][13], int * );
int isQuadruple( const int [][13], int * );
int isFlush( const int [][13], int * );
int isStraight( const int [][13], int * );

int hand1[ 5 ], hand2[ 5 ];

void main()
{
    const char *suit[4] = { "Hearts", "Diamonds", "Clubs", "Spades" };
    const char *face[13] = { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };

    // deck[] initialization 
    int deck[4][13];
    for ( int suit = 0, card = 1; suit < 4; suit++ )
        for ( int face = 0; face < 13; face++ )
            deck[ suit ][ face ] = card++;

    int ( *pokerFuncs[ 6 ] )( const int [][13], int * ) = { isPair, isDouble, isTriple, isQuadruple, isFlush, isStraight };

    srand( time( NULL ) );

    shuffle( deck );
    deal( deck, face, suit );

    // int ( *hands[2] )( int ) = { hand1, hand2 };
    int hand1Pow = 0, hand2Pow = 0;

    for ( int i = 0; i < 6; i++ ) {

        hand1Pow += (pokerFuncs[ i ])( deck, hand1 );
        hand2Pow += (pokerFuncs[ i ])( deck, hand2 );
    }

    printf( "\n>>%d || %d<<\n\n\n", hand1Pow, hand2Pow );
    if ( hand1Pow > hand2Pow )
        printf( "Hand 1 has better set of cards.\n" );
    else if ( hand1Pow < hand2Pow )
        printf( "Hand 2 has better set of cards.\n" );
    else
        printf( "Both has same weight.\n");
}

void shuffle( int wDeck[][13] )
{
    int row, column;
    
    for ( int suit = 0; suit < 4; suit++ )
        for ( int face = 0; face < 13; face++ )
            swap( &wDeck[ suit ][ face ], &wDeck[ rand() % 4 ][ rand() % 13 ] );
}

void deal( const int wDeck[][13], const char *wFace[], const char *wSuit[] )
{
    int count = 0;
    for (int card = 1; card <= 52; card++)
        for (int row = 0; row < 4; row++)
            for (int column = 0; column < 13; column++) {

                if ( wDeck[row][column] == card ) {                    
                    // Dealing some random cards to the hand
                    if ( count < 5 ) {
                        hand1[ count++ ] = card;
                        printf("**%d.", count);
                    }
                    else  if ( count < 10 ) {
                        hand2[ (count++) - 5 ] = card;
                        printf("##%d.", count - 5 );
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
        return 2;
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
                                        return 3;
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
                                        return 4;
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
    return 5;
}

int isStraight( const int deck[][13], int *hand )
{
    void quickSort( int *, int, int );
    int partition( int *, int, int );

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
    return 6;
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