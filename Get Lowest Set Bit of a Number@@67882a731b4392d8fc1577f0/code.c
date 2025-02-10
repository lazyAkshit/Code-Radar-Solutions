#include <stdio.h>

int lowestSetBitPosition(int num) {
    if (num == 0) return -1; // Return -1 if no set bit (optional)

    int pos = 0; // Start from 0 instead of 1
    while ((num & 1) == 0) { // Check LSB, shift until we find a set bit
        num >>= 1;
        pos++;
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
