#include <stdio.h>
#include <math.h>

int lowestSetBitPosition(int num) {
    if (num == 0) return 0;
    return (int)log2(num & -num) + 1;
}

int main() {
    int num;
    scanf("%d", &num);

    int pos = lowestSetBitPosition(num);
    printf("%d\n", pos);

    return 0;
}
