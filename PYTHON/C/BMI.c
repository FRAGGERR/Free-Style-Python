#include <stdio.h>

int main (void) {

    int T;
    scanf ("%d", &T);

    while ( T-- ){
        
        int M, H;
        int bmi;
        scanf ("%d %d", &M, &H);

        bmi = (M/(H*H));

        if ( bmi <= 18){
            printf ("1\n");
        }
        else if (bmi >= 19 && bmi <= 24){
             printf ("2\n");
        }
        else if (bmi >= 25 && bmi <= 29){
             printf ("3\n");
        }
        else {
            printf ("4\n");
        }
        
    }
    return 0;
}