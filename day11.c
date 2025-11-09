#include <stdio.h>

int main() {

    // question 21
    int month;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    switch(month) {
        case 1:
            printf("January - 31 days\n");
            break;
        case 2:
            printf("February - 28 or 29 days\n");
            break;
        case 3:
            printf("March - 31 days\n");
            break;
        case 4:
            printf("April - 30 days\n");
            break;
        case 5:
            printf("May - 31 days\n");
            break;
        case 6:
            printf("June - 30 days\n");
            break;
        case 7:
            printf("July - 31 days\n");
            break;
        case 8:
            printf("August - 31 days\n");
            break;
        case 9:
            printf("September - 30 days\n");
            break;
        case 10:
            printf("October - 31 days\n");
            break;
        case 11:
            printf("November - 30 days\n");
            break;
        case 12:
            printf("December - 31 days\n");
            break;
        default:
            printf("Invalid month number! Please enter 1-12.\n");
    }

// question 22


    float cp, sp, profit, loss, percent;

    printf("Enter Cost Price: ");
    scanf("%f", &cp);

    printf("Enter Selling Price: ");
    scanf("%f", &sp);

        profit = sp - cp;
        percent = (profit / cp) * 100;
        loss = cp - sp;
        percent = (loss / cp) * 100;
    if (sp > cp) {
        
        printf("Profit = %f\n", profit);
        printf("Profit Percentage = %f\n", percent);
    }
    else if (cp > sp) {

        printf("Loss = %f\n", loss);
        printf("Loss Percentage = %f\n", percent);
    }
    else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}






 

