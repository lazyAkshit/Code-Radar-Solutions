#include <stdio.h>

int main() {
    int age;
    char name[50], hobby[50];
    scanf("%s %d %s",&name,&age,&hobby);
    printf("Name: %s \n",name);
    printf("Age: %d \n",age);
    printf("Hobby: %s \n",hobby);
    return 0;
}