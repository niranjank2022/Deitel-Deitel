/* Q. No. 4.27 */

#include <stdio.h>

int main() {

    int opp, adj, hyp;
    int count = 0;

    for (opp = 1; opp <= 200; opp++) {

        for (adj = 1; adj <= 200; adj++) {

            for (hyp = 1; hyp <= 200; hyp++) {

                if  (hyp*hyp == opp*opp + adj*adj)
                {   printf("\n(%d, %d, %d)", hyp, opp, adj);
                    printf("\n");
                    ++count;
                }

        
            }
        }
    }
    printf("\n%d", count); 
}