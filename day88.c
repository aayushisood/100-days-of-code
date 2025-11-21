#include <stdio.h>

enum Fruits {
    APPLE,
    BANANA,
    ORANGE,
    MANGO,
    GRAPES
};

int main() {
    enum Fruits f;

    const char *names[] = {"APPLE", "BANANA", "ORANGE", "MANGO", "GRAPES"};

    printf("Enum names and values:\n");

    for (f = APPLE; f <= GRAPES; f++) {
        printf("%s = %d\n", names[f], f);
    }

    return 0;
}
