// Write a program to check if a number is a palindrome

#include <stdio.h>

int main() {
    int n, original, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n; 

    while (n != 0) {
        remainder = n % 10;             // get last digit
        reversed = reversed * 10 + remainder; // build reversed number
        n = n / 10;                     // remove last digit
    }

    if (original == reversed)
        printf("It is a palindrome number.\n");
    else
        printf("It is not a palindrome number.\n");

    return 0;
}
