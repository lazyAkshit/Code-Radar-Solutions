#include <stdio.h>

int main() {
    int year;
    
    // Taking input from the user
    scanf("%d", &year);

    // Correct leap year conditions
    if (year % 400 == 0) {
        printf("Leap Year");
    } 
    else if (year % 100 == 0) {
        printf("Not a Leap Year");
    } 
    else if (year % 4 == 0) {
        printf("Leap Year");
    } 
    else {
        printf("Not a Leap Year");
    }

    return 0;
}
