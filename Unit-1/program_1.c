#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;

    // Get input from the user
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    // Calculate simple interest
    simpleInterest = (principal * rate * time) / 100;

    // Print the result
    printf("Simple Interest = %.2f\n", simpleInterest);

    return 0;
}