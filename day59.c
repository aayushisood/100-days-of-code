#include <stdio.h>

int main() {
    // Q109: Maximum Sum of Subarray of Size k

    int n, k, i, j, sum, maxSum;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter value of k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid subarray size.\n");
        return 0;
    }

    maxSum = -999999; // very small number for initialization

    for (i = 0; i <= n - k; i++) {
        sum = 0;
        for (j = i; j < i + k; j++) {
            sum += arr[j];
        }
        if (sum > maxSum)
            maxSum = sum;
    }

    printf("Maximum sum of subarray of size %d = %d\n", k, maxSum);
    return 0;
}
