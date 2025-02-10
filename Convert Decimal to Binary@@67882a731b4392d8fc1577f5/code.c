#include <stdio.h>

void decimalToBinary(int num) {
    if (num == 0) {
        printf("0\n");
        return;
    }

    int binary[32]; 
    int index = 0;  

    while (num > 0) {
        binary[index++] = num & 1;  
        num >>= 1; 
    }

   
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main() {
    int num;
    scanf("%d", &num);

    decimalToBinary(num);

    return 0;
}
