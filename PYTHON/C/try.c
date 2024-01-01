#include <stdio.h>

int main (void) {
        int M, H;
        int bmi;
        scanf ("%d %d", &M, &H);
        bmi = (M/(H*H));

        printf("%d", bmi);
    return 0; 
}