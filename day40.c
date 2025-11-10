#include <stdio.h>

int main() {
    // Q79: Perform diagonal traversal of a matrix
    int a[10][10], r, c, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal traversal:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (i == j)
                printf("%d ", a[i][j]);
        }
    }
    printf("\n");

    // Q80: Multiply two matrices
    int b[10][10], mul[10][10], r2, c2, k;
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c != r2) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c2; j++) {
            mul[i][j] = 0;
            for (k = 0; k < c; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Product of two matrices:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}
