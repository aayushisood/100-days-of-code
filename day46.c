#include <stdio.h>

int main() {
    // Q91: Remove all vowels from a string
    char str[200], result[200];
    int i, j = 0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (!(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||
              str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')) {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';

    printf("String after removing vowels: %s\n", result);

    // Q92: Find the first repeating lowercase alphabet in a string
    int freq[26] = {0}, found = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
            if (freq[str[i] - 'a'] == 2) {
                printf("First repeating lowercase alphabet: %c\n", str[i]);
                found = 1;
                break;
            }
        }
    }
    if (!found)
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}
