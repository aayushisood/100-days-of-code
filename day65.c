#include <stdio.h>
#include <string.h>

int main() {
    // Q115: Check if two strings are anagrams

    char s[100], t[100];
    int freqS[26] = {0}, freqT[26] = {0};
    int i, isAnagram = 1;

    printf("Enter first string: ");
    gets(s);
    printf("Enter second string: ");
    gets(t);

    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    for (i = 0; s[i] != '\0'; i++) {
        freqS[s[i] - 'a']++;
        freqT[t[i] - 'a']++;
    }

    for (i = 0; i < 26; i++) {
        if (freqS[i] != freqT[i]) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
        printf("Anagram\n");
    else
        printf("Not Anagram\n");

    return 0;
}
