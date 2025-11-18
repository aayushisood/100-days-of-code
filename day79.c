#include <stdio.h>

int main() {
    FILE *file;
    int num, count = 0;
    long sum = 0;

    file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open numbers.txt\n");
        return 1;
    }

    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(file);

    if (count == 0) {
        printf("No integers found in the file.\n");
    } else {
        printf("Sum = %ld\n", sum);
        printf("Average = %.2f\n", (float)sum / count);
    }

    return 0;
}
