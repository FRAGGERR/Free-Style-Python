#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int less_than = 0;
            int greater_than = 0;

            for (int j = 0; j < n; j++)
            {
                if(a[j]>=a[i])
                {
                    less_than++;
                }
                else
                {
                    greater_than++;
                }
            }
            if(less_than>greater_than)
                {
                    count++;
                }
            }
            printf("%d\n",count);
        }
        return 0;
    }
    