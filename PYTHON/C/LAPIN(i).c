#include<stdio.h>
#include<string.h>

int main () {
    int T;
    scanf("%d", &T);
    while (T--)
    {
        /* code */
        char s[1001];
        scanf("%s", s); /*Here we are taking input in a string so here we haven't use the &s, cause s already showing the address of the string.*/
        int l = strlen(s);
        int m;
        if (l%2 == 0){
            m = l / 2;
        }else{
            m = (l+1)/2;
        }
        for (int i = 0; i < m; i++){ /*this loop iterate with the first element of the given string.*/
            for (int j = m; j < l; j++){ /*and here this loop iterate with the second half of the given string.*/
                if (s[i] == s[j]){
                    s[j] = '0'; /*here we cannot assign it as 1 or smthg else cause the indexing in the c is starts from o itself, that's we have to take 0 as the first input.*/
                    break;
                }
            }
        }
        int count;
        count = 0;
        for (int i = m; i < l; i++){
            if (s[i] != '0'){
                count ++;
            }
        }
        if (count == 0 ){ /*here we finally apply our last condition in which we are deciding that the string contain lapindromes.*/
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }return 0;
    
}