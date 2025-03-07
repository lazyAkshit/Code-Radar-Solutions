// Your code here...
// for a triangle the logic should be that the sum of first two sides should be greater than the third sides
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",a, b, c);
    int sum = a+b;
    if(sum > c){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}