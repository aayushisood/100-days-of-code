#include <stdio.h>

int main() {
    // Q125 Open an existing file in append mode and allow the user to enter a new line of text. 
    // Append the text at the end without overwriting existing content.

    FILE *fp;
    char text[200];

    fp = fopen("info.txt", "a");

    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    printf("Enter text to append: ");
    getchar();  
    gets(text);

    fprintf(fp, "%s\n", text);

    fclose(fp);

    printf("Text appended successfully.\n");

    return 0;
}
