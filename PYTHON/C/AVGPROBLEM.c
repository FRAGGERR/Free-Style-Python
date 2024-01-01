#include <stdio.h>
int main(){
	int T;
	scanf ("%d",&T);
	while (T--)
	{
        float A, B, C;
	    scanf ("%f %f %f", &A, &B, &C);
        if ((A+B)/2 > C){
            printf ("YES \n");
        }else {
            printf ("NO \n");
        }
    }
	return 0;
}
