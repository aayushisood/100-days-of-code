#include <stdio.h>

int main() {
    // Q63: Merge two arrays
    int arr1[100], arr2[100], merged[200];
    int n1, n2, i, j, k;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements:\n", n2);
    for (j = 0; j < n2; j++) {
        scanf("%d", &arr2[j]);
    }

    for (i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for (j = 0; j < n2; j++) {
        merged[n1 + j] = arr2[j];
    }

    printf("Merged array:\n");
    for (k = 0; k < n1 + n2; k++) {
        printf("%d ", merged[k]);
    }
    printf("\n");

    // Q64: Find the digit that occurs the most times in an integer number
    int num, digit, count[10] = {0}, maxCount = 0, mostFreq = 0;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    for (i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostFreq = i;
        }
    }

    printf("Digit occurring most times = %d\n", mostFreq);

    return 0;
}
