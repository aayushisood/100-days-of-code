#include <stdio.h>

int main() {
    // Q51: Print the following pattern
    int i, j, k, start;
    for (i = 5; i >= 1; i--) {
        for (k = 1; k < i; k++) {
            printf(" ");
        }
        start = i;
        for (j = start; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    // Q52: Print the following pattern
    int n, r, c;
    for (n = 1; n <= 5; n++) {
        for (r = 1; r <= n; r++) {
            printf("*\n");
        }
        printf("\n");
    }

    for (n = 4; n >= 1; n--) {
        for (r = 1; r <= n; r++) {
            printf("*\n");
        }
        printf("\n");
    }

    return 0;
}
