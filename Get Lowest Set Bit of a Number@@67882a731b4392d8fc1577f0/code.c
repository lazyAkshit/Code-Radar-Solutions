#include <stdio.h>

int lowestSetBitPosition(int num) {
    if (num == 0) return 0; // No set bit in 0

    int pos = 1;
    while ((num & 1) == 0) { // Check LSB, shift until we find a set bit
        num >>= 1;
        pos+;
    }
    return pos;
}

int main() {
    int num;
    scanf("%d", &num);

    int pos = lowestSetBitPosition(num);
    printf("%d\n", pos);

    return 0;
}
