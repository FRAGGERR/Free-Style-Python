#include<stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    while (T--)
    {
        /* code */
        int x, y;
        scanf("%d%d", &x, &y);
        if ((x+y) % 2 == 0){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }return 0;
    
}