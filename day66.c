#include <stdio.h>

int main() {
    // Q116: Find two indices such that nums[i] + nums[j] = target

    int n, target, i, j, found = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    printf("Enter target: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                found = 1;
                break;
            }
        }
        if (found)
            break;
    }

    if (!found)
        printf("-1 -1\n");

    return 0;
}
