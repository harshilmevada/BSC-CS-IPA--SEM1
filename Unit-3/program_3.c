#include <stdio.h>

// Structure definition
struct Item {
    int Item_code;
    char Item_name[50];
    float Price;
};

// Function to increase price by 10%
void increasePrice(struct Item items[], int size) {
    for (int i = 0; i < size; i++) {
        items[i].Price *= 1.1; // Increase price by 10%
    }
}

int main() {
    // Create an array of five Items
    struct Item items[5];

    // Input item details
    for (int i = 0; i < 5; i++) {
        printf("Enter Item Code: ");
        scanf("%d", &items[i].Item_code);
        printf("Enter Item Name: ");
        scanf("%s", &items[i].Item_name);
        printf("Enter Item Price: ");
        scanf("%f", &items[i].Price);
    }

    // Display original item price 
    printf("\nUpdated Item Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("Item Code: %d\n", items[i].Item_code);
        printf("Item Name: %s\n", items[i].Item_name);
        printf("Item Price: %.2f\n\n", items[i].Price);
    }

    // Call the function to increase prices
    increasePrice(items, 5);

    // Display updated item price increase 10%
    printf("\nUpdated Item Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("Item Code: %d\n", items[i].Item_code);
        printf("Item Name: %s\n", items[i].Item_name);
        printf("Item Price: %.2f\n\n", items[i].Price);
    }

    return 0;
}