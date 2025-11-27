#include <stdio.h>

struct Student {
    char name[30];
    int roll;
    int marks;
};

int main() {
    struct Student s;   
    struct Student *ptr = &s;  // pointer to structure

    // Modifying values using -> operator
    printf("Enter name, roll, marks: ");
    scanf("%s %d %d", ptr->name, &ptr->roll, &ptr->marks);

    // Display modified data
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d",
           ptr->name, ptr->roll, ptr->marks);

    return 0;
}
