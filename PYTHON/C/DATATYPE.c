#include<stdio.h>
int main(void) {
    int T;
    scanf("%d", &T);
    while (T--){
        int N, X;
        scanf("%d %d", &N, &X);
        if (X <= N){
            printf ("%d\n", X);
        }else{
            printf ("%d\n", X % (N+1));
        }
    }return 0;
}