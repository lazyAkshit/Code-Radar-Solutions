#include <stdio.h>
int main() {
    int a,b,shifted;
    scanf("%d %d",&a,&b);
    shifted = a>>b;
    printf("%d",shifted);
    return 0;
}