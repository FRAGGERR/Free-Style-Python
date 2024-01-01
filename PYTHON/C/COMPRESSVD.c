#include <stdio.h>

int main (){
    int T;
    scanf ("%d", &T);
    while (T--){
        int A[3];
        int B[3];
        for (int i = 0; i < 3; i ++){
            scanf ("%d", &A[i]);
        }
        for (int i = 0; i < 3; i ++){
            scanf ("%d", &B[i]);
        }
        if ( A[0] + A[1] + A[2] == B[0] + B[1] + B[2]){
            printf ("Pass\n");
        }
        else {
            printf ("Fail\n");
        }
        
    }return 0;
}
