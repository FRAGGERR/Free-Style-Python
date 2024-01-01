#include <stdio.h>

int main (void){

    int T;
    scanf ("%d", &T);

    while (T--) {

        int X1, Y1, X2, Y2;
        scanf ("%d %d %d %d", &X1, &Y1, &X2, &Y2);
        
        int X_abs, Y_abs; 
        X_abs = abs (X1 - X2);
        Y_abs = abs (Y1 - Y2);

        int max;

        if (X_abs >= Y_abs){
            max = X_abs;

        }
        
        else {
            max = Y_abs; 
        }

        printf ("%d \n", max);
    }
    return 0; 
}
