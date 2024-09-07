#include <stdio.h>

// Define the structure to store book details
struct book {
    char title[100];
    char author[50];
    char publisher[50];
    int publishing_year;
    int number_of_pages;
    float price;
};

int main() {
    int n;

    // Get the number of books from the user
    printf("Enter the number of books: ");
    scanf("%d", &n);

    // Create an array of structures to hold book details
    struct book books[n];

    // Loop to read the details of each book
    for(int i = 0; i < n; i++) {
        printf("\nEnter details for book %d:\n", i+1);

        printf("Title: ");
        scanf(" %[^\n]%*c", &books[i].title);

        printf("Author: ");
        scanf(" %[^\n]%*c", &books[i].author);

        printf("Publisher: ");
        scanf(" %[^\n]%*c", &books[i].publisher);

        printf("Publishing Year: ");
        scanf("%d", &books[i].publishing_year);

        printf("Number of Pages: ");
        scanf("%d", &books[i].number_of_pages);

        printf("Price: ");
        scanf("%f", &books[i].price);
    }

    // Display the details of each book
    printf("\nList of Books:\n");
    for(int i = 0; i < n; i++) {
        printf("\nBook %d:\n", i+1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Publisher: %s\n", books[i].publisher);
        printf("Publishing Year: %d\n", books[i].publishing_year);
        printf("Number of Pages: %d\n", books[i].number_of_pages);
        printf("Price: %.2f\n", books[i].price);
    }

    return 0;
}
