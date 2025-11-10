#include <stdio.h>

int main() {
    // Q67: Insert an element in an array at a given position
    int arr[100], n, i, pos, num;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &num);
    printf("Enter position (1 to %d): ", n + 1);
    scanf("%d", &pos);

    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = num;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Q68: Delete an element from an array
    int delPos;
    printf("\nEnter position of element to delete (1 to %d): ", n);
    scanf("%d", &delPos);

    for (i = delPos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    printf("Array after deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
