/* TEXT ANALYSIS */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void count_letter( char * );
void count_letterwords( char * );
void count_words( char * );

void main()
{
    char text[] = "The goal of this book is to provide a basic understanding of the\n"
                    "technical design and architecture of the Internet. The book is\n"
                    "aimed at all audiences – even those with absolutely no prior technical experience or math skills. The Internet is an amazingly beautiful design and should be understood by all who use it.\n"
                    "While this book is not about the Network+ or CCNA certifications,\n"
                    "I hope it serves as a way to give students interested in these\n"
                    "certifications a good starting point.\n"
                    "I want to thank Pamela Fox of Khan Academy for coming up with\n"
                    "the idea of an introductory network technology course using open\n"
                    "materials.\n"
                    "I initially developed this material as a single week’s lecture in the\n"
                    "SI502 - Networked Computing course that I taught at the University of Michigan School of Information starting in 2008. I refined\n"
                    "and expanded the material to be three weeks of the Internet History, Technology, and Security (IHTS) course that I have taught to\n"
                    "over 100,000 students on Coursera starting in 2012. This book\n"
                    "adds further detail to create a standalone text that can be read\n"
                    "for enjoyment or used to support an introductory course that focuses on the Internet’s architecture.\n"
                    "This book has been particularly fun in that it is a collaboration with\n"
                    "my friends Mauro Toselli (@xlontrax) and Sue Blumenberg. I met\n"
                    "Mauro and Sue in 2012 when they became volunteer Community\n"
                    "Teaching Assistants (CTAs) for my IHTS course on Coursera. Over\n"
                    "the past three years we have become friends and colleagues. It\n"
                    "is a great example of how open education can bring people together.\n"
                    "There is supporting material for this book at\n"
                    "http://www.net-intro.com/\n"
                    "If you like the book, let us know. Send us a tweet with your\n"
                    "thoughts. You can also send a tweet if you find an error in the\n"
                    "book.\n";

    // printf( "\n%s", text );

    // count_letter( text );
    // count_letterwords( text );
    count_words( text );

}

void count_letter( char *text )
{
    int i, count[ 26 ] = { 0 };
    char *ptr;

    // Finding the count of lower-case letters
    for ( i = 'a'; i <= 'z'; i++ ) {
    
        ptr = strchr( text, i );
        while ( ptr != NULL ) {

            ++count[ i - 'a' ];
            ptr = strchr( ++ptr, i );
        }    
    }

    // Finding the count of upper-case letters
    for ( i = 'A'; i <= 'Z'; i++ ) {

        ptr = strchr( text, i );
        while ( ptr != NULL ) {

            ++count[ i - 'A' ];
            ptr = strchr( ++ptr, i );
        }
    }

    // Displaying the table
    printf( "\n%s\n%s\n%s\n%s\n%s",
            "############################################################",
            "**                                                        **",
            "**           COUNT OF EACH LETTERS IN THE TEXT            **",
            "**                                                        **",
            "############################################################"
    );
    printf( "\n\n| Alphabets | Count |" );
    
    for ( int i = 'a'; i <= 'z'; i++ )
        printf( "\n| %3c%c/%c%3c | %5d |", ' ', toupper( i ), i, ' ', count[ i - 'a' ] );

    printf( "\n\n\n\n" );
}

void count_letterwords( char *text )
{
    int count[ 25 ] = { 0 };
    char *word;

    // Counting the words of each kind
    word = strtok( text, " " );
    while ( word != NULL ) {

        ++count[ strlen( word ) ];
        word = strtok( NULL, " " );
    }
    
    // Displaying the table
    printf( "\n%s\n%s\n%s\n%s\n%s\n%S",
            "############################################################",
            "**                                                        **",
            "**           COUNT OF WORDS OF DIFFERENT LENGTH           **",
            "**                    IN THE TEXT                         **",
            "**                                                        **",
            "############################################################"
    );
    printf( "\n\n| Word-Length | Count |" );
    for ( int i = 0; i < 25; i++ )
        printf( "\n| %-11d | %5d |", i, count[ i ] );
    printf( "\n\n\n\n" );
}

void count_words( char *text )
{
    // Intitialization
    char *words[ 500 ], *word1, *word2;
    int i = 0, j, count[ 500 ] = { 0 }, needToStop = 0;

    word1 = strtok( text, " " );
    for ( ; word1 != NULL; word1 = strtok( NULL, " " ) ) {
    

        // Count it in the array
        word2 = strstr( text, word1 );
        while ( word2 != NULL ) {

            ++count[ i ];
            word2 = strstr( ++word2, word1 );
        }

        printf( "\n\"%s\" occurs %d times.", word1, count[ i ] );
        i++;
    }

    // Displaying the count
    // for ( j = 0; j < i; j++ )
    //     printf( "\n| %-25s | %d |", words[ i ], count[ i ] );

}