#include <stdio.h>

int main (void) {
    int T;
    scanf ("%d", &T);

    while (T--) {
        
        int N, X;
        scanf ("%d %d", &N, &X);
        int count = 0;

        int array[N];
        for (int i = 0; i < N; i++){
            scanf ("%d", &array[i]);
        }

        for (int i = 0; i < N; i++){
            if ( array[i] > X){
                count ++;
            }
        }

        printf ("%d\n", count); 
        
    }
    return 0;
}

