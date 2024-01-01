#include<stdio.h>

int main (void){
    
    int T;
    scanf ("%d", &T);
    while (T--){
        int num;
        int digit;
        int rev = 0;
        scanf ("%d", &num );
        while (num>0){
        
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;

        if (num == digit){
            printf ("win\n");
        }
        else {
            
            printf ("lose\n");
        }
        }

    }
    return 0;
}