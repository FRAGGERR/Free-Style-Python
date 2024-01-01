#include <stdio.h>
int main (void) {
    int T;
    scanf ("%d", &T);
    while (T--){
        int N, A, B, C;
        scanf("%d %d %d %d", &N, &A, &B, &C);
        int D = A + C;
        if ( N <= B && N <= D){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        
        }return 0;
}