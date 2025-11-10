#include <stdio.h>
#include <string.h>

int main() {
    // Q95: Check if one string is a rotation of another
    char str1[100], str2[100], temp[200];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    if (strlen(str1) != strlen(str2)) {
        printf("Strings are not rotations of each other.\n");
    } else {
        strcpy(temp, str1);
        strcat(temp, str1);
        if (strstr(temp, str2))
            printf("Strings are rotations of each other.\n");
        else
            printf("Strings are not rotations of each other.\n");
    }

    // Q96: Reverse each word in a sentence without changing the word order
    char sentence[200];
    printf("Enter a sentence: ");
    gets(sentence);

    int i = 0, start = 0, end, len = strlen(sentence);
    while (i <= len) {
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            end = i - 1;
            while (start < end) {
                char tempChar = sentence[start];
                sentence[start] = sentence[end];
                sentence[end] = tempChar;
                start++;
                end--;
            }
            start = i + 1;
        }
        i++;
    }

    printf("Sentence after reversing each word: %s\n", sentence);

    return 0;
}
