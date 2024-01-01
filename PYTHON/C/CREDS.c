#include<stdio.h>
int main(void) {
    int T;
    scanf ("%d", &T);
    
    while (T-- ){
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        printf("%d\n", ((a*4)+(b*2)));
    }
    return 0;
     
}