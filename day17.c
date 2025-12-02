#include <stdio.h>

int main() {

    // Q33: Write a program to check if a number is an Armstrong number.
    {
        int n, original, sum = 0, r;
        scanf("%d", &n);

        original = n;

        while (n > 0) {
            r = n % 10;
            sum += r * r * r;
            n /= 10;
        }

        if (sum == original)
            printf("Armstrong\n");
        else
            printf("Not Armstrong\n");
    }

    // Q34: Write a program to check if a number is prime.
    {
        int n, i, flag = 1;
        scanf("%d", &n);

        if (n <= 1) flag = 0;

        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                flag = 0;
                break;
            }
        }

        if (flag)
            printf("Prime");
        else
            printf("Not prime");
    }

    return 0;
}
