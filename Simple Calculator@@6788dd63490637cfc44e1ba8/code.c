#include <stdio.h>

int main() {
    int a,b;
    char d;
    int sum = a+b;
    int diff = a-b;
    int pro = a*b;
    int div = a/b;
    scanf("%d %d %c",&a ,&b ,&c);
    if (c=='+'){
        printf("%d",sum);
    }
    else if(c == '-'){
        printf("%d",diff);
    }
    else if(c == '*'){
        printf("%d",pro);
    }
    else if(c == '/'){
        printf("%d",div);
    }
    return 0;
}