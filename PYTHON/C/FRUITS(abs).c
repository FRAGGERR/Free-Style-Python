#include<stdio.h>
#include<stdlib.h>

int main(void){
    int T;
    scanf("%d", &T);
    while (T--){
        int N, M, K;
        scanf("%d %d %d", &N, &M, &K);
        int difference = abs(M - N);
        (K >= difference)?printf("0\n"):printf("%d\n", difference - K);
    }return 0;
}
/*
In the provided code, abs(M-N) calculates the absolute difference between M and N. The abs() function is defined in the <stdlib.h> library and is used to calculate the absolute value of a number.

In this context, M and N are integer variables representing some values. By calculating the absolute difference abs(M-N), the code determines the positive difference between M and N regardless of their relative magnitudes. It ensures that the difference is non-negative.*/