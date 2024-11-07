#include <stdio.h>

void main() {
    int num1, num2, num3, min;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the minimum using the conditional operator
    min = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);

    // Output the minimum number
    printf("The minimum number is: %d\n", min);

}
