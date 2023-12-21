#include <stdio.h>

// Structure to represent a stock item
struct Stock {
    char namePeca[50];
    int partNumber;
    float price;
    int orderNumber;
};

int main() {
    // Assuming a maximum of 100 stock items
    struct Stock stock[100];

    int n; // Number of stock items to input
    printf("Enter the number of stock items: ");
    scanf("%d", &n);

    // Input data for each stock item
    for (int i = 0; i < n; ++i) {
        printf("\nEnter details for stock item %d:\n", i + 1);
        printf("Name of the part: ");
        scanf("%s", stock[i].namePeca);
        printf("Part number: ");
        scanf("%d", &stock[i].partNumber);
        printf("Price: ");
        scanf("%f", &stock[i].price);
        printf("Order number: ");
        scanf("%d", &stock[i].orderNumber);
    }

    // Displaying the entered stock details
    printf("\nStock details:\n");
    for (int i = 0; i < n; ++i) {
        printf("Stock Item %d:\n", i + 1);
        printf("Name: %s\n", stock[i].namePeca);
        printf("Part number: %d\n", stock[i].partNumber);
        printf("Price: %.2f\n", stock[i].price);
        printf("Order number: %d\n", stock[i].orderNumber);
        printf("\n");
    }

    return 0;
}
