#include <stdio.h>
#include <string.h>

int main() {
    // Q85: Reverse a string
    char str[100], rev[100];
    int i, j, len;

    printf("Enter a string: ");
    gets(str);

    len = 0;
    while (str[len] != '\0')
        len++;

    for (i = 0, j = len - 1; i < len; i++, j--) {
        rev[i] = str[j];
    }
    rev[len] = '\0';

    printf("Reversed string: %s\n", rev);

    // Q86: Check if a string is a palindrome
    int flag = 1;
    for (i = 0; i < len; i++) {
        if (str[i] != rev[i]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
