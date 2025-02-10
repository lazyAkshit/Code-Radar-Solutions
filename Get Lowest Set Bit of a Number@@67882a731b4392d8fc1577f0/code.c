#include <stdio.h>
#include <math.h>

int lowestSetBitPosition(int num) {
    if (num == 0) return 0; // No set bit in 0
    return log2(num & -num) + 1;
}

int main() {
    int num;
    scanf("%d", &num);

    int pos = lowestSetBitPosition(num);
    printf("%d", pos);
    
    return 0;
}
