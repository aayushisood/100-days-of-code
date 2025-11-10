#include <stdio.h>

int main() {
    // Q41: Swap the first and last digit of a number
    int n, temp, firstDigit, lastDigit, digits = 0, pow = 1, swapped;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    lastDigit = temp % 10;
    while (temp >= 10) {
        temp /= 10;
        digits++;
        pow *= 10;
    }
    firstDigit = temp;

    swapped = (n % pow) / 10 + lastDigit * pow + firstDigit;
    printf("Number after swapping first and last digit: %d\n", swapped);

    // Q42: Check if a number is a perfect number
    int num, i, sum = 0;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0)
            sum += i;
    }

    if (sum == num)
        printf("%d is a Perfect Number\n", num);
    else
        printf("%d is not a Perfect Number\n", num);

    return 0;
}
