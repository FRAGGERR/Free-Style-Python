#include<stdio.h>
#include<string.h>

int main()
{
    int T;
    scanf("%d", &T);
    while(T--){
        int N;
        int c = 0, o = 0, d = 0, e = 0, h = 0, f = 0;
        scanf("%d", &N);
        char s[101];
        for (int i = 0; i < N; i++){
            scanf("%s", s);
            int l = strlen(s);
            for (int j = 0; j < l; j++){
                if (s[j] == 'c'){
                    c++;
                }
                else if (s[j] == 'o'){
                    o++;
                }
                else if (s[j] == 'd'){
                    d++;
                }
                else if (s[j] == 'e'){
                    e++;
                }
                else if (s[j] == 'h'){
                    h++;
                }
                else if (s[j] == 'f'){
                    f++;
                }
            }
        }
        int count = 0;
        while (c >= 2 && o >= 1 && d >= 1 && e >= 2 && h >= 1 && f >= 1){
            count++;
            c -= 2;
            o -= 1;
            d -= 1;
            e -= 2;
            h -= 1;
            f -= 1;
        }
        printf("%d\n", count);
    }
    return 0;
}
