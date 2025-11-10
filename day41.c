#include <stdio.h>

int main() {
    // Q81: Count characters in a string without using built-in length functions
    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        count++;
    }

    printf("Number of characters = %d\n", count);

    // Q82: Print each character of a string on a new line
    printf("Characters in the string:\n");
    for (i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}
