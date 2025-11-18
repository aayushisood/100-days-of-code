#include <stdio.h>

int main() {
    // Q120 Write a program to take a string input. Change it to sentence case.

    char str[200];
    int i;

    printf("Enter a string: ");
    gets(str);

    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] = str[0] - 32;

    for (i = 1; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }

    printf("Sentence case: %s\n", str);

    return 0;
}
