#include <stdio.h>

int main() {
    // Q73: Find the sum of each row of a matrix and store it in an array
    int a[10][10], r, c, i, j, rowSum[10];
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        rowSum[i] = 0;
        for (j = 0; j < c; j++) {
            rowSum[i] += a[i][j];
        }
    }

    printf("Sum of each row:\n");
    for (i = 0; i < r; i++) {
        printf("Row %d = %d\n", i + 1, rowSum[i]);
    }

    // Q74: Find the transpose of a matrix
    int t[10][10];
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            t[j][i] = a[i][j];
        }
    }

    printf("Transpose of the matrix:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}
