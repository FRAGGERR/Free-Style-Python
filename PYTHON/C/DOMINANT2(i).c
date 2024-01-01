#include <stdio.h>

int main(void) {
    int T;
    scanf("%d",&T);
    while (T--)
    {
        /* code */
        int n;
        scanf("%d",&n); 
        int A[n];
        for(int i = 0; i < n; i ++){
            scanf("%d",&A[i]);/*this is not a char array, that's why we use %d. If this one only a char array than we should use %s.*/
        }
        int freq = 0;
        int max = 0;
        int count = 0;
        for (int i = 0; i < n; i ++){
            freq = 0;
            for (int j = i+1; j < n; j++){
                if (A[i] == A[j]){
                    freq++;
                }
            }if (freq > max){
                max = freq;
                count = 0;
            }
            else if (freq == max){
                count ++;
            }
        }
        if (count > 0){
            printf("NO\n");
        }else{
            printf("YES\n");
        }
    }
    return 0;
}
