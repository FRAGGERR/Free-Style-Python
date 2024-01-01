#include <stdio.h>

int main(void) {
	// code goes hereyour 
	int T;
	scanf ("%d", &T);
	while (T--){
        int n, m, k;
        scanf ("%d %d %d", &n, &m, &k);
        int a[n];
        for (int i = 0; i < n; i++){
    	scanf ("%d", &a[i]);
        }
            
        int count_n;
        count_n = 0;
        int count_m;
        count_m = 0;
        for (int i = 0; i < n; i ++){
            if ( a[i] == 1){
                count_n ++;
                }
        }
        for (int j = 0; j < m; j ++){
            if (a[j] == 1){
                count_m ++;
            }
        }
        if ( count_n == n){
            printf("100\n");

        }
        else if( count_m == m){
            printf("%d\n", k);

        }else{
            printf("0\n");

        }

        
	}
	return 0;
}