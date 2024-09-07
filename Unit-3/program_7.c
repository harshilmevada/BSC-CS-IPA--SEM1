#include <stdio.h>

struct State {
    char state[50];
    int population;
    int literacyRate;
    int suitableData; // Assuming this field represents per capita income
};

int main() {
    int n;
    printf("Enter the number of states: ");
    scanf("%d", &n);

    struct State states[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for state %d:\n", i + 1);
        printf("State name: ");
        scanf("%s", &states[i].state);
        printf("Population: ");
        scanf("%d", &states[i].population);
        printf("Literacy rate: ");
        scanf("%d", &states[i].literacyRate);
        printf("Per capita income: ");
        scanf("%d", &states[i].suitableData);
    }

    // Find the state with the highest literacy rate
    int highestLiteracyIndex = 0;
    for (int i = 1; i < n; i++) {
        if (states[i].literacyRate > states[highestLiteracyIndex].literacyRate) {
            highestLiteracyIndex = i;
        }
    }

    // Find the state with the highest per capita income
    int highestIncomeIndex = 0;
    for (int i = 1; i < n; i++) {
        if (states[i].suitableData > states[highestIncomeIndex].suitableData) {
            highestIncomeIndex = i;
        }
    }

    printf("\nState with the highest literacy rate:\n");
    printf("State: %s\n", states[highestLiteracyIndex].state);
    printf("Literacy rate: %d\n", states[highestLiteracyIndex].literacyRate);

    printf("\nState with the highest per capita income:\n");
    printf("State: %s\n", states[highestIncomeIndex].state);
    printf("Per capita income: %d\n", states[highestIncomeIndex].suitableData);

    return 0;
}