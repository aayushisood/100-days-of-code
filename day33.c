#include <stdio.h>

int main() {
    // Q65: Search in a sorted array using binary search
    int arr[100], n, key, low, high, mid, found = 0, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            found = 1;
            break;
        } else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (found)
        printf("Element %d found at position %d\n", key, mid + 1);
    else
        printf("Element %d not found\n", key);

    // Q66: Insert an element in a sorted array at the appropriate position
    int num, pos;
    printf("\nEnter element to insert: ");
    scanf("%d", &num);

    pos = n;
    for (i = 0; i < n; i++) {
        if (arr[i] > num) {
            pos = i;
            break;
        }
    }

    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = num;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
