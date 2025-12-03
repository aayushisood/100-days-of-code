#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 100

int compareIgnoreCase(char a[], char b[]) {
    for (int i = 0; a[i] && b[i]; i++) {
        char c1 = (a[i] >= 'A' && a[i] <= 'Z') ? a[i] + 32 : a[i];
        char c2 = (b[i] >= 'A' && b[i] <= 'Z') ? b[i] + 32 : b[i];
        if (c1 != c2)
            return c1 - c2;
    }
    return 0;
}

struct Item {
    char name[50];
    float price;
};

struct Cart {
    char name[50];
    int quantity;
    float price;
};

int main() {

    printf("========================================\n");
    printf("         SMART MART STORE SYSTEM\n");
    printf("========================================\n\n");

    struct Item items[] = {
        {"Apples 1kg", 120},
        {"Bananas 1dozen", 60},
        {"Grapes 500g", 90},
        {"Milk 1L", 58},
        {"Curd 500g", 35},
        {"Paneer 200g", 85},
        {"Chips Packet", 20},
        {"Chocolate Bar", 40},
        {"Instant Noodles", 25},
        {"Detergent 1kg", 75},
        {"Dish Cleaner", 45},
        {"Floor Cleaner 1L", 95}
    };

    int itemCount = 12;

    struct Cart cart[MAX_ITEMS];
    int cartCount = 0;

    char username[50], phone[20];
    int choice;

    printf("Enter customer name: ");
    scanf(" %[^\n]", username);

    printf("Enter phone number: ");
    scanf(" %[^\n]", phone);

    printf("\nWelcome %s! Start shopping at Smart Mart Store.\n", username);

    while (1) {
        printf("\n=========== MAIN MENU ===========\n");
        printf("1. Show Store Items\n");
        printf("2. Add Item to Cart\n");
        printf("3. View Cart\n");
        printf("4. Update Item Quantity\n");
        printf("5. Generate Bill & Save\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\n--------- AVAILABLE ITEMS ---------\n");
            for (int i = 0; i < itemCount; i++) {
                printf("%d. %s - Rs %.2f\n", i + 1, items[i].name, items[i].price);
            }
        }

        else if (choice == 2) {
            char name[50];
            int qty;

            printf("\nEnter item name to add: ");
            scanf(" %[^\n]", name);

            printf("Enter quantity: ");
            scanf("%d", &qty);

            int found = 0;
            for (int i = 0; i < itemCount; i++) {
                if (compareIgnoreCase(items[i].name, name) == 0) {
                    strcpy(cart[cartCount].name, items[i].name);
                    cart[cartCount].price = items[i].price;
                    cart[cartCount].quantity = qty;
                    cartCount++;
                    found = 1;
                    printf("Item added to cart!\n");
                    break;
                }
            }
            if (!found) printf("Item not found.\n");
        }

        else if (choice == 3) {
            printf("\n------------- YOUR CART -------------\n");
            if (cartCount == 0) {
                printf("Cart is empty.\n");
            } else {
                for (int i = 0; i < cartCount; i++) {
                    printf("%s x%d = Rs %.2f\n",
                           cart[i].name,
                           cart[i].quantity,
                           cart[i].price * cart[i].quantity);
                }
            }
        }

        else if (choice == 4) {
            char name[50];
            int newQty;

            printf("\nEnter item name to update: ");
            scanf(" %[^\n]", name);

            printf("Enter new quantity (0 to remove): ");
            scanf("%d", &newQty);

            int updated = 0;

            for (int i = 0; i < cartCount; i++) {
                if (compareIgnoreCase(cart[i].name, name) == 0) {

                    if (newQty == 0) {
                        printf("Item removed from cart.\n");
                        for (int j = i; j < cartCount - 1; j++)
                            cart[j] = cart[j + 1];
                        cartCount--;
                    } else {
                        cart[i].quantity = newQty;
                        printf("Quantity updated successfully.\n");
                    }

                    updated = 1;
                    break;
                }
            }

            if (!updated) printf("Item not found in cart.\n");
        }

        else if (choice == 5) {

            float total = 0;
            FILE *file = fopen("customer_bills.txt", "a");

            if (file == NULL) {
                printf("File error!\n");
                return 1;
            }

            fprintf(file, "=====================================\n");
            fprintf(file, "SMART MART STORE - CUSTOMER BILL\n");
            fprintf(file, "Name: %s\nPhone: %s\n", username, phone);
            fprintf(file, "--------------- BILL ----------------\n");

            printf("\n------------ BILL ------------\n");
            for (int i = 0; i < cartCount; i++) {
                float amount = cart[i].price * cart[i].quantity;
                printf("%s x%d = Rs %.2f\n", cart[i].name, cart[i].quantity, amount);
                fprintf(file, "%s x%d = Rs %.2f\n", cart[i].name, cart[i].quantity, amount);
                total += amount;
            }

            printf("\nTOTAL: Rs %.2f\n", total);
            fprintf(file, "\nTOTAL: Rs %.2f\n", total);
            fprintf(file, "=====================================\n\n");

            fclose(file);

            printf("Bill saved successfully.\n");
        }

        else if (choice == 6) {
            printf("\nThank you for shopping at Smart Mart Store!\n");
            break;
        }

        else {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
