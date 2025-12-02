#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int counts[13] = {0};     // index 0–1 unused, we use 2–12
    int d1, d2, sum;

    srand(time(NULL));

    for (int i = 0; i < 50000; i++) {
        d1 = rand() % 6 + 1;   // dice roll 1–6
        d2 = rand() % 6 + 1;   // dice roll 1–6
        sum = d1 + d2;
        counts[sum]++;         // count each sum
    }

    // Print results
    for (int i = 2; i <= 12; i++) {
        printf("%2d: %d\n", i, counts[i]);
    }

    return 0;
}
