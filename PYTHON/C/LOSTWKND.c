#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d", &T);
	while(T--){
	    int a[5], p, sum=0;
	    for(int i=0;i<5;i++) {
	        scanf("%d", &a[i]);
	        sum+=a[i];
	    }
	    scanf("%d", &p);
	    sum=sum*p;
	    if(sum<=120) {
	        printf("No\n");
	    }
	    else{
	        printf("Yes\n");
	    }
	}
	return 0;
}