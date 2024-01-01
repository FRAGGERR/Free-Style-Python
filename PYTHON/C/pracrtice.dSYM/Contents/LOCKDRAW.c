#include <stdio.h>

int main (){
    int T;
    scanf("%d", &T);

    while (T--){
        int A, B, C;
        scanf("%d %d %d", &A, &B, &C);

        if ( A == B + C || B == A + C || C == A + B){
            printf("Yes\n");
        }else {
            printf ("No\n");
        }
    }

    return 0;
}
