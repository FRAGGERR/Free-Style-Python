#include <stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int n, count=0;
        char s[10000000];
        scanf("%d", &n);
        scanf("%s", s); /*we never use "&" while taking the inputs in the array, cause the name itself reflecting the address.*/
        if (n <= 2)
        {
            printf("%s\n", s);
            continue;
        }for(int i = 0; i < n; i++){
            if (s[i] == '0')/* here we've to take care of the assigning char, We've to put that char inside the "this"*/
            {
                count++; 
                /* code */
            }
        }for(int i = 0 ; i < count; i++){
            s[i] = '0';
        }for (int i = count; i < n; i++){
            s[i] = '1';
        }
        printf("%s\n",s);
        
    }return 0;
}