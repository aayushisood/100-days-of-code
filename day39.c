#include <stdio.h>

int main() {
    // Q77: Check if the elements on the diagonal of a matrix are distinct
    int a[10][10], r, c, i, j, k, distinct = 1;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    if (r == c) {
        for (i = 0; i < r; i++) {
            for (k = i + 1; k < r; k++) {
                if (a[i][i] == a[k][k]) {
                    distinct = 0;
                    break;
                }
            }
        }
        if (distinct)
            printf("Diagonal elements are distinct.\n");
        else
            printf("Diagonal elements are not distinct.\n");
    } else {
        printf("Not a square matrix.\n");
    }

    // Q78: Find the sum of main diagonal elements for a square matrix
    if (r == c) {
        int sum = 0;
        for (i = 0; i < r; i++) {
            sum += a[i][i];
        }
        printf("Sum of main diagonal elements = %d\n", sum);
    }

    return 0;
}
