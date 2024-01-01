#include <stdio.h>
int main () {
    int T;
    scanf("%d", &T);
    while (T--){
        int A, B;
        scanf("%d %d", &A, &B);
        int c = abs(A - B);
        if ( c%2 == 0){
            printf ("Yes \n");
        }
        else{
            printf ("No \n");
        }
    }return 0;
}