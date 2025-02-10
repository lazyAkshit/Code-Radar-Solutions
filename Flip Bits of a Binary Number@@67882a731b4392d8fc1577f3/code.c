#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    int result = ~num; // Bitwise NOT operation
    printf("%d\n", result);
    
    return 0;
}
