#include <stdio.h>

int main() {
    // Q106: Next Greater Element (Brute Force without Stack)

    int n, i, j;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Next greater elements: ");
    for (i = 0; i < n; i++) {
        int next = -1;
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next = arr[j];
                break;
            }
        }
        printf("%d", next);
        if (i != n - 1)
            printf(", ");
    }

    printf("\n");
    return 0;
}
