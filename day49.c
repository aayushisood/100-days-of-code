#include <stdio.h>

int main() {
    // Q97: Print the initials of a name
    char name[100];
    int i;

    printf("Enter a full name: ");
    gets(name);

    printf("Initials: ");
    if (name[0] != ' ')
        printf("%c", name[0]);

    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0')
            printf("%c", name[i + 1]);
    }
    printf("\n");

    // Q98: Print initials of a name with the surname displayed in full
    printf("Initials with surname: ");
    if (name[0] != ' ')
        printf("%c.", name[0]);

    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            if (strchr(&name[i + 1], ' ') == NULL) {  // last word (surname)
                printf(" %s", &name[i + 1]);
                break;
            } else {
                printf("%c.", name[i + 1]);
            }
        }
    }
    printf("\n");

    return 0;
}
