#include <stdio.h>
int main (){
    int T;
    scanf("%d", &T);
    while (T--){
        int N;
        scanf("%d", &N);
        int a[N];
        for (int i = 0; i < N; i++){
            scanf("%d", &a[i]);
        }
        int count = 0;
        for ( int i = 0; i < N; i++){
            if ( a[i] >= 1000){
                count ++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}