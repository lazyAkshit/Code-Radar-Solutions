#include <stdio.h>

int countTrailingZeros(int num) {
    if (num == 0) return -1; // No set bit in 0 (optional case)

    int count = 0;
    while ((num & 1) == 0) { // Check if LSB is 0
        num >>= 1; // Right shift by 1
        count++;
    }
    return count;
}

int main() {
    int num;
    scanf("%d", &num);

    int trailingZeros = countTrailingZeros(num);
    printf("%d\n", trailingZeros);

    return 0;
}
