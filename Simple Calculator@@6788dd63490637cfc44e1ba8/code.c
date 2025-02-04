#include <stdio.h>

int main() {
    int a,b;
    char d;
    scanf("%d %d %c",&a ,&b ,&d);
    int sum = a+b;
    int diff = a-b;
    int pro = a*b;
    if (d=='+'){
        printf("%d",sum);
    }
    else if(d == '-'){
        printf("%d",diff);
    }
    else if(d == '*'){
        printf("%d",pro);
    }
    else if (d == '/') {
        if (b == 0) {
            printf("Error");
        } else {
            printf("%d", a / b); 
        }
    } 
    return 0;
}