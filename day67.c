#include <stdio.h>

int main() {
    // Q117: Merge two sorted arrays into a sorted array

    int m, n, i = 0, j = 0, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &m);
    int a[m];
    printf("Enter elements of first sorted array: ");
    for (i = 0; i < m; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n);
    int b[n];
    printf("Enter elements of second sorted array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &b[i]);

    int merged[m + n];
    i = 0; 
    j = 0;

    while (i < m && j < n) {
        if (a[i] <= b[j])
            merged[k++] = a[i++];
        else
            merged[k++] = b[j++];
    }

    while (i < m)
        merged[k++] = a[i++];

    while (j < n)
        merged[k++] = b[j++];

    printf("Merged sorted array: ");
    for (i = 0; i < m + n; i++)
        printf("%d ", merged[i]);

    printf("\n");
    return 0;
}
