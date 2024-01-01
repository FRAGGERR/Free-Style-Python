#include <stdio.h>
#include <math.h>

int main () {

    int T;
    scanf ("%d", &T);
    while (T--) {
        int B, Ls;
        scanf ("%d %d", &B, &Ls);
        if ( B > Ls){
            printf("%f ", sqrt (B*B - Ls*Ls));
        }
        else {
            printf("%f ", sqrt (Ls*Ls - B*B));
        }
        printf ("%f\n", sqrt (B*B + Ls*Ls));
    }
    return 0;
}