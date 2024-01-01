#include <stdio.h>
#include <math.h>

int main (void) {
     int T;
     scanf ("%d", &T);
     
     while (T--){
        int A, B, C;
        scanf ("%d %d %d", &A, &B, &C);
        

        int D;
        D = fmin (fmin(A, B), C);

        if ( D == A){
            printf  ("Draw\n");
        }
        else if ( D == B){
            printf  ("Bob\n");
        }
        else {
            printf  ("Alice\n");
        }
        
     }

     return 0;
}