#include <stdio.h>
#include <math.h>

int lowestSetBitPosition(int num) {
    if (num == 0) return 0; // No set bit in 0
    return (int)log2(num & -num) + 1; // Explicit casting to int
}

int main() {
    int num;
    scanf("%d", &num);

    int pos = lowestSetBitPosition(num);
    printf("%d\n", pos); // Added newline for better readability

    return 0;
}
