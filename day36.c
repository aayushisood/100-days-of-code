#include <stdio.h>

int main() {
    // Q71: Read and print a matrix
    int a[10][10], r, c, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matrix is:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Q72: Find the sum of all elements in a matrix
    int sum = 0;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            sum += a[i][j];
        }
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}
