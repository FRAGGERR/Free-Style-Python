#include <stdio.h>
int main (){
    int T;
    scanf ("%d", &T);
    while ( T--){
        int x, y, avg;
        scanf ("%d %d", &x, &y);
        avg = (x+y)/2;
        if (x > avg){
            printf ("%d \n", x-avg);
        }
        else {
            printf ("%d \n", y-avg);
        }
    }return 0;
}