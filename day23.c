#include <stdio.h>

int main() {
    // Q45: Find sum of the series 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms
    int n, i;
    float numerator = 2, denominator = 3, sum = 0;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += numerator / denominator;
        numerator += 2;
        denominator += 4;
    }

    printf("Sum of the series = %.2f\n", sum);

    // Q46: Print the following pattern
    int row, col;
    for (row = 1; row <= 5; row++) {
        for (col = 1; col <= 5; col++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
