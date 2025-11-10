#include <stdio.h>

int main() {
    // Q83: Count vowels and consonants in a string
    char str[100];
    int i, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            if (str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||
                str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);

    // Q84: Convert a lowercase string to uppercase without using built-in functions
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}
