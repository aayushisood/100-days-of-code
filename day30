#include <stdio.h>

int main() {
    // Q59: Count even and odd numbers in an array
    int arr[100], n, i, even = 0, odd = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even elements = %d\n", even);
    printf("Odd elements = %d\n", odd);

    // Q60: Count positive, negative, and zero elements in an array
    int pos = 0, neg = 0, zero = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
        else
            zero++;
    }

    printf("Positive elements = %d\n", pos);
    printf("Negative elements = %d\n", neg);
    printf("Zero elements = %d\n", zero);

    return 0;
}
