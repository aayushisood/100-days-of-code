#include <stdio.h>

int main() {
    // Q43: Check if a number is a strong number
    int n, temp, digit, i, fact, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while (temp > 0) {
        digit = temp % 10;
        fact = 1;
        for (i = 1; i <= digit; i++)
            fact *= i;
        sum += fact;
        temp /= 10;
    }

    if (sum == n)
        printf("%d is a Strong Number\n", n);
    else
        printf("%d is not a Strong Number\n", n);

    // Q44: Find sum of the series 1 + 3/4 + 5/6 + 7/8 + … up to n terms
    int terms, j;
    float numerator = 1, denominator = 1, seriesSum = 0;
    printf("\nEnter number of terms: ");
    scanf("%d", &terms);

    for (j = 1; j <= terms; j++) {
        seriesSum += numerator / denominator;
        numerator += 2;
        denominator += 2;
    }

    printf("Sum of the series = %.2f\n", seriesSum);

    return 0;
}
