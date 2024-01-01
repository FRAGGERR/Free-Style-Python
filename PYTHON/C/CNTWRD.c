#include<stdio.h>

int main() {
    int T;
    scanf("%d",&T);
    while(T--){
        int H, J;
        scanf("%d%d", &H ,&J);
        printf("%d\n",H*J);
    }return 0;
}