#include <stdio.h>

int main (void) {
    int T;
    scanf ("%d", &T);
    while (T--) {
        
        int A[7];
        int count = 0;
        int decount = 0;
        for (int i = 0; i < 7; i ++){
            scanf ("%d", &A[i]);

            if (A[i] == 1){
                count ++;
            }
            else {
                decount ++;
            }
        }

        if (count > decount){
            printf ("YES");
        }

        else {
            printf ("NO");
        }
        
        
        /*int A1, A2, A3, A4, A5, A6, A7;
        scanf ("%d %d %d %d %d %d %d", &A1, &A2, &A3, &A4, &A5, &A6, &A7);
        */

    }

    return 0;
}