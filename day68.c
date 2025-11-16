#include <stdio.h>

int main() {
    // Q118: Find the missing number from 0 to n in an array of size n

    int n, i, x, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (from 0 to %d except one missing): ", n, n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int total = n * (n + 1) / 2;
    int missing = total - sum;

    printf("Missing number = %d\n", missing);

    return 0;
}
