#include<stdio.h>
int main (void){
    int T;
    scanf ("%d", &T);
    while (T--){
        int a, b;
        scanf ("%d %d", &a, &b);
        if (a > b){
            printf ("SECOND\n");
        }else if( a == b){
            printf ("ANY\n");
        }else {
            printf ("FIRST\n");
        }
    }
    return 0;
}