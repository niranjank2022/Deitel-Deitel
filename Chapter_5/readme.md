___
# CH05 - C Functions

## Concepts covered
<br>

- math.h library functions
    - fabs( ), sqrt( ), exp( ), log( ), log10( ), ceil( ), floor( ), pow( , ), fmod( , ), sin( ), cos( ), tan( )
- Function prototype & definition
- Conversion specifiers for scanf() and printf() : 
    | Data Types        | printf    | scanf |
    | -----------       | --------- | ----- |
    | char              | %c        | %c    |
    | short             | %hd       | %hd   |
    | int               | %d        | %d    |
    | unsigned int      | %u        | %u    |
    | long int          | %ld       | %ld   |
    | unsigned long int | %lu       | %lu   |
    | float             | %f        | %f    |
    | double            | %f        | %lf   |
    | long double       | %Lf       | %Lf   |
- rand() and srand( ) in <stdlib.h>, time( NULL ) in <time.h>
- Storage classes:
    - Storage duration
        - Automatic storage duration - Variables are created only when the block where they are declared is entered. **auto, register**                 
                                    
        - Static storage duration - Variables exist from the point at which the program starts execution. **static** ( *local* ), **extern**( *global* )
    - Scope
        - Function scope - Variables declared inside a function
        - File scope - Global variables, function prototypes, function definitions
        - Block scope - Variables declared inside a block '{}'
        - Function prototype scope - Parameters of the function prototype
- Recursion
___