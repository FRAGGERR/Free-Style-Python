#include<stdio.h>

int main (void) {
    int T;
    scanf("%d", &T);
    while (T--){
        int n;
        scanf( "%d", &n);
        int a[n];
        int b[100] = {0};

        for (int i = 0; i < n; i++){
            scanf("%d", &a[i]);
            b[a[i]] ++;/* this array is counting the frequency, That mean this array is a frequency counter array*/
        }/*
        T = 2 (we will run the loop twice)
        n = 5 (for the first iteration)

        a = [5, 9, 2, 9, 7, 2, 5, 3]  (input array for the first iteration)
        so the b will be - 
        b = [0, 0, 2, 1, 0, 2, 0, 1, 0, 2, 0, ..., 0]
        */
       int max = 0;
       int max1;
       for (int i = 0; i<100; i++)
       {
        if (b[i] != 0) /*Here we are counting the frequency of the frequency.*/
        {
            int count = 1;
            for(int j = i+1; j < 100; j++)
            {
                if (b[i] == b[j]){
                    count ++;
                    b[j] = 0;
                }
            }if (count > max)
            {
                max = count;
                max1 = b[i];
            }
            else if (count == max) 
            {
                if(b[i]<max1){
                    max1 = b[i];
                }

            }
        }
       }
       printf("%d\n", max1);
    }
    return 0;
}

/*or Numerical Data:
Arrange the dataset in ascending order.
Identify the value(s) that appear(s) most frequently. This can be done by counting the frequency of each value.
The mode is the value(s) with the highest frequency. If there is a single mode, it is called unimodal. If there are two modes, it is bimodal, and if there are more than two modes, it is multimodal.*/