#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *file;
    int n, i;
    struct Student s;

    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter name, roll, marks: ");
        scanf("%s %d %f", s.name, &s.roll, &s.marks);
        fprintf(file, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(file);

    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nStored Student Records:\n");
    while (fscanf(file, "%s %d %f", s.name, &s.roll, &s.marks) == 3) {
        printf("Name: %s  Roll: %d  Marks: %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(file);
    return 0;
}
