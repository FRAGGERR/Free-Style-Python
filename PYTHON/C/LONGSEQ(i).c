#include<stdio.h>
#include<string.h>

int main (){
    int T;
    scanf("%d", &T);
    while (T--)
    {
        /* code */
        char arr[2];
        scanf("%s", arr);
        int zero = 0;
        int one = 0;
        int n;
        
        n = strlen(arr); /*here strlen function is help us to detemine the no. of elements in the string(char).*/

        for (int i = 0; i < n; i++ ){
            if (arr[i] == '1'){
                one ++;
            }else{
                zero ++;
            }

        }if (one == 1 || zero == 1){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }    
    }
    
    return 0;
}