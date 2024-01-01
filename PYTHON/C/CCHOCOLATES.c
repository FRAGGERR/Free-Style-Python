#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int X, Y, Z;
        scanf("%d %d %d", &X, &Y, &Z);
        printf("%d\n", (X * 5 + Y * 10)/Z);
    }

    return 0;
}