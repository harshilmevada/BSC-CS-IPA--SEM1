#include <stdio.h>

void main() {
    float temperatures[5];
    float sum = 0.0;

    printf("Enter the temperatures for 5 sunny days (in Celsius):\n");

    for (int i = 0; i < 5; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &temperatures[i]);
        sum += temperatures[i];
    }

    float average = sum / 5;

    printf("The average temperature is: %.2f degrees Celsius\n", average);

}