#include <stdio.h>
int main(void) {
    //your code goes here
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int N,X,sum=0,sweet,flag=0;
        scanf("%d %d",&N,&X);
        int a[N];
        for(int i=0;i<N;i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        } 
        
        for(int i=0;i<N;i++)
            if(a[i]<=(sum%X)) flag=1;
        if(flag)
            printf("-1\n");
        else
        {
            sweet=sum/X;
            printf("%d\n",sweet);
        }
    }
	return 0;
}
