#include <stdio.h>

int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);

    printf("%d ", a, b);

    
    a = a ^ b; 
    b = a ^ b;  
    a = a ^ b;  

    printf("%d ", b, a);

    return 0;
}
