#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a&128){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}