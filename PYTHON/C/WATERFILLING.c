#include <stdio.h>
int main(){
	int T;
	scanf ("%d",&T);
	while (T--)
	{
        int count = 0;
        int B[3];
        for (int i = 0; i < 3; i ++){
            scanf ("%d", &B[i]);
        }
        for (int i = 0; i < 3; i++){
            if ( B[i] == 1){
                count ++;
            }
        }
        if (count >= 2){
            printf("Not now\n");
        }else {
            printf("Water filling time\n");
        }
    }
	return 0;
}