#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

struct Student getTopStudent(struct Student s[], int n) {
    int i, topIndex = 0;
    for(i = 1; i < n; i++) {
        if(s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }
    return s[topIndex];
}

int main() {
    struct Student s[3];
    int i;

    for(i = 0; i < 3; i++) {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].roll);
        scanf("%d", &s[i].marks);
    }

    struct Student top = getTopStudent(s, 3);

    printf("Top Student: %s | Roll: %d | Marks: %d",
           top.name, top.roll, top.marks);

    return 0;
}
