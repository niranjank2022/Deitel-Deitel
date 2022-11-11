/* Use the statements in Q.NO. 3.4 to write a program that calculates the sum of integers from 1 to 10. Use the 
while struture to loop through calculation and increment statements. The loop should terminate when the value x
becomes 11
*/
#include <stdio.h>

int main() {
    int x = 1, sum = 0;
    
    while (x < 10)
        sum += x++;
    
    printf(" The sum is %d", sum);
}