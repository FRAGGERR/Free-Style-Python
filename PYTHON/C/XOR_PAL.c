#include <stdio.h>

int main() {
    //your code goes here
    int T;
    scanf("%d", &T);
    while (T--) {
        int N;
        scanf("%d", &N);

        char A[N + 1];
        scanf("%s", A);

        int count = 0;
        for (int i = 0; i < (N+1)/ 2; i++) {
            if (A[i] != A[N - i - 1]) {
                count++;
            }
        }

        printf("%d\n", (count+1)/2);
    }

    return 0;
}