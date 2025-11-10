#include <stdio.h>

int main() {
    // Q49: Print the following pattern
    int i, j, start;
    for (i = 5; i >= 1; i--) {
        start = i;
        for (j = start; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    // Q50: Print the following pattern
    int r, c, space;
    for (r = 1; r <= 5; r++) {
        for (space = 1; space < r; space++) {
            printf(" ");
        }
        for (c = 5; c >= r; c--) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
