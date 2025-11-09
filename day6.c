#include <stdio.h>

int main() {
    // question 11
    int num;

    // Input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check 
    if (num % 2 == 0) {
        printf("%d is Even.\n", num);
    } else {
        printf("%d is Odd.\n", num);
    }

             // question 12
             
     int num1;

    // Input 
    printf("Enter an integer: ");
    scanf("%d", &num1);

    // Check positive, negative, or zero using nested if-else
    if (num1!= 0) {
        if (num > 0) {
            printf("%d is Positive.\n", num1);
        } else {
            printf("%d is Negative.\n", num1);
        }
    } else {
        printf("The number is Zero.\n");
    }





}
