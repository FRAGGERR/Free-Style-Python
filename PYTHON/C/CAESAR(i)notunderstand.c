#include <stdio.h>
#include <string.h>

int main() {
    int Q;
    scanf("%d", &Q);

    while (Q--) {
        int N;
        scanf("%d", &N);

        char S[N + 1], T[N + 1], U[N + 1];
        scanf("%s %s %s", S, T, U);

        int k = (T[0] - S[0] + 26) %26;  // Calculate the rotation value

        for (int i = 0; i < N; i++) {
            // Shift each character by k positions
            U[i] = (U[i] - 'a' + k) % 26 + 'a';
        }

        U[N] = '\0';  // Add null terminator to U to make it a valid string

        printf("%s\n", U);
    }

    return 0;
}
