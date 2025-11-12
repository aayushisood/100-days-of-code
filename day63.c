#include <stdio.h>

int main() {
    // Q113: Find the kth smallest element in an array

    int n, k, i, j, temp;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter value of k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid value of k.\n");
        return 0;
    }

    // Simple Bubble Sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("The %dth smallest element is %d\n", k, arr[k - 1]);
    return 0;
}
