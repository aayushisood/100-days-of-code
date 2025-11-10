#include <stdio.h>
#include <string.h>

int main() {
    // Q93: Check if two strings are anagrams of each other
    char str1[100], str2[100];
    int freq1[256] = {0}, freq2[256] = {0}, i, flag = 1;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    if (strlen(str1) != strlen(str2)) {
        printf("Strings are not anagrams.\n");
    } else {
        for (i = 0; str1[i] != '\0'; i++) {
            freq1[str1[i]]++;
            freq2[str2[i]]++;
        }

        for (i = 0; i < 256; i++) {
            if (freq1[i] != freq2[i]) {
                flag = 0;
                break;
            }
        }

        if (flag)
            printf("Strings are anagrams.\n");
        else
            printf("Strings are not anagrams.\n");
    }

    // Q94: Find the longest word in a sentence
    char sentence[200], word[50], longest[50];
    int j = 0, maxLen = 0, currLen = 0;

    printf("Enter a sentence: ");
    gets(sentence);

    for (i = 0; ; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            word[j] = '\0';
            currLen = strlen(word);
            if (currLen > maxLen) {
                maxLen = currLen;
                strcpy(longest, word);
            }
            j = 0;
            if (sentence[i] == '\0')
                break;
        } else {
            word[j++] = sentence[i];
        }
    }

    printf("Longest word: %s\n", longest);

    return 0;
}
