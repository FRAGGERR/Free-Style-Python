#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while (T--)
    {
        /* code */
        int a, b;
        scanf("%d%d", &a, &b);
        printf("%d\n", b-a);
    }
    return 0;
}