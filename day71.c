#include <stdio.h>

int main() {
    // Q121 Write a C program that creates a text file named info.txt in write mode. 
    FILE *fp;
    char name[100];
    int age;

    fp = fopen("info.txt", "w");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter name: ");
    gets(name);
    printf("Enter age: ");
    scanf("%d", &age);

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    fclose(fp);

    printf("Data successfully saved to info.txt\n");

    return 0;
}
