#include <stdio.h>
int main() {
    int num,n;
    scanf("%d %d",&num,&n);
    int bhang = num ^ (1 << n);
    printf("%d",bhang);
    return 0;
}