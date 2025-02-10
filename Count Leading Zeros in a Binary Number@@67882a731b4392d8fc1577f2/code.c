#include <stdio.h>

int countLeadingZeros(unsigned int num) {
    if (num == 0) return 32;  // Special case: all bits are 0

    int count = 0;
    unsigned int mask = 1 << 31;  // Start with the leftmost (MSB) bit

    while ((num & mask) == 0) { // Check if MSB is 0
        count++;
        mask >>= 1;  // Shift mask right
    }
    
    return count;
}

int main() {
    unsigned int num;
    
    // Input a number
    scanf("%u", &num);
    
    int leadingZeros = countLeadingZeros(num);
    
    // Print result
    printf("%d\n", leadingZeros);
    
    return 0;
}
