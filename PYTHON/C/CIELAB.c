#include<stdio.h>
int main(){
        int A, B, C;
        scanf("%d %d",&A, &B);
        C = A - B;
        int rem;
        rem = C % 10;
        if (rem == 9){
            printf("%d", C - 1);
        }else {
            printf("%d", C + 1);
        }
    return 0;
}