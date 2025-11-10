#include <stdio.h>
#include <string.h>

int main() {
    // Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy
    char date[20], month[3], newDate[30];
    char months[][4] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    int dd, mm, yyyy;

    printf("Enter date in format dd/mm/yyyy: ");
    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    if (mm >= 1 && mm <= 12)
        sprintf(newDate, "%02d-%s-%d", dd, months[mm - 1], yyyy);
    else
        strcpy(newDate, "Invalid month");

    printf("Formatted date: %s\n", newDate);

    // Q100: Print all sub-strings of a string
    char str[100];
    int i, j, k;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    int len = strlen(str);

    printf("All substrings:\n");
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            for (k = i; k <= j; k++)
                printf("%c", str[k]);
            printf("\n");
        }
    }

    return 0;
}
