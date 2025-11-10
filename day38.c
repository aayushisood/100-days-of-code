#include <stdio.h>

int main() {
    // Q75: Add two matrices
    int a[10][10], b[10][10], sum[10][10];
    int r, c, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum of the two matrices:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    // Q76: Check if a matrix is symmetric
    int sym = 1;
    if (r == c) {
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                if (a[i][j] != a[j][i]) {
                    sym = 0;
                    break;
                }
            }
        }
        if (sym)
            printf("The matrix is symmetric.\n");
        else
            printf("The matrix is not symmetric.\n");
    } else {
        printf("Matrix is not square, so it cannot be symmetric.\n");
    }

    return 0;
}
