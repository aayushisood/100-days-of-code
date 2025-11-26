#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student *s;

    // Allocate memory dynamically
    s = (struct Student*) malloc(sizeof(struct Student));

    // Input student details
    scanf("%s %d %d", s->name, &s->roll, &s->marks);

    // Print details
    printf("Name: %s | Roll: %d | Marks: %d", s->name, s->roll, s->marks);

    // Free memory
    free(s);

    return 0;
}
