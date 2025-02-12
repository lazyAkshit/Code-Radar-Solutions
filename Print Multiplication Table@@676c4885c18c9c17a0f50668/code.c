#include<stdio.h>
int main(){
    int n,a,i;
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        a=n*i;
        printf("%d x %d = %d\n",n,i,a);
    }
    return 0;
}