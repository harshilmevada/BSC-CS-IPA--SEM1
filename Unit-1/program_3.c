#include <stdio.h>
#include <conio.h>
// #include <math.h>

void main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("Squares:\n");
    printf("Number 1: %d, Square: %d\n", num1, num1 * num1);
    printf("Number 2: %d, Square: %d\n", num2, num2 * num2);
    printf("Number 3: %d, Square: %d\n", num3, num3 * num3);
    
    // printf("Number 3: %d, Square: %d\n", num3, pow(num3,2)); // -> pow(num,power of this number)

    printf("\nCubes:\n");
    printf("Number 1: %d, Cube: %d\n", num1, num1 * num1 * num1);
    printf("Number 2: %d, Cube: %d\n", num2, num2 * num2 * num2);
    printf("Number 3: %d, Cube: %d\n", num3, num3 * num3 * num3);

    getch();
}