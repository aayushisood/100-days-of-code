#include <stdio.h>

int main() {
    // Q108: Product of Array Except Self

    int n, i, j;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n], answer[n];
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    for (i = 0; i < n; i++) {
        int prod = 1;
        for (j = 0; j < n; j++) {
            if (i != j)
                prod *= nums[j];
        }
        answer[i] = prod;
    }

    printf("Product array: ");
    for (i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i != n - 1)
            printf(", ");
    }

    printf("\n");
    return 0;
}
