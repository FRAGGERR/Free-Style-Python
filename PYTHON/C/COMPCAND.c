#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x;
        scanf("%d%d",&n,&x);
        if(n%x==0)
        {
            printf("%d\n",n/x);
        }
        else
        {
            printf("-1\n");
        }
    }return 0;
}