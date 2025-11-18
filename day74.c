#include <stdio.h>

int main() {
    // Q124 Take two filenames from the user – a source file and a destination file. 
    // Copy all the content from the source file to the destination file using fgetc() and fputc().

    FILE *src, *dest;
    char srcName[100], destName[100];
    int ch;

    printf("Enter source file name: ");
    scanf("%s", srcName);

    printf("Enter destination file name: ");
    scanf("%s", destName);

    src = fopen(srcName, "r");
    dest = fopen(destName, "w");

    if (src == NULL) {
        printf("Source file not found.\n");
        return 1;
    }
    if (dest == NULL) {
        printf("Error creating destination file.\n");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully.\n");

    return 0;
}
