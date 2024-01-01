#include<stdio.h>
int main(void) {
    int T;
    scanf ("%d", &T);
    
    while (T-- ){
        int a, b;
        scanf("%d%d", &a, &b);
        if (a >= b){
        printf("%d\n", (a-b));
        }
        else{
            printf("0\n");
        }
    }
     
    return 0;
}