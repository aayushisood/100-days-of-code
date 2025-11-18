#include <stdio.h>

int main() {
    // Q119: Find the repeated element in a single iteration

    int n, i, x;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], freq[n];  
    for (i = 0; i < n; i++)
        freq[i] = 0;  // initialize frequency array

    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (freq[arr[i]] == 1) {   // repeated found during the same iteration
            printf("Repeated element = %d\n", arr[i]);
            return 0;
        }
        freq[arr[i]] = 1;
    }

    return 0;
}
