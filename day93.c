#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    int n, i, maxIndex = 0;
    scanf("%d", &n);

    struct Student s[n];

    for (i = 0; i < n; i++) {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].roll);
        scanf("%f", &s[i].marks);
    }

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    printf("Topper:\n");
    printf("Name: %s | Roll: %d | Marks: %.2f\n",
           s[maxIndex].name, s[maxIndex].roll, s[maxIndex].marks);

    return 0;
}
