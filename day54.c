#include <stdio.h>

int main() {
    // Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

    int n, x, i, leftSum, rightSum, pivot = -1;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    for (x = 1; x <= n; x++) {
        leftSum = 0;
        rightSum = 0;

        for (i = 1; i <= x; i++)
            leftSum += i;

        for (i = x; i <= n; i++)
            rightSum += i;

        if (leftSum == rightSum) {
            pivot = x;
            break;
        }
    }

    printf("Pivot integer: %d\n", pivot);

    return 0;
}
