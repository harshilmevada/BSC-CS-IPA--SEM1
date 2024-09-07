#include <stdio.h>

// Define the structure for a hotel
struct Hotel {
    char name[50];
    char address[100];
    int grade;
    float room_charges;
    int no_of_rooms;
};


void printHotelsWithChargesLessThan(struct Hotel hotels[], int, float);

int main() {
    int n;

    // Get the number of hotels from the user
    printf("Enter the number of hotels: ");
    scanf("%d", &n);

    struct Hotel hotels[n];

    // Get details of each hotel from the user
    for(int i = 0; i < n; i++) {
        printf("\nEnter details for hotel %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", &hotels[i].name);

        printf("Address: ");
        scanf(" %[^\n]", &hotels[i].address);

        printf("Grade: ");
        scanf("%d", &hotels[i].grade);

        printf("Room Charges: ");
        scanf("%f", &hotels[i].room_charges);

        printf("Number of Rooms: ");
        scanf("%d", &hotels[i].no_of_rooms);
    }

    // Get the maximum room charge to filter by
    float max_charge;
    printf("\nEnter the maximum room charges to filter by: ");
    scanf("%f", &max_charge);

    // Print hotels with room charges less than the specified amount
    printHotelsWithChargesLessThan(hotels, n, max_charge);

    return 0;
}


// Function to print hotel details with room charges less than a given value
void printHotelsWithChargesLessThan(struct Hotel hotels[], int size, float max_charge) {
    printf("\nHotels with room charges less than %.2f:\n", max_charge);
    for(int i = 0; i < size; i++) {
        if(hotels[i].room_charges < max_charge) {
            printf("\nName: %s\n", hotels[i].name);
            printf("Address: %s\n", hotels[i].address);
            printf("Grade: %d\n", hotels[i].grade);
            printf("Room Charges: %.2f\n", hotels[i].room_charges);
            printf("Number of Rooms: %d\n", hotels[i].no_of_rooms);
        }
    }
}