#include <stdio.h>

int main() {

    // Q37: Write a program to find the LCM of two numbers.
    {
        int a, b, lcm;
        scanf("%d %d", &a, &b);

        int max = (a > b) ? a : b;

        lcm = max;
        while (1) {
            if (lcm % a == 0 && lcm % b == 0)
                break;
            lcm++;
        }

        printf("%d\n", lcm);
    }

    // Q38: Write a program to find the sum of digits of a number.
    {
        int n, sum = 0, r;
        scanf("%d", &n);

        while (n > 0) {
            r = n % 10;
            sum += r;
            n
