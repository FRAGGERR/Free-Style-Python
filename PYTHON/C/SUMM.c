#include<stdio.h>
int main(void) {
    int T;
    scanf ("%d", &T);
    
    while (T-- ){
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        if ((a+b) == c)
        {
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
     
}
