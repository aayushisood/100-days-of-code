#include <stdio.h>

int main() {
    // Q47: Print the following pattern
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Q48: Print the following pattern
    int a, b;
    for (a = 1; a <= 5; a++) {
        for (b = 1; b <= a; b++) {
            printf("%d", b);
        }
        printf("\n");
    }

    return 0;
}
