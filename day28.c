#include <stdio.h>

int main() {
    // Q55: Print all the prime numbers from 1 to n
    int n, i, j, isPrime;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);
    for (i = 2; i <= n; i++) {
        isPrime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d ", i);
    }
    printf("\n");

    // Q56: Read and print elements of a one-dimensional array
    int arr[100], size, k;
    printf("\nEnter number of elements: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (k = 0; k < size; k++) {
        scanf("%d", &arr[k]);
    }

    printf("Array elements are:\n");
    for (k = 0; k < size; k++) {
        printf("%d ", arr[k]);
    }
    printf("\n");

    return 0;
}
