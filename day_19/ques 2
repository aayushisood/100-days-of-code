// Write a program to find the sum of digits of a number. 

#include <stdio.h>

int main() {
    int n, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;    // get the last digit
        sum = sum + digit; // add it to sum
        n = n / 10;        // remove the last digit
    }

    printf("Sum of digits is: %d\n", sum);

    return 0;
}
