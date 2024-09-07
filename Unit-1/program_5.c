#include <stdio.h>
#include <conio.h>

void main() {
    int a, b, temp;

    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Before swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    // Swap the values using a temporary variable
    temp = a;
    a = b;
    b = temp;

    printf("After swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    getch();
}