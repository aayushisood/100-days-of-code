#include <stdio.h>

int main() {

    // Q31: Write a program to take a number as input and print its equivalent binary representation.
    {
        int n, bin = 0, place = 1, r;
        scanf("%d", &n);

        while (n > 0) {
            r = n % 2;
            bin = bin + r * place;
            place *= 10;
            n /= 2;
        }

        printf("%d\n", bin);
    }

    // Q32: Write a program to check if a number is a palindrome.
    {
        int n, original, rev = 0, r;
        scanf("%d", &n);

        original = n;

        while (n > 0) {
            r = n % 10;
            rev = rev * 10 + r;
            n /= 10;
        }

        if (rev == original)
            printf("Palindrome");
        else
            printf("Not palindrome");
    }

    return 0;
}
