#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    char teleNo[ 15 ], teleCpp[ 15 ];
    char *areaCode, *phone, phoneNo[ 8 ];

    printf( "\n\nEnter the Telephone Number {Format: (XXX) XXX-XXXX}: " );
    gets( teleNo );

    strcpy( teleCpp, teleNo );

    areaCode  = strtok( teleCpp, "()" );

    phone = strtok( NULL, " -" );
    strcat( phoneNo, phone );
    phone = strtok( NULL, "" );
    strcat( phoneNo, phone );

    int _areaCode = atoi( areaCode );
    long _phoneNo = atol( phoneNo );

    printf( "Telephone No. ==> %s.\n"
            "Area code is ==> %d.\n"
            "Phone No. is ==> %07ld.\n", teleNo, _areaCode, _phoneNo );   
}