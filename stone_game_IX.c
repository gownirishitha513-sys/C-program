#include <stdio.h>
#include <stdlib.h>

int main() {
    int stones[] = {2, 1};
    int n = 2;

    int count[3] = {0, 0, 0};
    for (int i = 0; i < n; i++) {
        count[stones[i] % 3]++;
    }

    int zero = count[0];
    int one = count[1];
    int two = count[2];

    int aliceWins;

    if (one == 0 && two == 0) {
        aliceWins = 0;
    }
    else if (zero % 2 == 0) {
        aliceWins = (one > 0 && two > 0);
    }
    else {
        aliceWins = (abs(one - two) > 2);
    }

    if (aliceWins)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}