#include <stdio.h>
int main(void)
{
    int n,k,i,j,temp,t,c=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n];
        for(i=1; i<=n; i++)
        {
            scanf("%d",&a[i]);
        }
        scanf("%d",&k);
        int d=a[k];
        for(i=1; i<=n; i++)
        {

            int min=i;
            for(j=i+1; j<=n; j++)
            {
                if(a[min]>a[j])
                {
                    min=j;
                }
            }
            if(i!=min)
            {
                temp=a[i];
                a[i]=a[min];
                a[min]=temp;
            }
        }
        for(i=1; i<=n; i++)
        {
            if(a[i]==d){
                c=i;
            }
        }
       // if(c==1)
            printf("%d\n",c);
    }
    return 0;
}

