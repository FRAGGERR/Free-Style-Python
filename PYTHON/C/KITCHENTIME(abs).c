#include<stdio.h>
#include<stdlib.h>
int main (void){
    int T;
    scanf ("%d", &T);
    while (T--){
        int X, Y;
        scanf ("%d %d", &X, &Y);
        printf("%d\n", abs(X-Y));
    }
    return 0;
}