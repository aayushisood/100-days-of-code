#include <stdio.h>
#include <ctype.h>   // for toupper()

int main() {
    FILE *in, *out;
    char ch;

    // Open input file in read mode
    in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    // Open output file in write mode
    out = fopen("output.txt", "w");
    if (out == NULL) {
        printf("Error: Could not open output.txt\n");
        fclose(in);
        return 1;
    }

    // Read each character, convert to uppercase, write to output
    while ((ch = fgetc(in)) != EOF) {
        ch = toupper(ch);
        fputc(ch, out);
    }

    printf("File copied to output.txt with uppercase conversion.\n");

    fclose(in);
    fclose(out);

    return 0;
}
