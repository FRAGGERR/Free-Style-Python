#include <stdio.h>
#include <string.h>

int minOperations(char S[], int N) {
    int count = 0;

    for (int i = 1; i < N; i++) {
        if (S[i] == S[i - 1]) {
            count++;
            i++; // Skip the next character since it will be changed
        }
    }

    return count;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        char S[N + 1]; // +1 for the null terminator
        scanf("%s", S);

        int count = minOperations(S, N);
        printf("%d\n", count);
    }

    return 0;
}
