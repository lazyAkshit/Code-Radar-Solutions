#include <stdio.h>
int main() {
    int a,shifted;
    scanf("%d",&a);
    shifted = ~a;
    printf("%d",shifted);
    return 0;
}