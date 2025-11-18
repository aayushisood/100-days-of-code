#include <stdio.h>

int main() {
    // Q122 Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). 
    FILE *fp;
    char line[200];

    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}
