#include <stdio.h>

enum Gender { MALE, FEMALE };

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {

    struct Person p;

    p.gender = MALE;   // Input example

    if(p.gender == MALE)
        printf("Male\n");
    else
        printf("Female\n");

    return 0;
}
