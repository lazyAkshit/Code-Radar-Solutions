#include <stdio.h>

int main() {
    int a,b;
    char d;
    scanf("%d %d %c",&a ,&b ,&d);
    int sum = a+b;
    int diff = a-b;
    int pro = a*b;
    if (c=='+'){
        printf("%d",sum);
    }
    else if(c == '-'){
        printf("%d",diff);
    }
    else if(c == '*'){
        printf("%d",pro);
    }
    else if (c == '/') {
        if (b == 0) {
            printf("Error");
        } else {
            printf("%d", a / b); 
        }
    } 
    return 0;
}