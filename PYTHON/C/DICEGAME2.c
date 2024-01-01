#include <stdio.h>

int main(void) {
    int T;
    scanf("%d", &T);
    while (T--) {
        int arr[6];
        for (int i = 0; i < 6; i++) {
            scanf("%d", &arr[i]);
        }

        int min1 = arr[0];
        for (int i = 1; i < 3; i++) {
            if (arr[i] < min1) {
                min1 = arr[i];
            }
        }

        int sum1 = arr[0] + arr[1] + arr[2];
        int ans1 = sum1 - min1;

        int min2 = arr[3];
        for (int i = 4; i < 6; i++) {
            if (arr[i] < min2) {
                min2 = arr[i];
            }
        }

        int sum2 = arr[3] + arr[4] + arr[5];
        int ans2 = sum2 - min2;

        if (ans1 > ans2) {
            printf("Alice\n");
        } else if (ans1 < ans2) {
            printf("Bob\n");
        } else {
            printf("Tie\n");
        }
    }

    return 0;
}
/*
To determine the winner of the game or if it's a tie, we need to calculate the scores for Alice and Bob and compare them. The score for each player is the sum of the two highest rolls out of the three rolls.

Here's the algorithm to determine the winner:

1. Read the number of test cases, T.
2. Repeat the following steps T times:
   a. Read the values of Alice's rolls: A1, A2, A3.
   b. Read the values of Bob's rolls: B1, B2, B3.
   c. Calculate the score for Alice: scoreAlice = A1 + A2 + A3 - min(A1, min(A2, A3)).
   d. Calculate the score for Bob: scoreBob = B1 + B2 + B3 - min(B1, min(B2, B3)).
   e. Compare the scores:
      - If scoreAlice > scoreBob, print "Alice".
      - If scoreAlice < scoreBob, print "Bob".
      - If scoreAlice = scoreBob, print "Tie".

This algorithm calculates the scores for Alice and Bob by summing their highest two rolls. Then it compares the scores and prints the result accordingly.

Using this algorithm, you can determine the winner or if it's a tie for each test case.
*/