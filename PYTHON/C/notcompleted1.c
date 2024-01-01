#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int N, X;
        scanf ("%d %d", &N, &X);
        int A[N];
        for (int i = 0; i < N; i++){
            scanf("%d", &A[i]);
        }
        int sum = 0;
        for ( int j = 0; j < N; j++){
            sum = sum + A[j];
        }
        for (int i = 0; i < N; i++){
            if ( A[i] <= sum){  
                int flag;
                flag = 1;
                if (flag){
                    printf ("-1\n");
                }
            else {
                printf ("%d\n", sum/X);
            }
        }
    
    }

    }
    return 0;
}